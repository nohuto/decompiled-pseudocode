/*
 * XREFs of PsRemoveVirtualizedTimer @ 0x140066D90
 * Callers:
 *     ExpDeleteTimer @ 0x140065C20 (ExpDeleteTimer.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall PsRemoveVirtualizedTimer(__int64 a1, _QWORD *a2)
{
  volatile signed __int32 *v3; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (volatile signed __int32 *)(a1 + 1208);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(a1 + 1208);
  }
  else if ( _interlockedbittestandset64(v3, 0LL) )
  {
    KxWaitForSpinLockAndAcquire(a1 + 1208);
  }
  v5 = *a2;
  v6 = (_QWORD *)a2[1];
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v6 != a2 )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v3, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
