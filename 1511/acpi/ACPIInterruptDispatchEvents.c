/*
 * XREFs of ACPIInterruptDispatchEvents @ 0x1C0004404
 * Callers:
 *     ACPIInterruptServiceRoutineDPC @ 0x1C0024980 (ACPIInterruptServiceRoutineDPC.c)
 * Callees:
 *     AcpiDiagTraceUnexpectedGpe @ 0x1C0004514 (AcpiDiagTraceUnexpectedGpe.c)
 *     ACPIWriteGpeStatusRegister @ 0x1C00075AC (ACPIWriteGpeStatusRegister.c)
 *     ACPIReadGpeStatusRegister @ 0x1C0007618 (ACPIReadGpeStatusRegister.c)
 */

void ACPIInterruptDispatchEvents()
{
  unsigned int v0; // ebp
  unsigned int v1; // ebx
  __int64 v2; // rdi
  char v3; // al
  __int64 v4; // rdx
  _BYTE *v5; // rcx
  char v6; // r14
  char v7; // si
  unsigned __int8 v8; // r14
  char v9; // si
  __int64 v10; // rdx

  v0 = *((unsigned __int16 *)AcpiInformation + 51);
  KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
  v1 = 0;
  if ( v0 )
  {
    v2 = 0LL;
    do
    {
      v3 = ACPIReadGpeStatusRegister(v1);
      v5 = GpeCurEnable;
      v6 = *((_BYTE *)GpeCurEnable + v2);
      v7 = ~v6;
      v8 = v3 & v6;
      v9 = v3 & v7;
      if ( v9 )
      {
        LOBYTE(v4) = v9;
        AcpiDiagTraceUnexpectedGpe(v1, v4);
        LOBYTE(v10) = v9;
        ACPIWriteGpeStatusRegister(v1, v10);
        v5 = GpeCurEnable;
      }
      *((_BYTE *)GpePending + v2) |= v8;
      *((_BYTE *)GpeRunMethod + v2) |= v8;
      v5[v2] &= ~v8;
      if ( (v8 & (unsigned __int8)~*((_BYTE *)GpeIsLevel + v2)) != 0 )
      {
        LOBYTE(v4) = v8 & ~*((_BYTE *)GpeIsLevel + v2);
        ACPIWriteGpeStatusRegister(v1, v4);
      }
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
