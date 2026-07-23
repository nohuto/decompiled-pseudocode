/*
 * XREFs of KeRemovePriorityBoost @ 0x1401D2B3C
 * Callers:
 *     CmpReleaseWriteQueue @ 0x1404C9704 (CmpReleaseWriteQueue.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x14005C010 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14005D750 (KiDeliverApc.c)
 *     KiUpdateThreadState @ 0x14009144C (KiUpdateThreadState.c)
 *     KiRemoveBoostThread @ 0x1400CD250 (KiRemoveBoostThread.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x1400CEAA0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiQueueReadyThread @ 0x1400CEB10 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x1400D60D0 (KiRequestSoftwareInterrupt.c)
 *     KiSwapContext @ 0x140166240 (KiSwapContext.c)
 */

void __fastcall KeRemovePriorityBoost(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 CurrentThread; // rsi
  __int64 NextThread; // rbx
  _SINGLE_LIST_ENTRY *v7; // r8
  __int64 v8; // r9
  unsigned int v9; // r8d
  bool v10; // zf
  int v11; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 564) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    KiRemoveBoostThread((__int64)CurrentPrcb, a1);
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
        KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0, v3, v4);
        v11 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v11);
          while ( CurrentPrcb->PrcbLock );
        }
        NextThread = (__int64)CurrentPrcb->NextThread;
        CurrentPrcb->NextThread = 0LL;
        KiCaptureTotalCyclesCurrentThread((__int64)CurrentPrcb, CurrentThread);
        KiUpdateThreadState((__int64)CurrentPrcb, NextThread, 2, 0);
        *(_BYTE *)(CurrentThread + 643) = 32;
        *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
        KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v7, v8);
        LOBYTE(v9) = CurrentIrql;
        v10 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v9) == 0;
      }
      else
      {
        v10 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
      }
      if ( !v10 )
      {
        __writecr8(1uLL);
        *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
      }
      __writecr8(CurrentIrql);
    }
  }
}
