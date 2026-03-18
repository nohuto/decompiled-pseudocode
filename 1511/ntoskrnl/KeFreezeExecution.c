/*
 * XREFs of KeFreezeExecution @ 0x1401C8B48
 * Callers:
 *     ExpWaitForBootDevices @ 0x1402132EC (ExpWaitForBootDevices.c)
 *     KdEnterDebugger @ 0x1406AAC38 (KdEnterDebugger.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     KeRemoveProcessorAffinityEx @ 0x14007C640 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x14007C670 (KeCopyAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x14009C650 (KeEnumerateNextProcessor.c)
 *     KxTryToAcquireSpinLock @ 0x1400EA5BC (KxTryToAcquireSpinLock.c)
 *     PopPoCoalescinCallback @ 0x1401264C0 (PopPoCoalescinCallback.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KiSendFreeze @ 0x1401C9324 (KiSendFreeze.c)
 *     KiSetDebuggerOwner @ 0x1401C9560 (KiSetDebuggerOwner.c)
 *     KiStartDebugAccumulation @ 0x1401C95B4 (KiStartDebugAccumulation.c)
 *     RtlWriteTryAcquireTickLock @ 0x1401FC144 (RtlWriteTryAcquireTickLock.c)
 */

bool KeFreezeExecution()
{
  __int16 v0; // bp
  bool v1; // bp
  unsigned __int8 CurrentIrql; // r14
  int v3; // esi
  char i; // al
  char v5; // di
  unsigned int v6; // esi
  struct _KPRCB *CurrentPrcb; // rbx
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rbx
  LARGE_INTEGER v11; // rax
  unsigned __int64 v12; // r9
  int v14; // [rsp+20h] [rbp-108h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+28h] [rbp-100h] BYREF
  unsigned __int16 *v16[2]; // [rsp+30h] [rbp-F8h] BYREF
  __int16 v17; // [rsp+40h] [rbp-E8h]
  unsigned __int16 v18; // [rsp+50h] [rbp-D8h] BYREF
  unsigned __int16 *v19; // [rsp+58h] [rbp-D0h]
  int v20; // [rsp+120h] [rbp-8h]

  v0 = v20;
  _disable();
  v1 = (v0 & 0x200) != 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  KiFreezeFlag = 4;
  if ( (KeGetCurrentPrcb()->IpiFrozen & 0xF) != 4 )
  {
    v3 = 500000;
    for ( i = KxTryToAcquireSpinLock((volatile signed __int32 *)&KdDebuggerLock);
          ;
          i = KxTryToAcquireSpinLock((volatile signed __int32 *)&KdDebuggerLock) )
    {
      v5 = i;
      if ( i )
        break;
      if ( KiFreezeExecutionLock )
      {
        v3 = 500000;
      }
      else
      {
        KeStallExecutionProcessor(4u);
        if ( !--v3 )
          break;
      }
    }
    v6 = v5 != 0 ? 4 * (500000 - v3) : 0;
    KxAcquireSpinLock(&KiFreezeExecutionLock);
    if ( v5 || (KiFreezeFlag & 1) == 0 )
      KdPortLocked = v5;
    else
      KiFreezeFlag |= 8u;
    if ( v6 > KdDebuggerLockMaxWaitTime )
      KdDebuggerLockMaxWaitTime = v6;
    CurrentPrcb = KeGetCurrentPrcb();
    KiStartDebugAccumulation(CurrentPrcb);
    off_1402D27A8();
    KiClockLatencyMeasurementEnabled = 0;
    if ( (unsigned int)KeNumberProcessors_0 > 1 && !PoAllProcIntrDisabled )
    {
      KiFreezeOwner = (__int64)CurrentPrcb;
      CurrentPrcb->IpiFrozen = 4;
      KiSetDebuggerOwner(CurrentPrcb);
      if ( !KiFreezeTimeout || PpmNonInterruptibleCount )
        v8 = 20000;
      else
        v8 = 20000 * KiFreezeTimeout;
      CurrentPrcb->ClockKeepAlive = 1;
      KeCopyAffinityEx((__int64)&v18, (unsigned __int16 *)KeActiveProcessors);
      KeRemoveProcessorAffinityEx(&v18, CurrentPrcb->Number);
      LOBYTE(v9) = (KiBugCheckActive & 3) != 3;
      KiSendFreeze(&v18, v9);
      v16[1] = v19;
      v16[0] = &v18;
      v17 = 0;
LABEL_27:
      while ( !(unsigned int)KeEnumerateNextProcessor(&v14, v16) )
      {
        v10 = KiProcessorBlock[v14];
        while ( *(_DWORD *)(v10 + 11528) != 2 )
        {
          if ( !v8 )
          {
            KiFreezeFlag |= 2u;
            goto LABEL_27;
          }
          KeStallExecutionProcessor(0x32u);
          --v8;
        }
      }
    }
    KiOldIrql = CurrentIrql;
    if ( (unsigned __int8)RtlWriteTryAcquireTickLock() )
    {
      v11 = KeQueryPerformanceCounter(&PerformanceFrequency);
      v12 = MEMORY[0xFFFFF78000000008]
          + 10000000 * (v11.QuadPart - MEMORY[0xFFFFF78000000350]) / (unsigned __int64)PerformanceFrequency.LowPart;
      MEMORY[0xFFFFF78000000010] = HIDWORD(v12);
      MEMORY[0xFFFFF78000000008] = v12;
      if ( KeMaximumIncrement )
      {
        KiTickOffset = KeMaximumIncrement * (v12 / KeMaximumIncrement + 1) - v12;
        MEMORY[0xFFFFF78000000328] = (v12 / KeMaximumIncrement) >> 32;
        MEMORY[0xFFFFF78000000320] = v12 / KeMaximumIncrement;
      }
      ++MEMORY[0xFFFFF78000000340];
    }
  }
  return v1;
}
