/*
 * XREFs of KiInsertTimer2 @ 0x1400EEA78
 * Callers:
 *     KiTimer2Expiration @ 0x14005A0A0 (KiTimer2Expiration.c)
 *     KiExpireTimer2 @ 0x1400EC080 (KiExpireTimer2.c)
 *     KiAdjustTimer2DueTimes @ 0x14012A824 (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140092A60 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140095BA0 (KxReleaseSpinLock.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x1400EC8A0 (KiInsertTimer2WithCollectionLockHeld.c)
 */

char __fastcall KiInsertTimer2(__int64 a1, char a2, _BYTE *a3)
{
  KxAcquireSpinLock(&KiTimer2CollectionLock);
  LOBYTE(a3) = KiInsertTimer2WithCollectionLockHeld(a1, a2, a3);
  KxReleaseSpinLock(&KiTimer2CollectionLock);
  return (char)a3;
}
