/*
 * XREFs of xxxMNCanClose @ 0x1C00CB3C0
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C00CAFD0 (xxxDrawCaptionBar.c)
 *     xxxDCETrackCaptionButton @ 0x1C00CDE6C (xxxDCETrackCaptionButton.c)
 *     xxxCalcCaptionButton @ 0x1C0236BA4 (xxxCalcCaptionButton.c)
 * Callees:
 *     MNLookUpItem @ 0x1C00710A8 (MNLookUpItem.c)
 *     xxxGetSysMenuHandle @ 0x1C0071180 (xxxGetSysMenuHandle.c)
 */

__int64 __fastcall xxxMNCanClose(__int64 a1)
{
  __int64 SysMenuHandle; // rax
  __int64 v3; // rax
  unsigned int v4; // r10d
  __int64 v5; // r11
  __int64 v6; // r11

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 152) + 85LL) & 2) != 0 )
    return 0LL;
  SysMenuHandle = xxxGetSysMenuHandle(a1);
  if ( !SysMenuHandle )
    return 0LL;
  v3 = MNLookUpItem(SysMenuHandle, 0xF060u, 0, 0LL);
  if ( (v3 || (v3 = MNLookUpItem(v5, 0x8060u, 0, 0LL)) != 0 || (v3 = MNLookUpItem(v6, 0xC070u, 0, 0LL)) != 0)
    && (*(_DWORD *)(v3 + 4) & 3) == 0 )
  {
    return 1;
  }
  return v4;
}
