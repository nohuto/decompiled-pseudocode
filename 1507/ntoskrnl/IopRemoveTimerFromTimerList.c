/*
 * XREFs of IopRemoveTimerFromTimerList @ 0x1401F6BFC
 * Callers:
 *     IoDeleteDevice @ 0x140007508 (IoDeleteDevice.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall IopRemoveTimerFromTimerList(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&IopTimerLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&IopTimerLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&IopTimerLock);
  }
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD **)(a1 + 16);
  if ( *(_QWORD *)(v3 + 8) != a1 + 8 || *v4 != a1 + 8 )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  if ( *(_WORD *)(a1 + 2) )
    --IopTimerCount;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&IopTimerLock, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)&IopTimerLock, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
