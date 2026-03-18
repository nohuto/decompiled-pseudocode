/*
 * XREFs of ExInitializeNPagedLookasideListInternal @ 0x140137DDC
 * Callers:
 *     ExInitializeNPagedLookasideList @ 0x140137DA8 (ExInitializeNPagedLookasideList.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     InitializeSListHead @ 0x1400D9F4C (InitializeSListHead.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall ExInitializeNPagedLookasideListInternal(
        __int64 a1,
        PVOID (__stdcall *a2)(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag),
        void (__stdcall *a3)(PVOID P),
        int a4,
        int a5,
        int a6,
        __int16 a7,
        int a8)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 **v13; // rax
  __int64 *v14; // rbp
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

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
  if ( !a3 )
    a3 = ExFreePool;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 56) = a3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&ExNPagedLookasideLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&ExNPagedLookasideLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&ExNPagedLookasideLock);
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
  v13 = (__int64 **)qword_140325268;
  v14 = (__int64 *)(a1 + 64);
  v14[1] = qword_140325268;
  *v14 = (__int64)&ExNPagedLookasideListHead;
  if ( *v13 != &ExNPagedLookasideListHead )
    __fastfail(3u);
  *v13 = v14;
  qword_140325268 = (__int64)v14;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&ExNPagedLookasideLock, retaddr);
  else
    _InterlockedAnd64(&ExNPagedLookasideLock, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
