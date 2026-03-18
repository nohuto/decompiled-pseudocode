/*
 * XREFs of xxxMNCanClose @ 0x1C004F188
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C004ED9C (xxxDrawCaptionBar.c)
 *     xxxDCETrackCaptionButton @ 0x1C01082B0 (xxxDCETrackCaptionButton.c)
 *     xxxCalcCaptionButton @ 0x1C0236794 (xxxCalcCaptionButton.c)
 * Callees:
 *     MNLookUpItem @ 0x1C00942A8 (MNLookUpItem.c)
 *     xxxGetSysMenuHandle @ 0x1C0094380 (xxxGetSysMenuHandle.c)
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
  SysMenuHandle = xxxGetSysMenuHandle();
  if ( !SysMenuHandle )
    return 0LL;
  v3 = MNLookUpItem(SysMenuHandle, 61536LL, 0LL, 0LL);
  if ( (v3 || (v3 = MNLookUpItem(v5, 32864LL, 0LL, 0LL)) != 0 || (v3 = MNLookUpItem(v6, 49264LL, 0LL, 0LL)) != 0)
    && (*(_DWORD *)(v3 + 4) & 3) == 0 )
  {
    return 1;
  }
  return v4;
}
