/*
 * XREFs of ??1CVolumeControlBase@@MEAA@XZ @ 0x1800565AC
 * Callers:
 *     ??1CVolumeHardware@@EEAA@XZ @ 0x180056684 (--1CVolumeHardware@@EEAA@XZ.c)
 *     ??_ECVolumeControlBase@@MEAAPEAXI@Z @ 0x1800566E0 (--_ECVolumeControlBase@@MEAAPEAXI@Z.c)
 *     _CVolumeSoftware::CVolumeSoftware_::_1_::dtor$0 @ 0x1800592F8 (_CVolumeSoftware--CVolumeSoftware_--_1_--dtor$0.c)
 *     ??1CVolumeSoftware@@EEAA@XZ @ 0x1800594B8 (--1CVolumeSoftware@@EEAA@XZ.c)
 *     _CVolumeSoftware::_CVolumeSoftware_::_1_::dtor$0 @ 0x18005953A (_CVolumeSoftware--_CVolumeSoftware_--_1_--dtor$0.c)
 * Callees:
 *     ?LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ @ 0x18002998C (-LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CVolumeControlBase::~CVolumeControlBase(CVolumeControlBase *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CVolumeControlBase::`vftable';
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xBu,
      (__int64)&WPP_2804faa4bc893de444441e4f62789fd8_Traceguids,
      (__int64)this);
  }
  *((_QWORD *)this + 17) = &AudioSrvVolumeTelemetryEndpointVolume::`vftable';
  AudioSrvVolumeTelemetry::LogTelemetry((void (__fastcall ***)(AudioSrvVolumeTelemetrySessionVolume *__hidden, unsigned __int64, unsigned int))this + 17);
  v2 = (void *)*((_QWORD *)this + 10);
  if ( v2 )
    free(v2);
  CoTaskMemFree(*((LPVOID *)this + 8));
  *((_QWORD *)this + 8) = 0LL;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
}
