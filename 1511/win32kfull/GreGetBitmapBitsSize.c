/*
 * XREFs of GreGetBitmapBitsSize @ 0x1C004B524
 * Callers:
 *     NtGdiGetDIBitsInternal @ 0x1C00423A0 (NtGdiGetDIBitsInternal.c)
 *     NtGdiCreateDIBSection @ 0x1C004B100 (NtGdiCreateDIBSection.c)
 *     NtGdiCreateSessionMappedDIBSection @ 0x1C00F2500 (NtGdiCreateSessionMappedDIBSection.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C01F00DC (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 *     ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C02AF670 (-GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 *     NtGdiIcmBrushInfo @ 0x1C02B03C0 (NtGdiIcmBrushInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreGetBitmapBitsSize(__int64 a1)
{
  unsigned int v2; // eax
  int v3; // ecx
  __int64 v4; // rcx
  unsigned int v5; // r9d
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r8

  if ( *(_DWORD *)a1 == 12 )
    return noOverflowCJSCAN(
             *(unsigned __int16 *)(a1 + 4),
             *(unsigned __int16 *)(a1 + 8),
             *(unsigned __int16 *)(a1 + 10),
             *(unsigned __int16 *)(a1 + 6));
  v2 = *(_DWORD *)(a1 + 16);
  if ( v2 > 0xA )
    return *(unsigned int *)(a1 + 20);
  v3 = 1033;
  if ( !_bittest(&v3, v2) )
    return *(unsigned int *)(a1 + 20);
  v4 = *(unsigned int *)(a1 + 8);
  v5 = 0;
  if ( (int)v4 < 0 )
    v4 = (unsigned int)-(int)v4;
  v6 = ((*(unsigned int *)(a1 + 4) * *(unsigned __int16 *)(a1 + 12) * (unsigned __int64)*(unsigned __int16 *)(a1 + 14)
       + 31) >> 3) & 0x1FFFFFFFFFFFFFFCLL;
  if ( v6 <= 0xFFFFFFFF )
  {
    v7 = v4 * v6;
    if ( v7 > 0xFFFFFFFF )
      LODWORD(v7) = 0;
    return (unsigned int)v7;
  }
  return v5;
}
