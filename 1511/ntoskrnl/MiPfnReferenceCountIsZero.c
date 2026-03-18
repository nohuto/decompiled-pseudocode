/*
 * XREFs of MiPfnReferenceCountIsZero @ 0x1400115F0
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14000EF10 (MiCopyDataPageToImagePage.c)
 *     MiInsertProtectedStandbyPage @ 0x140010160 (MiInsertProtectedStandbyPage.c)
 *     MiFreeSmallPageFromMdl @ 0x140011524 (MiFreeSmallPageFromMdl.c)
 *     MiDispatchFault @ 0x14004EB20 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x1400517B0 (MiResolveProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x140052430 (MiResolveDemandZeroFault.c)
 *     MiValidateImagePages @ 0x140064AE0 (MiValidateImagePages.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140065F30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MmUnlockPages @ 0x140067610 (MmUnlockPages.c)
 *     MmCopyToCachedPage @ 0x140069110 (MmCopyToCachedPage.c)
 *     MiUnlockProtoPoolPage @ 0x14006AD80 (MiUnlockProtoPoolPage.c)
 *     MiResolveTransitionFault @ 0x1400728A0 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x140073740 (MiMigratePfn.c)
 *     MiFreeLargePageMemory @ 0x1400BDF60 (MiFreeLargePageMemory.c)
 *     MiConvertStandbyToProto @ 0x140127A94 (MiConvertStandbyToProto.c)
 *     MiSwapHardFaultPage @ 0x1401D54F0 (MiSwapHardFaultPage.c)
 *     MiNoPagesLastChance @ 0x1401E3DB0 (MiNoPagesLastChance.c)
 *     MmDuplicateMemory @ 0x14039E1A0 (MmDuplicateMemory.c)
 * Callees:
 *     MiInsertPageInList @ 0x14003DC20 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiPfnReferenceCountIsZero(__int64 a1, ULONG_PTR a2)
{
  ULONG_PTR v3; // r9
  char v4; // al
  unsigned __int16 v5; // ax
  int *v6; // rdi
  __int64 v8; // rax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( v3 )
    KeBugCheckEx(0x4Eu, 7uLL, a2, v3, 0LL);
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
  {
    v4 = *(_BYTE *)(a1 + 35);
    if ( (v4 & 0x10) != 0 )
      *(_BYTE *)(a1 + 35) = v4 & 0xEF;
    v5 = ((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF;
    if ( v5 == 1023 )
      v6 = &MiSystemPartition;
    else
      v6 = *(int **)(qword_1402FEC28 + 8LL * v5);
    v9 = *(_QWORD *)(a1 + 16);
    if ( (v9 & 0x400) == 0 && ((v9 & 0x2000) != 0 || (v9 & 0x1000) != 0) )
    {
      v8 = MI_READ_PTE_LOCK_FREE(&v9);
      if ( v8 )
        MiReleasePageFileInfo(v6, v8, 0LL);
    }
    return MiInsertPageInFreeOrZeroedList(a2);
  }
  else if ( (*(_BYTE *)(a1 + 34) & 0x10) != 0 )
  {
    return MiInsertPageInList(a1, 8LL, a1, 0LL);
  }
  else
  {
    return MiInsertPageInList(a1, 4LL, a1, 0LL);
  }
}
