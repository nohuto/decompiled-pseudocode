/*
 * XREFs of ACPIInterruptDispatchEvents @ 0x1C003CE88
 * Callers:
 *     ACPIInterruptServiceRoutineDPC @ 0x1C003D1A0 (ACPIInterruptServiceRoutineDPC.c)
 * Callees:
 *     ACPIWriteGpeStatusRegister @ 0x1C0006E8C (ACPIWriteGpeStatusRegister.c)
 *     ACPIReadGpeStatusRegister @ 0x1C0006EF8 (ACPIReadGpeStatusRegister.c)
 *     AcpiDiagTraceUnexpectedGpe @ 0x1C0033FD4 (AcpiDiagTraceUnexpectedGpe.c)
 */

void ACPIInterruptDispatchEvents()
{
  unsigned int v0; // ebp
  unsigned int v1; // ebx
  __int64 v2; // rdi
  char v3; // al
  _BYTE *v4; // rcx
  char v5; // r14
  char v6; // si
  unsigned __int8 v7; // r14
  char v8; // si

  v0 = *((unsigned __int16 *)AcpiInformation + 51);
  KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
  v1 = 0;
  if ( v0 )
  {
    v2 = 0LL;
    do
    {
      v3 = ACPIReadGpeStatusRegister(v1);
      v4 = GpeCurEnable;
      v5 = *((_BYTE *)GpeCurEnable + v2);
      v6 = ~v5;
      v7 = v3 & v5;
      v8 = v3 & v6;
      if ( v8 )
      {
        AcpiDiagTraceUnexpectedGpe(v1, v8);
        ACPIWriteGpeStatusRegister(v1, v8);
        v4 = GpeCurEnable;
      }
      *((_BYTE *)GpePending + v2) |= v7;
      *((_BYTE *)GpeRunMethod + v2) |= v7;
      v4[v2] &= ~v7;
      if ( (v7 & (unsigned __int8)~*((_BYTE *)GpeIsLevel + v2)) != 0 )
        ACPIWriteGpeStatusRegister(v1, v7 & ~*((_BYTE *)GpeIsLevel + v2));
      ++v1;
      ++v2;
    }
    while ( v1 < v0 );
  }
  AcpiGpeWorkDone = 1;
  if ( !AcpiGpeDpcRunning && !AcpiGpeDpcScheduled )
  {
    AcpiGpeDpcScheduled = 1;
    KeInsertQueueDpc(&AcpiGpeDpc, 0LL, 0LL);
  }
  KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
}
