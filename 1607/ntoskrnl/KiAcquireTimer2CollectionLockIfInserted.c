/*
 * XREFs of KiAcquireTimer2CollectionLockIfInserted @ 0x1400EA698
 * Callers:
 *     KeSetTimer2 @ 0x1400E9190 (KeSetTimer2.c)
 *     KeDisableTimer2 @ 0x1400F583C (KeDisableTimer2.c)
 *     KeCancelTimer2 @ 0x1400F7600 (KeCancelTimer2.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
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
