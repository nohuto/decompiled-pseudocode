/*
 * XREFs of ??0CEndpointVolumeState@@QEAA@PEBGMH@Z @ 0x18009B898
 * Callers:
 *     ?TsSessionIdAddEndpointVolumeReference@@YAJKPEBGMHPEAH1PEAM11@Z @ 0x18009CCB4 (-TsSessionIdAddEndpointVolumeReference@@YAJKPEBGMHPEAH1PEAM11@Z.c)
 * Callees:
 *     ?GetDeviceVolumeStrip@CVolumeProvider@@QEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x18000EE10 (-GetDeviceVolumeStrip@CVolumeProvider@@QEAAJPEBGPEAPEAVCVolumeStrip@@@Z.c)
 *     ?AddVolumeInternalNotification@CVolumeStrip@@QEAAJPEAUIAudioEndpointVolumeCallback@@@Z @ 0x180070304 (-AddVolumeInternalNotification@CVolumeStrip@@QEAAJPEAUIAudioEndpointVolumeCallback@@@Z.c)
 */

CEndpointVolumeState *__fastcall CEndpointVolumeState::CEndpointVolumeState(
        CEndpointVolumeState *this,
        const unsigned __int16 *a2,
        float a3,
        int a4)
{
  PCNZWCH **v4; // rdi

  *((float *)this + 4) = a3;
  *(_QWORD *)this = &CEndpointVolumeState::`vftable';
  v4 = (PCNZWCH **)((char *)this + 32);
  *((_DWORD *)this + 2) = 1;
  *((_DWORD *)this + 5) = a4;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = &CEndpointVolumeState::_CEndpointVolumeNotificationDelegator::`vftable';
  *((_QWORD *)this + 7) = this;
  if ( g_pVolumeProvider
    && (int)CVolumeProvider::GetDeviceVolumeStrip(g_pVolumeProvider, a2, v4) >= 0
    && (int)CVolumeStrip::AddVolumeInternalNotification(
              (CVolumeStrip *)*v4,
              (struct IAudioEndpointVolumeCallback *)this + 6) >= 0 )
  {
    *((_DWORD *)this + 10) = 1;
  }
  return this;
}
