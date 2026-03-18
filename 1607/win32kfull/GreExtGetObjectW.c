/*
 * XREFs of GreExtGetObjectW @ 0x1C004BBB8
 * Callers:
 *     NtGdiExtGetObjectW @ 0x1C004BEB0 (NtGdiExtGetObjectW.c)
 *     GetWindowNCMetrics @ 0x1C0067650 (GetWindowNCMetrics.c)
 *     xxxSystemParametersInfo @ 0x1C0068630 (xxxSystemParametersInfo.c)
 *     EraseBitmap @ 0x1C009425C (EraseBitmap.c)
 *     _SetCursorIconData @ 0x1C009FF18 (_SetCursorIconData.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C00A04F0 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C00B5C4C (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     xxxSetNCFonts @ 0x1C00B8670 (xxxSetNCFonts.c)
 *     CreateFontFromWinIni @ 0x1C00B8F88 (CreateFontFromWinIni.c)
 *     UserSetAltScaleFont @ 0x1C00B90A4 (UserSetAltScaleFont.c)
 *     CreateCompatiblePublicDC @ 0x1C00B966C (CreateCompatiblePublicDC.c)
 *     RecreateRedirectionBitmap @ 0x1C00D7E4C (RecreateRedirectionBitmap.c)
 *     xxxCreateCaret @ 0x1C0122D94 (xxxCreateCaret.c)
 *     ?GetCursorHeight@@YAHXZ @ 0x1C0150204 (-GetCursorHeight@@YAHXZ.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C01506E0 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01CD808 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 *     GetScaledLogFontForDpi @ 0x1C01D9140 (GetScaledLogFontForDpi.c)
 *     CreateScaledFont @ 0x1C01DFEC4 (CreateScaledFont.c)
 *     xxxDrawState @ 0x1C0235770 (xxxDrawState.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0235F40 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C023882C (xxxRealDrawMenuItem.c)
 * Callees:
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0023CFC (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1C0023DB0 (--1LFONTOBJ@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C004998C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     GreGetDIBitsInternal @ 0x1C0049A50 (GreGetDIBitsInternal.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00F0E34 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C00F0E60 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?cjGetBrushOrPen@@YAJPEAXH0@Z @ 0x1C0138C9C (-cjGetBrushOrPen@@YAJPEAXH0@Z.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?cjGetLogicalColorSpace@@YAHPEAXH0@Z @ 0x1C02B2584 (-cjGetLogicalColorSpace@@YAHPEAXH0@Z.c)
 */

__int64 __fastcall GreExtGetObjectW(struct HLFONT__ *a1, int a2, unsigned __int16 *a3)
{
  unsigned __int64 v4; // r14
  unsigned __int64 v6; // rdi
  int LogicalColorSpace; // eax
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  int DIBitsInternal; // eax
  __int64 v13; // rax
  int v14; // ecx
  _BYTE v16[32]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v17; // [rsp+70h] [rbp-10h]
  struct LFONT *v18; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v19; // [rsp+C8h] [rbp+48h] BYREF

  v4 = a2;
  LODWORD(v6) = 0;
  switch ( ((unsigned int)a1 >> 16) & 0x1F )
  {
    case 5u:
      if ( !a3 )
      {
        LODWORD(v6) = 32;
        return (unsigned int)v6;
      }
      if ( a2 < 32 )
        return (unsigned int)v6;
      SURFREF::SURFREF((SURFREF *)v16, (HSURF)a1);
      v8 = v17;
      if ( !v17 )
      {
LABEL_45:
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v16);
        return (unsigned int)v6;
      }
      if ( (*(_DWORD *)(v17 + 112) & 0x4100000) == 0 )
        goto LABEL_44;
      *(_DWORD *)a3 = 0;
      *((_DWORD *)a3 + 1) = *(_DWORD *)(v8 + 56);
      *((_DWORD *)a3 + 2) = *(_DWORD *)(v8 + 60);
      v9 = *((unsigned __int16 *)&galBitsPerPixel + 2 * *(unsigned int *)(v8 + 96));
      a3[9] = v9;
      v10 = *(int *)(v8 + 56) * v9;
      *((_QWORD *)a3 + 3) = 0LL;
      a3[8] = 1;
      *((_DWORD *)a3 + 3) = ((unsigned __int64)(v10 + 15) >> 3) & 0xFFFFFFFE;
      LODWORD(v6) = 32;
      if ( (*(_WORD *)(v8 + 100) || !*(_QWORD *)(v8 + 192)) && (*(_DWORD *)(v8 + 112) & 0x100000) == 0 )
        goto LABEL_44;
      v11 = *(_QWORD *)(v8 + 72);
      if ( v11 < 0x10000 || v11 > (unsigned __int64)MmHighestUserAddress )
        v11 = 0LL;
      *((_QWORD *)a3 + 3) = v11;
      *((_DWORD *)a3 + 3) = ((*(int *)(v8 + 56) * (unsigned __int64)a3[9] + 31) >> 3) & 0xFFFFFFFC;
      if ( v4 < 0x68 )
      {
LABEL_44:
        DEC_SHARE_REF_CNT(v8);
        goto LABEL_45;
      }
      *((_DWORD *)a3 + 8) = 40;
      a3[23] = 0;
      DIBitsInternal = GreGetDIBitsInternal(0LL, (HSURF)a1, 0, 0, 0LL, (struct tagBITMAPINFO *)(a3 + 16), 0, 0, 0x68u);
      v8 = v17;
      if ( DIBitsInternal )
      {
        LODWORD(v6) = 104;
        if ( (*(_DWORD *)(v17 + 112) & 0x100000) != 0 )
          *((_DWORD *)a3 + 13) = 0;
      }
      v13 = *(_QWORD *)(v8 + 120);
      if ( v13 )
      {
        v14 = *(_DWORD *)(v13 + 24);
        if ( (v14 & 2) != 0 )
        {
          *((_DWORD *)a3 + 18) = **(_DWORD **)(v13 + 120);
          *((_DWORD *)a3 + 19) = *(_DWORD *)(*(_QWORD *)(v13 + 120) + 4LL);
          *((_DWORD *)a3 + 20) = *(_DWORD *)(*(_QWORD *)(v13 + 120) + 8LL);
LABEL_43:
          *((_QWORD *)a3 + 11) = *(_QWORD *)(v8 + 184);
          *((_DWORD *)a3 + 24) = *(_DWORD *)(v8 + 200);
          goto LABEL_44;
        }
        if ( (v14 & 8) != 0 )
          *((_DWORD *)a3 + 12) = 0;
      }
      *((_QWORD *)a3 + 9) = 0LL;
      *((_DWORD *)a3 + 20) = 0;
      goto LABEL_43;
    case 8u:
      LODWORD(v6) = 2;
      if ( a3 )
      {
        if ( a2 >= 2 )
        {
          v19 = ghsemPalette;
          GreAcquireSemaphore(ghsemPalette);
          EPALOBJ::EPALOBJ((EPALOBJ *)&v18, (HPALETTE)a1);
          if ( v18 )
            *a3 = *((_WORD *)v18 + 14);
          else
            LODWORD(v6) = 0;
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v18);
          SEMOBJ::vUnlock((SEMOBJ *)&v19);
        }
        else
        {
          LODWORD(v6) = 0;
        }
      }
      break;
    case 9u:
      LogicalColorSpace = cjGetLogicalColorSpace((HCOLORSPACE)a1, a2, a3);
      goto LABEL_7;
    case 0xAu:
      LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v18, a1, 0LL);
      if ( v18 )
      {
        if ( a3 )
        {
          v6 = *((unsigned int *)v18 + 68);
          if ( v4 < v6 )
            LODWORD(v6) = v4;
          memmove(a3, (char *)v18 + 276, (unsigned int)v6);
        }
        else
        {
          LODWORD(v6) = *((_DWORD *)v18 + 68);
        }
      }
      LFONTOBJ::~LFONTOBJ(&v18);
      break;
    case 0x10u:
      LogicalColorSpace = cjGetBrushOrPen((HBRUSH)a1, a2, a3);
LABEL_7:
      LODWORD(v6) = LogicalColorSpace;
      break;
  }
  return (unsigned int)v6;
}
