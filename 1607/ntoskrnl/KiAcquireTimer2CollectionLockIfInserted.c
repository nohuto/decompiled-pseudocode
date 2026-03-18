/*
 * XREFs of KiAcquireTimer2CollectionLockIfInserted @ 0x1400EC828
 * Callers:
 *     KeSetTimer2 @ 0x1400EB320 (KeSetTimer2.c)
 *     KeDisableTimer2 @ 0x1400F79FC (KeDisableTimer2.c)
 *     KeCancelTimer2 @ 0x1400F97C0 (KeCancelTimer2.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140092A60 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140095BA0 (KxReleaseSpinLock.c)
 */

char __fastcall KiAcquireTimer2CollectionLockIfInserted(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( (*(_BYTE *)(a1 + 1) & 1) != 0 )
  {
    KxAcquireSpinLock(&KiTimer2CollectionLock);
    if ( (*(_BYTE *)(a1 + 1) & 1) != 0 )
      return 1;
    else
      KxReleaseSpinLock(&KiTimer2CollectionLock);
  }
  return v1;
}
