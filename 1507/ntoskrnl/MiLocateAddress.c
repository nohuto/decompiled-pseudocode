/*
 * XREFs of MiLocateAddress @ 0x1400898F0
 * Callers:
 *     MiCloneVads @ 0x140001EE4 (MiCloneVads.c)
 *     MiProbeLockFrame @ 0x140034AC0 (MiProbeLockFrame.c)
 *     MiInitializeReadInProgressPfn @ 0x1400363F0 (MiInitializeReadInProgressPfn.c)
 *     MiStealPage @ 0x140055CB0 (MiStealPage.c)
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     MiComputeFaultNode @ 0x140059AF0 (MiComputeFaultNode.c)
 *     MiValidFault @ 0x14005B5E0 (MiValidFault.c)
 *     MiResolveMappedFileFault @ 0x14005D550 (MiResolveMappedFileFault.c)
 *     MiImagePageOk @ 0x1400790FC (MiImagePageOk.c)
 *     NtUnlockVirtualMemory @ 0x14007ECE0 (NtUnlockVirtualMemory.c)
 *     MiObtainReferencedSecureVad @ 0x140089350 (MiObtainReferencedSecureVad.c)
 *     MiCheckVirtualAddress @ 0x1400896DC (MiCheckVirtualAddress.c)
 *     MiResolveTransitionFault @ 0x1400B8D10 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x1400B9D20 (MiMigratePfn.c)
 *     MiCompleteProtoPteFault @ 0x1400BA8F0 (MiCompleteProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x1400BBC00 (MiResolveDemandZeroFault.c)
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     MiResolveProtoPteFault @ 0x1400C5730 (MiResolveProtoPteFault.c)
 *     MiReservePageFileSpace @ 0x1400DCF1C (MiReservePageFileSpace.c)
 *     MiTrimSharedPageFromViews @ 0x1400FAC3C (MiTrimSharedPageFromViews.c)
 *     NtLockVirtualMemory @ 0x1400FD8C4 (NtLockVirtualMemory.c)
 *     MiProtoFault @ 0x1400FE484 (MiProtoFault.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1401228AC (MiCaptureWriteWatchDirtyBit.c)
 *     MiUpdatePrefetchPriority @ 0x140124004 (MiUpdatePrefetchPriority.c)
 *     MiResolvePageFileFault @ 0x140145F70 (MiResolvePageFileFault.c)
 *     MmStoreDecommitVirtualMemory @ 0x14014BBEC (MmStoreDecommitVirtualMemory.c)
 *     MiCanGrantExecute @ 0x140223AF4 (MiCanGrantExecute.c)
 *     MiCrcStillIntact @ 0x140229DF8 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x14022B7E8 (MiSharePages.c)
 *     MmOutSwapVirtualAddresses @ 0x14022CC40 (MmOutSwapVirtualAddresses.c)
 *     MiUnlockVadRange @ 0x1404B1B2C (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1404B1C28 (MiLockVadRange.c)
 *     MmCheckForSafeExecution @ 0x1406A57C0 (MmCheckForSafeExecution.c)
 * Callees:
 *     MiVadCompareVpn @ 0x1400C2460 (MiVadCompareVpn.c)
 */

_QWORD *__fastcall MiLocateAddress(unsigned __int64 a1)
{
  _KPROCESS *Process; // rsi
  _QWORD *result; // rax
  unsigned __int64 v3; // rdi
  _QWORD *v4; // rbx
  int v5; // eax

  Process = KeGetCurrentThread()->ApcState.Process;
  result = (_QWORD *)Process[2].Affinity.Bitmap[2];
  if ( result )
  {
    v3 = a1 >> 12;
    if ( a1 >> 12 < (*((unsigned int *)result + 6) | ((unsigned __int64)*((unsigned __int8 *)result + 32) << 32))
      || v3 > (*((unsigned int *)result + 7) | ((unsigned __int64)*((unsigned __int8 *)result + 33) << 32)) )
    {
      v4 = (_QWORD *)Process[2].Affinity.Bitmap[0];
      if ( !v4 )
        return 0LL;
      while ( 1 )
      {
        v5 = MiVadCompareVpn(v3, v4);
        if ( v5 < 0 )
        {
          v4 = (_QWORD *)*v4;
        }
        else
        {
          if ( v5 <= 0 )
          {
            Process[2].Affinity.Bitmap[2] = (unsigned __int64)v4;
            return v4;
          }
          v4 = (_QWORD *)v4[1];
        }
        if ( !v4 )
          return 0LL;
      }
    }
  }
  return result;
}
