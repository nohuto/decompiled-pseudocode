/*
 * XREFs of ??1CMuteControlBase@@MEAA@XZ @ 0x18006D284
 * Callers:
 *     _CVolumeStrip::Initialize_::_1_::dtor$13 @ 0x180047D44 (_CVolumeStrip--Initialize_--_1_--dtor$13.c)
 *     ??1CMuteHardware@@EEAA@XZ @ 0x18006D2F4 (--1CMuteHardware@@EEAA@XZ.c)
 *     ??_GCMuteControlBase@@MEAAPEAXI@Z @ 0x18006D370 (--_GCMuteControlBase@@MEAAPEAXI@Z.c)
 *     ??1CMuteSoftware@@EEAA@XZ @ 0x1800715B0 (--1CMuteSoftware@@EEAA@XZ.c)
 *     _CMuteSoftware::_CMuteSoftware_::_1_::dtor$0 @ 0x180071655 (_CMuteSoftware--_CMuteSoftware_--_1_--dtor$0.c)
 * Callees:
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 */

void __fastcall CMuteControlBase::~CMuteControlBase(CMuteControlBase *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CMuteControlBase::`vftable';
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0xBu,
      (__int64)&WPP_f04eba8ba5fc4b283a8b90cd0990f6b1_Traceguids,
      this);
  }
  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *((_QWORD *)this + 4) = 0LL;
  }
}
