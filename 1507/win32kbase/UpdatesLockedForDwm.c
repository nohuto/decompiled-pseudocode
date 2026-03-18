/*
 * XREFs of UpdatesLockedForDwm @ 0x1C000F710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 UpdatesLockedForDwm()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( g_bLockUpdatesForDwm )
    return PsGetCurrentProcess() != (_QWORD)g_pepDwm;
  return v0;
}
