/*
 * XREFs of GreExtGetObjectW @ 0x1C0014EE0
 * Callers:
 *     RecreateRedirectionBitmap @ 0x1C000B580 (RecreateRedirectionBitmap.c)
 *     GetWindowNCMetrics @ 0x1C0011420 (GetWindowNCMetrics.c)
 *     NtGdiExtGetObjectW @ 0x1C0014DE0 (NtGdiExtGetObjectW.c)
 *     xxxSystemParametersInfo @ 0x1C003A8E0 (xxxSystemParametersInfo.c)
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0053F14 (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     xxxCreateCaret @ 0x1C0077AD0 (xxxCreateCaret.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C0091AE0 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     _SetCursorIconData @ 0x1C0091DB4 (_SetCursorIconData.c)
 *     EraseBitmap @ 0x1C0100680 (EraseBitmap.c)
 *     ?GetCursorHeight@@YAHXZ @ 0x1C0120E0C (-GetCursorHeight@@YAHXZ.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C01214B0 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     CreateCompatiblePublicDC @ 0x1C0126D64 (CreateCompatiblePublicDC.c)
 *     xxxSetNCFonts @ 0x1C0137618 (xxxSetNCFonts.c)
 *     UserSetAltScaleFont @ 0x1C0137ED0 (UserSetAltScaleFont.c)
 *     CreateFontFromWinIni @ 0x1C0137FF8 (CreateFontFromWinIni.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01D4DB0 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 *     ?CreateScaledFont@@YAHPEAUHFONT__@@PEAPEAU1@HH@Z @ 0x1C01E8C50 (-CreateScaledFont@@YAHPEAUHFONT__@@PEAPEAU1@HH@Z.c)
 *     xxxDrawState @ 0x1C023DBC0 (xxxDrawState.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C023E3A4 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C0242300 (xxxRealDrawMenuItem.c)
 * Callees:
 *     ?cjGetBrushOrPen@@YAJPEAXH0@Z @ 0x1C00076BC (-cjGetBrushOrPen@@YAJPEAXH0@Z.c)
 *     GreGetDIBitsInternal @ 0x1C0016330 (GreGetDIBitsInternal.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0016BE8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0029850 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1C0029904 (--1LFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00EB1E4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C0290DF0 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?cjGetLogicalColorSpace@@YAHPEAXH0@Z @ 0x1C02B0970 (-cjGetLogicalColorSpace@@YAHPEAXH0@Z.c)
 */

__int64 __fastcall GreExtGetObjectW(HSURF a1, int a2, unsigned __int16 *a3)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v6; // rdi
  int LogicalColorSpace; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  int DIBitsInternal; // eax
  __int64 v14; // rax
  int v15; // ecx
  _BYTE v17[32]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v18; // [rsp+70h] [rbp-38h]
  __int64 v19; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v20; // [rsp+C8h] [rbp+20h] BYREF

  v4 = a2;
  LODWORD(v6) = 0;
  switch ( ((unsigned __int64)a1 >> 16) & 0x1F )
  {
    case 5uLL:
      if ( !a3 )
      {
        LODWORD(v6) = 32;
        return (unsigned int)v6;
      }
      if ( a2 < 32 )
        return (unsigned int)v6;
      SURFREF::SURFREF((SURFREF *)v17, a1);
      v9 = v18;
      if ( !v18 )
      {
LABEL_45:
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v17);
        return (unsigned int)v6;
      }
      if ( (*(_DWORD *)(v18 + 112) & 0x4100000) == 0 )
        goto LABEL_44;
      *(_DWORD *)a3 = 0;
      *((_DWORD *)a3 + 1) = *(_DWORD *)(v9 + 56);
      *((_DWORD *)a3 + 2) = *(_DWORD *)(v9 + 60);
      v10 = *((unsigned __int16 *)&galBitsPerPixel + 2 * *(unsigned int *)(v9 + 96));
      a3[9] = v10;
      v11 = *(int *)(v9 + 56) * v10;
      *((_QWORD *)a3 + 3) = 0LL;
      a3[8] = 1;
      *((_DWORD *)a3 + 3) = ((unsigned __int64)(v11 + 15) >> 3) & 0xFFFFFFFE;
      LODWORD(v6) = 32;
      if ( (*(_WORD *)(v9 + 100) || !*(_QWORD *)(v9 + 184)) && (*(_DWORD *)(v9 + 112) & 0x100000) == 0 )
        goto LABEL_44;
      v12 = *(_QWORD *)(v9 + 72);
      if ( v12 < 0x10000 || v12 > (unsigned __int64)MmHighestUserAddress )
        v12 = 0LL;
      *((_QWORD *)a3 + 3) = v12;
      *((_DWORD *)a3 + 3) = ((*(int *)(v9 + 56) * (unsigned __int64)a3[9] + 31) >> 3) & 0xFFFFFFFC;
      if ( v4 < 0x68 )
      {
LABEL_44:
        DEC_SHARE_REF_CNT(v9);
        goto LABEL_45;
      }
      *((_DWORD *)a3 + 8) = 40;
      a3[23] = 0;
      DIBitsInternal = GreGetDIBitsInternal(0LL, a1, 0LL, (struct tagBITMAPINFO *)(a3 + 16), 0, 0, 0x68u);
      v9 = v18;
      if ( DIBitsInternal )
      {
        LODWORD(v6) = 104;
        if ( (*(_DWORD *)(v18 + 112) & 0x100000) != 0 )
          *((_DWORD *)a3 + 13) = 0;
      }
      v14 = *(_QWORD *)(v9 + 120);
      if ( v14 )
      {
        v15 = *(_DWORD *)(v14 + 24);
        if ( (v15 & 2) != 0 )
        {
          *((_DWORD *)a3 + 18) = **(_DWORD **)(v14 + 128);
          *((_DWORD *)a3 + 19) = *(_DWORD *)(*(_QWORD *)(v14 + 128) + 4LL);
          *((_DWORD *)a3 + 20) = *(_DWORD *)(*(_QWORD *)(v14 + 128) + 8LL);
LABEL_43:
          *((_QWORD *)a3 + 11) = *(_QWORD *)(v9 + 176);
          *((_DWORD *)a3 + 24) = *(_DWORD *)(v9 + 192);
          goto LABEL_44;
        }
        if ( (v15 & 8) != 0 )
          *((_DWORD *)a3 + 12) = 0;
      }
      *((_QWORD *)a3 + 9) = 0LL;
      *((_DWORD *)a3 + 20) = 0;
      goto LABEL_43;
    case 8uLL:
      LODWORD(v6) = 2;
      if ( a3 )
      {
        if ( a2 >= 2 )
        {
          v20 = ghsemPalette;
          GreAcquireSemaphore(ghsemPalette);
          EPALOBJ::EPALOBJ((EPALOBJ *)&v19, (HPALETTE)a1);
          v8 = v19;
          if ( v19 )
          {
            *a3 = *(_WORD *)(v19 + 28);
            DEC_SHARE_REF_CNT(v8);
          }
          else
          {
            LODWORD(v6) = 0;
          }
          SEMOBJ::vUnlock((SEMOBJ *)&v20);
        }
        else
        {
          LODWORD(v6) = 0;
        }
      }
      break;
    case 9uLL:
      LogicalColorSpace = cjGetLogicalColorSpace((HCOLORSPACE)a1, a2, a3);
      goto LABEL_7;
    case 0xAuLL:
      LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v19, (struct HLFONT__ *)a1, 0LL);
      if ( v19 )
      {
        if ( a3 )
        {
          v6 = *(unsigned int *)(v19 + 272);
          if ( v4 < v6 )
            LODWORD(v6) = v4;
          memmove(a3, (const void *)(v19 + 276), (unsigned int)v6);
        }
        else
        {
          LODWORD(v6) = *(_DWORD *)(v19 + 272);
        }
      }
      LFONTOBJ::~LFONTOBJ((LFONTOBJ *)&v19);
      break;
    case 0x10uLL:
      LogicalColorSpace = cjGetBrushOrPen((HBRUSH)a1, a2, a3);
LABEL_7:
      LODWORD(v6) = LogicalColorSpace;
      break;
  }
  return (unsigned int)v6;
}
