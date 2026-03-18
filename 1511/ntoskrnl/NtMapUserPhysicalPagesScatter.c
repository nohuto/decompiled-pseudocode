/*
 * XREFs of NtMapUserPhysicalPagesScatter @ 0x140628474
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireAutoExpandPushLockShared @ 0x140020390 (ExAcquireAutoExpandPushLockShared.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x1400C8A30 (ExReleaseAutoExpandPushLockShared.c)
 *     MiInitializeTbFlushList @ 0x1400E2A4C (MiInitializeTbFlushList.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401CE7C4 (MI_GET_PFN_FROM_PTE.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1401D1940 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiLocatePhysicalViewInTree @ 0x1401DF40C (MiLocatePhysicalViewInTree.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiCaptureUlongPtrArray @ 0x140626A20 (MiCaptureUlongPtrArray.c)
 */

NTSTATUS __stdcall NtMapUserPhysicalPagesScatter(
        PVOID *VirtualAddresses,
        ULONG_PTR NumberOfPages,
        PULONG_PTR UserPfnArray)
{
  unsigned __int64 *v7; // r12
  ULONG_PTR v8; // rdi
  unsigned __int64 *v9; // r15
  SIZE_T v10; // rdx
  unsigned __int64 *v11; // rbp
  NTSTATUS v12; // esi
  _QWORD *v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r10
  unsigned __int64 *v16; // r14
  char v17; // dl
  unsigned __int64 v18; // rdi
  __int64 v19; // r9
  unsigned __int64 *v20; // rax
  unsigned __int64 v21; // r11
  __int64 v22; // r8
  _QWORD *PhysicalViewInTree; // rax
  unsigned __int64 v24; // r11
  __int64 v25; // rax
  unsigned __int64 *v26; // rbp
  unsigned __int64 *v27; // r13
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r9
  __int64 v30; // rcx
  const signed __int64 *v31; // r8
  bool v32; // cf
  __int64 v33; // rdx
  unsigned __int64 *v34; // rdx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // r13
  unsigned __int64 *v37; // r14
  __int64 v38; // rbx
  unsigned __int64 v39; // rbp
  volatile __int64 *v40; // rax
  unsigned __int64 *v41; // r14
  unsigned __int64 v42; // rbx
  volatile __int64 *PteAddress; // rax
  _KPROCESS *v44; // rdx
  unsigned __int64 *v45; // [rsp+20h] [rbp-2158h]
  __int64 v46; // [rsp+20h] [rbp-2158h]
  __int64 BugCheckParameter2; // [rsp+28h] [rbp-2150h]
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-2148h]
  unsigned __int64 *v49; // [rsp+38h] [rbp-2140h]
  const signed __int64 *v50; // [rsp+38h] [rbp-2140h]
  unsigned __int64 *PoolWithTag; // [rsp+40h] [rbp-2138h]
  __int64 v52; // [rsp+48h] [rbp-2130h] BYREF
  unsigned __int64 *v53; // [rsp+50h] [rbp-2128h]
  unsigned __int64 v54; // [rsp+58h] [rbp-2120h]
  unsigned __int64 v55; // [rsp+60h] [rbp-2118h]
  _BYTE v56[192]; // [rsp+70h] [rbp-2108h] BYREF
  _BYTE P[4096]; // [rsp+130h] [rbp-2048h] BYREF
  char v58; // [rsp+1130h] [rbp-1048h] BYREF

  if ( NumberOfPages > 0xFFFFFFFFFFFFFLL )
    return -1073741584;
  v7 = (unsigned __int64 *)P;
  v8 = NumberOfPages;
  v9 = (unsigned __int64 *)&v58;
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
    goto LABEL_59;
  if ( !NumberOfPages )
    return 0;
  if ( UserPfnArray )
  {
    if ( NumberOfPages > 0x200 )
      v9 = &v7[v8];
    v12 = MiCaptureUlongPtrArray(v9, (char *)UserPfnArray, NumberOfPages);
    if ( v12 < 0 )
      goto LABEL_59;
  }
  v13 = 0LL;
  v53 = &v9[v8];
  CurrentThread = KeGetCurrentThread();
  MiInitializeTbFlushList((__int64)v56, 1, 20);
  v12 = 0;
  v16 = v9;
  v45 = &v7[v8];
  v18 = qword_140381320 & 0xFFFFFFFFFFFFFF7FuLL | ((unsigned __int64)(unsigned __int8)(v17 & HIBYTE(word_1402FE760)) << 8) | 0xFFFFFFFFF067LL;
  v20 = *(unsigned __int64 **)(v19 + 1032);
  v49 = v20;
  if ( !v20 )
  {
LABEL_58:
    v12 = -1073741585;
    goto LABEL_59;
  }
  --*(_WORD *)(v15 + 486);
  BugCheckParameter2 = ExAcquireAutoExpandPushLockShared((ULONG_PTR)(v20 + 2), 0LL, v14);
  do
  {
    v21 = *v11;
    if ( !v13
      || (v22 = v13[3],
          v21 < (*(unsigned int *)(v22 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 32) << 32)) << 12)
      || v21 > (((*(unsigned int *)(v22 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 33) << 32)) << 12) | 0xFFF) )
    {
      PhysicalViewInTree = MiLocatePhysicalViewInTree(v21 >> 12, v49 + 4);
      v13 = PhysicalViewInTree;
      if ( !PhysicalViewInTree
        || (v25 = PhysicalViewInTree[3],
            v24 < (*(unsigned int *)(v25 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v25 + 32) << 32)) << 12)
        || v24 > (((*(unsigned int *)(v25 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v25 + 33) << 32)) << 12) | 0xFFF) )
      {
        ExReleaseAutoExpandPushLockShared(BugCheckParameter2, 0LL);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        goto LABEL_58;
      }
    }
    ++v11;
  }
  while ( v11 < v45 );
  v26 = v7;
  if ( !UserPfnArray )
  {
    do
    {
      v42 = *v26;
      PteAddress = (volatile __int64 *)MiGetPteAddress(*v26);
      v52 = MI_INTERLOCKED_EXCHANGE_PTE(PteAddress, ZeroPte);
      if ( (v52 & 1) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(MI_GET_PFN_FROM_PTE((__int64)&v52) + 8), 0LL);
        MiInsertTbFlushEntry((__int64)v56, v42 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0);
      }
      ++v26;
    }
    while ( v26 < v45 );
LABEL_56:
    v7 = PoolWithTag;
    ExReleaseAutoExpandPushLockShared(BugCheckParameter2, 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    MiFlushTbList((__int64)v56, v44);
    goto LABEL_59;
  }
  v27 = v9;
  v28 = (unsigned __int64)qword_1402FE750 >> 3;
  v29 = *v49;
  v30 = (char *)v53 - (char *)v9;
  v31 = (const signed __int64 *)v49[1];
  v54 = *v49;
  v50 = v31;
  v55 = (unsigned __int64)qword_1402FE750 >> 3;
  while ( 2 )
  {
    if ( v16 == v27 )
    {
      v32 = v28 < v30 >> 3;
      v33 = v28;
      if ( !v32 )
        v33 = v30 >> 3;
      v34 = &v27[v33];
      do
      {
        if ( *v27 )
          _m_prefetchw((const void *)(48 * *v27 - 0x57FFFFFFFF8LL));
        ++v27;
      }
      while ( v27 < v34 );
    }
    v35 = *v16;
    v30 -= 8LL;
    ++v16;
    v46 = v30;
    if ( !v35 )
    {
LABEL_38:
      v28 = v55;
      ++v26;
      if ( v16 >= v53 )
      {
        v36 = (unsigned __int64)v53;
        v37 = v7;
        do
        {
          v38 = *v9;
          if ( *v9 )
            v38 = v18 ^ (v18 ^ (v38 << 12)) & 0xFFFFFFFFF000LL;
          v39 = *v37++;
          v40 = (volatile __int64 *)MiGetPteAddress(v39);
          v52 = MI_INTERLOCKED_EXCHANGE_PTE(v40, v38);
          if ( (v52 & 1) != 0 )
          {
            _InterlockedAnd64(
              (volatile signed __int64 *)(48 * MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v52) - 0x57FFFFFFFF8LL),
              0LL);
            MiInsertTbFlushEntry((__int64)v56, v39 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0);
          }
          ++v9;
        }
        while ( (unsigned __int64)v9 < v36 );
        goto LABEL_56;
      }
      continue;
    }
    break;
  }
  if ( v35 < v29 && _bittest64(v31, v35) )
  {
    if ( _InterlockedCompareExchange64(
           (volatile signed __int64 *)(48 * v35 - 0x58000000000LL + 8),
           MiGetPteAddress(*v26),
           0LL) )
    {
      v12 = -1073741583;
      goto LABEL_48;
    }
    v30 = v46;
    v31 = v50;
    v29 = v54;
    goto LABEL_38;
  }
  v12 = -1073741800;
LABEL_48:
  v41 = v16 - 1;
  while ( v41 > v9 )
  {
    if ( *--v41 )
      _InterlockedAnd64((volatile signed __int64 *)(48 * *v41 - 0x57FFFFFFFF8LL), 0LL);
  }
  ExReleaseAutoExpandPushLockShared(BugCheckParameter2, 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
LABEL_59:
  if ( v7 != (unsigned __int64 *)P )
    ExFreePoolWithTag(v7, 0);
  return v12;
}
