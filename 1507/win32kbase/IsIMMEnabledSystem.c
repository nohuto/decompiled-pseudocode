/*
 * XREFs of IsIMMEnabledSystem @ 0x1C007CE90
 * Callers:
 *     Win32UserInitialize @ 0x1C0138B1C (Win32UserInitialize.c)
 * Callees:
 *     <none>
 */

__int64 IsIMMEnabledSystem()
{
  if ( gSessionId )
    return 1LL;
  else
    return AllowInteractiveServices();
}
