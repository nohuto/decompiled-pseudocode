/*
 * XREFs of McGenEventUnregister @ 0x1C006F4BC
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C006EFD0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall McGenEventUnregister(PREGHANDLE RegHandle)
{
  ULONG result; // eax

  if ( !Microsoft_Windows_Win32kHandle )
    return 0;
  result = EtwUnregister(Microsoft_Windows_Win32kHandle);
  Microsoft_Windows_Win32kHandle = 0LL;
  return result;
}
