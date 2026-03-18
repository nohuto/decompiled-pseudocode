/*
 * XREFs of GreGetTextExtentW @ 0x1C01027C0
 * Callers:
 *     xxxPSMGetTextExtent @ 0x1C00CD07C (xxxPSMGetTextExtent.c)
 *     ?xxxMB_FindLongestString@@YAIPEAUHDC__@@@Z @ 0x1C00CD238 (-xxxMB_FindLongestString@@YAIPEAUHDC__@@@Z.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z @ 0x1C0148FE4 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C014A490 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C01FF024 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C0237D58 (xxxDrawCaptionTemp.c)
 *     ?xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C023EBC4 (-xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     xxxPSMTextOut @ 0x1C02449F4 (xxxPSMTextOut.c)
 *     DT_GetExtentMinusPrefixes @ 0x1C024AF7C (DT_GetExtentMinusPrefixes.c)
 *     NeedsEndEllipsis @ 0x1C024B5AC (NeedsEndEllipsis.c)
 *     GreGetCharacterPlacementW @ 0x1C0291D38 (GreGetCharacterPlacementW.c)
 *     NtGdiGetTextExtent @ 0x1C02A6D60 (NtGdiGetTextExtent.c)
 * Callees:
 *     ?bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z @ 0x1C001900C (-bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z.c)
 *     ??0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z @ 0x1C0019BB4 (--0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0019C30 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vAbs@EFLOAT@@QEAAXXZ @ 0x1C001AA28 (-vAbs@EFLOAT@@QEAAXXZ.c)
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1C0022E08 (-bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z @ 0x1C00236A0 (-vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0023A60 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0027184 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bUseMetaPtoD@DC@@QEAAHXZ @ 0x1C00275DC (-bUseMetaPtoD@DC@@QEAAHXZ.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0028490 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z @ 0x1C0150F20 (-bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z.c)
 *     ??1ESTROBJ@@QEAA@XZ @ 0x1C0151048 (--1ESTROBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall GreGetTextExtentW(HDC a1, unsigned __int16 *a2, unsigned int a3, struct tagSIZE *a4, char a5)
{
  unsigned int v5; // ebx
  struct _FD_XFORM *v9; // r11
  int v10; // esi
  float cy; // xmm1_4
  __m128i v13; // xmm0
  struct _FD_XFORM *v14; // [rsp+98h] [rbp-80h] BYREF
  float cx; // [rsp+A0h] [rbp-78h] BYREF
  float v16; // [rsp+A4h] [rbp-74h] BYREF
  DC *v17[2]; // [rsp+A8h] [rbp-70h] BYREF
  _QWORD v18[2]; // [rsp+B8h] [rbp-60h] BYREF
  int v19; // [rsp+C8h] [rbp-50h] BYREF
  _DWORD v20[11]; // [rsp+CCh] [rbp-4Ch] BYREF
  _BYTE v21[320]; // [rsp+F8h] [rbp-20h] BYREF

  v5 = 0;
  if ( a3 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v17, a1);
    if ( v17[0] )
    {
      if ( (unsigned int)RFONTOBJ::bInit(&v14, (struct XDCOBJ *)v17, 0, (a5 & 2) != 0 ? 4 : 2) )
        GreAcquireSemaphore(*(_QWORD *)&v14[33].eXX);
      v9 = v14;
      if ( v14 )
      {
        if ( (LODWORD(v14[4].eXY) & 4) != 0 )
          RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v14, a2, a3);
        v10 = *((_DWORD *)v17[0] + 537);
        if ( v10 == LODWORD(v9[24].eXY) || LODWORD(v9[12].eYX) == 1 && (LODWORD(v9[30].eYX) & 4) == 0 )
        {
          v5 = RFONTOBJ::bTextExtent(
                 (RFONTOBJ *)&v14,
                 (struct XDCOBJ *)v17,
                 a2,
                 a3,
                 v10,
                 *(_DWORD *)(*((_QWORD *)v17[0] + 10) + 160LL),
                 *(_DWORD *)(*((_QWORD *)v17[0] + 10) + 168LL),
                 *(_DWORD *)(*((_QWORD *)v17[0] + 10) + 172LL),
                 a5,
                 a4);
          if ( v5
            && v10
            && *(_DWORD *)(*((_QWORD *)v17[0] + 10) + 68LL) == 1
            && !(unsigned int)DC::bUseMetaPtoD(v17[0])
            && (LODWORD(v14[30].eYX) & 4) != 0 )
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
            EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v18, (struct MATRIX *)&v19, 33);
            v5 = 1;
            if ( (*(_DWORD *)(v18[0] + 32LL) & 2) == 0 )
              v5 = EXFORMOBJ::bXform((EXFORMOBJ *)v18, (struct VECTORFL *)&cx, (struct VECTORFL *)&cx, 1uLL);
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
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v18, (struct XDCOBJ *)v17, 0x204u);
          ESTROBJ::vInit(
            (ESTROBJ *)v21,
            a2,
            a3,
            (struct XDCOBJ *)v17,
            (struct RFONTOBJ *)&v14,
            (struct EXFORMOBJ *)v18,
            0LL,
            0,
            v10,
            *(_DWORD *)(*((_QWORD *)v17[0] + 10) + 160LL),
            *(_DWORD *)(*((_QWORD *)v17[0] + 10) + 168LL),
            *(_DWORD *)(*((_QWORD *)v17[0] + 10) + 172LL),
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
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v17);
  }
  else
  {
    a4->cx = 0;
    a4->cy = 0;
    return 1;
  }
  return v5;
}
