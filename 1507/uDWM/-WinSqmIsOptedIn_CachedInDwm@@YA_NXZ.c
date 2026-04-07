/*
 * XREFs of ?WinSqmIsOptedIn_CachedInDwm@@YA_NXZ @ 0x180008598
 * Callers:
 *     ?PostActivateLivePreview@CDesktopManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x18001BC80 (-PostActivateLivePreview@CDesktopManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002CAC0 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18002E0BC (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002EDB0 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002F410 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     <none>
 */

char WinSqmIsOptedIn_CachedInDwm(void)
{
  char result; // al
  int IsOptedIn; // eax

  if ( byte_1800BC56C )
    return byte_1800BC4A1;
  IsOptedIn = WinSqmIsOptedIn();
  byte_1800BC56C = 1;
  result = IsOptedIn != 0;
  byte_1800BC4A1 = result;
  return result;
}
