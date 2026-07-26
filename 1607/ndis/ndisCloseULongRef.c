/*
 * XREFs of ndisCloseULongRef @ 0x1C0013414
 * Callers:
 *     ndisMHaltMiniport @ 0x1C009E8F8 (ndisMHaltMiniport.c)
 *     ndisInitializeAdapter @ 0x1C00AC974 (ndisInitializeAdapter.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisCloseULongRef(PKSPIN_LOCK SpinLock)
{
  char v2; // bl
  KIRQL v3; // al

  v2 = 1;
  v3 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  if ( *((_BYTE *)SpinLock + 12) )
    v2 = 0;
  else
    *((_BYTE *)SpinLock + 12) = 1;
  KeReleaseSpinLock(SpinLock, v3);
  return v2;
}
