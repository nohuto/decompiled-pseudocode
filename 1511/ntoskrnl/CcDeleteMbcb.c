/*
 * XREFs of CcDeleteMbcb @ 0x14000D6AC
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x14000D140 (CcDeleteSharedCacheMap.c)
 *     CcSetFileSizesEx @ 0x1400AED28 (CcSetFileSizesEx.c)
 * Callees:
 *     CcDeallocateBcb @ 0x14000D7C8 (CcDeallocateBcb.c)
 *     CcDeductDirtyPages @ 0x14000E4E0 (CcDeductDirtyPages.c)
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     ExFreeToNPagedLookasideList @ 0x140079F84 (ExFreeToNPagedLookasideList.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeleteMbcb(__int64 a1)
{
  struct _FAST_MUTEX *v2; // rsi
  unsigned __int64 v3; // rdi
  KIRQL v4; // bl
  PVOID ***v5; // r15
  PVOID **v6; // rbx
  PVOID *v7; // rcx
  PVOID ***v8; // rax
  PVOID *v9; // rdx
  PVOID v10; // rcx
  PVOID **v11; // rax
  PVOID *v12; // rax
  PVOID P; // [rsp+20h] [rbp-10h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-8h]

  p_P = &P;
  v2 = (struct _FAST_MUTEX *)(a1 + 280);
  P = &P;
  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 280));
  v3 = *(_QWORD *)(a1 + 160);
  if ( v3 )
  {
    v4 = KeAcquireQueuedSpinLock(5uLL);
    CcDeductDirtyPages(a1, *(unsigned int *)(v3 + 8));
    KeReleaseQueuedSpinLock(5uLL, v4);
    v5 = (PVOID ***)(v3 + 16);
    while ( *v5 != (PVOID **)v5 )
    {
      v6 = *v5;
      v7 = **v5;
      v8 = (PVOID ***)(*v5)[1];
      if ( v7[1] != *v5 || *v8 != v6 )
        __fastfail(3u);
      *v8 = (PVOID **)v7;
      v7[1] = v8;
      v9 = v6[5];
      if ( v9 && v9 != (PVOID *)(v3 + 96) )
        ExFreeToNPagedLookasideList(&CcBitmapLookasideList, v9);
      if ( (unsigned __int64)v6 < v3 || (unsigned __int64)v6 >= v3 + 192 )
      {
        v11 = (PVOID **)p_P;
        *v6 = &P;
        v6[1] = (PVOID *)v11;
        if ( *v11 != &P )
          __fastfail(3u);
        *v11 = (PVOID *)v6;
        p_P = (PVOID *)v6;
      }
    }
    *(_QWORD *)(a1 + 160) = 0LL;
    KeReleaseGuardedMutex(v2);
    while ( 1 )
    {
      v10 = P;
      if ( P == &P )
        break;
      v12 = *(PVOID **)P;
      if ( *((PVOID **)P + 1) != &P || v12[1] != P )
        __fastfail(3u);
      P = *(PVOID *)P;
      v12[1] = &P;
      ExFreePoolWithTag(v10, 0);
    }
    CcDeallocateBcb(v3);
  }
  else
  {
    KeReleaseGuardedMutex(v2);
  }
}
