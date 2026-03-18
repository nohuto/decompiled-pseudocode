/*
 * XREFs of Isoch_Cleanup @ 0x1C0024390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Isoch_Cleanup(__int64 a1)
{
  KIRQL v2; // al

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  *(_BYTE *)(a1 + 96) = v2;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v2);
}
