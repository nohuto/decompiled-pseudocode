/*
 * XREFs of ndisIfUpdateL2MtuSize @ 0x1C0040204
 * Callers:
 *     ndisFIndicateStatusInternal @ 0x1C001C0D0 (ndisFIndicateStatusInternal.c)
 *     ndisIfUpdateL2MtuSizeAndNotify @ 0x1C00C0054 (ndisIfUpdateL2MtuSizeAndNotify.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisIfUpdateL2MtuSize(__int64 a1, int a2)
{
  KIRQL v4; // al
  char v5; // bl

  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  if ( *(_DWORD *)(a1 + 1120) == a2 )
  {
    v5 = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 1120) = a2;
    v5 = 1;
  }
  KeReleaseSpinLock(&ndisIfListLock, v4);
  return v5;
}
