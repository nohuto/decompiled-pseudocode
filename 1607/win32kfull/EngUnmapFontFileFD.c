/*
 * XREFs of EngUnmapFontFileFD @ 0x1C00C2280
 * Callers:
 *     BmfdQueryAdvanceWidthsTE @ 0x1C000B6D0 (BmfdQueryAdvanceWidthsTE.c)
 *     BmfdQueryFontDataTE @ 0x1C0018460 (BmfdQueryFontDataTE.c)
 *     ttfdOpenFontContext @ 0x1C0019C2C (ttfdOpenFontContext.c)
 *     ttfdOpenFontContextInternal @ 0x1C0019C90 (ttfdOpenFontContextInternal.c)
 *     ttfdSemQueryFontTree @ 0x1C001C2B0 (ttfdSemQueryFontTree.c)
 *     ?MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1C0021AD8 (-MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C00242E8 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     ttfdSemQueryAdvanceWidths @ 0x1C0028990 (ttfdSemQueryAdvanceWidths.c)
 *     ttfdSemQueryTrueTypeTable @ 0x1C00C19C0 (ttfdSemQueryTrueTypeTable.c)
 *     ttfdSemQueryFontData @ 0x1C00C1FF0 (ttfdSemQueryFontData.c)
 *     ttfdCloseFontContext @ 0x1C011DF4C (ttfdCloseFontContext.c)
 *     BmfdCloseFontContext @ 0x1C012F654 (BmfdCloseFontContext.c)
 *     vtfdQueryFontFileTE @ 0x1C012F730 (vtfdQueryFontFileTE.c)
 *     vtfdQueryFontFile @ 0x1C012F7D0 (vtfdQueryFontFile.c)
 *     vtfdQueryFontDataTE @ 0x1C014D6E0 (vtfdQueryFontDataTE.c)
 *     vtfdOpenFontContext @ 0x1C014DAC4 (vtfdOpenFontContext.c)
 *     vtfdDestroyFont @ 0x1C01526A0 (vtfdDestroyFont.c)
 *     ttfdSemQueryGlyphAttrs @ 0x1C0240C40 (ttfdSemQueryGlyphAttrs.c)
 *     ttfdSemQueryTrueTypeOutline @ 0x1C0240CF0 (ttfdSemQueryTrueTypeOutline.c)
 *     vBmfdMarkFontGone @ 0x1C02441D0 (vBmfdMarkFontGone.c)
 *     vVtfdMarkFontGone @ 0x1C0244FE0 (vVtfdMarkFontGone.c)
 *     vtfdQueryAdvanceWidthsTE @ 0x1C0245010 (vtfdQueryAdvanceWidthsTE.c)
 *     ?UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A4978 (-UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     GreMakeFontDir @ 0x1C02B5C2C (GreMakeFontDir.c)
 *     NtGdiGetFontFileData @ 0x1C02B6980 (NtGdiGetFontFileData.c)
 * Callees:
 *     ?vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z @ 0x1C0021474 (-vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z.c)
 */

void __stdcall EngUnmapFontFileFD(ULONG_PTR iFile)
{
  int v2; // eax
  int v3; // eax
  bool v4; // zf
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // [rsp+20h] [rbp-58h] BYREF
  __int128 v10; // [rsp+30h] [rbp-48h]
  __int128 v11; // [rsp+40h] [rbp-38h]
  __int128 v12; // [rsp+50h] [rbp-28h]
  __int128 v13; // [rsp+60h] [rbp-18h]

  if ( iFile )
  {
    *(_QWORD *)&v10 = 0LL;
    GreAcquireFastMutex(ghfmMemory);
    v2 = *(_DWORD *)(iFile + 100);
    if ( v2 )
    {
      v3 = v2 - 1;
      *(_DWORD *)(iFile + 100) = v3;
      if ( !v3 )
      {
        if ( *(_QWORD *)(iFile + 80) )
        {
          v4 = *(_QWORD *)(iFile + 16) == 0LL;
          v5 = *(_OWORD *)(iFile + 16);
          v9 = *(_OWORD *)iFile;
          v6 = *(_OWORD *)(iFile + 32);
          v10 = v5;
          v7 = *(_OWORD *)(iFile + 48);
          v11 = v6;
          v8 = *(_OWORD *)(iFile + 64);
          v12 = v7;
          v13 = v8;
          if ( !v4 )
          {
            *(_QWORD *)(iFile + 16) = 0LL;
            if ( !*(_QWORD *)(iFile + 8) && (*(_DWORD *)(iFile + 40) & 0x18) != 0 )
            {
              *(_QWORD *)(iFile + 48) = 0LL;
              *(_QWORD *)(iFile + 32) = 0LL;
            }
          }
        }
      }
    }
    GreReleaseFastMutex(ghfmMemory);
    if ( (_QWORD)v10 )
      vUnmapFileFD((struct _FILEVIEW *)&v9, (BYTE8(v11) & 8) != 0 || (BYTE8(v11) & 0x10) != 0);
  }
}
