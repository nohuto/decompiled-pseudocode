/*
 * XREFs of NtMapUserPhysicalPages @ 0x140627FF0
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

NTSTATUS __stdcall NtMapUserPhysicalPages(PVOID VirtualAddresses, ULONG_PTR NumberOfPages, PULONG_PTR UserPfnArray)
{
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r13
  unsigned __int64 *v8; // r14
  unsigned __int64 *v9; // rdi
  NTSTATUS v10; // r14d
  volatile __int64 *PteAddress; // r15
  unsigned __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r10
  __int64 v15; // r9
  __int64 v16; // rax
  _QWORD *PhysicalViewInTree; // rax
  unsigned __int64 *v18; // r11
  __int64 v19; // rdx
  unsigned __int64 v20; // r13
  const signed __int64 *v21; // r10
  unsigned __int64 *v22; // rdx
  ULONG_PTR v23; // r11
  unsigned __int64 v24; // r9
  unsigned __int64 *v25; // r12
  __int64 v26; // r8
  unsigned __int64 *v27; // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 *v29; // r14
  volatile __int64 *v30; // r15
  NTSTATUS v31; // ebx
  volatile __int64 *v32; // rbx
  _KPROCESS *v33; // rdx
  unsigned __int64 *PoolWithTag; // [rsp+20h] [rbp-E0h]
  __int64 v35; // [rsp+28h] [rbp-D8h] BYREF
  ULONG_PTR v36; // [rsp+30h] [rbp-D0h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-C8h]
  volatile __int64 *v38; // [rsp+40h] [rbp-C0h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-B8h]
  __int64 v40; // [rsp+50h] [rbp-B0h]
  _BYTE v41[192]; // [rsp+60h] [rbp-A0h] BYREF
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
  v36 = 8 * NumberOfPages;
  PteAddress = (volatile __int64 *)MiGetPteAddress(v6);
  v38 = &PteAddress[NumberOfPages];
  CurrentThread = KeGetCurrentThread();
  v12 = qword_140381320 & 0xFFFFFFFFFFFFFF7FuLL | ((unsigned __int64)(HIBYTE(word_1402FE760) & 1) << 8) | 0xFFFFFFFFF067LL;
  MiInitializeTbFlushList((__int64)v41, 1, 20);
  v16 = *(_QWORD *)(v15 + 1032);
  v40 = v16;
  if ( v16 )
  {
    --*(_WORD *)(v14 + 486);
    BugCheckParameter2 = ExAcquireAutoExpandPushLockShared(v16 + 16, 0LL, v13);
    PhysicalViewInTree = MiLocatePhysicalViewInTree(v6 >> 12, (_QWORD *)(v40 + 32));
    if ( PhysicalViewInTree
      && (v19 = PhysicalViewInTree[3],
          v6 >= (*(unsigned int *)(v19 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32)) << 12)
      && v7 <= (((*(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32)) << 12) | 0xFFF) )
    {
      if ( !UserPfnArray )
      {
        v32 = v38;
        while ( PteAddress < v32 )
        {
          v35 = MI_INTERLOCKED_EXCHANGE_PTE(PteAddress, ZeroPte);
          if ( (v35 & 1) != 0 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(MI_GET_PFN_FROM_PTE((__int64)&v35) + 8), 0LL);
            MiInsertTbFlushEntry((__int64)v41, v6, 1LL, 0);
          }
          v6 += 4096LL;
          ++PteAddress;
        }
LABEL_49:
        ExReleaseAutoExpandPushLockShared(BugCheckParameter2, 0LL);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        MiFlushTbList((__int64)v41, v33);
        if ( v9 != (unsigned __int64 *)P )
          ExFreePoolWithTag(v9, 0);
        return 0;
      }
      v20 = *v18;
      v21 = (const signed __int64 *)v18[1];
      v22 = v8;
      v23 = v36;
      v24 = (unsigned __int64)qword_1402FE750 >> 3;
      v36 = 0x57FFFFFFFF8LL;
      v25 = (unsigned __int64 *)((char *)v9 + v23);
      v26 = (char *)v9 + v23 - (char *)v8;
      while ( 1 )
      {
        if ( v8 == v22 )
        {
          v27 = &v22[v24];
          if ( v24 >= v26 >> 3 )
            v27 = &v22[v26 >> 3];
          do
          {
            if ( *v22 )
              _m_prefetchw((const void *)(48 * *v22 - v36));
            ++v22;
          }
          while ( v22 < v27 );
        }
        v28 = *v8;
        if ( *v8 >= v20 || !_bittest64(v21, v28) )
          break;
        if ( _InterlockedCompareExchange64(
               (volatile signed __int64 *)(48 * v28 - 0x58000000000LL + 8),
               (signed __int64)PteAddress,
               0LL) )
        {
          v31 = -1073741583;
          goto LABEL_41;
        }
        ++PteAddress;
        ++v8;
        v26 -= 8LL;
        if ( v8 >= v25 )
        {
          v29 = v9;
          v30 = (volatile __int64 *)((char *)PteAddress - v23);
          do
          {
            v12 ^= (v12 ^ (*v29 << 12)) & 0xFFFFFFFFF000LL;
            v35 = MI_INTERLOCKED_EXCHANGE_PTE(v30, v12);
            if ( (v35 & 1) != 0 )
            {
              _InterlockedAnd64(
                (volatile signed __int64 *)(48 * MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v35) - 0x57FFFFFFFF8LL),
                0LL);
              MiInsertTbFlushEntry((__int64)v41, v6, 1LL, 0);
            }
            v6 += 4096LL;
            ++v30;
            ++v29;
          }
          while ( v29 < v25 );
          v9 = PoolWithTag;
          goto LABEL_49;
        }
      }
      v31 = -1073741800;
LABEL_41:
      while ( v8 > v9 )
        _InterlockedAnd64((volatile signed __int64 *)(48 * *--v8 - 0x57FFFFFFFF8LL), 0LL);
    }
    else
    {
      v31 = -1073741585;
    }
    ExReleaseAutoExpandPushLockShared(BugCheckParameter2, 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    if ( v9 != (unsigned __int64 *)P )
      ExFreePoolWithTag(v9, 0);
    return v31;
  }
  else
  {
    if ( v9 != (unsigned __int64 *)P )
      ExFreePoolWithTag(v9, 0);
    return -1073741585;
  }
}
