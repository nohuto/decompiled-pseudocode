/*
 * XREFs of NtMapUserPhysicalPages @ 0x14065D810
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

NTSTATUS __stdcall NtMapUserPhysicalPages(PVOID VirtualAddresses, ULONG_PTR NumberOfPages, PULONG_PTR UserPfnArray)
{
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r13
  unsigned __int64 *v8; // r14
  unsigned __int64 *v9; // rdi
  NTSTATUS v10; // r14d
  volatile __int64 *PteAddress; // r15
  __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  __int64 v14; // r10
  __int64 v15; // r9
  __int64 v16; // rax
  _QWORD *PhysicalViewInTree; // rax
  unsigned __int64 *v18; // r11
  __int64 v19; // rdx
  unsigned __int64 *v20; // rdx
  unsigned __int64 *v21; // r12
  unsigned __int64 v22; // r13
  const signed __int64 *v23; // r11
  unsigned __int64 v24; // r10
  __int64 v25; // r8
  unsigned __int64 *v26; // r9
  unsigned __int64 v27; // rax
  volatile __int64 *v28; // r15
  unsigned __int64 *v29; // r14
  NTSTATUS v30; // ebx
  unsigned __int64 v31; // rbx
  _KPROCESS *v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 *PoolWithTag; // [rsp+20h] [rbp-E0h]
  __int64 v36; // [rsp+28h] [rbp-D8h] BYREF
  ULONG_PTR v37; // [rsp+30h] [rbp-D0h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-C8h]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-C0h]
  char *v40; // [rsp+48h] [rbp-B8h]
  __int64 v41; // [rsp+50h] [rbp-B0h]
  _BYTE v42[192]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE P[8192]; // [rsp+120h] [rbp+20h] BYREF

  if ( NumberOfPages > 0xFFFFFFFFFFFFFLL )
    return -1073741584;
  v6 = (unsigned __int64)VirtualAddresses & 0xFFFFFFFFFFFFF000uLL;
  v7 = (NumberOfPages << 12) + ((unsigned __int64)VirtualAddresses & 0xFFFFFFFFFFFFF000uLL) - 1;
  if ( v7 <= ((unsigned __int64)VirtualAddresses & 0xFFFFFFFFFFFFF000uLL) )
    return -1073741584;
  v8 = 0LL;
  v9 = (unsigned __int64 *)P;
  PoolWithTag = (unsigned __int64 *)P;
  if ( UserPfnArray )
  {
    if ( !NumberOfPages )
      return 0;
    if ( NumberOfPages > 0x400 )
    {
      PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(PagedPool, 8 * NumberOfPages, 0x77526D4Du);
      v9 = PoolWithTag;
      if ( !PoolWithTag )
        return -1073741670;
    }
    v10 = MiCaptureUlongPtrArray(v9, (char *)UserPfnArray, NumberOfPages);
    if ( v10 < 0 )
    {
      if ( v9 != (unsigned __int64 *)P )
        ExFreePoolWithTag(v9, 0);
      return v10;
    }
    v8 = v9;
  }
  v37 = 8 * NumberOfPages;
  PteAddress = (volatile __int64 *)MiGetPteAddress(v6);
  v40 = (char *)PteAddress + v12;
  CurrentThread = KeGetCurrentThread();
  v13 = qword_1403A9360 & 0xFFFFFFFFFFFFFF7FuLL | ((unsigned __int64)(HIBYTE(word_140326AE8) & 1) << 8) | 0xFFFFFFFFF067LL;
  MiInitializeTbFlushList((__int64)v42, 1, 20);
  v16 = *(_QWORD *)(v15 + 1032);
  v41 = v16;
  if ( v16 )
  {
    --*(_WORD *)(v14 + 486);
    BugCheckParameter2 = ExAcquireAutoExpandPushLockShared(v16 + 16, 0LL);
    PhysicalViewInTree = MiLocatePhysicalViewInTree(v6 >> 12, (_QWORD *)(v41 + 32));
    if ( PhysicalViewInTree
      && (v19 = PhysicalViewInTree[3],
          v6 >= (*(unsigned int *)(v19 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32)) << 12)
      && v7 <= (((*(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32)) << 12) | 0xFFF) )
    {
      if ( !UserPfnArray )
      {
        v31 = (unsigned __int64)v40;
        while ( (unsigned __int64)PteAddress < v31 )
        {
          v36 = MI_INTERLOCKED_EXCHANGE_PTE(PteAddress, ZeroPte);
          if ( (v36 & 1) != 0 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(MI_GET_PFN_FROM_PTE((__int64)&v36) + 8), 0LL);
            MiInsertTbFlushEntry((__int64)v42, v6, 1LL, 0);
          }
          v6 += 4096LL;
          ++PteAddress;
        }
LABEL_50:
        ExReleaseAutoExpandPushLockShared(BugCheckParameter2, 0LL);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        MiFlushTbList((__int64)v42, v32, v33, v34);
        if ( v9 != (unsigned __int64 *)P )
          ExFreePoolWithTag(v9, 0);
        return 0;
      }
      v20 = v8;
      v21 = &v9[v37 / 8];
      v22 = *v18;
      v23 = (const signed __int64 *)v18[1];
      v24 = (unsigned __int64)qword_140326AC8 >> 3;
      v25 = (char *)&v9[v37 / 8] - (char *)v8;
      while ( 1 )
      {
        if ( v8 == v20 )
        {
          v26 = &v20[v24];
          if ( v24 >= v25 >> 3 )
            v26 = &v20[v25 >> 3];
          do
          {
            if ( *v20 )
              _m_prefetchw((const void *)(48 * *v20 - 0x57FFFFFFFF8LL));
            ++v20;
          }
          while ( v20 < v26 );
          v9 = PoolWithTag;
        }
        v27 = *v8;
        if ( *v8 >= v22 || !_bittest64(v23, v27) )
          break;
        if ( _InterlockedCompareExchange64(
               (volatile signed __int64 *)(48 * v27 - 0x58000000000LL + 8),
               (signed __int64)PteAddress,
               0LL) )
        {
          v30 = -1073741583;
          goto LABEL_42;
        }
        ++PteAddress;
        ++v8;
        v25 -= 8LL;
        if ( v8 >= v21 )
        {
          v28 = &PteAddress[v37 / 0xFFFFFFFFFFFFFFF8uLL];
          v29 = v9;
          do
          {
            v13 ^= (v13 ^ (*v29 << 12)) & 0xFFFFFFFFF000LL;
            v36 = MI_INTERLOCKED_EXCHANGE_PTE(v28, v13);
            if ( (v36 & 1) != 0 )
            {
              _InterlockedAnd64(
                (volatile signed __int64 *)(48 * MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v36) - 0x57FFFFFFFF8LL),
                0LL);
              MiInsertTbFlushEntry((__int64)v42, v6, 1LL, 0);
            }
            v6 += 4096LL;
            ++v28;
            ++v29;
          }
          while ( v29 < v21 );
          v9 = PoolWithTag;
          goto LABEL_50;
        }
      }
      v30 = -1073741800;
LABEL_42:
      while ( v8 > v9 )
        _InterlockedAnd64((volatile signed __int64 *)(48 * *--v8 - 0x57FFFFFFFF8LL), 0LL);
    }
    else
    {
      v30 = -1073741585;
    }
    ExReleaseAutoExpandPushLockShared(BugCheckParameter2, 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    if ( v9 != (unsigned __int64 *)P )
      ExFreePoolWithTag(v9, 0);
    return v30;
  }
  else
  {
    if ( v9 != (unsigned __int64 *)P )
      ExFreePoolWithTag(v9, 0);
    return -1073741585;
  }
}
