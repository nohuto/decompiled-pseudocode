/*
 * XREFs of ??1CMeterControlBase@@MEAA@XZ @ 0x18003F728
 * Callers:
 *     ??1CMeterHardware@@EEAA@XZ @ 0x18003E08C (--1CMeterHardware@@EEAA@XZ.c)
 *     _CVolumeStrip::Initialize_::_1_::dtor$16 @ 0x180047D6C (_CVolumeStrip--Initialize_--_1_--dtor$16.c)
 *     ??_GCMeterControlBase@@MEAAPEAXI@Z @ 0x18006C9D0 (--_GCMeterControlBase@@MEAAPEAXI@Z.c)
 *     ??1CMeterSoftware@@EEAA@XZ @ 0x18007154C (--1CMeterSoftware@@EEAA@XZ.c)
 * Callees:
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 */

void __fastcall CMeterControlBase::~CMeterControlBase(CMeterControlBase *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CMeterControlBase::`vftable';
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      11LL,
      &WPP_c4b6e3fb0b78b7ef89729a36f54e7633_Traceguids,
      this);
  }
  v2 = (void *)*((_QWORD *)this + 3);
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *((_QWORD *)this + 3) = 0LL;
  }
}
