/*
 * XREFs of MiPfnReferenceCountIsZero @ 0x14002400C
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x1400235C0 (MiCopyDataPageToImagePage.c)
 *     MmCheckCachedPageStates @ 0x140033630 (MmCheckCachedPageStates.c)
 *     MiResolveTransitionFault @ 0x140035B10 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x140036990 (MiMigratePfn.c)
 *     MmCopyToCachedPage @ 0x140037480 (MmCopyToCachedPage.c)
 *     MiResolveDemandZeroFault @ 0x14003A610 (MiResolveDemandZeroFault.c)
 *     MiDispatchFault @ 0x14003FF40 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x140040EE0 (MiResolveProtoPteFault.c)
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     MiWalkEntireImage @ 0x14004C0F0 (MiWalkEntireImage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14004E2C0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MmUnlockPages @ 0x140051600 (MmUnlockPages.c)
 *     MiInsertProtectedStandbyPage @ 0x14006FD40 (MiInsertProtectedStandbyPage.c)
 *     MiFreeLargePageMemory @ 0x1400900D0 (MiFreeLargePageMemory.c)
 *     MiDeleteClusterPage @ 0x140091A00 (MiDeleteClusterPage.c)
 *     MiNoPagesLastChance @ 0x1401F31B0 (MiNoPagesLastChance.c)
 *     MiConvertStandbyToProto @ 0x1401F8EE8 (MiConvertStandbyToProto.c)
 *     MiSwapHardFaultPage @ 0x1401FDE6C (MiSwapHardFaultPage.c)
 *     MmDuplicateMemory @ 0x1403C9918 (MmDuplicateMemory.c)
 * Callees:
 *     MiReleasePageFileSpace @ 0x140021DB8 (MiReleasePageFileSpace.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall MiPfnReferenceCountIsZero(__int64 a1, ULONG_PTR a2)
{
  ULONG_PTR v3; // r9
  __int64 v4; // rdx
  char v6; // al
  struct _KEVENT *v7; // rax
  __int64 v8; // r10
  __int64 v9; // r8

  v3 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( v3 )
    KeBugCheckEx(0x4Eu, 7uLL, a2, v3, 0LL);
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
  {
    v6 = *(_BYTE *)(a1 + 35);
    if ( (v6 & 0x10) != 0 )
      *(_BYTE *)(a1 + 35) = v6 & 0xEF;
    v7 = (struct _KEVENT *)MiPartitionIdToPointer(
                             ((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF,
                             a2,
                             1LL,
                             0LL);
    MiReleasePageFileSpace(v7, *(_QWORD *)(v8 + 16), v9);
    return MiInsertPageInFreeOrZeroedList(a2);
  }
  else
  {
    v4 = 8LL;
    if ( (*(_BYTE *)(a1 + 34) & 0x10) == 0 )
      v4 = 4LL;
    return MiInsertPageInList(a1, v4);
  }
}
