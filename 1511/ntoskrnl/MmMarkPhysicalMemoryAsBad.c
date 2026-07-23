/*
 * XREFs of MmMarkPhysicalMemoryAsBad @ 0x1401D2094
 * Callers:
 *     WheapAttemptPhysicalPageOffline @ 0x140678118 (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiInsertPageInList @ 0x14003DC20 (MiInsertPageInList.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiDereferencePartition @ 0x1400BC1D4 (MiDereferencePartition.c)
 *     MiFindContiguousPages @ 0x1400BE4E0 (MiFindContiguousPages.c)
 *     MiFreeContiguousPages @ 0x1400C1F6C (MiFreeContiguousPages.c)
 *     MiAcquireNonPagedResources @ 0x1400E8A40 (MiAcquireNonPagedResources.c)
 *     MiReleaseNonPagedResources @ 0x1400E9D1C (MiReleaseNonPagedResources.c)
 *     ZwUpdateWnfStateData @ 0x140153CA0 (ZwUpdateWnfStateData.c)
 *     MiReferencePagePartition @ 0x1401D984C (MiReferencePagePartition.c)
 */

__int64 __fastcall MmMarkPhysicalMemoryAsBad(__int64 *a1, __int64 *a2)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // r12
  unsigned __int64 v5; // rbp
  int v6; // r15d
  unsigned int v7; // r14d
  unsigned int v8; // r13d
  __int64 v9; // rbx
  volatile signed __int64 *v10; // rsi
  unsigned __int8 v11; // r15
  int *v12; // rbp
  unsigned __int8 v13; // r8
  char v14; // al
  char v15; // al
  int ContiguousPages; // r15d
  unsigned __int8 v17; // al
  int v18; // [rsp+50h] [rbp-58h]
  unsigned int v19; // [rsp+54h] [rbp-54h]
  unsigned __int64 v20; // [rsp+58h] [rbp-50h]
  unsigned __int64 v21[9]; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int8 v23; // [rsp+C0h] [rbp+18h]
  int v24; // [rsp+C8h] [rbp+20h]

  if ( !MmPhysicalMemoryBlock )
    return 3221225474LL;
  v3 = *a1 >> 12;
  v4 = *a2 >> 12;
  v20 = v4 + v3;
  if ( v3 >= v4 + v3 )
    return 3221225711LL;
  v5 = v4 + v3;
  v6 = 203423744;
  v18 = 0;
  if ( (*(_BYTE *)a1 & 1) == 0 )
    v6 = 471859200;
  v7 = 0;
  v8 = 0;
  v9 = 48 * v3 - 0x58000000000LL;
  v19 = v6;
  v10 = (volatile signed __int64 *)(v9 + 24);
  while ( !MI_IS_PFN(v3) )
  {
    v7 = -1073741584;
LABEL_37:
    ++v3;
    v9 += 48LL;
    v10 += 6;
    if ( v3 >= v5 )
      goto LABEL_42;
  }
  v11 = MiLockPageInline(v9);
  if ( (*(_QWORD *)(v9 + 40) & 0x10000000000000LL) != 0 )
  {
    _InterlockedAnd64(v10, 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v11);
    v7 = -1073741584;
    goto LABEL_37;
  }
  v12 = (int *)MiReferencePagePartition(v9);
  if ( !v12 )
  {
    _InterlockedAnd64(v10, 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v11);
    v5 = v20;
    v7 = -1073741558;
    goto LABEL_37;
  }
  _InterlockedAnd64(v10, 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v11);
  if ( (unsigned int)MiAcquireNonPagedResources(v12, 1uLL) )
  {
    MiLockPageInline(v9);
    if ( MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v9 + 40)) >> 8) & 0x3FF) != v12 )
    {
      _InterlockedAnd64(v10, 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v13);
      MiReleaseNonPagedResources((__int64)v12, 1uLL);
      MiDereferencePartition(v12);
      --v3;
      v9 -= 48LL;
      v10 -= 6;
LABEL_36:
      v5 = v20;
      goto LABEL_37;
    }
    if ( (v19 & 0x10000000) != 0 )
    {
      v14 = *(_BYTE *)(v9 + 35);
      if ( v14 >= 0 )
        *(_BYTE *)(v9 + 35) = v14 | 0x80;
    }
    v15 = *(_BYTE *)(v9 + 35);
    if ( (v15 & 0x40) != 0 )
    {
      _InterlockedAnd64(v10, 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v13);
      MiReleaseNonPagedResources((__int64)v12, 1uLL);
      MiDereferencePartition(v12);
      v7 = 259;
      goto LABEL_36;
    }
    *(_BYTE *)(v9 + 35) = v15 | 0x40;
    _InterlockedAnd64(v10, 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v13);
    v24 = 0;
    ContiguousPages = MiFindContiguousPages(
                        (unsigned __int64)v12,
                        v3,
                        v3,
                        0LL,
                        1uLL,
                        1u,
                        0x80000000,
                        0x80000000,
                        v19,
                        v21);
    v7 = 0;
    v17 = MiLockPageInline(v9);
    v23 = v17;
    if ( ContiguousPages >= 0 )
    {
      if ( (*(_BYTE *)(v9 + 35) & 0x40) != 0 )
      {
        *(_WORD *)(v9 + 32) = 0;
        *(_QWORD *)(v9 + 40) &= 0xFFFFFFF000000000uLL;
        MiInsertPageInList(v9, 0x20u);
        _InterlockedAnd64(v10, 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v23);
      }
      else
      {
        _InterlockedAnd64(v10, 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v17);
        MiFreeContiguousPages((__int64)v12, v3, 1uLL);
      }
      goto LABEL_33;
    }
    if ( (*(_BYTE *)(v9 + 35) & 0x40) != 0 )
    {
      if ( (*(_QWORD *)(v9 + 8) | 0x8000000000000000uLL) != 0xFFFFFFFFFFFFFFFCuLL || (*(_BYTE *)(v9 + 34) & 7) != 5 )
      {
        byte_1402FED74 = 1;
        v7 = 259;
        v18 = 1;
      }
      ContiguousPages = 0;
    }
    else
    {
      v24 = 1;
    }
    _InterlockedAnd64(v10, 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v17);
    if ( v24 == 1 )
LABEL_33:
      MiReleaseNonPagedResources((__int64)v12, 1uLL);
    MiDereferencePartition(v12);
    if ( ContiguousPages == -1073741523 || ContiguousPages == -1073741670 )
    {
      v7 = ContiguousPages;
      v8 = ContiguousPages;
      goto LABEL_41;
    }
    goto LABEL_36;
  }
  v7 = -1073741523;
  v8 = -1073741523;
  MiDereferencePartition(v12);
LABEL_41:
  v5 = v20;
LABEL_42:
  if ( v18 == 1 )
    ZwUpdateWnfStateData(&WNF_MM_BAD_MEMORY_PENDING_REMOVAL, 0LL, 0, 0LL, 0LL, 0, 0);
  *a2 = (v3 + v4 - v5) << 12;
  if ( v4 == 1 )
    return v7;
  return v8;
}
