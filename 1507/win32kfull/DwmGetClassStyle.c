/*
 * XREFs of DwmGetClassStyle @ 0x1C005B8D0
 * Callers:
 *     xxxGetSystemMenu @ 0x1C004EA78 (xxxGetSystemMenu.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0052C14 (-xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z @ 0x1C0054D4C (-xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z.c)
 *     xxxInsertMenuItem @ 0x1C00551A4 (xxxInsertMenuItem.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     xxxEnableMenuItem @ 0x1C0108034 (xxxEnableMenuItem.c)
 *     xxxSetClassData @ 0x1C0127AFC (xxxSetClassData.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C014AB34 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 * Callees:
 *     MNLookUpItem @ 0x1C00942A8 (MNLookUpItem.c)
 */

__int64 __fastcall DwmGetClassStyle(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  unsigned int v4; // r11d
  __int64 v6; // rax
  int v7; // r10d
  unsigned int v8; // r11d

  v1 = *(_QWORD *)(a1 + 152);
  v3 = *(_QWORD *)(a1 + 184);
  v4 = *(_DWORD *)(v1 + 84);
  if ( v3 )
  {
    v6 = MNLookUpItem(v3, 61536LL, 0LL, 0LL);
    if ( !v6
      && (v6 = MNLookUpItem(*(_QWORD *)(a1 + 184), 32864LL, 0LL, 0LL)) == 0
      && (v6 = MNLookUpItem(*(_QWORD *)(a1 + 184), 49264LL, 0LL, 0LL)) == 0
      || (*(_DWORD *)(v6 + 4) & 3) != 0 )
    {
      v7 = 512;
    }
    return v7 | v8;
  }
  return v4;
}
