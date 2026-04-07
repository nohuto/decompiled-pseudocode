/*
 * XREFs of ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x18004440C
 * Callers:
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x1800287A4 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x180044C50 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 CDesktopManager::IsHighContrastMode(void)
{
  __int64 result; // rax
  int pvParam; // [rsp+20h] [rbp-18h] BYREF
  char v2; // [rsp+24h] [rbp-14h]

  pvParam = 16;
  if ( !SystemParametersInfoW(0x42u, 0x10u, &pvParam, 0) )
    return 0LL;
  result = 1LL;
  if ( (v2 & 1) == 0 )
    return 0LL;
  return result;
}
