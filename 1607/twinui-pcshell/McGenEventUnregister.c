/*
 * XREFs of McGenEventUnregister @ 0x180003D34
 * Callers:
 *     DllMain @ 0x180003D9C (DllMain.c)
 * Callees:
 *     <none>
 */

ULONG McGenEventUnregister()
{
  ULONG result; // eax

  if ( !Microsoft_Windows_Immersive_ShellHandle )
    return 0;
  result = EventUnregister(Microsoft_Windows_Immersive_ShellHandle);
  Microsoft_Windows_Immersive_ShellHandle = 0LL;
  return result;
}
