/*
 * XREFs of McGenEventUnregister @ 0x1800737BC
 * Callers:
 *     DllMain @ 0x1800735C4 (DllMain.c)
 * Callees:
 *     <none>
 */

__int64 McGenEventUnregister()
{
  __int64 result; // rax

  if ( !Microsoft_Windows_Dwm_UdwmHandle )
    return 0LL;
  result = EtwEventUnregister(Microsoft_Windows_Dwm_UdwmHandle);
  Microsoft_Windows_Dwm_UdwmHandle = 0LL;
  return result;
}
