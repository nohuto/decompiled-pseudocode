/*
 * XREFs of ?GetOwnedDisplaySource@DXGSESSIONDATA@@QEBAPEAVDISPLAY_SOURCE@@AEAU_LUID@@I@Z @ 0x1C009F13C
 * Callers:
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEAU_LUID@@I@Z @ 0x1C009ED20 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEAU_LUID@@I@Z.c)
 *     ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@IE@Z @ 0x1C009EF8C (-RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@IE@Z.c)
 *     ?AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEAU_LUID@@IEPEAPEAVSESSION_VIEW@@@Z @ 0x1C009F048 (-AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEAU_LUID@@IEPEAPEAVSESSION_VIEW@@@Z.c)
 * Callees:
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEAU_LUID@@@Z @ 0x1C009F360 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEAU_LUID@@@Z.c)
 */

struct DISPLAY_SOURCE *__fastcall DXGSESSIONDATA::GetOwnedDisplaySource(DXGSESSIONDATA *this, struct _LUID *a2)
{
  struct DISPLAY_SOURCE *result; // rax
  unsigned int v3; // r8d

  result = DXGSESSIONDATA::GetSessionAdapterFromLuid(this, a2);
  if ( result )
    return SESSION_ADAPTER::GetDisplaySource(result, v3);
  return result;
}
