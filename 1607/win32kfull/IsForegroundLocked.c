/*
 * XREFs of IsForegroundLocked @ 0x1C00AACD4
 * Callers:
 *     CheckForegroundRight @ 0x1C00AA97C (CheckForegroundRight.c)
 *     ?CheckLegacyForegroundAccess@@YAHXZ @ 0x1C00AAC64 (-CheckLegacyForegroundAccess@@YAHXZ.c)
 *     ?FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z @ 0x1C00AB1B8 (-FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z.c)
 *     xxxActiveWindowTracking @ 0x1C01D8EBC (xxxActiveWindowTracking.c)
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
