/*
 * XREFs of NtMapUserPhysicalPagesScatter @ 0x14065DC8C
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x14008B5C0 (ExReleaseAutoExpandPushLockShared.c)
 *     MiInitializeTbFlushList @ 0x1400B3858 (MiInitializeTbFlushList.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x1400C55E0 (ExAcquireAutoExpandPushLockShared.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1401E1924 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiLocatePhysicalViewInTree @ 0x1401EFF88 (MiLocatePhysicalViewInTree.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiCaptureUlongPtrArray @ 0x14065C2C4 (MiCaptureUlongPtrArray.c)
 */

NTSTATUS __stdcall NtMapUserPhysicalPagesScatter(
        PVOID *VirtualAddresses,
        ULONG_PTR NumberOfPages,
        PULONG_PTR UserPfnArray)
{
  unsigned __int64 *v7; // rbp
  ULONG_PTR v8; // r12
  unsigned __int64 *v9; // r14
  SIZE_T v10; // rdx
  unsigned __int64 *v11; // r15
  NTSTATUS v12; // edi
  __int64 v13; // r10
  unsigned __int64 *v14; // rax
  __int64 v15; // r9
  unsigned __int64 *v16; // r12
  unsigned __int64 *v17; // rsi
  __int64 v18; // rax
  _QWORD *v19; // r8
  unsigned __int64 v20; // r11
  __int64 v21; // r9
  _QWORD *PhysicalViewInTree; // rax
  unsigned __int64 v23; // r11
  __int64 v24; // rax
  unsigned __int64 *v25; // r15
  unsigned __int64 *v26; // r9
  unsigned __int64 v27; // r13
  const signed __int64 *v28; // r12
  unsigned __int64 v29; // r11
  __int64 v30; // r10
  unsigned __int64 *v31; // rdx
  unsigned __int64 v32; // rax
  signed __int64 v33; // rax
  __int64 v34; // r8
  unsigned __int64 *v35; // rsi
  unsigned __int64 v36; // r10
  volatile __int64 *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r10
  unsigned __int64 *v40; // rsi
  unsigned __int64 v41; // rbp
  volatile __int64 *PteAddress; // rax
  __int64 v43; // r10
  _KPROCESS *v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-2148h]
  struct _KTHREAD *CurrentThread; // [rsp+28h] [rbp-2140h]
  unsigned __int64 *v49; // [rsp+30h] [rbp-2138h]
  __int64 v50; // [rsp+38h] [rbp-2130h] BYREF
  unsigned __int64 v51; // [rsp+40h] [rbp-2128h]
  unsigned __int64 *PoolWithTag; // [rsp+48h] [rbp-2120h]
  _QWORD *v53; // [rsp+50h] [rbp-2118h]
  _BYTE v54[192]; // [rsp+60h] [rbp-2108h] BYREF
  _BYTE P[4096]; // [rsp+120h] [rbp-2048h] BYREF
  char v56; // [rsp+1120h] [rbp-1048h] BYREF

  if ( NumberOfPages > 0xFFFFFFFFFFFFFLL )
    return -1073741584;
  v7 = (unsigned __int64 *)P;
  v8 = NumberOfPages;
  v9 = (unsigned __int64 *)&v56;
  PoolWithTag = (unsigned __int64 *)P;
  v10 = 8 * NumberOfPages;
  if ( NumberOfPages > 0x200 )
  {
    if ( UserPfnArray )
      v10 *= 2LL;
    PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(PagedPool, v10, 0x77526D4Du);
    v7 = PoolWithTag;
    if ( !PoolWithTag )
      return -1073741670;
  }
  v11 = v7;
  v12 = MiCaptureUlongPtrArray(v7, (char *)VirtualAddresses, NumberOfPages);
  if ( v12 < 0 )
    goto LABEL_57;
  if ( !NumberOfPages )
    return 0;
  if ( UserPfnArray )
  {
    if ( NumberOfPages > 0x200 )
      v9 = &v7[v8];
    v12 = MiCaptureUlongPtrArray(v9, (char *)UserPfnArray, NumberOfPages);
    if ( v12 < 0 )
      goto LABEL_57;
  }
  v53 = 0LL;
  v49 = &v9[v8];
  CurrentThread = KeGetCurrentThread();
  MiInitializeTbFlushList((__int64)v54, 1, 20);
  v14 = &v7[v8];
  v16 = *(unsigned __int64 **)(v15 + 1032);
  v51 = (unsigned __int64)v14;
  v12 = 0;
  v17 = v9;
  if ( !v16 )
  {
LABEL_56:
    v12 = -1073741585;
    goto LABEL_57;
  }
  --*(_WORD *)(v13 + 486);
  v18 = ExAcquireAutoExpandPushLockShared((ULONG_PTR)(v16 + 2), 0LL);
  v19 = v53;
  BugCheckParameter2 = v18;
  do
  {
    v20 = *v11;
    if ( !v19
      || (v21 = v19[3],
          v20 < (*(unsigned int *)(v21 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 32) << 32)) << 12)
      || v20 > (((*(unsigned int *)(v21 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 33) << 32)) << 12) | 0xFFF) )
    {
      PhysicalViewInTree = MiLocatePhysicalViewInTree(v20 >> 12, v16 + 4);
      v19 = PhysicalViewInTree;
      if ( !PhysicalViewInTree
        || (v24 = PhysicalViewInTree[3],
            v23 < (*(unsigned int *)(v24 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 32) << 32)) << 12)
        || v23 > (((*(unsigned int *)(v24 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 33) << 32)) << 12) | 0xFFF) )
      {
        ExReleaseAutoExpandPushLockShared(BugCheckParameter2, 0LL);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        goto LABEL_56;
      }
    }
    ++v11;
  }
  while ( (unsigned __int64)v11 < v51 );
  v25 = v7;
  if ( !UserPfnArray )
  {
    v41 = v51;
    do
    {
      PteAddress = (volatile __int64 *)MiGetPteAddress(*v25);
      v50 = MI_INTERLOCKED_EXCHANGE_PTE(PteAddress, ZeroPte);
      if ( (v50 & 1) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(MI_GET_PFN_FROM_PTE((__int64)&v50) + 8), 0LL);
        MiInsertTbFlushEntry((__int64)v54, v43 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0);
      }
      ++v25;
    }
    while ( (unsigned __int64)v25 < v41 );
    v7 = PoolWithTag;
LABEL_54:
    ExReleaseAutoExpandPushLockShared(BugCheckParameter2, 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    MiFlushTbList((__int64)v54, v44, v45, v46);
    goto LABEL_57;
  }
  v26 = v9;
  v27 = *v16;
  v28 = (const signed __int64 *)v16[1];
  v29 = (unsigned __int64)qword_140326AC8 >> 3;
  v30 = (char *)v49 - (char *)v9;
  while ( 2 )
  {
    if ( v17 == v26 )
    {
      v31 = &v26[v29];
      if ( v29 >= v30 >> 3 )
        v31 = &v26[v30 >> 3];
      do
      {
        if ( *v26 )
          _m_prefetchw((const void *)(48 * *v26 - 0x57FFFFFFFF8LL));
        ++v26;
      }
      while ( v26 < v31 );
    }
    v32 = *v17;
    v30 -= 8LL;
    ++v17;
    if ( !v32 )
    {
LABEL_36:
      ++v25;
      if ( v17 >= v49 )
      {
        v35 = v7;
        do
        {
          v36 = *v35++;
          v37 = (volatile __int64 *)MiGetPteAddress(v36);
          v50 = MI_INTERLOCKED_EXCHANGE_PTE(v37, v38);
          if ( (v50 & 1) != 0 )
          {
            _InterlockedAnd64(
              (volatile signed __int64 *)(48 * MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v50) - 0x57FFFFFFFF8LL),
              0LL);
            MiInsertTbFlushEntry((__int64)v54, v39 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0);
          }
          ++v9;
        }
        while ( v9 < v49 );
        goto LABEL_54;
      }
      continue;
    }
    break;
  }
  if ( v32 < v27 && _bittest64(v28, v32) )
  {
    v33 = MiGetPteAddress(*v25);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v34 + 8), v33, 0LL) )
    {
      v12 = -1073741583;
      goto LABEL_44;
    }
    goto LABEL_36;
  }
  v12 = -1073741800;
LABEL_44:
  v40 = v17 - 1;
  while ( v40 > v9 )
  {
    if ( *--v40 )
      _InterlockedAnd64((volatile signed __int64 *)(48 * *v40 - 0x57FFFFFFFF8LL), 0LL);
  }
  ExReleaseAutoExpandPushLockShared(BugCheckParameter2, 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
LABEL_57:
  if ( v7 != (unsigned __int64 *)P )
    ExFreePoolWithTag(v7, 0);
  return v12;
}
