/*
 * XREFs of ndisCloseULongRef @ 0x1C000F7A4
 * Callers:
 *     ndisMHaltMiniport @ 0x1C009BCB4 (ndisMHaltMiniport.c)
 *     ndisInitializeAdapter @ 0x1C00AC230 (ndisInitializeAdapter.c)
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
