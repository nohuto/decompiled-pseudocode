/*
 * XREFs of KeRemovePriorityBoost @ 0x1401C2FDC
 * Callers:
 *     CmpReleaseWriteQueue @ 0x1404BDCDC (CmpReleaseWriteQueue.c)
 * Callees:
 *     KiUpdateThreadState @ 0x140014CD8 (KiUpdateThreadState.c)
 *     KiRequestSoftwareInterrupt @ 0x1400205A0 (KiRequestSoftwareInterrupt.c)
 *     KiQueueReadyThread @ 0x14002A180 (KiQueueReadyThread.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14002A5E0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiRemoveBoostThread @ 0x14007CF40 (KiRemoveBoostThread.c)
 *     KiAbProcessContextSwitch @ 0x140083550 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140083D40 (KiDeliverApc.c)
 *     KiSwapContext @ 0x14015A8A0 (KiSwapContext.c)
 */

void __fastcall KeRemovePriorityBoost(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 CurrentThread; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  _KTHREAD *NextThread; // rbx
  __int64 v9; // r8
  unsigned int v10; // r8d
  bool v11; // zf
  int v12; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 564) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    KiRemoveBoostThread((__int64)CurrentPrcb, a1, a3);
    if ( CurrentIrql >= 2u )
    {
      if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
        KiRequestSoftwareInterrupt(CurrentPrcb, 2u);
    }
    else
    {
      CurrentThread = (__int64)CurrentPrcb->CurrentThread;
      if ( CurrentPrcb->NextThread )
      {
        KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
        v12 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v12, v6, v7);
          while ( CurrentPrcb->PrcbLock );
        }
        NextThread = CurrentPrcb->NextThread;
        CurrentPrcb->NextThread = 0LL;
        KiCaptureTotalCyclesCurrentThread((__int64)CurrentPrcb, CurrentThread);
        KiUpdateThreadState((__int64)CurrentPrcb, NextThread, 2, 0);
        *(_BYTE *)(CurrentThread + 643) = 32;
        *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
        KiQueueReadyThread(CurrentPrcb, CurrentThread, v9);
        LOBYTE(v10) = CurrentIrql;
        v11 = (unsigned __int8)KiSwapContext(CurrentThread, (__int64)NextThread, v10) == 0;
      }
      else
      {
        v11 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
      }
      if ( !v11 )
      {
        __writecr8(1uLL);
        *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
        KiDeliverApc(0, 0LL, 0LL);
      }
      __writecr8(CurrentIrql);
    }
  }
}
