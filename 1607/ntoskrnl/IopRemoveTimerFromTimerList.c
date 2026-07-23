/*
 * XREFs of IopRemoveTimerFromTimerList @ 0x1401C9500
 * Callers:
 *     IoDeleteDevice @ 0x14007F38C (IoDeleteDevice.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
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
