/*
 * XREFs of MNIsOwnerDrawItem @ 0x1C00B6AB4
 * Callers:
 *     xxxDrawMenuItem @ 0x1C00B40F4 (xxxDrawMenuItem.c)
 *     xxxMNCompute @ 0x1C00B4BF8 (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C00B5C4C (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     ?MBC_RightJustifyMenu@@YAXPEAUtagMENU@@@Z @ 0x1C00B7B88 (-MBC_RightJustifyMenu@@YAXPEAUtagMENU@@@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0131828 (xxxDrawMenuBarUnderlines.c)
 *     xxxMNInvertItem @ 0x1C013F324 (xxxMNInvertItem.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z @ 0x1C014E06C (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z.c)
 * Callees:
 *     MNIsUAHMenu @ 0x1C006F6BC (MNIsUAHMenu.c)
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
