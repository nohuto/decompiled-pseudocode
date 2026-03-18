/*
 * XREFs of ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEAU_LUID@@@Z @ 0x1C008F454
 * Callers:
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C005E564 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C005F3B0 (DxgkUseAdapterViewInCurrentSession.c)
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C0065A90 (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEAU_LUID@@I@Z @ 0x1C008F0B8 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEAU_LUID@@I@Z.c)
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@@Z @ 0x1C008F13C (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@@Z.c)
 *     ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C008F1B0 (-AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z.c)
 *     ?GetOwnedDisplaySource@DXGSESSIONDATA@@QEBAPEAVDISPLAY_SOURCE@@AEAU_LUID@@I@Z @ 0x1C008F430 (-GetOwnedDisplaySource@DXGSESSIONDATA@@QEBAPEAVDISPLAY_SOURCE@@AEAU_LUID@@I@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C0156B24 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 * Callees:
 *     <none>
 */

struct SESSION_ADAPTER *__fastcall DXGSESSIONDATA::GetSessionAdapterFromLuid(DXGSESSIONDATA *this, struct _LUID *a2)
{
  char *v2; // r9
  _QWORD *v3; // rcx

  v2 = (char *)this + 18536;
  v3 = (_QWORD *)*((_QWORD *)this + 2317);
  if ( v3 == (_QWORD *)v2 )
    return 0LL;
  while ( *(v3 - 3) != *a2 )
  {
    v3 = (_QWORD *)*v3;
    if ( v3 == (_QWORD *)v2 )
      return 0LL;
  }
  return (struct SESSION_ADAPTER *)(v3 - 4);
}
