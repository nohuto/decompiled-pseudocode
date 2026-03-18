/*
 * XREFs of MiLocateAddress @ 0x140038340
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x140008834 (MiTrimSharedPageFromViews.c)
 *     MiCloneVads @ 0x14001D7C8 (MiCloneVads.c)
 *     NtUnlockVirtualMemory @ 0x140021060 (NtUnlockVirtualMemory.c)
 *     MiReservePageFileSpace @ 0x1400367C0 (MiReservePageFileSpace.c)
 *     MiObtainReferencedSecureVad @ 0x140038070 (MiObtainReferencedSecureVad.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiResolveProtoPteFault @ 0x1400517B0 (MiResolveProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x140052430 (MiResolveDemandZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x140054EB0 (MiCompleteProtoPteFault.c)
 *     MiCopyOnWriteEx @ 0x14006EE60 (MiCopyOnWriteEx.c)
 *     MiComputeFaultNode @ 0x1400707F0 (MiComputeFaultNode.c)
 *     MiValidFault @ 0x140070910 (MiValidFault.c)
 *     MiUpdatePrefetchPriority @ 0x140070C90 (MiUpdatePrefetchPriority.c)
 *     MiResolveTransitionFault @ 0x1400728A0 (MiResolveTransitionFault.c)
 *     MiProbeLockFrame @ 0x1400A7C30 (MiProbeLockFrame.c)
 *     MiResolveMappedFileFault @ 0x1400AA7A0 (MiResolveMappedFileFault.c)
 *     MiStealPage @ 0x1400ABC50 (MiStealPage.c)
 *     NtLockVirtualMemory @ 0x1400BB80C (NtLockVirtualMemory.c)
 *     MiImagePageOk @ 0x1400E2EAC (MiImagePageOk.c)
 *     MiProtoFault @ 0x1400EA824 (MiProtoFault.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1400EF48C (MiCaptureWriteWatchDirtyBit.c)
 *     MiInitializeReadInProgressPfn @ 0x1400FD7D0 (MiInitializeReadInProgressPfn.c)
 *     MiResolvePageFileFault @ 0x1401129C8 (MiResolvePageFileFault.c)
 *     MmStoreDecommitVirtualMemory @ 0x140116440 (MmStoreDecommitVirtualMemory.c)
 *     MiCrcStillIntact @ 0x140128AC0 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x140128D20 (MiSharePages.c)
 *     MiCanGrantExecute @ 0x1401DEC6C (MiCanGrantExecute.c)
 *     MmOutSwapVirtualAddresses @ 0x1401E1508 (MmOutSwapVirtualAddresses.c)
 *     MiUnlockVadRange @ 0x1403E8634 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1403E8728 (MiLockVadRange.c)
 *     MmCheckForSafeExecution @ 0x140625D80 (MmCheckForSafeExecution.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiLocateAddress(unsigned __int64 a1)
{
  _KPROCESS *Process; // r9
  unsigned __int64 result; // rax
  unsigned __int64 v3; // r8

  Process = KeGetCurrentThread()->ApcState.Process;
  result = Process[2].Affinity.Bitmap[3];
  if ( !result )
    return 0LL;
  v3 = a1 >> 12;
  if ( a1 >> 12 < (*(unsigned int *)(result + 24) | ((unsigned __int64)*(unsigned __int8 *)(result + 32) << 32))
    || v3 > (*(unsigned int *)(result + 28) | ((unsigned __int64)*(unsigned __int8 *)(result + 33) << 32)) )
  {
    result = Process[2].Affinity.Bitmap[1];
    while ( result )
    {
      if ( v3 > (*(unsigned int *)(result + 28) | ((unsigned __int64)*(unsigned __int8 *)(result + 33) << 32)) )
      {
        result = *(_QWORD *)(result + 8);
      }
      else
      {
        if ( v3 >= (*(unsigned int *)(result + 24) | ((unsigned __int64)*(unsigned __int8 *)(result + 32) << 32)) )
        {
          Process[2].Affinity.Bitmap[3] = result;
          return result;
        }
        result = *(_QWORD *)result;
      }
    }
    return 0LL;
  }
  return result;
}
