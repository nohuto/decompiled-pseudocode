/*
 * XREFs of CALL_LPK @ 0x1C00CD148
 * Callers:
 *     xxxPSMGetTextExtent @ 0x1C00CD07C (xxxPSMGetTextExtent.c)
 *     ?xxxMB_FindLongestString@@YAIPEAUHDC__@@@Z @ 0x1C00CD238 (-xxxMB_FindLongestString@@YAIPEAUHDC__@@@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C010E45C (xxxDrawMenuBarUnderlines.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z @ 0x1C0148FE4 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C014A490 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C014C01C (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C0237D58 (xxxDrawCaptionTemp.c)
 *     ?xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C023EBC4 (-xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     ?xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C023EEA4 (-xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxPSMTextOut @ 0x1C02449F4 (xxxPSMTextOut.c)
 *     DT_DrawStr @ 0x1C024AE58 (DT_DrawStr.c)
 *     DT_GetExtentMinusPrefixes @ 0x1C024AF7C (DT_GetExtentMinusPrefixes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CALL_LPK(__int64 a1)
{
  unsigned int v1; // edx

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 376) + 720LL) & 0xF) == 0 )
    return 0;
  v1 = 1;
  if ( (*(_DWORD *)(a1 + 440) & 1) != 0 || a1 == gptiRit )
    return 0;
  return v1;
}
