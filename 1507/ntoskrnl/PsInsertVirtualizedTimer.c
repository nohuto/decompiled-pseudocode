/*
 * XREFs of PsInsertVirtualizedTimer @ 0x14011EBF4
 * Callers:
 *     NtCreateTimer @ 0x140451ED0 (NtCreateTimer.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     ExpTimerPause @ 0x14012C9BC (ExpTimerPause.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall PsInsertVirtualizedTimer(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // rsi
  volatile signed __int32 *v6; // rbx
  unsigned __int8 CurrentIrql; // bp
  _QWORD *v8; // rcx
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *(_QWORD *)(a1 + 944);
  v6 = (volatile signed __int32 *)(v3 + 1208);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v3 + 1208);
  }
  else if ( _interlockedbittestandset64(v6, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v3 + 1208));
  }
  v8 = *(_QWORD **)(v3 + 1224);
  *a2 = v3 + 1216;
  a2[1] = v8;
  if ( *v8 != v3 + 1216 )
    __fastfail(3u);
  *v8 = a2;
  *(_QWORD *)(v3 + 1224) = a2;
  if ( *(_DWORD *)(v3 + 864) )
    ExpTimerPause(a2 - 35, MEMORY[0xFFFFF78000000014], MEMORY[0xFFFFF78000000008]);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v3 + 1208, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v6, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  *a3 = v3;
  return result;
}
