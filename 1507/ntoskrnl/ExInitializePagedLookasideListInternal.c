/*
 * XREFs of ExInitializePagedLookasideListInternal @ 0x1400D9BD8
 * Callers:
 *     ExInitializePagedLookasideList @ 0x1404F9D70 (ExInitializePagedLookasideList.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     InitializeSListHead @ 0x1400D9F4C (InitializeSListHead.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall ExInitializePagedLookasideListInternal(
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
  unsigned __int8 CurrentIrql; // bl
  __int64 **v14; // rax
  __int64 *v15; // rbp
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  InitializeSListHead((PSLIST_HEADER)a1);
  *(_WORD *)(a1 + 16) = ExMinimumLookasideDepth;
  v12 = a4 | 1;
  *(_QWORD *)(a1 + 20) = 0LL;
  *(_WORD *)(a1 + 18) = 256;
  *(_DWORD *)(a1 + 40) = a6;
  *(_DWORD *)(a1 + 44) = a5;
  if ( !a2 )
    a2 = ExAllocatePoolWithTag;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_DWORD *)(a1 + 36) = v12;
  *(_QWORD *)(a1 + 48) = a2;
  if ( !a3 )
    a3 = ExFreePool;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 56) = a3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&ExPagedLookasideLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&ExPagedLookasideLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&ExPagedLookasideLock);
  }
  if ( a8 )
  {
    *(_WORD *)(a1 + 18) = -1;
    *(_WORD *)(a1 + 16) = a7;
  }
  else if ( !ExMinimumLookasideDepth )
  {
    *(_DWORD *)(a1 + 16) = -65536;
  }
  v14 = (__int64 **)qword_140325278;
  v15 = (__int64 *)(a1 + 64);
  v15[1] = qword_140325278;
  *v15 = (__int64)&ExPagedLookasideListHead;
  if ( *v14 != &ExPagedLookasideListHead )
    __fastfail(3u);
  *v14 = v15;
  qword_140325278 = (__int64)v15;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&ExPagedLookasideLock, retaddr);
  else
    _InterlockedAnd64(&ExPagedLookasideLock, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
