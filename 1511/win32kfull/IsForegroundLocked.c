/*
 * XREFs of IsForegroundLocked @ 0x1C008D52C
 * Callers:
 *     ?FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z @ 0x1C008CE74 (-FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z.c)
 *     CheckForegroundRight @ 0x1C008D2FC (CheckForegroundRight.c)
 *     ?CheckLegacyForegroundAccess@@YAHXZ @ 0x1C008D4BC (-CheckLegacyForegroundAccess@@YAHXZ.c)
 *     xxxActiveWindowTracking @ 0x1C01E2C7C (xxxActiveWindowTracking.c)
 * Callees:
 *     <none>
 */

__int64 IsForegroundLocked()
{
  unsigned int v0; // ecx

  v0 = 0;
  if ( guSFWLockCount || gppiLockSFW )
    return 1;
  return v0;
}
