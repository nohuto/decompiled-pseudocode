/*
 * XREFs of McGenEventUnregister @ 0x1801230E8
 * Callers:
 *     ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x180060E4C (-DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z.c)
 * Callees:
 *     <none>
 */

ULONG McGenEventUnregister()
{
  ULONG result; // eax

  if ( !Microsoft_Windows_Dwm_CoreHandle )
    return 0;
  result = EventUnregister(Microsoft_Windows_Dwm_CoreHandle);
  Microsoft_Windows_Dwm_CoreHandle = 0LL;
  return result;
}
