/*
 * XREFs of KeRemoveQueueEntry @ 0x1400F7CA0
 * Callers:
 *     IopCancelWaitCompletionPacket @ 0x1400F7970 (IopCancelWaitCompletionPacket.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 */

char __fastcall KeRemoveQueueEntry(__int64 a1, _QWORD *a2)
{
  char v4; // si
  unsigned __int8 CurrentIrql; // bp
  __int64 v6; // rcx
  _QWORD *v7; // rax

  v4 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1);
  if ( *a2 )
  {
    --*(_DWORD *)(a1 + 4);
    v6 = *a2;
    v7 = (_QWORD *)a2[1];
    if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v7 != a2 )
      __fastfail(3u);
    *v7 = v6;
    v4 = 1;
    *(_QWORD *)(v6 + 8) = v7;
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  __writecr8(CurrentIrql);
  return v4;
}
