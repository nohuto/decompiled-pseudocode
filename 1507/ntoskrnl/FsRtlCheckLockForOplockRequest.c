/*
 * XREFs of FsRtlCheckLockForOplockRequest @ 0x140130558
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

char __fastcall FsRtlCheckLockForOplockRequest(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rsi
  char v4; // bl
  unsigned __int64 v5; // rbp
  volatile signed __int32 *v6; // rdi
  unsigned __int8 CurrentIrql; // r14
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 24);
  if ( !v2 || !*(_QWORD *)(v2 + 32) && !*(_QWORD *)(v2 + 40) || !*a2 )
    return 1;
  if ( *(_DWORD *)(a1 + 88) )
    return 0;
  v4 = 1;
  v5 = *a2 - 1LL;
  v6 = (volatile signed __int32 *)(v2 + 24);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v2 + 24);
  }
  else if ( _interlockedbittestandset64(v6, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v2 + 24));
  }
  if ( v5 >= *(_QWORD *)v2 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v2 + 24, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v6, 0LL);
    v4 = 0;
  }
  else if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseSpinLockInstrumented(v2 + 24, retaddr);
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)v6, 0LL);
  }
  __writecr8(CurrentIrql);
  return v4;
}
