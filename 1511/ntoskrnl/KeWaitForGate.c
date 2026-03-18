/*
 * XREFs of KeWaitForGate @ 0x1400DEBE8
 * Callers:
 *     MiDrainControlAreaWrites @ 0x14000C580 (MiDrainControlAreaWrites.c)
 *     MiUnlinkWorkingSet @ 0x14001C13C (MiUnlinkWorkingSet.c)
 *     MmOutSwapProcess @ 0x1400328BC (MmOutSwapProcess.c)
 *     MiReferenceControlArea @ 0x14003AD80 (MiReferenceControlArea.c)
 *     MiCheckPurgeAndUpMapCount @ 0x1400626D0 (MiCheckPurgeAndUpMapCount.c)
 *     MiZeroInParallel @ 0x1400BC21C (MiZeroInParallel.c)
 *     MiAttemptSectionDelete @ 0x1400E96DC (MiAttemptSectionDelete.c)
 *     MiWaitForPageWriteCompletion @ 0x1401074A4 (MiWaitForPageWriteCompletion.c)
 *     MiUnlinkSessionWorkingSet @ 0x1401144F8 (MiUnlinkSessionWorkingSet.c)
 *     MiInitializePageZeroing @ 0x1401312FC (MiInitializePageZeroing.c)
 *     MiZeroNodePages @ 0x140131668 (MiZeroNodePages.c)
 *     MiFreeUnusedPfnPages @ 0x1401322A8 (MiFreeUnusedPfnPages.c)
 *     KiExecuteDpc @ 0x1401338C8 (KiExecuteDpc.c)
 *     MiMappedPageWriter @ 0x1401364A8 (MiMappedPageWriter.c)
 *     MiWaitForVadDeletion @ 0x1401E1DD8 (MiWaitForVadDeletion.c)
 *     MiProceedToCreateSubsectionProtos @ 0x1401E39B0 (MiProceedToCreateSubsectionProtos.c)
 *     PspSetContextThreadInternal @ 0x1403EFC88 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1403EFE2C (PspGetContextThreadInternal.c)
 *     MmScrubMemory @ 0x14062D224 (MmScrubMemory.c)
 *     PspQueryWorkingSetWatch @ 0x14063F290 (PspQueryWorkingSetWatch.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x140643C78 (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     KiBeginThreadWait @ 0x140029950 (KiBeginThreadWait.c)
 *     KiFastExitThreadWait @ 0x14002ABE8 (KiFastExitThreadWait.c)
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KiCommitThreadWait @ 0x140081ED0 (KiCommitThreadWait.c)
 */

__int64 __fastcall KeWaitForGate(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  $7206FD56FFE06BF40DFFA5887EA6BE2A *v5; // rdi
  unsigned __int8 CurrentIrql; // al
  __int64 v7; // rdx
  unsigned int v8; // ebp
  __int64 v9; // r8
  struct _LIST_ENTRY *v10; // rcx

  CurrentThread = KeGetCurrentThread();
  v5 = &CurrentThread->320;
  do
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = CurrentIrql;
    v8 = KiBeginThreadWait((__int64)CurrentThread, 0, a2, 0);
    if ( v8 )
      break;
    CurrentThread->WaitBlock[0].WaitType = 1;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 0;
    CurrentThread->WaitBlock[0].Object = (PVOID)a1;
    KiAcquireKobjectLockSafe((volatile signed __int32 *)a1, v7, v9);
    if ( *(_DWORD *)(a1 + 4) )
    {
      *(_DWORD *)(a1 + 4) = 0;
      _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
      KiFastExitThreadWait((__int64)KeGetCurrentPrcb(), (__int64)CurrentThread, 0LL);
      return v8;
    }
    v10 = *(struct _LIST_ENTRY **)(a1 + 16);
    v5->WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)(a1 + 8);
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = v10;
    if ( v10->Flink != (struct _LIST_ENTRY *)(a1 + 8) )
      __fastfail(3u);
    v10->Flink = (struct _LIST_ENTRY *)v5;
    *(_QWORD *)(a1 + 16) = v5;
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    v8 = KiCommitThreadWait((__int64)CurrentThread, (__int64)&CurrentThread->320, 0, 0LL);
  }
  while ( v8 == 256 );
  return v8;
}
