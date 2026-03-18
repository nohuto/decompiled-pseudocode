/*
 * XREFs of MiCopyDirectMapHeader @ 0x14062C788
 * Callers:
 *     MiCreateImageFileMap @ 0x1403C9488 (MiCreateImageFileMap.c)
 * Callees:
 *     MiDeleteSegmentPages @ 0x14000BB90 (MiDeleteSegmentPages.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiCreatePteCopyList @ 0x1400BFE3C (MiCreatePteCopyList.c)
 *     MiGetPteFromCopyList @ 0x1400FE324 (MiGetPteFromCopyList.c)
 *     KeCopyPage @ 0x140157550 (KeCopyPage.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiReturnPteMappingPair @ 0x1401E4E3C (MiReturnPteMappingPair.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiInitializePrototypePtes @ 0x1403C8F74 (MiInitializePrototypePtes.c)
 *     MiAllocateFileExtents @ 0x14062C488 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiCopyDirectMapHeader(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 *PoolWithTag; // rdi
  unsigned __int64 v7; // rax
  int *v8; // rax
  int v9; // r9d
  __int64 v10; // r8
  __int64 PteFromCopyList; // rsi
  unsigned int v12[8]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v13[22]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v14[10]; // [rsp+108h] [rbp+0h] BYREF

  v2 = 0;
  memset(v14, 0, 72);
  memset(v13, 0, sizeof(v13));
  MiCreatePteCopyList(2uLL, 2uLL, (unsigned __int64)v12);
  if ( !v12[1] )
    return 0LL;
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag((POOL_TYPE)-2147483647, 8uLL, 0x74536D4Du);
  if ( !PoolWithTag )
  {
    MiReturnPteMappingPair((__int64)v12);
    return 0LL;
  }
  LODWORD(v13[7]) |= 0x400000A0u;
  v13[20] = 0x100000008LL;
  v13[8] = a1;
  LOWORD(v13[19]) = v13[19] & 0xFFC1 | 0xC;
  v13[15] = (__int64)v13;
  v13[0] = (__int64)v14;
  MiInitializePrototypePtes((unsigned __int64)PoolWithTag, 1LL, &v13[15], 0);
  if ( (int)MiAllocateFileExtents((__int64)&v13[15], 0, (ULONG_PTR)PoolWithTag, 1, 1) >= 0 )
  {
    v7 = MI_READ_PTE_LOCK_FREE(PoolWithTag);
    v8 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(48 * ((v7 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL)) >> 8) & 0x3FF);
    HIDWORD(v13[7]) ^= v9 & (HIDWORD(v13[7]) ^ *(unsigned __int16 *)v8);
    PteFromCopyList = (__int64)MiGetPteFromCopyList(v12, a2, v10);
    KeCopyPage(PteFromCopyList << 25 >> 16, (PteFromCopyList << 25 >> 16) + 4096);
    *(_QWORD *)PteFromCopyList = 0LL;
    if ( MiPteInShadowRange(PteFromCopyList) )
      MiWritePteShadow(PteFromCopyList, 0LL);
    *(_QWORD *)(PteFromCopyList + 8) = 0LL;
    if ( MiPteInShadowRange(PteFromCopyList + 8) )
      MiWritePteShadow(PteFromCopyList + 8, 0LL);
    MiDeleteSegmentPages(v13);
    v2 = 1;
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  MiReturnPteMappingPair((__int64)v12);
  return v2;
}
