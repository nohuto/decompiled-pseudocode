/*
 * XREFs of EngUnmapFontFileFD @ 0x1400C2BE0
 * Callers:
 *     xInsertMetricsRFONTOBJ @ 0x1400C21D8 (xInsertMetricsRFONTOBJ.c)
 *     ?QueryAdvanceWidths@PFFOBJ@@QEAAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1400C258C (-QueryAdvanceWidths@PFFOBJ@@QEAAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1400C2758 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     ?QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z @ 0x1400C2794 (-QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z.c)
 *     ?UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400C29D0 (-UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     NtGdiGetFontFileData @ 0x1400CF300 (NtGdiGetFontFileData.c)
 *     ?bInitCache@RFONTOBJ@@QEAAHK@Z @ 0x1400FB968 (-bInitCache@RFONTOBJ@@QEAAHK@Z.c)
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1400FC304 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU_GLYPHBITS@@@Z @ 0x1400FC8C8 (-QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x140101DB4 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x140102C2C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?GrepGetGlyphOutline@@YAKAEAVDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@H@Z @ 0x14010CB48 (-GrepGetGlyphOutline@@YAKAEAVDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@H@Z.c)
 *     ?TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1401871BC (-TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 *     ?QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1401DD3CC (-QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z.c)
 *     ??1UmfdClientSideFileViewMapper@@QEAA@XZ @ 0x14021AC50 (--1UmfdClientSideFileViewMapper@@QEAA@XZ.c)
 *     ?GetTrueTypeFile@PFFOBJ@@QEAAPEAX_KPEAK@Z @ 0x1402200D4 (-GetTrueTypeFile@PFFOBJ@@QEAAPEAX_KPEAK@Z.c)
 *     ?GreMakeFontDir@@YAKKPEAEPEAG@Z @ 0x140226FB4 (-GreMakeFontDir@@YAKKPEAEPEAG@Z.c)
 *     ?ResetFontFileView@@YAXPEAPEAUFONTFILEVIEW@@KPEAPEAXPEAK@Z @ 0x140326D64 (-ResetFontFileView@@YAXPEAPEAUFONTFILEVIEW@@KPEAPEAXPEAK@Z.c)
 * Callees:
 *     ?vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z @ 0x1400D3DA0 (-vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __stdcall EngUnmapFontFileFD(ULONG_PTR iFile)
{
  Gre::Base *v2; // rcx
  struct _FAST_MUTEX **v3; // rdi
  int v4; // ecx
  int v5; // ecx
  char v6; // bl
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  _QWORD v11[4]; // [rsp+28h] [rbp-29h] BYREF
  int v12; // [rsp+48h] [rbp-9h]
  __int128 v13; // [rsp+58h] [rbp+7h] BYREF
  __int128 v14; // [rsp+68h] [rbp+17h]
  __int128 v15; // [rsp+78h] [rbp+27h]
  __int128 v16; // [rsp+88h] [rbp+37h]
  __int128 v17; // [rsp+98h] [rbp+47h]

  memset_0(&v13, 0, 0x50uLL);
  if ( iFile )
  {
    v3 = (struct _FAST_MUTEX **)Gre::Base::Globals(v2);
    KeAcquireGuardedMutex(*v3 + 26);
    v4 = *(_DWORD *)(iFile + 100);
    if ( v4 )
    {
      v5 = v4 - 1;
      *(_DWORD *)(iFile + 100) = v5;
      if ( !v5 )
      {
        if ( *(_QWORD *)(iFile + 80) )
        {
          v7 = *(_OWORD *)(iFile + 16);
          v13 = *(_OWORD *)iFile;
          v8 = *(_OWORD *)(iFile + 32);
          v14 = v7;
          v9 = *(_OWORD *)(iFile + 48);
          v15 = v8;
          v10 = *(_OWORD *)(iFile + 64);
          v16 = v9;
          v17 = v10;
          if ( *(_QWORD *)(iFile + 16) )
          {
            *(_QWORD *)(iFile + 16) = 0LL;
            if ( !*(_QWORD *)(iFile + 8) && (*(_BYTE *)(iFile + 44) || *(_BYTE *)(iFile + 45)) )
            {
              *(_QWORD *)(iFile + 48) = 0LL;
              *(_QWORD *)(iFile + 32) = 0LL;
            }
          }
        }
      }
    }
    KeReleaseGuardedMutex(*v3 + 26);
    if ( (_QWORD)v14 )
    {
      if ( BYTE12(v15) || (v6 = 0, BYTE13(v15)) )
        v6 = 1;
      v11[0] = *((_QWORD *)&v17 + 1);
      v11[2] = v14;
      v11[1] = 0LL;
      v11[3] = 0LL;
      v12 = 5;
      Gre::MapViewOfSectionObj::Unmap((Gre::MapViewOfSectionObj *)v11);
      if ( !*((_QWORD *)&v13 + 1) )
      {
        if ( v6 )
          vUnreferenceFileviewSection((struct FILEVIEW *)&v13);
      }
    }
  }
}
