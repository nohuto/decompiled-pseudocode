/*
 * XREFs of MNIsUAHMenu @ 0x1C006F6BC
 * Callers:
 *     xxxInsertMenuItem @ 0x1C006B448 (xxxInsertMenuItem.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C006BE54 (-SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@.c)
 *     xxxDrawMenuItem @ 0x1C00B40F4 (xxxDrawMenuItem.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C00B48AC (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagWND@@@Z.c)
 *     ?MNDrawHilite@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C00B4BBC (-MNDrawHilite@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     xxxMNCompute @ 0x1C00B4BF8 (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C00B5C4C (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     ?xxxMNGetBitmapSize@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1C00B6970 (-xxxMNGetBitmapSize@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z.c)
 *     MNIsOwnerDrawItem @ 0x1C00B6AB4 (MNIsOwnerDrawItem.c)
 *     xxxMenuDraw @ 0x1C00B6AD8 (xxxMenuDraw.c)
 *     xxxPaintMenuBar @ 0x1C012D944 (xxxPaintMenuBar.c)
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 *     xxxMNOpenHierarchy @ 0x1C0140574 (xxxMNOpenHierarchy.c)
 *     xxxMNDrawFullNC @ 0x1C0237D5C (xxxMNDrawFullNC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MNIsUAHMenu(__int64 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( gihmodUserApiHook >= 0 )
    return (*(_DWORD *)(a1 + 40) & 0x800) != 0;
  return v1;
}
