/*
 * XREFs of McGenEventUnregister @ 0x1C00011C4
 * Callers:
 *     DriverCleanup @ 0x1C0001A50 (DriverCleanup.c)
 *     UsbSleepStudy_Uninitialize @ 0x1C00333FC (UsbSleepStudy_Uninitialize.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall McGenEventUnregister(PREGHANDLE RegHandle)
{
  ULONGLONG v2; // rcx
  ULONG result; // eax

  v2 = *RegHandle;
  if ( !v2 )
    return 0;
  result = EtwUnregister(v2);
  *RegHandle = 0LL;
  return result;
}
