/*
 * XREFs of AcquireMutex @ 0x1C00447B8
 * Callers:
 *     TimeoutCallback @ 0x1C0046BD0 (TimeoutCallback.c)
 * Callees:
 *     <none>
 */

char __fastcall AcquireMutex(__int64 a1)
{
  *(_BYTE *)(a1 + 8) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1);
  return 1;
}
