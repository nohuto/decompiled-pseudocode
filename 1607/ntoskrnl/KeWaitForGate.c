/*
 * XREFs of KeWaitForGate @ 0x140097498
 * Callers:
 *     MiReferenceControlArea @ 0x140025BE4 (MiReferenceControlArea.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14002C4A0 (MiCheckPurgeAndUpMapCount.c)
 *     MiDrainControlAreaWrites @ 0x14008F94C (MiDrainControlAreaWrites.c)
 *     MmOutSwapProcess @ 0x1400909CC (MmOutSwapProcess.c)
 *     MiWaitForPageWriteCompletion @ 0x1400973E8 (MiWaitForPageWriteCompletion.c)
 *     MiAttemptSectionDelete @ 0x1400A7650 (MiAttemptSectionDelete.c)
 *     MiUnlinkWorkingSet @ 0x1400FF204 (MiUnlinkWorkingSet.c)
 *     MiZeroInParallel @ 0x14010A05C (MiZeroInParallel.c)
 *     MiUnlinkSessionWorkingSet @ 0x1401237A8 (MiUnlinkSessionWorkingSet.c)
 *     KiExecuteDpc @ 0x1401397A8 (KiExecuteDpc.c)
 *     MiZeroNodePages @ 0x14013ADA0 (MiZeroNodePages.c)
 *     MiInitializePageZeroing @ 0x14013B3E0 (MiInitializePageZeroing.c)
 *     MiMappedPageWriter @ 0x14013DAC4 (MiMappedPageWriter.c)
 *     MiFreeUnusedPfnPages @ 0x14013E7A4 (MiFreeUnusedPfnPages.c)
 *     MiChangingSubsectionProtos @ 0x1401ED094 (MiChangingSubsectionProtos.c)
 *     MiWaitForVadDeletion @ 0x1401F7544 (MiWaitForVadDeletion.c)
 *     PspSetContextThreadInternal @ 0x1404FA764 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1404FADF4 (PspGetContextThreadInternal.c)
 *     MmScrubMemory @ 0x140665370 (MmScrubMemory.c)
 *     PspQueryWorkingSetWatch @ 0x14067DAC4 (PspQueryWorkingSetWatch.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1406827D8 (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     KiCommitThreadWait @ 0x14005A850 (KiCommitThreadWait.c)
 *     KiBeginThreadWait @ 0x1400CE820 (KiBeginThreadWait.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 *     KiFastExitThreadWait @ 0x1400F0678 (KiFastExitThreadWait.c)
 */

__int64 __fastcall KeWaitForGate(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  $C41897776C0457C78394BDAEF5CBAAD1 *v5; // rdi
  unsigned __int8 CurrentIrql; // al
  unsigned int v7; // ebp
  __int64 v8; // r9
  struct _LIST_ENTRY *v9; // rcx

  CurrentThread = KeGetCurrentThread();
  v5 = &CurrentThread->320;
  do
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = CurrentIrql;
    v7 = KiBeginThreadWait(CurrentThread, 0LL, a2);
    if ( v7 )
      break;
    CurrentThread->WaitBlock[0].WaitType = 1;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 0;
    CurrentThread->WaitBlock[0].Object = (PVOID)a1;
    KiAcquireKobjectLockSafe(a1);
    if ( *(_DWORD *)(a1 + 4) )
    {
      *(_DWORD *)(a1 + 4) = 0;
      _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
      KiFastExitThreadWait(KeGetCurrentPrcb(), CurrentThread, 0LL, v8);
      return v7;
    }
    v9 = *(struct _LIST_ENTRY **)(a1 + 16);
    if ( v9->Flink != (struct _LIST_ENTRY *)(a1 + 8) )
      __fastfail(3u);
    v5->WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)(a1 + 8);
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = v9;
    v9->Flink = (struct _LIST_ENTRY *)v5;
    *(_QWORD *)(a1 + 16) = v5;
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    v7 = KiCommitThreadWait((__int64)CurrentThread, (__int64 *)&CurrentThread->320, 0LL, 0LL);
  }
  while ( v7 == 256 );
  return v7;
}
