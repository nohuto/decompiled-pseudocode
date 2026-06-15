/*
 * XREFs of ??1CVolumeControlBase@@MEAA@XZ @ 0x18006E388
 * Callers:
 *     _CVolumeStrip::Initialize_::_1_::dtor$10 @ 0x180047D1C (_CVolumeStrip--Initialize_--_1_--dtor$10.c)
 *     ??1CVolumeHardware@@EEAA@XZ @ 0x18006E404 (--1CVolumeHardware@@EEAA@XZ.c)
 *     ??_ECVolumeControlBase@@MEAAPEAXI@Z @ 0x18006E480 (--_ECVolumeControlBase@@MEAAPEAXI@Z.c)
 *     ??1CVolumeSoftware@@EEAA@XZ @ 0x180071688 (--1CVolumeSoftware@@EEAA@XZ.c)
 *     _CVolumeSoftware::_CVolumeSoftware_::_1_::dtor$0 @ 0x180071733 (_CVolumeSoftware--_CVolumeSoftware_--_1_--dtor$0.c)
 * Callees:
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 */

void __fastcall CVolumeControlBase::~CVolumeControlBase(CVolumeControlBase *this)
{
  void *v2; // rcx
  void *v3; // rcx

  *(_QWORD *)this = &CVolumeControlBase::`vftable';
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0xBu,
      (__int64)&WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
      this);
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
