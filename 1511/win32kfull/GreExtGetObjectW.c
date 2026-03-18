/*
 * XREFs of GreExtGetObjectW @ 0x1C0042130
 * Callers:
 *     NtGdiExtGetObjectW @ 0x1C0042030 (NtGdiExtGetObjectW.c)
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C006BFBC (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     GetWindowNCMetrics @ 0x1C007396C (GetWindowNCMetrics.c)
 *     RecreateRedirectionBitmap @ 0x1C009AB98 (RecreateRedirectionBitmap.c)
 *     xxxCreateCaret @ 0x1C00C6E54 (xxxCreateCaret.c)
 *     CreateCompatiblePublicDC @ 0x1C00CCE28 (CreateCompatiblePublicDC.c)
 *     xxxSetNCFonts @ 0x1C00CD2F8 (xxxSetNCFonts.c)
 *     CreateFontFromWinIni @ 0x1C00CDA98 (CreateFontFromWinIni.c)
 *     UserSetAltScaleFont @ 0x1C00CDBB4 (UserSetAltScaleFont.c)
 *     EraseBitmap @ 0x1C01103CC (EraseBitmap.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C011BF70 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     xxxSystemParametersInfo @ 0x1C0126360 (xxxSystemParametersInfo.c)
 *     ?GetCursorHeight@@YAHXZ @ 0x1C014AC2C (-GetCursorHeight@@YAHXZ.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C014B1C0 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01D696C (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 *     ?CreateScaledFont@@YAHPEAUHFONT__@@PEAPEAU1@HH@Z @ 0x1C01E9280 (-CreateScaledFont@@YAHPEAUHFONT__@@PEAPEAU1@HH@Z.c)
 *     xxxDrawState @ 0x1C023DD88 (xxxDrawState.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C023E554 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C0242490 (xxxRealDrawMenuItem.c)
 * Callees:
 *     ?cjGetBrushOrPen@@YAJPEAXH0@Z @ 0x1C00089CC (-cjGetBrushOrPen@@YAJPEAXH0@Z.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0022088 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1C002213C (--1LFONTOBJ@@QEAA@XZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     GreGetDIBitsInternal @ 0x1C0042840 (GreGetDIBitsInternal.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C007F5A0 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     ?cjGetLogicalColorSpace@@YAHPEAXH0@Z @ 0x1C02AFB94 (-cjGetLogicalColorSpace@@YAHPEAXH0@Z.c)
 */

__int64 __fastcall GreExtGetObjectW(HBRUSH a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned __int64 v4; // r14
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rbx
  int LogicalColorSpace; // eax
  int v11; // ecx
  int v12; // ecx
  unsigned __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rax
  int v16; // ecx
  struct LFONT *v17; // [rsp+80h] [rbp+8h] BYREF
  __int64 v18; // [rsp+98h] [rbp+20h] BYREF

  v4 = (int)a2;
  LODWORD(v6) = 0;
  if ( (((unsigned __int64)a1 >> 16) & 0x1F) == 5 )
  {
    if ( !a3 )
    {
      LODWORD(v6) = 32;
      return (unsigned int)v6;
    }
    if ( (int)a2 >= 32 )
    {
      LOBYTE(a2) = 5;
      v7 = HmgShareLockCheck(a1, a2);
      v8 = v7;
      if ( v7 )
      {
        if ( (*(_DWORD *)(v7 + 112) & 0x4100000) == 0 )
          goto LABEL_6;
        *(_DWORD *)a3 = 0;
        *((_DWORD *)a3 + 1) = *(_DWORD *)(v7 + 56);
        *((_DWORD *)a3 + 2) = *(_DWORD *)(v7 + 60);
        v11 = *((unsigned __int16 *)&galBitsPerPixel + 2 * *(unsigned int *)(v7 + 96));
        a3[9] = v11;
        v12 = *(_DWORD *)(v7 + 56) * v11;
        a3[8] = 1;
        *((_QWORD *)a3 + 3) = 0LL;
        LODWORD(v6) = 32;
        *((_DWORD *)a3 + 3) = ((v12 + 15) >> 3) & 0xFFFFFFFE;
        if ( (*(_WORD *)(v7 + 100) || !*(_QWORD *)(v7 + 184)) && (*(_DWORD *)(v7 + 112) & 0x100000) == 0 )
          goto LABEL_6;
        v13 = *(_QWORD *)(v7 + 72);
        if ( v13 < 0x10000 || v13 > (unsigned __int64)MmHighestUserAddress )
          v13 = 0LL;
        v14 = a3[9];
        *((_QWORD *)a3 + 3) = v13;
        *((_DWORD *)a3 + 3) = ((*(_DWORD *)(v8 + 56) * v14 + 31) >> 3) & 0xFFFFFFFC;
        if ( v4 < 0x68 )
          goto LABEL_6;
        *((_DWORD *)a3 + 8) = 40;
        a3[23] = 0;
        if ( (unsigned int)GreGetDIBitsInternal(0, (int)a1, 0, 0, 0LL, (struct tagBITMAPINFO *)(a3 + 16), 0, 0, 0x68u) )
        {
          LODWORD(v6) = 104;
          if ( (*(_DWORD *)(v8 + 112) & 0x100000) != 0 )
            *((_DWORD *)a3 + 13) = 0;
        }
        v15 = *(_QWORD *)(v8 + 120);
        if ( v15 )
        {
          v16 = *(_DWORD *)(v15 + 24);
          if ( (v16 & 2) != 0 )
          {
            *((_DWORD *)a3 + 18) = **(_DWORD **)(v15 + 128);
            *((_DWORD *)a3 + 19) = *(_DWORD *)(*(_QWORD *)(v15 + 128) + 4LL);
            *((_DWORD *)a3 + 20) = *(_DWORD *)(*(_QWORD *)(v15 + 128) + 8LL);
            goto LABEL_33;
          }
          if ( (v16 & 8) != 0 )
            *((_DWORD *)a3 + 12) = 0;
        }
        *((_QWORD *)a3 + 9) = 0LL;
        *((_DWORD *)a3 + 20) = 0;
LABEL_33:
        *((_QWORD *)a3 + 11) = *(_QWORD *)(v8 + 176);
        *((_DWORD *)a3 + 24) = *(_DWORD *)(v8 + 192);
LABEL_6:
        DEC_SHARE_REF_CNT(v8);
      }
    }
  }
  else
  {
    if ( (((unsigned __int64)a1 >> 16) & 0x1F) != 8 )
    {
      switch ( ((unsigned __int64)a1 >> 16) & 0x1F )
      {
        case 9uLL:
          LogicalColorSpace = cjGetLogicalColorSpace(a1, a2, a3);
          break;
        case 0xAuLL:
          LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v17, (struct HLFONT__ *)a1, 0LL);
          if ( v17 )
          {
            if ( a3 )
            {
              v6 = *((unsigned int *)v17 + 68);
              if ( v4 < v6 )
                LODWORD(v6) = v4;
              memmove(a3, (char *)v17 + 276, (unsigned int)v6);
            }
            else
            {
              LODWORD(v6) = *((_DWORD *)v17 + 68);
            }
          }
          LFONTOBJ::~LFONTOBJ(&v17);
          return (unsigned int)v6;
        case 0x10uLL:
          LogicalColorSpace = cjGetBrushOrPen(a1, a2, a3);
          break;
        default:
          return (unsigned int)v6;
      }
      LODWORD(v6) = LogicalColorSpace;
      return (unsigned int)v6;
    }
    LODWORD(v6) = 2;
    if ( a3 )
    {
      if ( (int)a2 >= 2 )
      {
        v18 = ghsemPalette;
        GreAcquireSemaphore(ghsemPalette);
        EPALOBJ::EPALOBJ((EPALOBJ *)&v17, (HPALETTE)a1);
        if ( v17 )
          *a3 = *((_WORD *)v17 + 14);
        else
          LODWORD(v6) = 0;
        EPALOBJ::~EPALOBJ((EPALOBJ *)&v17);
        SEMOBJ::vUnlock((SEMOBJ *)&v18);
      }
      else
      {
        LODWORD(v6) = 0;
      }
    }
  }
  return (unsigned int)v6;
}
