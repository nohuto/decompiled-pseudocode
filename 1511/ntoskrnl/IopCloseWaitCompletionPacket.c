/*
 * XREFs of IopCloseWaitCompletionPacket @ 0x14002F740
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     IopCancelWaitCompletionPacket @ 0x14002E3E4 (IopCancelWaitCompletionPacket.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall IopCloseWaitCompletionPacket(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  KIRQL v5; // al
  KIRQL v6; // si

  if ( a4 == 1 )
  {
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    v6 = v5;
    if ( !*(_BYTE *)(a2 + 104) || !IopCancelWaitCompletionPacket((_QWORD *)a2, 1, v5) )
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v6);
  }
}
