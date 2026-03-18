/*
 * XREFs of KeRemoveQueueEntry @ 0x1400EC548
 * Callers:
 *     IopCancelWaitCompletionPacket @ 0x14002E3E4 (IopCancelWaitCompletionPacket.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 */

char __fastcall KeRemoveQueueEntry(__int64 a1, _QWORD *a2, __int64 a3)
{
  char v5; // si
  unsigned __int8 CurrentIrql; // bp
  __int64 v7; // rcx
  _QWORD *v8; // rax

  v5 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1, (__int64)a2, a3);
  if ( *a2 )
  {
    --*(_DWORD *)(a1 + 4);
    v7 = *a2;
    v8 = (_QWORD *)a2[1];
    if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v8 != a2 )
      __fastfail(3u);
    *v8 = v7;
    v5 = 1;
    *(_QWORD *)(v7 + 8) = v8;
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  __writecr8(CurrentIrql);
  return v5;
}
