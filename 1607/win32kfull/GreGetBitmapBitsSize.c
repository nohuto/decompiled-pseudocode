/*
 * XREFs of GreGetBitmapBitsSize @ 0x1C0110F1C
 * Callers:
 *     NtGdiGetDIBitsInternal @ 0x1C004C070 (NtGdiGetDIBitsInternal.c)
 *     NtGdiCreateSessionMappedDIBSection @ 0x1C0110CE0 (NtGdiCreateSessionMappedDIBSection.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C01E5E1C (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 *     ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C02B2040 (-GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 *     NtGdiIcmBrushInfo @ 0x1C02B2EE0 (NtGdiIcmBrushInfo.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall GreGetBitmapBitsSize(__int64 a1)
{
  unsigned int v2; // ecx
  int v3; // edx
  signed int v4; // r9d

  if ( *(_DWORD *)a1 == 12 )
    return noOverflowCJSCAN(
             *(unsigned __int16 *)(a1 + 4),
             *(_WORD *)(a1 + 8),
             *(_WORD *)(a1 + 10),
             *(unsigned __int16 *)(a1 + 6));
  v2 = *(_DWORD *)(a1 + 16);
  if ( v2 > 0xA )
    return *(_DWORD *)(a1 + 20);
  v3 = 1033;
  if ( !_bittest(&v3, v2) )
    return *(_DWORD *)(a1 + 20);
  v4 = *(_DWORD *)(a1 + 8);
  if ( v4 < 0 )
    v4 = -v4;
  return noOverflowCJSCAN(*(_DWORD *)(a1 + 4), *(_WORD *)(a1 + 12), *(_WORD *)(a1 + 14), v4);
}
