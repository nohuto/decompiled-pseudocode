/*
 * XREFs of IopRemoveTimerFromTimerList @ 0x1401BB7F4
 * Callers:
 *     IoDeleteDevice @ 0x1400D0DC8 (IoDeleteDevice.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall IopRemoveTimerFromTimerList(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // r8
  _QWORD *v4; // rdx

  v2 = KeAcquireSpinLockRaiseToDpc(&IopTimerLock);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD **)(a1 + 16);
  if ( *(_QWORD *)(v3 + 8) != a1 + 8 || *v4 != a1 + 8 )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  if ( *(_WORD *)(a1 + 2) )
    --IopTimerCount;
  KeReleaseSpinLock(&IopTimerLock, v2);
}
