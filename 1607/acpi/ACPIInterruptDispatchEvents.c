/*
 * XREFs of ACPIInterruptDispatchEvents @ 0x1C0003B6C
 * Callers:
 *     ACPIInterruptServiceRoutineDPC @ 0x1C002BA60 (ACPIInterruptServiceRoutineDPC.c)
 * Callees:
 *     AcpiDiagTraceUnexpectedGpe @ 0x1C0003C80 (AcpiDiagTraceUnexpectedGpe.c)
 *     ACPIWriteGpeStatusRegister @ 0x1C0006A8C (ACPIWriteGpeStatusRegister.c)
 *     ACPIReadGpeStatusRegister @ 0x1C0006AF8 (ACPIReadGpeStatusRegister.c)
 */

void ACPIInterruptDispatchEvents()
{
  unsigned int v0; // ebp
  unsigned int v1; // ebx
  char v2; // al
  __int64 v3; // rdx
  char v4; // r14
  char v5; // si
  unsigned __int8 v6; // r14
  char v7; // si
  __int64 v8; // rdx
  __int64 v9; // rdi

  v0 = *((unsigned __int16 *)AcpiInformation + 51);
  KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
  v1 = 0;
  if ( v0 )
  {
    v9 = 0LL;
    do
    {
      v2 = ACPIReadGpeStatusRegister(v1);
      v4 = *((_BYTE *)GpeCurEnable + v9);
      v5 = ~v4;
      v6 = v2 & v4;
      v7 = v2 & v5;
      if ( v7 )
      {
        LOBYTE(v3) = v7;
        AcpiDiagTraceUnexpectedGpe(v1, v3);
        LOBYTE(v8) = v7;
        ACPIWriteGpeStatusRegister(v1, v8);
      }
      *((_BYTE *)GpePending + v9) |= v6;
      *((_BYTE *)GpeRunMethod + v9) |= v6;
      *((_BYTE *)GpeCurEnable + v9) &= ~v6;
      if ( (v6 & (unsigned __int8)~*((_BYTE *)GpeIsLevel + v9)) != 0 )
      {
        LOBYTE(v3) = v6 & ~*((_BYTE *)GpeIsLevel + v9);
        ACPIWriteGpeStatusRegister(v1, v3);
      }
      ++v1;
      ++v9;
    }
    while ( v1 < v0 );
  }
  AcpiGpeWorkDone = 1;
  if ( !AcpiGpeDpcScheduled && !AcpiGpeDpcRunning )
  {
    AcpiGpeDpcScheduled = 1;
    KeInsertQueueDpc(&AcpiGpeDpc, 0LL, 0LL);
  }
  KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
}
