/*
 * XREFs of MiPfnReferenceCountIsZero @ 0x1400E3118
 * Callers:
 *     MiUnlockCodePage @ 0x1400113B0 (MiUnlockCodePage.c)
 *     MiInsertProtectedStandbyPage @ 0x140055700 (MiInsertProtectedStandbyPage.c)
 *     MmUnlockPages @ 0x1400B0D00 (MmUnlockPages.c)
 *     MmCopyToCachedPage @ 0x1400B3650 (MmCopyToCachedPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     MiValidateImagePages @ 0x1400B57B0 (MiValidateImagePages.c)
 *     MiResolveTransitionFault @ 0x1400B8D10 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x1400B9D20 (MiMigratePfn.c)
 *     MiResolveDemandZeroFault @ 0x1400BBC00 (MiResolveDemandZeroFault.c)
 *     MiDispatchFault @ 0x1400C24A0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x1400C5730 (MiResolveProtoPteFault.c)
 *     MiCopyDataPageToImagePage @ 0x1400E1430 (MiCopyDataPageToImagePage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400E2D48 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiFreeSmallPageFromMdl @ 0x1400E3044 (MiFreeSmallPageFromMdl.c)
 *     MiFreeLargePageMemory @ 0x1400FF890 (MiFreeLargePageMemory.c)
 *     MiSwapHardFaultPage @ 0x140217428 (MiSwapHardFaultPage.c)
 *     MiConvertStandbyToProto @ 0x14022926C (MiConvertStandbyToProto.c)
 *     MiNoPagesLastChance @ 0x14022DB04 (MiNoPagesLastChance.c)
 *     MmDuplicateMemory @ 0x1403F0578 (MmDuplicateMemory.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiReleasePageFileSpace @ 0x1400E31B4 (MiReleasePageFileSpace.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

int __fastcall MiPfnReferenceCountIsZero(__int64 a1, ULONG_PTR a2)
{
  ULONG_PTR v3; // r9
  char v4; // al
  __int16 *v5; // rax
  __int64 v6; // r10
  unsigned int v8; // edx

  v3 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( v3 )
    KeBugCheckEx(0x4Eu, 7uLL, a2, v3, 0LL);
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
  {
    v4 = *(_BYTE *)(a1 + 35);
    if ( (v4 & 0x10) != 0 )
      *(_BYTE *)(a1 + 35) = v4 & 0xEF;
    v5 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
    MiReleasePageFileSpace(v5, *(_QWORD *)(v6 + 16), 1LL);
    return MiInsertPageInFreeOrZeroedList(a2, 2);
  }
  else
  {
    v8 = 8;
    if ( (*(_BYTE *)(a1 + 34) & 0x10) == 0 )
      v8 = 4;
    return MiInsertPageInList(a1, v8);
  }
}
