/*
 * XREFs of KiReadyOutSwappedThreads @ 0x14003307C
 * Callers:
 *     KiOutSwapProcesses @ 0x14003272C (KiOutSwapProcesses.c)
 *     KiInSwapProcesses @ 0x140032BC0 (KiInSwapProcesses.c)
 * Callees:
 *     KiUpdateThreadState @ 0x140014CD8 (KiUpdateThreadState.c)
 *     KiRequestSoftwareInterrupt @ 0x1400205A0 (KiRequestSoftwareInterrupt.c)
 *     KiQueueReadyThread @ 0x14002A180 (KiQueueReadyThread.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14002A5E0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiReadyThread @ 0x140034300 (KiReadyThread.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x140083550 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140083D40 (KiDeliverApc.c)
 *     KiSwapContext @ 0x14015A8A0 (KiSwapContext.c)
 *     EtwTraceReadyThread @ 0x14020E210 (EtwTraceReadyThread.c)
 */

unsigned __int8 __fastcall KiReadyOutSwappedThreads(_QWORD *a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rdi
  volatile unsigned __int8 v4; // bp
  _QWORD *v6; // rsi
  volatile signed __int32 *v7; // rbx
  volatile unsigned __int8 result; // al
  __int64 CurrentThread; // rsi
  _KTHREAD *NextThread; // rbx
  __int64 v11; // r8
  __int64 v12; // r8
  bool v13; // zf
  int v14; // [rsp+40h] [rbp+8h] BYREF
  int v15; // [rsp+48h] [rbp+10h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = a2;
  v6 = a1;
  do
  {
    v15 = 0;
    v7 = (volatile signed __int32 *)(v6 - 27);
    v6 = (_QWORD *)*v6;
    while ( _interlockedbittestandset64(v7 + 16, 0LL) )
    {
      do
        KeYieldProcessorEx(&v15);
      while ( *((_QWORD *)v7 + 8) );
    }
    *((_BYTE *)v7 + 388) = 7;
    *((_QWORD *)v7 + 8) = 0LL;
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
    {
      LOBYTE(a3) = *((_BYTE *)v7 + 567);
      LOBYTE(a2) = *((_BYTE *)v7 + 566);
      EtwTraceReadyThread(v7, a2, a3, 0LL);
    }
    result = KiReadyThread(CurrentPrcb, v7);
  }
  while ( v6 != a1 );
  if ( v4 >= 2u )
  {
    if ( CurrentPrcb->NextThread )
    {
      result = CurrentPrcb->DpcRoutineActive;
      if ( !result )
        return KiRequestSoftwareInterrupt(CurrentPrcb, 2u);
    }
  }
  else
  {
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
      v14 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v14);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      KiCaptureTotalCyclesCurrentThread((__int64)CurrentPrcb, CurrentThread);
      KiUpdateThreadState((__int64)CurrentPrcb, NextThread, 2, 0);
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = v4;
      KiQueueReadyThread(CurrentPrcb, CurrentThread, v11);
      LOBYTE(v12) = v4;
      v13 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v12) == 0;
    }
    else
    {
      v13 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !v13 )
    {
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
    }
    result = v4;
    __writecr8(v4);
  }
  return result;
}
