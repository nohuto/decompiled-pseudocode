/*
 * XREFs of MiRemoveLockedPageChargeAndDecRef @ 0x140065F30
 * Callers:
 *     MiInitializeImageProtos @ 0x14000EC10 (MiInitializeImageProtos.c)
 *     MiCopyDataPageToImagePage @ 0x14000EF10 (MiCopyDataPageToImagePage.c)
 *     MiWaitForCollidedFaultComplete @ 0x14001F86C (MiWaitForCollidedFaultComplete.c)
 *     MiQueryAddressState @ 0x14005EA30 (MiQueryAddressState.c)
 *     MiFinishHardFault @ 0x1400663D0 (MiFinishHardFault.c)
 *     MiResolveTransitionFault @ 0x1400728A0 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x140073740 (MiMigratePfn.c)
 *     MiLockDownWorkingSet @ 0x14009A59C (MiLockDownWorkingSet.c)
 *     MiUnlockCodePage @ 0x1400A1DD0 (MiUnlockCodePage.c)
 *     MmCheckCachedPageStates @ 0x1400A40D0 (MmCheckCachedPageStates.c)
 *     MiProbeLockFrame @ 0x1400A7C30 (MiProbeLockFrame.c)
 *     MiFinishMdlForMappedFileFault @ 0x1400AB060 (MiFinishMdlForMappedFileFault.c)
 *     MiMakeDriverPagesPrivate @ 0x1400BDAC8 (MiMakeDriverPagesPrivate.c)
 *     MiJumpStackTarget @ 0x1400D82EC (MiJumpStackTarget.c)
 *     MiSwapStackPage @ 0x1400D872C (MiSwapStackPage.c)
 *     MiLockProtoPage @ 0x1400E1EC0 (MiLockProtoPage.c)
 *     MiCaptureProtectionFromProto @ 0x1400E1F9C (MiCaptureProtectionFromProto.c)
 *     MiReturnPfnReferenceCount @ 0x1400EC1DC (MiReturnPfnReferenceCount.c)
 *     MiFinishLastForkPageTable @ 0x1400ECA54 (MiFinishLastForkPageTable.c)
 *     MiUnlockPagedAddress @ 0x1400F3224 (MiUnlockPagedAddress.c)
 *     MiUnlockNestedProtoPoolPage @ 0x1400F3D38 (MiUnlockNestedProtoPoolPage.c)
 *     MiPrivateFixup @ 0x1400FEA08 (MiPrivateFixup.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x14013FBF4 (MmDbgMarkPfnModifiedWorker.c)
 *     MiMakeImagePageOk @ 0x1401D52A4 (MiMakeImagePageOk.c)
 *     MiDeletePerSessionProtos @ 0x1401E2DAC (MiDeletePerSessionProtos.c)
 *     MmDuplicateMemory @ 0x14039E1A0 (MmDuplicateMemory.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x1400115F0 (MiPfnReferenceCountIsZero.c)
 *     MiAreChargesNeededToLockPage @ 0x140066150 (MiAreChargesNeededToLockPage.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     MI_IS_PFN_FILE_ONLY @ 0x140071340 (MI_IS_PFN_FILE_ONLY.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiRemoveLockedPageChargeAndDecRef(__int64 a1)
{
  __int16 v1; // r9
  __int16 v3; // r9
  int v4; // r8d
  BOOL v5; // esi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r9
  __int64 v8; // rcx
  unsigned __int16 v9; // cx
  int *v10; // rbp

  v1 = *(_WORD *)(a1 + 32);
  if ( !v1 )
    KeBugCheckEx(0x4Eu, 0x9AuLL, (a1 + 0x58000000000LL) / 48, *(_BYTE *)(a1 + 34) & 7, 0LL);
  *(_WORD *)(a1 + 32) = v1 - 1;
  if ( v1 != 1 || !(unsigned int)MI_IS_PFN_FILE_ONLY(a1) )
  {
    if ( !(unsigned int)MiAreChargesNeededToLockPage(a1) )
      return 0LL;
    if ( ((v4 = 0,
           v5 = v3 == 0,
           v6 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL,
           v7 = (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           v6 > v7)
       || v6 < 0xFFFFF68000000000uLL)
      && ((*(unsigned __int8 *)(a1 + 35) >> 5) & 1) != 0 )
    {
      *(_BYTE *)(a1 + 35) &= ~0x20u;
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 40);
      if ( (v8 & 0x200000000000000LL) != 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0
        || v6 <= v7 && v6 >= 0xFFFFF68000000000uLL && ((*(unsigned __int8 *)(a1 + 35) >> 5) & 1) != 0
        || v5 && (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
      {
        v4 = 1;
      }
      v9 = (HIDWORD(v8) >> 8) & 0x3FF;
      v10 = v9 == 1023 ? &MiSystemPartition : *(int **)(qword_1402FEC28 + 8LL * v9);
      if ( v4 == 1 )
        MiReturnCommit(v10, 1LL);
      if ( v10 == &MiSystemPartition )
      {
        MiReturnResidentAvailable(1LL);
        _InterlockedExchangeAdd64(&qword_1402FF640, 1uLL);
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)v10 + 744, 1uLL);
      }
    }
    if ( !v5 )
      return 0LL;
  }
  MiPfnReferenceCountIsZero(a1, (a1 + 0x58000000000LL) / 48);
  return 1LL;
}
