/*
 * XREFs of McGenEventUnregister @ 0x1C0025FE8
 * Callers:
 *     RaSqmAndEtwCleanup @ 0x1C0053730 (RaSqmAndEtwCleanup.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall McGenEventUnregister(PREGHANDLE RegHandle)
{
  ULONG result; // eax

  if ( !Microsoft_Windows_StorPortHandle )
    return 0;
  result = EtwUnregister(Microsoft_Windows_StorPortHandle);
  Microsoft_Windows_StorPortHandle = 0LL;
  return result;
}
