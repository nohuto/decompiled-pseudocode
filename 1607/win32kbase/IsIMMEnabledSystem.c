/*
 * XREFs of IsIMMEnabledSystem @ 0x1C0053D50
 * Callers:
 *     Win32UserInitialize @ 0x1C01556F4 (Win32UserInitialize.c)
 * Callees:
 *     <none>
 */

__int64 IsIMMEnabledSystem()
{
  if ( gSessionId == gServiceSessionId )
    return AllowInteractiveServices();
  else
    return 1LL;
}
