/*
 * XREFs of MiCopyDirectMapHeader @ 0x14065A9C4
 * Callers:
 *     MiCreateImageFileMap @ 0x140505A1C (MiCreateImageFileMap.c)
 * Callees:
 *     MiGetPteFromCopyList @ 0x140034700 (MiGetPteFromCopyList.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiDeleteSegmentPages @ 0x14008F7E0 (MiDeleteSegmentPages.c)
 *     MiCreatePteCopyList @ 0x140104EF8 (MiCreatePteCopyList.c)
 *     KeCopyPage @ 0x140162490 (KeCopyPage.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x1401F239C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiReturnPteMappingPair @ 0x1401FCA94 (MiReturnPteMappingPair.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiInitializePrototypePtes @ 0x1404A2E54 (MiInitializePrototypePtes.c)
 *     MiAllocateFileExtents @ 0x14065A430 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiCopyDirectMapHeader(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  char *PoolWithTag; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rax
  int *v11; // rax
  int v12; // r9d
  __int64 v13; // r8
  unsigned __int64 PteFromCopyList; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19[8]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v20[24]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v21[80]; // [rsp+118h] [rbp+10h] BYREF
  __int64 v22; // [rsp+198h] [rbp+90h] BYREF

  memset(v21, 0, 0x48uLL);
  memset(v20, 0, 0xB8uLL);
  MiCreatePteCopyList(2uLL, 2uLL, (unsigned __int64)v19);
  v4 = 0;
  if ( !v19[1] )
    return 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)-2147483647, 8uLL, 0x74536D4Du);
  if ( !PoolWithTag )
  {
    MiReturnPteMappingPair((__int64)v19);
    return 0LL;
  }
  LODWORD(v20[7]) |= 0x400000A0u;
  v20[21] = 0x100000008LL;
  v20[8] = a1;
  LOWORD(v20[20]) = v20[20] & 0xFFC1 | 0xC;
  v20[16] = (__int64)v20;
  v20[0] = (__int64)v21;
  MiInitializePrototypePtes(PoolWithTag, 1LL, (unsigned __int16 *)&v20[16], 0);
  if ( (int)MiAllocateFileExtents((__int64)&v20[16], 0, (unsigned __int64)PoolWithTag, 1, 1) >= 0 )
  {
    v22 = MI_READ_PTE_LOCK_FREE((unsigned __int64)PoolWithTag);
    v10 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v22, v7, v8, v9);
    v11 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(48 * v10 - 0x57FFFFFFFD8LL)) >> 8) & 0x3FF);
    HIDWORD(v20[7]) ^= v12 & (HIDWORD(v20[7]) ^ *(unsigned __int16 *)v11);
    PteFromCopyList = (unsigned __int64)MiGetPteFromCopyList(v19, a2, v13);
    KeCopyPage((__int64)(PteFromCopyList << 25) >> 16, ((__int64)(PteFromCopyList << 25) >> 16) + 4096);
    *(_QWORD *)PteFromCopyList = 0LL;
    if ( MiPteInShadowRange(PteFromCopyList) )
      MiWritePteShadow(v15, 0LL);
    *(_QWORD *)(PteFromCopyList + 8) = 0LL;
    if ( MiPteInShadowRange(PteFromCopyList + 8) )
      MiWritePteShadow(v17, 0LL);
    MiDeleteSegmentPages(v20, v16, v18);
    v4 = 1;
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  MiReturnPteMappingPair((__int64)v19);
  return v4;
}
