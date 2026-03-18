/*
 * XREFs of MiRemoveLockedPageChargeAndDecRef @ 0x1400E2D48
 * Callers:
 *     MiLockDownWorkingSet @ 0x140001790 (MiLockDownWorkingSet.c)
 *     MiFinishLastForkPageTable @ 0x140003EF4 (MiFinishLastForkPageTable.c)
 *     MiUnlockPagedAddress @ 0x1400056EC (MiUnlockPagedAddress.c)
 *     MiMakeDriverPagesPrivate @ 0x1400246E4 (MiMakeDriverPagesPrivate.c)
 *     MiProbeLockFrame @ 0x140034AC0 (MiProbeLockFrame.c)
 *     MiQueryAddressState @ 0x14003B1A0 (MiQueryAddressState.c)
 *     MmCheckCachedPageStates @ 0x1400509D0 (MmCheckCachedPageStates.c)
 *     MiPrivateFixup @ 0x14007991C (MiPrivateFixup.c)
 *     MiLockProtoPage @ 0x14007B590 (MiLockProtoPage.c)
 *     MiWaitForCollidedFaultComplete @ 0x14007BC04 (MiWaitForCollidedFaultComplete.c)
 *     MiFinishHardFault @ 0x1400B6EE0 (MiFinishHardFault.c)
 *     MiResolveTransitionFault @ 0x1400B8D10 (MiResolveTransitionFault.c)
 *     MiReturnPfnReferenceCount @ 0x1400E0858 (MiReturnPfnReferenceCount.c)
 *     MiCaptureProtectionFromProto @ 0x1400E0DD8 (MiCaptureProtectionFromProto.c)
 *     MiCopyDataPageToImagePage @ 0x1400E1430 (MiCopyDataPageToImagePage.c)
 *     MiInitializeImageProtos @ 0x1400E3274 (MiInitializeImageProtos.c)
 *     MiSwapStackPage @ 0x14011F8A0 (MiSwapStackPage.c)
 *     MiUnlockNestedProtoPoolPage @ 0x14013131C (MiUnlockNestedProtoPoolPage.c)
 *     MiJumpStackTarget @ 0x1401347E4 (MiJumpStackTarget.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x14016D590 (MmDbgMarkPfnModifiedWorker.c)
 *     MiMakeImagePageOk @ 0x14021712C (MiMakeImagePageOk.c)
 *     MiDeletePerSessionProtos @ 0x14021BD68 (MiDeletePerSessionProtos.c)
 *     MmDuplicateMemory @ 0x1403F0578 (MmDuplicateMemory.c)
 * Callees:
 *     MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF @ 0x1400B6C70 (MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF.c)
 *     MiPfnReferenceCountIsZero @ 0x1400E3118 (MiPfnReferenceCountIsZero.c)
 */

__int64 __fastcall MiRemoveLockedPageChargeAndDecRef(__int64 a1)
{
  __int64 result; // rax

  result = MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF(a1);
  if ( (_DWORD)result )
  {
    MiPfnReferenceCountIsZero(a1, (a1 + 0x58000000000LL) / 48);
    return 1LL;
  }
  return result;
}
