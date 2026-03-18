/*
 * XREFs of MiLocateAddress @ 0x14001F090
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x140018E50 (MiTrimSharedPageFromViews.c)
 *     MiReservePageFileSpace @ 0x14001E5D0 (MiReservePageFileSpace.c)
 *     MiCheckVirtualAddress @ 0x14001EDF8 (MiCheckVirtualAddress.c)
 *     MiObtainReferencedSecureVad @ 0x14002C4F0 (MiObtainReferencedSecureVad.c)
 *     MiProbeLockFrame @ 0x14002F730 (MiProbeLockFrame.c)
 *     MiResolveTransitionFault @ 0x140035F90 (MiResolveTransitionFault.c)
 *     MiCompleteProtoPteFault @ 0x140039AF0 (MiCompleteProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x14003AA90 (MiResolveDemandZeroFault.c)
 *     MmAccessFault @ 0x14003E7A0 (MmAccessFault.c)
 *     MiResolveProtoPteFault @ 0x140041360 (MiResolveProtoPteFault.c)
 *     MiImagePageOk @ 0x14009D4E8 (MiImagePageOk.c)
 *     MiProtoFault @ 0x1400A3E68 (MiProtoFault.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1400AA768 (MiCaptureWriteWatchDirtyBit.c)
 *     NtUnlockVirtualMemory @ 0x1400BA2E0 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1400BAEC8 (NtLockVirtualMemory.c)
 *     MiCloneVads @ 0x1400BC560 (MiCloneVads.c)
 *     MiCopyOnWriteEx @ 0x1400E2730 (MiCopyOnWriteEx.c)
 *     MiInitializeReadInProgressPfn @ 0x1400E5B30 (MiInitializeReadInProgressPfn.c)
 *     MiComputeFaultNode @ 0x1400E6130 (MiComputeFaultNode.c)
 *     MiValidFault @ 0x1400E6250 (MiValidFault.c)
 *     MiUpdatePrefetchPriority @ 0x1400E6670 (MiUpdatePrefetchPriority.c)
 *     MiResolveMappedFileFault @ 0x1400E68A0 (MiResolveMappedFileFault.c)
 *     MiStealPage @ 0x140107E84 (MiStealPage.c)
 *     MiResolvePageFileFault @ 0x140121360 (MiResolvePageFileFault.c)
 *     MmStoreDecommitVirtualMemory @ 0x1401258C8 (MmStoreDecommitVirtualMemory.c)
 *     MiCanGrantExecute @ 0x1401EF6B4 (MiCanGrantExecute.c)
 *     MmOutSwapVirtualAddresses @ 0x1401F7898 (MmOutSwapVirtualAddresses.c)
 *     MiCrcStillIntact @ 0x1401F94D4 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x1401FA8E4 (MiSharePages.c)
 *     MiUnlockVadRange @ 0x1404F37E8 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1404F38DC (MiLockVadRange.c)
 *     MiCloneProcessAddressSpace @ 0x1405278F8 (MiCloneProcessAddressSpace.c)
 *     MmCheckForSafeExecution @ 0x14065B60C (MmCheckForSafeExecution.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiLocateAddress(unsigned __int64 a1)
{
  _KPROCESS *Process; // r9
  unsigned __int64 result; // rax
  unsigned __int64 v3; // r8

  Process = KeGetCurrentThread()->ApcState.Process;
  result = Process[2].Affinity.Bitmap[5];
  if ( !result )
    return 0LL;
  v3 = a1 >> 12;
  if ( a1 >> 12 < (*(unsigned int *)(result + 24) | ((unsigned __int64)*(unsigned __int8 *)(result + 32) << 32))
    || v3 > (*(unsigned int *)(result + 28) | ((unsigned __int64)*(unsigned __int8 *)(result + 33) << 32)) )
  {
    result = Process[2].Affinity.Bitmap[3];
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
          Process[2].Affinity.Bitmap[5] = result;
          return result;
        }
        result = *(_QWORD *)result;
      }
    }
    return 0LL;
  }
  return result;
}
