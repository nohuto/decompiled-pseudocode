/*
 * XREFs of MNIsOwnerDrawItem @ 0x1C006E6E0
 * Callers:
 *     ?MBC_RightJustifyMenu@@YAXPEAUtagMENU@@@Z @ 0x1C0013F78 (-MBC_RightJustifyMenu@@YAXPEAUtagMENU@@@Z.c)
 *     xxxDrawMenuItem @ 0x1C00144C0 (xxxDrawMenuItem.c)
 *     xxxMNCompute @ 0x1C0015858 (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C006BFBC (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C010E45C (xxxDrawMenuBarUnderlines.c)
 *     xxxMNInvertItem @ 0x1C0139128 (xxxMNInvertItem.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z @ 0x1C0148FE4 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z.c)
 * Callees:
 *     MNIsUAHMenu @ 0x1C00707A8 (MNIsUAHMenu.c)
 */

__int64 __fastcall MNIsOwnerDrawItem(__int64 a1, _DWORD *a2)
{
  int v2; // eax
  unsigned int v3; // ecx

  if ( (*a2 & 0x100) != 0 )
    return 1;
  v2 = MNIsUAHMenu(a1);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
