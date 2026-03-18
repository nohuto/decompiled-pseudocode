/*
 * XREFs of GreGetTextExtentW @ 0x1C00FA610
 * Callers:
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z @ 0x1C011F970 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z.c)
 *     ?xxxTooltipGetSize@@YAXPEAUtagTOOLTIPWND@@PEAUtagSIZE@@@Z @ 0x1C0120F88 (-xxxTooltipGetSize@@YAXPEAUtagTOOLTIPWND@@PEAUtagSIZE@@@Z.c)
 *     ?xxxMB_FindLongestString@@YAIPEAUHDC__@@@Z @ 0x1C013815C (-xxxMB_FindLongestString@@YAIPEAUHDC__@@@Z.c)
 *     xxxPSMGetTextExtent @ 0x1C013821C (xxxPSMGetTextExtent.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C01FEC24 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C0237948 (xxxDrawCaptionTemp.c)
 *     ?xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C023EA14 (-xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     xxxPSMTextOut @ 0x1C0244864 (xxxPSMTextOut.c)
 *     DT_GetExtentMinusPrefixes @ 0x1C024AFBC (DT_GetExtentMinusPrefixes.c)
 *     NeedsEndEllipsis @ 0x1C024B614 (NeedsEndEllipsis.c)
 *     GreGetCharacterPlacementW @ 0x1C02921F0 (GreGetCharacterPlacementW.c)
 *     NtGdiGetTextExtent @ 0x1C02A7550 (NtGdiGetTextExtent.c)
 * Callees:
 *     ?bUseMetaPtoD@DC@@QEAAHXZ @ 0x1C001CF10 (-bUseMetaPtoD@DC@@QEAAHXZ.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C00225B0 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1C002A670 (-bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z @ 0x1C002AF34 (-vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002B2F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002F3C8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z @ 0x1C0032704 (-bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z.c)
 *     ?vAbs@EFLOAT@@QEAAXXZ @ 0x1C003280C (-vAbs@EFLOAT@@QEAAXXZ.c)
 *     ??0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z @ 0x1C0032C38 (--0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0032CA0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z @ 0x1C015B7D0 (-bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z.c)
 *     ??1ESTROBJ@@QEAA@XZ @ 0x1C015B8F8 (--1ESTROBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetTextExtentW(HDC a1, __m128i *a2, unsigned int a3, struct tagSIZE *a4, char a5)
{
  unsigned int v5; // ebx
  struct RFONTOBJ *v9; // r11
  int v10; // esi
  float cy; // xmm1_4
  __m128i v13; // xmm0
  struct RFONTOBJ *v14; // [rsp+98h] [rbp-80h] BYREF
  float cx; // [rsp+A0h] [rbp-78h] BYREF
  float v16; // [rsp+A4h] [rbp-74h] BYREF
  float *v17[2]; // [rsp+A8h] [rbp-70h] BYREF
  DC *v18[6]; // [rsp+B8h] [rbp-60h] BYREF
  int v19; // [rsp+E8h] [rbp-30h] BYREF
  _DWORD v20[11]; // [rsp+ECh] [rbp-2Ch] BYREF
  _BYTE v21[320]; // [rsp+118h] [rbp+0h] BYREF

  v5 = 0;
  if ( a3 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v18, a1);
    if ( v18[0] )
    {
      if ( (unsigned int)RFONTOBJ::bInit((struct _FD_XFORM **)&v14, (struct XDCOBJ *)v18, 0, (a5 & 2) != 0 ? 4 : 2) )
        GreAcquireSemaphore(*((_QWORD *)v14 + 66));
      v9 = v14;
      if ( v14 )
      {
        if ( (*((_DWORD *)v14 + 17) & 4) != 0 )
          RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v14, (unsigned __int16 *)a2, a3);
        v10 = *((_DWORD *)v18[0] + 543);
        if ( v10 == *((_DWORD *)v9 + 97) || *((_DWORD *)v9 + 50) == 1 && (*((_DWORD *)v9 + 122) & 4) == 0 )
        {
          v5 = RFONTOBJ::bTextExtent(
                 (RFONTOBJ *)&v14,
                 (struct XDCOBJ *)v18,
                 (unsigned __int16 *)a2,
                 a3,
                 v10,
                 *(_DWORD *)(*((_QWORD *)v18[0] + 10) + 160LL),
                 *(_DWORD *)(*((_QWORD *)v18[0] + 10) + 168LL),
                 *(_DWORD *)(*((_QWORD *)v18[0] + 10) + 172LL),
                 a5,
                 a4);
          if ( v5
            && v10
            && *(_DWORD *)(*((_QWORD *)v18[0] + 10) + 68LL) == 1
            && !(unsigned int)DC::bUseMetaPtoD(v18[0])
            && (*((_DWORD *)v14 + 122) & 4) != 0 )
          {
            cy = (float)a4->cy;
            cx = (float)a4->cx;
            v13 = (__m128i)COERCE_UNSIGNED_INT((float)v10);
            v16 = cy;
            *(float *)v13.m128i_i32 = *(float *)v13.m128i_i32 / 10.0;
            v19 = efCos((unsigned int)_mm_cvtsi128_si32(v13));
            EFLOAT::vAbs((EFLOAT *)&v19);
            v20[2] = v19;
            v20[0] = efSin((unsigned int)_mm_cvtsi128_si32(v13));
            EFLOAT::vAbs((EFLOAT *)v20);
            v20[3] = 0;
            v20[4] = 0;
            v20[1] = v20[0];
            EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v17, (struct MATRIX *)&v19, 33);
            v5 = 1;
            if ( ((_DWORD)v17[0][8] & 2) == 0 )
              v5 = EXFORMOBJ::bXform((EXFORMOBJ *)v17, (struct VECTORFL *)&cx, (struct VECTORFL *)&cx, 1uLL);
            if ( v5 )
            {
              EFLOAT::vAbs((EFLOAT *)&cx);
              EFLOAT::vAbs((EFLOAT *)&v16);
              v5 = EPOINTFL::bToPOINTL((EPOINTFL *)&cx, (struct _POINTL *)a4);
            }
          }
        }
        else
        {
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v17, (struct XDCOBJ *)v18, 0x204u);
          ESTROBJ::vInit(
            (ESTROBJ *)v21,
            a2,
            a3,
            (struct XDCOBJ *)v18,
            &v14,
            v17,
            0LL,
            0,
            v10,
            *(_DWORD *)(*((_QWORD *)v18[0] + 10) + 160LL),
            *(_DWORD *)(*((_QWORD *)v18[0] + 10) + 168LL),
            *(_DWORD *)(*((_QWORD *)v18[0] + 10) + 172LL),
            0,
            0,
            0,
            0LL,
            0LL,
            0);
          if ( (v21[64] & 4) != 0 )
            v5 = ESTROBJ::bTextExtent((ESTROBJ *)v21, (struct RFONTOBJ *)&v14, v10, a4);
          ESTROBJ::~ESTROBJ((ESTROBJ *)v21);
        }
      }
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v14);
    }
    DCOBJ::~DCOBJ((DCOBJ *)v18);
  }
  else
  {
    a4->cx = 0;
    a4->cy = 0;
    return 1;
  }
  return v5;
}
