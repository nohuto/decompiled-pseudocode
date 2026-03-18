/*
 * XREFs of ?GetOwnedDisplaySource@DXGSESSIONDATA@@QEBAPEAVDISPLAY_SOURCE@@AEBU_LUID@@I@Z @ 0x1C007BCE4
 * Callers:
 *     ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z @ 0x1C007BB34 (-RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z.c)
 *     ?AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAPEAVSESSION_VIEW@@@Z @ 0x1C007BBF0 (-AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAPEAVSESSION_VIEW@@@Z.c)
 * Callees:
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C007C060 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 */

struct DISPLAY_SOURCE *__fastcall DXGSESSIONDATA::GetOwnedDisplaySource(DXGSESSIONDATA *this, const struct _LUID *a2)
{
  struct DISPLAY_SOURCE *result; // rax
  unsigned int v3; // r8d

  result = DXGSESSIONDATA::GetSessionAdapterFromLuid(this, a2);
  if ( result )
    return SESSION_ADAPTER::GetDisplaySource(result, v3);
  return result;
}
