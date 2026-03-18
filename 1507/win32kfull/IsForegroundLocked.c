/*
 * XREFs of IsForegroundLocked @ 0x1C0045658
 * Callers:
 *     ?FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z @ 0x1C0044BF8 (-FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z.c)
 *     CheckForegroundRight @ 0x1C0045328 (CheckForegroundRight.c)
 *     ?CheckLegacyForegroundAccess@@YAHXZ @ 0x1C00455E8 (-CheckLegacyForegroundAccess@@YAHXZ.c)
 *     xxxActiveWindowTracking @ 0x1C01E27EC (xxxActiveWindowTracking.c)
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
