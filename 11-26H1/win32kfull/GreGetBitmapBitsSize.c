/*
 * XREFs of GreGetBitmapBitsSize @ 0x14007BED4
 * Callers:
 *     NtGdiCreateSessionMappedDIBSection @ 0x14007BBA0 (NtGdiCreateSessionMappedDIBSection.c)
 *     NtGdiCreateDIBSection @ 0x14007BFA0 (NtGdiCreateDIBSection.c)
 *     NtGdiGetDIBitsInternal @ 0x1400B4540 (NtGdiGetDIBitsInternal.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1402CE7E8 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 *     ?GrepIcmQueryBrushBitmap@@YAHAEAVXDCOBJ@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x140330114 (-GrepIcmQueryBrushBitmap@@YAHAEAVXDCOBJ@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 *     NtGdiIcmBrushInfo @ 0x140330CF0 (NtGdiIcmBrushInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreGetBitmapBitsSize(__int64 a1)
{
  unsigned int v1; // edx
  int v2; // eax
  int v3; // r10d
  unsigned __int64 v4; // r8
  __int64 v5; // rcx
  unsigned __int64 v6; // r8
  unsigned __int64 v8; // r8

  v1 = 0;
  if ( *(_DWORD *)a1 == 12 )
  {
    v8 = ((*(unsigned __int16 *)(a1 + 4)
         * *(unsigned __int16 *)(a1 + 8)
         * (unsigned __int64)*(unsigned __int16 *)(a1 + 10)
         + 31) >> 3) & 0x1FFFFFFFFFFFFFFCLL;
    if ( v8 <= 0xFFFFFFFF )
    {
      v6 = *(unsigned __int16 *)(a1 + 6) * v8;
LABEL_7:
      if ( v6 > 0xFFFFFFFF )
        LODWORD(v6) = 0;
      return (unsigned int)v6;
    }
    return v1;
  }
  v2 = *(_DWORD *)(a1 + 16);
  if ( !v2 || v2 == 3 || v2 == 10 )
  {
    v3 = *(_DWORD *)(a1 + 8);
    v4 = ((*(unsigned int *)(a1 + 4) * *(unsigned __int16 *)(a1 + 12) * (unsigned __int64)*(unsigned __int16 *)(a1 + 14)
         + 31) >> 3) & 0x1FFFFFFFFFFFFFFCLL;
    if ( v4 <= 0xFFFFFFFF )
    {
      v5 = (unsigned int)-v3;
      if ( v3 > 0 )
        v5 = (unsigned int)v3;
      v6 = v5 * v4;
      goto LABEL_7;
    }
    return v1;
  }
  return *(unsigned int *)(a1 + 20);
}
