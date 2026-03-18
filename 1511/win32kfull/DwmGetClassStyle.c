/*
 * XREFs of DwmGetClassStyle @ 0x1C00D2C50
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0072348 (-xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     xxxEnableMenuItem @ 0x1C0072DE0 (xxxEnableMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z @ 0x1C0075940 (-xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z.c)
 *     xxxGetSystemMenu @ 0x1C00CA20C (xxxGetSystemMenu.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00D29C0 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     xxxSetClassData @ 0x1C0103C44 (xxxSetClassData.c)
 * Callees:
 *     MNLookUpItem @ 0x1C00710A8 (MNLookUpItem.c)
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
    v6 = MNLookUpItem(v3, 0xF060u, 0, 0LL);
    if ( !v6
      && (v6 = MNLookUpItem(*(_QWORD *)(a1 + 184), 0x8060u, 0, 0LL)) == 0
      && (v6 = MNLookUpItem(*(_QWORD *)(a1 + 184), 0xC070u, 0, 0LL)) == 0
      || (*(_DWORD *)(v6 + 4) & 3) != 0 )
    {
      v7 = 512;
    }
    return v7 | v8;
  }
  return v4;
}
