/*
 * XREFs of GreGetTextExtentW @ 0x1C0123640
 * Callers:
 *     ?xxxMB_FindLongestString@@YAIPEAUHDC__@@@Z @ 0x1C00B91E4 (-xxxMB_FindLongestString@@YAIPEAUHDC__@@@Z.c)
 *     xxxPSMGetTextExtent @ 0x1C00B92A4 (xxxPSMGetTextExtent.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z @ 0x1C014E06C (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C014FB78 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C01F67B0 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C022FFA0 (xxxDrawCaptionTemp.c)
 *     ?xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0236574 (-xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     xxxPSMTextOut @ 0x1C023C4C4 (xxxPSMTextOut.c)
 *     DT_GetExtentMinusPrefixes @ 0x1C024728C (DT_GetExtentMinusPrefixes.c)
 *     NeedsEndEllipsis @ 0x1C02478DC (NeedsEndEllipsis.c)
 *     GreGetCharacterPlacementW @ 0x1C0290D00 (GreGetCharacterPlacementW.c)
 *     NtGdiGetTextExtent @ 0x1C02A8770 (NtGdiGetTextExtent.c)
 * Callees:
 *     ?bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z @ 0x1C0013F48 (-bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z.c)
 *     ?vAbs@EFLOAT@@QEAAXXZ @ 0x1C00143BC (-vAbs@EFLOAT@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002D6C4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1C002DE58 (-bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z @ 0x1C002E5E8 (-vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002EAC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z @ 0x1C00317F4 (-bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0031964 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ??1ESTROBJ@@QEAA@XZ @ 0x1C0032018 (--1ESTROBJ@@QEAA@XZ.c)
 *     ??0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z @ 0x1C00394A4 (--0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0039508 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bUseMetaPtoD@DC@@QEAAHXZ @ 0x1C004A980 (-bUseMetaPtoD@DC@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall GreGetTextExtentW(HDC a1, unsigned __int16 *a2, unsigned int a3, struct tagSIZE *a4, char a5)
{
  unsigned int v5; // ebx
  struct _FD_XFORM *v9; // r11
  int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // r8
  float cy; // xmm1_4
  __m128i v14; // xmm0
  struct _FD_XFORM *v16; // [rsp+98h] [rbp-80h] BYREF
  float cx; // [rsp+A0h] [rbp-78h] BYREF
  float v18; // [rsp+A4h] [rbp-74h] BYREF
  float *v19[2]; // [rsp+A8h] [rbp-70h] BYREF
  DC *v20[2]; // [rsp+B8h] [rbp-60h] BYREF
  _BYTE v21[32]; // [rsp+C8h] [rbp-50h] BYREF
  int v22; // [rsp+E8h] [rbp-30h] BYREF
  _DWORD v23[11]; // [rsp+ECh] [rbp-2Ch] BYREF
  _BYTE v24[320]; // [rsp+118h] [rbp+0h] BYREF

  v5 = 0;
  if ( a3 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v20, a1);
    if ( v20[0] )
    {
      if ( (unsigned int)RFONTOBJ::bInit(&v16, (struct XDCOBJ *)v20, 0, (a5 & 2) != 0 ? 4 : 2) )
        GreAcquireSemaphore(*(_QWORD *)&v16[33].eXX);
      v9 = v16;
      if ( v16 )
      {
        if ( (LODWORD(v16[4].eXY) & 4) != 0 )
          RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v16, a2, a3);
        v10 = *((_DWORD *)v20[0] + 543);
        if ( v10 == LODWORD(v9[24].eXY) || LODWORD(v9[12].eYX) == 1 && (LODWORD(v9[30].eYX) & 4) == 0 )
        {
          v5 = RFONTOBJ::bTextExtent(
                 (RFONTOBJ *)&v16,
                 (struct XDCOBJ *)v20,
                 a2,
                 a3,
                 v10,
                 *(_DWORD *)(*((_QWORD *)v20[0] + 10) + 160LL),
                 *(_DWORD *)(*((_QWORD *)v20[0] + 10) + 168LL),
                 *(_DWORD *)(*((_QWORD *)v20[0] + 10) + 172LL),
                 a5,
                 a4);
          if ( v5
            && v10
            && *(_DWORD *)(*((_QWORD *)v20[0] + 10) + 68LL) == 1
            && !(unsigned int)DC::bUseMetaPtoD(v20[0])
            && (LODWORD(v16[30].eYX) & 4) != 0 )
          {
            cy = (float)a4->cy;
            cx = (float)a4->cx;
            v14 = (__m128i)COERCE_UNSIGNED_INT((float)v10);
            v18 = cy;
            *(float *)v14.m128i_i32 = *(float *)v14.m128i_i32 / 10.0;
            v22 = efCos((unsigned int)_mm_cvtsi128_si32(v14));
            EFLOAT::vAbs((EFLOAT *)&v22);
            v23[2] = v22;
            v23[0] = efSin((unsigned int)_mm_cvtsi128_si32(v14));
            EFLOAT::vAbs((EFLOAT *)v23);
            v23[3] = 0;
            v23[4] = 0;
            v23[1] = v23[0];
            EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v19, (struct MATRIX *)&v22, 33);
            v5 = 1;
            if ( ((_DWORD)v19[0][8] & 2) == 0 )
              v5 = EXFORMOBJ::bXform((EXFORMOBJ *)v19, (struct VECTORFL *)&cx, (struct VECTORFL *)&cx, 1uLL);
            if ( v5 )
            {
              EFLOAT::vAbs((EFLOAT *)&cx);
              EFLOAT::vAbs((EFLOAT *)&v18);
              v5 = EPOINTFL::bToPOINTL((EPOINTFL *)&cx, (struct _POINTL *)a4);
            }
          }
        }
        else
        {
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v19, (struct XDCOBJ *)v20, 0x204u);
          ESTROBJ::vInit(
            (ESTROBJ *)v24,
            a2,
            a3,
            (struct XDCOBJ *)v20,
            (struct RFONTOBJ *)&v16,
            v19,
            0LL,
            0,
            v10,
            *(_DWORD *)(*((_QWORD *)v20[0] + 10) + 160LL),
            *(_DWORD *)(*((_QWORD *)v20[0] + 10) + 168LL),
            *(_DWORD *)(*((_QWORD *)v20[0] + 10) + 172LL),
            0,
            0,
            0,
            0LL,
            0LL,
            0);
          if ( (v24[64] & 4) != 0 )
            v5 = ESTROBJ::bTextExtent((ESTROBJ *)v24, (struct RFONTOBJ *)&v16, v10, a4);
          ESTROBJ::~ESTROBJ((ESTROBJ *)v24, v11, v12);
        }
      }
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v16);
    }
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v20);
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v21);
  }
  else
  {
    a4->cx = 0;
    a4->cy = 0;
    return 1;
  }
  return v5;
}
