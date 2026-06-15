/*
 * XREFs of ??1CVolumeControlBase@@MEAA@XZ @ 0x18006CD88
 * Callers:
 *     _CVolumeStrip::Initialize_::_1_::dtor$10 @ 0x18004CA2C (_CVolumeStrip--Initialize_--_1_--dtor$10.c)
 *     ??1CVolumeHardware@@EEAA@XZ @ 0x18006CE04 (--1CVolumeHardware@@EEAA@XZ.c)
 *     ??_ECVolumeControlBase@@MEAAPEAXI@Z @ 0x18006CE80 (--_ECVolumeControlBase@@MEAAPEAXI@Z.c)
 *     ??1CVolumeSoftware@@EEAA@XZ @ 0x18006FD80 (--1CVolumeSoftware@@EEAA@XZ.c)
 *     _CVolumeSoftware::_CVolumeSoftware_::_1_::dtor$0 @ 0x18006FE2B (_CVolumeSoftware--_CVolumeSoftware_--_1_--dtor$0.c)
 * Callees:
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 */

void __fastcall CVolumeControlBase::~CVolumeControlBase(CVolumeControlBase *this)
{
  void *v2; // rcx
  void *v3; // rcx

  *(_QWORD *)this = &CVolumeControlBase::`vftable';
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xBu,
      (__int64)&WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids,
      (__int64)this);
  }
  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 4);
  if ( v3 )
    free(v3);
}
