/*
 * XREFs of ?WinSqmIsOptedIn_CachedInDwm@@YA_NXZ @ 0x1800411C4
 * Callers:
 *     ?PostActivateLivePreview@CDesktopManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x18001E080 (-PostActivateLivePreview@CDesktopManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002C4E0 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002C660 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002D740 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180031C38 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     <none>
 */

char WinSqmIsOptedIn_CachedInDwm(void)
{
  char result; // al
  int IsOptedIn; // eax

  if ( byte_1800B7DA8 )
    return byte_1800B7D09;
  IsOptedIn = WinSqmIsOptedIn();
  byte_1800B7DA8 = 1;
  result = IsOptedIn != 0;
  byte_1800B7D09 = result;
  return result;
}
