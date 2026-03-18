/*
 * XREFs of xxxRealizePalette @ 0x1C0145890
 * Callers:
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C01506E0 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C01E5E1C (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 * Callees:
 *     FreeAllSpbs @ 0x1C0094950 (FreeAllSpbs.c)
 *     GreRealizePalette @ 0x1C01458E0 (GreRealizePalette.c)
 *     WindowFromCacheDC @ 0x1C01DED40 (WindowFromCacheDC.c)
 *     xxxBroadcastPaletteChanged @ 0x1C020E2CC (xxxBroadcastPaletteChanged.c)
 *     IsDCCurrentPalette @ 0x1C02B46F4 (IsDCCurrentPalette.c)
 */

__int64 __fastcall xxxRealizePalette(HDC a1)
{
  unsigned int v2; // eax
  unsigned __int16 v3; // bp
  unsigned int v4; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rsi
  __int64 i; // rcx
  __int64 j; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = GreRealizePalette(a1);
  v3 = v2;
  v4 = HIWORD(v2);
  if ( HIWORD(v2) )
  {
    if ( (unsigned int)IsDCCurrentPalette(a1) )
    {
      v9 = WindowFromCacheDC(a1);
      if ( v9 )
      {
        v14[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v14;
        v14[1] = v9;
        ++*(_DWORD *)(v9 + 8);
        xxxBroadcastPaletteChanged(v9, 0LL);
        for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
        {
          for ( j = *(_QWORD *)(i + 16); j; j = *(_QWORD *)(j + 16) )
          {
            if ( j != *(_QWORD *)(v9 + 24) )
              *(_DWORD *)(j + 32) |= 1u;
          }
        }
        GreRealizePalette(a1);
        ThreadUnlock1(v13, v12);
      }
    }
    if ( (_WORD)v4 )
      FreeAllSpbs(v7, v6, v8);
  }
  return v3;
}
