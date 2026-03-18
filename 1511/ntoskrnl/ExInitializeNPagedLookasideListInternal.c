/*
 * XREFs of ExInitializeNPagedLookasideListInternal @ 0x140105AC0
 * Callers:
 *     ExInitializeNPagedLookasideList @ 0x140105A8C (ExInitializeNPagedLookasideList.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     InitializeSListHead @ 0x1400F8DC8 (InitializeSListHead.c)
 */

void __fastcall ExInitializeNPagedLookasideListInternal(
        __int64 a1,
        PVOID (__stdcall *a2)(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag),
        void (__stdcall *a3)(PVOID P),
        int a4,
        int a5,
        int a6,
        __int16 a7,
        int a8)
{
  KIRQL v12; // dl
  __int64 **v13; // rax
  __int64 *v14; // rbp

  InitializeSListHead((PSLIST_HEADER)a1);
  *(_WORD *)(a1 + 16) = ExMinimumLookasideDepth;
  *(_QWORD *)(a1 + 20) = 0LL;
  *(_WORD *)(a1 + 18) = 256;
  *(_DWORD *)(a1 + 40) = a6;
  *(_DWORD *)(a1 + 44) = a5;
  if ( !a2 )
    a2 = ExAllocatePoolWithTag;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_DWORD *)(a1 + 36) = a4;
  *(_QWORD *)(a1 + 48) = a2;
  *(_QWORD *)(a1 + 80) = 0LL;
  if ( !a3 )
    a3 = ExFreePool;
  *(_QWORD *)(a1 + 56) = a3;
  v12 = KeAcquireSpinLockRaiseToDpc(&ExNPagedLookasideLock);
  if ( a8 )
  {
    *(_WORD *)(a1 + 18) = -1;
    *(_WORD *)(a1 + 16) = a7;
  }
  else if ( !ExMinimumLookasideDepth )
  {
    *(_DWORD *)(a1 + 16) = -65536;
  }
  v13 = (__int64 **)qword_1402D6128;
  v14 = (__int64 *)(a1 + 64);
  v14[1] = qword_1402D6128;
  *v14 = (__int64)&ExNPagedLookasideListHead;
  if ( *v13 != &ExNPagedLookasideListHead )
    __fastfail(3u);
  *v13 = v14;
  qword_1402D6128 = (__int64)v14;
  KeReleaseSpinLock(&ExNPagedLookasideLock, v12);
}
