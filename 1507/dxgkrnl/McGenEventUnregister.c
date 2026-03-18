/*
 * XREFs of McGenEventUnregister @ 0x1C001DDFC
 * Callers:
 *     DxgkEtwShutdown @ 0x1C001DC4C (DxgkEtwShutdown.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall McGenEventUnregister(PREGHANDLE RegHandle)
{
  ULONG result; // eax

  if ( !Microsoft_Windows_DxgKrnlHandle )
    return 0;
  result = EtwUnregister(Microsoft_Windows_DxgKrnlHandle);
  Microsoft_Windows_DxgKrnlHandle = 0LL;
  return result;
}
