/*
 * XREFs of FreeTmpBuffer @ 0x1C006EA70
 * Callers:
 *     NtGdiExtCreateRegion @ 0x1C006E6A0 (NtGdiExtCreateRegion.c)
 *     NtGdiOpenDCW @ 0x1C006E790 (NtGdiOpenDCW.c)
 *     NtGdiGetRegionData @ 0x1C006E970 (NtGdiGetRegionData.c)
 *     NtGdiPolyPolyDraw @ 0x1C0082E80 (NtGdiPolyPolyDraw.c)
 * Callees:
 *     <none>
 */

void **__fastcall FreeTmpBuffer(PVOID a1)
{
  void **result; // rax

  if ( a1 != WPP_MAIN_CB.Dpc.SystemArgument1 )
    return (void **)FreeThreadBufferWithTag(a1);
  result = gpTmpGlobalFree;
  *gpTmpGlobalFree = a1;
  return result;
}
