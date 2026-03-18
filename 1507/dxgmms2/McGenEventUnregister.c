/*
 * XREFs of McGenEventUnregister @ 0x1C000F34C
 * Callers:
 *     ?DeInitGlobals@VIDMM_GLOBAL@@SAXXZ @ 0x1C004C840 (-DeInitGlobals@VIDMM_GLOBAL@@SAXXZ.c)
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
