/*
 * XREFs of KeWaitForGate @ 0x140126304
 * Callers:
 *     MiZeroInParallel @ 0x140075AD4 (MiZeroInParallel.c)
 *     MiDrainControlAreaWrites @ 0x140085020 (MiDrainControlAreaWrites.c)
 *     MiReferenceControlArea @ 0x140089080 (MiReferenceControlArea.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14008A920 (MiCheckPurgeAndUpMapCount.c)
 *     MmOutSwapProcess @ 0x14011029C (MmOutSwapProcess.c)
 *     MiAttemptSectionDelete @ 0x1401195C8 (MiAttemptSectionDelete.c)
 *     MiUnlinkWorkingSet @ 0x140124DCC (MiUnlinkWorkingSet.c)
 *     MiWaitForPageWriteCompletion @ 0x140126218 (MiWaitForPageWriteCompletion.c)
 *     MiUnlinkSessionWorkingSet @ 0x140149F10 (MiUnlinkSessionWorkingSet.c)
 *     KiExecuteDpc @ 0x14016315C (KiExecuteDpc.c)
 *     MiMappedPageWriter @ 0x140165698 (MiMappedPageWriter.c)
 *     MiWaitForVadDeletion @ 0x14022F098 (MiWaitForVadDeletion.c)
 *     MiEnableFileExtents @ 0x140230720 (MiEnableFileExtents.c)
 *     PspSetContextThreadInternal @ 0x14044FFEC (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140450184 (PspGetContextThreadInternal.c)
 *     MmScrubMemory @ 0x1406AACD4 (MmScrubMemory.c)
 *     PspQueryWorkingSetWatch @ 0x1406C039C (PspQueryWorkingSetWatch.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1406C6990 (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     KiCheckForThreadDispatch @ 0x14000DCB4 (KiCheckForThreadDispatch.c)
 *     KiDeliverApc @ 0x140048670 (KiDeliverApc.c)
 *     KiCommitThreadWait @ 0x1400A0220 (KiCommitThreadWait.c)
 *     KiExitThreadWait @ 0x1400A23E0 (KiExitThreadWait.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KeWaitForGate(_DWORD *a1, unsigned __int8 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  $5F589360F986DA22318BA982CE57118F *v5; // r14
  unsigned __int8 CurrentIrql; // bp
  unsigned int v7; // esi
  unsigned int v8; // ebp
  unsigned int v9; // esi
  struct _LIST_ENTRY *v10; // rcx
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v12; // edi
  signed __int32 v14[18]; // [rsp+0h] [rbp-48h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = &CurrentThread->320;
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      v7 = 0;
      CurrentThread->WaitIrql = CurrentIrql;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v7);
        }
        while ( CurrentThread->ThreadLock );
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || CurrentIrql )
        break;
      CurrentThread->ThreadLock = 0LL;
      __writecr8(1uLL);
      KiDeliverApc(0, 0, 0LL);
      __writecr8(2uLL);
    }
    CurrentThread->WaitBlockFill6[68] = 5;
    v8 = 0;
    CurrentThread->WaitReason = a2;
    v9 = 0;
    CurrentThread->ThreadLock = 0LL;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    CurrentThread->WaitBlock[0].WaitType = 1;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 0;
    CurrentThread->WaitBlock[0].Object = a1;
    while ( _interlockedbittestandset(a1, 7u) )
    {
      do
      {
        if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v9);
      }
      while ( (*a1 & 0x80u) != 0 );
    }
    if ( a1[1] )
      break;
    v10 = (struct _LIST_ENTRY *)*((_QWORD *)a1 + 2);
    v5->WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)(a1 + 2);
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = v10;
    if ( v10->Flink != (struct _LIST_ENTRY *)(a1 + 2) )
      __fastfail(3u);
    v10->Flink = (struct _LIST_ENTRY *)v5;
    *((_QWORD *)a1 + 2) = v5;
    _InterlockedAnd(a1, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    v8 = KiCommitThreadWait((__int64)CurrentThread, (__int64 *)&CurrentThread->320, 0LL, 0LL);
    if ( v8 != 256 )
      return v8;
  }
  a1[1] = 0;
  _InterlockedAnd(a1, 0xFFFFFF7F);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread->WaitBlockFill6[68] = 2;
  _InterlockedOr(v14, 0);
  if ( CurrentThread->ThreadLock )
  {
    v12 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
      {
        if ( (++v12 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v12);
      }
      while ( CurrentThread->ThreadLock );
    }
    CurrentThread->ThreadLock = 0LL;
  }
  KiExitThreadWait((__int64)CurrentPrcb, (__int64)CurrentThread, 0);
  return v8;
}
