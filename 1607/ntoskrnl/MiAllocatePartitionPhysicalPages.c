/*
 * XREFs of MiAllocatePartitionPhysicalPages @ 0x1401F0E04
 * Callers:
 *     MiManagePartition @ 0x140660A88 (MiManagePartition.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x1400996F8 (MiFreePagesFromMdl.c)
 *     MiAllocatePagesForMdl @ 0x140101FA4 (MiAllocatePagesForMdl.c)
 *     MiReleaseNonPagedResources @ 0x14013F08C (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x1401E1950 (MiAcquireNonPagedResources.c)
 *     MiFindLargeNodePage @ 0x1401E314C (MiFindLargeNodePage.c)
 *     MiAddMdlToPartitionTree @ 0x1401F0B10 (MiAddMdlToPartitionTree.c)
 *     MiAddRangeToPartitionTree @ 0x1401F0BB8 (MiAddRangeToPartitionTree.c)
 *     MiFreePartitionPageRun @ 0x1401F184C (MiFreePartitionPageRun.c)
 *     MiFreePartitionTree @ 0x1401F18AC (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x1401F19A0 (MiInsertPartitionPages.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x140661218 (MiUpdatePartitionLargePfnBitMap.c)
 */

__int64 __fastcall MiAllocatePartitionPhysicalPages(int *a1, __int64 a2, unsigned __int64 a3, unsigned int a4, BOOL a5)
{
  int *v5; // r14
  int v6; // r12d
  unsigned int v7; // r15d
  __int64 v9; // rdi
  unsigned __int64 v11; // rax
  _BOOL8 v12; // r13
  unsigned __int64 v13; // rbx
  unsigned __int64 LargeNodePage; // r8
  __int64 v15; // r15
  BOOL v16; // r13d
  int v17; // r12d
  unsigned __int16 v18; // r13
  __int64 v19; // rax
  unsigned int *PagesForMdl; // rax
  unsigned int *v21; // r15
  unsigned __int64 v22; // rbx
  __int64 v23; // rdi
  int updated; // ebx
  unsigned __int64 *v25; // [rsp+40h] [rbp-20h] BYREF
  __int128 v26; // [rsp+48h] [rbp-18h]
  int v27; // [rsp+58h] [rbp-8h]
  unsigned __int64 v28; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v29; // [rsp+A8h] [rbp+48h]
  unsigned int v30; // [rsp+B8h] [rbp+58h]

  v30 = a4;
  v29 = a2;
  v28 = 0LL;
  v5 = MiSystemPartition;
  v6 = 32865;
  v7 = a4;
  if ( a1 )
    v5 = a1;
  if ( !a5 )
    v6 = 32867;
  v9 = 0LL;
  if ( !(unsigned int)MiAcquireNonPagedResources(v5, a3) )
    return 3221225626LL;
  while ( 1 )
  {
    v11 = a3 - v9;
    if ( a3 - v9 < 0x200 )
      break;
    v12 = v11 < 0x40000;
    a5 = v11 < 0x40000;
    v13 = MiLargePageSizes[v12];
    LargeNodePage = MiFindLargeNodePage((__int64)v5, v7, (unsigned int *)&a5, v6 | 0x108000u, 1);
    if ( !LargeNodePage )
      break;
    v15 = (__int64)(LargeNodePage + 0x58000000000LL) / 48;
    if ( a5 != v12 )
      v13 = MiLargePageSizes[a5];
    v16 = *(_QWORD *)(LargeNodePage + 16) == 0LL;
    if ( !(unsigned int)MiAddRangeToPartitionTree(&v28, (__int64)(LargeNodePage + 0x58000000000LL) / 48, v13, v16) )
    {
      MiFreePartitionPageRun(v5, v15, v13, v16);
      break;
    }
    if ( v5 == MiSystemPartition )
      _InterlockedExchangeAdd64(&qword_140327928, v13);
    v9 += v13;
    if ( v9 == a3 )
      goto LABEL_19;
    v7 = v30;
  }
  if ( v9 != a3 )
    MiReleaseNonPagedResources((__int64)v5, a3 - v9);
LABEL_19:
  v17 = v6 & 3 | 0x10;
  if ( v9 != a3 )
  {
    v18 = v30;
    while ( 1 )
    {
      v19 = a3 - v9;
      if ( a3 - v9 > 0xFFFFE )
        v19 = 1048574LL;
      PagesForMdl = (unsigned int *)MiAllocatePagesForMdl(
                                      (__int64)v5,
                                      0LL,
                                      0xFFFFFFFFFFFFFFFFuLL,
                                      0LL,
                                      v19 << 12,
                                      1u,
                                      v18,
                                      v17);
      v21 = PagesForMdl;
      if ( !PagesForMdl )
        break;
      if ( !(unsigned int)MiAddMdlToPartitionTree((__int64)&v28, (__int64)PagesForMdl) )
      {
        MiFreePagesFromMdl((ULONG_PTR)v21, 0);
        break;
      }
      v22 = (unsigned __int64)v21[10] >> 12;
      ExFreePoolWithTag(v21, 0);
      v9 += v22;
      if ( v9 == a3 )
        goto LABEL_26;
    }
    updated = -1073741670;
    goto LABEL_30;
  }
LABEL_26:
  v23 = v29;
  updated = MiUpdatePartitionLargePfnBitMap(v29, &v28);
  if ( updated < 0 )
  {
LABEL_30:
    MiFreePartitionTree(v5, &v28, 1LL);
    return (unsigned int)updated;
  }
  v27 = 1;
  v25 = &v28;
  v26 = 0LL;
  MiInsertPartitionPages(v5, v23, &v25);
  return (unsigned int)updated;
}
