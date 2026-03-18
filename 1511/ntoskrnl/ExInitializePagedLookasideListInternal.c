/*
 * XREFs of ExInitializePagedLookasideListInternal @ 0x1400F8AB0
 * Callers:
 *     ExInitializePagedLookasideList @ 0x1404D17DC (ExInitializePagedLookasideList.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     InitializeSListHead @ 0x1400F8DC8 (InitializeSListHead.c)
 */

void __fastcall ExInitializePagedLookasideListInternal(
        __int64 a1,
        PVOID (__stdcall *a2)(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag),
        void (__stdcall *a3)(PVOID P),
        int a4,
        int a5,
        int a6,
        __int16 a7,
        int a8)
{
  int v12; // ebx
  KIRQL v13; // dl
  __int64 **v14; // rax
  __int64 *v15; // rbp

  InitializeSListHead((PSLIST_HEADER)a1);
  *(_WORD *)(a1 + 16) = ExMinimumLookasideDepth;
  *(_QWORD *)(a1 + 20) = 0LL;
  *(_WORD *)(a1 + 18) = 256;
  v12 = a4 | 1;
  *(_DWORD *)(a1 + 40) = a6;
  *(_DWORD *)(a1 + 44) = a5;
  if ( !a2 )
    a2 = ExAllocatePoolWithTag;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_DWORD *)(a1 + 36) = v12;
  *(_QWORD *)(a1 + 48) = a2;
  *(_QWORD *)(a1 + 80) = 0LL;
  if ( !a3 )
    a3 = ExFreePool;
  *(_QWORD *)(a1 + 56) = a3;
  v13 = KeAcquireSpinLockRaiseToDpc(&ExPagedLookasideLock);
  if ( a8 )
  {
    *(_WORD *)(a1 + 18) = -1;
    *(_WORD *)(a1 + 16) = a7;
  }
  else if ( !ExMinimumLookasideDepth )
  {
    *(_DWORD *)(a1 + 16) = -65536;
  }
  v14 = (__int64 **)qword_1402D6138;
  v15 = (__int64 *)(a1 + 64);
  v15[1] = qword_1402D6138;
  *v15 = (__int64)&ExPagedLookasideListHead;
  if ( *v14 != &ExPagedLookasideListHead )
    __fastfail(3u);
  *v14 = v15;
  qword_1402D6138 = (__int64)v15;
  KeReleaseSpinLock(&ExPagedLookasideLock, v13);
}
