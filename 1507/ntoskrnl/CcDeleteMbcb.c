/*
 * XREFs of CcDeleteMbcb @ 0x1400F1CB4
 * Callers:
 *     CcSetFileSizesEx @ 0x140078B30 (CcSetFileSizesEx.c)
 *     CcDeleteSharedCacheMap @ 0x140086290 (CcDeleteSharedCacheMap.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     CcDeallocateBcb @ 0x1400F29AC (CcDeallocateBcb.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeleteMbcb(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v5; // rbx
  __int64 v6; // rdi
  unsigned __int8 CurrentIrql; // si
  unsigned __int8 v8; // al
  unsigned __int64 v9; // rsi
  KIRQL v10; // al
  __int64 v11; // rdx
  PVOID ***v12; // r15
  PVOID **v13; // rdi
  PVOID *v14; // rcx
  PVOID ***v15; // rax
  PVOID *v16; // rdx
  PVOID **v17; // rax
  unsigned __int8 v18; // di
  unsigned __int32 v19; // eax
  PVOID v20; // rcx
  PVOID *v21; // rax
  unsigned __int8 v22; // di
  unsigned __int32 v23; // eax
  PVOID P; // [rsp+30h] [rbp-10h] BYREF
  PVOID *p_P; // [rsp+38h] [rbp-8h]

  p_P = &P;
  v5 = a1 + 280;
  P = &P;
  v6 = KeAbPreAcquire(a1 + 280, 0LL, 0LL, a4);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v5, 0) )
    ExpAcquireFastMutexContended(v5);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  *(_QWORD *)(v5 + 8) = KeGetCurrentThread();
  v8 = CurrentIrql;
  *(_DWORD *)(v5 + 48) = CurrentIrql;
  v9 = *(_QWORD *)(a1 + 160);
  if ( v9 )
  {
    v10 = KeAcquireQueuedSpinLock(5uLL);
    v11 = *(unsigned int *)(v9 + 8);
    CcGlobalDirtyPageStatistics -= v11;
    if ( (_DWORD)v11 == -1 )
      KeBugCheckEx(0x34u, 0x1064uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *(_DWORD *)(a1 + 112) -= v11;
    *(_QWORD *)(*(_QWORD *)(a1 + 504) + 32LL) -= (unsigned int)v11;
    if ( (*(_DWORD *)(a1 + 152) & 0x1000000) != 0 )
      *(_QWORD *)(*(_QWORD *)(a1 + 240) + 24LL) -= (unsigned int)v11;
    KeReleaseQueuedSpinLock(5uLL, v10);
    v12 = (PVOID ***)(v9 + 16);
    while ( *v12 != (PVOID **)v12 )
    {
      v13 = *v12;
      v14 = **v12;
      v15 = (PVOID ***)(*v12)[1];
      if ( v14[1] != *v12 || *v15 != v13 )
        __fastfail(3u);
      *v15 = (PVOID **)v14;
      v14[1] = v15;
      v16 = v13[5];
      if ( v16 && v16 != (PVOID *)(v9 + 96) )
        ExFreeToNPagedLookasideList(&CcBitmapLookasideList, v16);
      if ( (unsigned __int64)v13 < v9 || (unsigned __int64)v13 >= v9 + 192 )
      {
        v17 = (PVOID **)p_P;
        *v13 = &P;
        v13[1] = (PVOID *)v17;
        if ( *v17 != &P )
          __fastfail(3u);
        *v17 = (PVOID *)v13;
        p_P = (PVOID *)v13;
      }
    }
    *(_QWORD *)(a1 + 160) = 0LL;
    *(_QWORD *)(v5 + 8) = 0LL;
    v18 = *(_BYTE *)(v5 + 48);
    v19 = _InterlockedCompareExchange((volatile signed __int32 *)v5, 1, 0);
    if ( v19 )
      ExpReleaseFastMutexContended(v5, v19);
    __writecr8(v18);
    KeAbPostRelease(v5);
    while ( 1 )
    {
      v20 = P;
      if ( P == &P )
        break;
      v21 = *(PVOID **)P;
      if ( *((PVOID **)P + 1) != &P || v21[1] != P )
        __fastfail(3u);
      P = *(PVOID *)P;
      v21[1] = &P;
      ExFreePoolWithTag(v20, 0);
    }
    CcDeallocateBcb(v9);
  }
  else
  {
    *(_QWORD *)(v5 + 8) = 0LL;
    v22 = v8;
    v23 = _InterlockedCompareExchange((volatile signed __int32 *)v5, 1, 0);
    if ( v23 )
      ExpReleaseFastMutexContended(v5, v23);
    __writecr8(v22);
    KeAbPostRelease(v5);
  }
}
