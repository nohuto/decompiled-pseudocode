/*
 * XREFs of ndisOpenULongRef @ 0x1C0057ACC
 * Callers:
 *     ndisReinitializeMiniportBlock @ 0x1C00EED58 (ndisReinitializeMiniportBlock.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisOpenULongRef(__int64 a1)
{
  KIRQL v2; // al

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1);
  *(_BYTE *)(a1 + 12) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)a1, v2);
}
