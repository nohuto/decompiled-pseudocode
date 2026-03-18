/*
 * XREFs of ReleaseMutex @ 0x1C00450EC
 * Callers:
 *     TimeoutCallback @ 0x1C0046BD0 (TimeoutCallback.c)
 * Callees:
 *     <none>
 */

char __fastcall ReleaseMutex(__int64 a1)
{
  KeReleaseSpinLock((PKSPIN_LOCK)a1, *(_BYTE *)(a1 + 8));
  return 1;
}
