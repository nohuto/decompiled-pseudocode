/*
 * XREFs of MiPfnReferenceCountIsZero @ 0x14002448C
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x140023A40 (MiCopyDataPageToImagePage.c)
 *     MmCheckCachedPageStates @ 0x140033AB0 (MmCheckCachedPageStates.c)
 *     MiResolveTransitionFault @ 0x140035F90 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x140036E10 (MiMigratePfn.c)
 *     MmCopyToCachedPage @ 0x140037900 (MmCopyToCachedPage.c)
 *     MiResolveDemandZeroFault @ 0x14003AA90 (MiResolveDemandZeroFault.c)
 *     MiDispatchFault @ 0x1400403C0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x140041360 (MiResolveProtoPteFault.c)
 *     MiUnlockProtoPoolPage @ 0x14004C4E0 (MiUnlockProtoPoolPage.c)
 *     MiWalkEntireImage @ 0x14004C570 (MiWalkEntireImage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14004E740 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MmUnlockPages @ 0x140051A80 (MmUnlockPages.c)
 *     MiInsertProtectedStandbyPage @ 0x1400701C0 (MiInsertProtectedStandbyPage.c)
 *     MiFreeLargePageMemory @ 0x140090970 (MiFreeLargePageMemory.c)
 *     MiDeleteClusterPage @ 0x1400922A0 (MiDeleteClusterPage.c)
 *     MiNoPagesLastChance @ 0x1401F3384 (MiNoPagesLastChance.c)
 *     MiConvertStandbyToProto @ 0x1401F90BC (MiConvertStandbyToProto.c)
 *     MiSwapHardFaultPage @ 0x1401FE040 (MiSwapHardFaultPage.c)
 *     MmDuplicateMemory @ 0x1403C9918 (MmDuplicateMemory.c)
 * Callees:
 *     MiReleasePageFileSpace @ 0x140022238 (MiReleasePageFileSpace.c)
 *     MiPartitionIdToPointer @ 0x1400680A0 (MiPartitionIdToPointer.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
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
