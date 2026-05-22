/*
 * XREFs of McGenEventUnregister @ 0x180001AD8
 * Callers:
 *     ??_GOneCoreUAPInputHost@@MEAAPEAXI@Z @ 0x1800040B4 (--_GOneCoreUAPInputHost@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

ULONG McGenEventUnregister()
{
  ULONG result; // eax

  if ( !Microsoft_OneCore_MinInputHandle )
    return 0;
  result = EventUnregister(Microsoft_OneCore_MinInputHandle);
  Microsoft_OneCore_MinInputHandle = 0LL;
  return result;
}
