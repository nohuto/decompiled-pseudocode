/*
 * XREFs of KiInsertTimer2 @ 0x140033028
 * Callers:
 *     KiTimer2Expiration @ 0x1400332A0 (KiTimer2Expiration.c)
 *     KiExpireTimer2 @ 0x140033E90 (KiExpireTimer2.c)
 *     KiAdjustTimer2DueTimes @ 0x140120830 (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     KiInsertTimer2WithCollectionLockHeld @ 0x140034D90 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 */

char __fastcall KiInsertTimer2(__int64 a1, char a2, __int64 a3)
{
  __int64 v6; // rdx

  KxAcquireSpinLock(&KiTimer2CollectionLock);
  LOBYTE(v6) = a2;
  LOBYTE(a3) = KiInsertTimer2WithCollectionLockHeld(a1, v6, a3);
  KxReleaseSpinLock(&KiTimer2CollectionLock);
  return a3;
}
