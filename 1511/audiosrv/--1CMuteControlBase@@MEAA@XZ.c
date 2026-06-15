/*
 * XREFs of ??1CMuteControlBase@@MEAA@XZ @ 0x18006BE90
 * Callers:
 *     _CVolumeStrip::Initialize_::_1_::dtor$13 @ 0x18004CA54 (_CVolumeStrip--Initialize_--_1_--dtor$13.c)
 *     ??1CMuteHardware@@EEAA@XZ @ 0x18006BF00 (--1CMuteHardware@@EEAA@XZ.c)
 *     ??_GCMuteControlBase@@MEAAPEAXI@Z @ 0x18006BF80 (--_GCMuteControlBase@@MEAAPEAXI@Z.c)
 *     ??1CMuteSoftware@@EEAA@XZ @ 0x18006FCA8 (--1CMuteSoftware@@EEAA@XZ.c)
 *     _CMuteSoftware::_CMuteSoftware_::_1_::dtor$0 @ 0x18006FD4D (_CMuteSoftware--_CMuteSoftware_--_1_--dtor$0.c)
 * Callees:
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 */

void __fastcall CMuteControlBase::~CMuteControlBase(CMuteControlBase *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CMuteControlBase::`vftable';
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xBu,
      (__int64)&WPP_f04eba8ba5fc4b283a8b90cd0990f6b1_Traceguids,
      (__int64)this);
  }
  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *((_QWORD *)this + 4) = 0LL;
  }
}
