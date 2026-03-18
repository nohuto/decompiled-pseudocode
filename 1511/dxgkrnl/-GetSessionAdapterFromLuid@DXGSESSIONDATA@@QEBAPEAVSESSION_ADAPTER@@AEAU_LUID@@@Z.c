/*
 * XREFs of ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEAU_LUID@@@Z @ 0x1C009F360
 * Callers:
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C009DC20 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@@Z @ 0x1C009ED90 (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@@Z.c)
 *     ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C009EE04 (-AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z.c)
 *     ?GetOwnedDisplaySource@DXGSESSIONDATA@@QEBAPEAVDISPLAY_SOURCE@@AEAU_LUID@@I@Z @ 0x1C009F13C (-GetOwnedDisplaySource@DXGSESSIONDATA@@QEBAPEAVDISPLAY_SOURCE@@AEAU_LUID@@I@Z.c)
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C00A423C (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00B0870 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C00C5018 (DxgkUseAdapterViewInCurrentSession.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C015AE3C (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 * Callees:
 *     <none>
 */

struct SESSION_ADAPTER *__fastcall DXGSESSIONDATA::GetSessionAdapterFromLuid(DXGSESSIONDATA *this, struct _LUID *a2)
{
  char *v2; // r9
  _QWORD *v3; // rcx

  v2 = (char *)this + 18560;
  v3 = (_QWORD *)*((_QWORD *)this + 2320);
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
