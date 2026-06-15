/*
 * XREFs of ??1CMeterControlBase@@MEAA@XZ @ 0x180042C1C
 * Callers:
 *     ??1CMeterHardware@@EEAA@XZ @ 0x180043090 (--1CMeterHardware@@EEAA@XZ.c)
 *     _CVolumeStrip::Initialize_::_1_::dtor$16 @ 0x18004CA7C (_CVolumeStrip--Initialize_--_1_--dtor$16.c)
 *     ??_GCMeterControlBase@@MEAAPEAXI@Z @ 0x18006B6D0 (--_GCMeterControlBase@@MEAAPEAXI@Z.c)
 *     ??1CMeterSoftware@@EEAA@XZ @ 0x18006FC44 (--1CMeterSoftware@@EEAA@XZ.c)
 * Callees:
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 */

void __fastcall CMeterControlBase::~CMeterControlBase(CMeterControlBase *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CMeterControlBase::`vftable';
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_c4b6e3fb0b78b7ef89729a36f54e7633_Traceguids, this);
  }
  v2 = (void *)*((_QWORD *)this + 3);
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *((_QWORD *)this + 3) = 0LL;
  }
}
