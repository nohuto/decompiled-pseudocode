/*
 * XREFs of KiReadyOutSwappedThreads @ 0x140091140
 * Callers:
 *     KiInSwapProcesses @ 0x140090F20 (KiInSwapProcesses.c)
 *     KiOutSwapProcesses @ 0x140090FD0 (KiOutSwapProcesses.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002ECB0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x14005C490 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14005DBD0 (KiDeliverApc.c)
 *     KiReadyThread @ 0x14005FBEC (KiReadyThread.c)
 *     KiUpdateThreadState @ 0x140091CEC (KiUpdateThreadState.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x1400D0C00 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiQueueReadyThread @ 0x1400D0C70 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x1400D8230 (KiRequestSoftwareInterrupt.c)
 *     KiSwapContext @ 0x140165CD0 (KiSwapContext.c)
 *     EtwTraceReadyThread @ 0x1402260C8 (EtwTraceReadyThread.c)
 */

int __fastcall KiReadyOutSwappedThreads(_QWORD *a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rsi
  _QWORD *v7; // rdi
  __int64 v8; // rbx
  int result; // eax
  __int64 v10; // rdx
  _KTHREAD *CurrentThread; // rdi
  _KTHREAD *NextThread; // rbx
  int v13; // [rsp+50h] [rbp+8h] BYREF
  int v14; // [rsp+58h] [rbp+10h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v7 = a1;
  do
  {
    v8 = (__int64)(v7 - 27);
    v14 = 0;
    v7 = (_QWORD *)*v7;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v14);
      while ( *(_QWORD *)(v8 + 64) );
    }
    *(_BYTE *)(v8 + 388) = 7;
    *(_QWORD *)(v8 + 64) = 0LL;
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      EtwTraceReadyThread(v8, *(unsigned __int8 *)(v8 + 566), *(unsigned __int8 *)(v8 + 567));
    result = KiReadyThread((__int64)CurrentPrcb, v8, a3, a4);
  }
  while ( v7 != a1 );
  if ( a2 < 2u )
  {
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0, a3, a4);
      v13 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v13);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      KiCaptureTotalCyclesCurrentThread(CurrentPrcb, CurrentThread);
      KiUpdateThreadState(CurrentPrcb, NextThread, 2LL, 0LL);
      CurrentThread->WaitReason = 32;
      CurrentThread->WaitIrql = a2;
      KiQueueReadyThread(CurrentPrcb, CurrentThread);
      if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, a2) )
        goto LABEL_10;
    }
    else if ( (CurrentThread->MiscFlags & 0x40) == 0 )
    {
LABEL_10:
      result = a2;
      __writecr8(a2);
      return result;
    }
    __writecr8(1uLL);
    CurrentThread->MiscFlags &= ~0x40u;
    KiDeliverApc(0, 0, 0LL);
    goto LABEL_10;
  }
  if ( CurrentPrcb->NextThread )
  {
    result = CurrentPrcb->DpcRoutineActive;
    if ( !(_BYTE)result )
    {
      LOBYTE(v10) = 2;
      return KiRequestSoftwareInterrupt(CurrentPrcb, v10, a3, a4);
    }
  }
  return result;
}
