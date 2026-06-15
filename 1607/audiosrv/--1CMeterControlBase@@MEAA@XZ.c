/*
 * XREFs of ??1CMeterControlBase@@MEAA@XZ @ 0x18002F39C
 * Callers:
 *     ??1CMeterHardware@@EEAA@XZ @ 0x18002F42C (--1CMeterHardware@@EEAA@XZ.c)
 *     _CVolumeStrip::Initialize_::_1_::dtor$16 @ 0x18003A9B6 (_CVolumeStrip--Initialize_--_1_--dtor$16.c)
 *     ??_GCMeterControlBase@@MEAAPEAXI@Z @ 0x1800552F0 (--_GCMeterControlBase@@MEAAPEAXI@Z.c)
 *     ??1CMeterSoftware@@EEAA@XZ @ 0x1800593C8 (--1CMeterSoftware@@EEAA@XZ.c)
 * Callees:
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 */

void __fastcall CMeterControlBase::~CMeterControlBase(CMeterControlBase *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CMeterControlBase::`vftable';
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_b86362f75b6f31617a79fa28476bc3ef_Traceguids, this);
  }
  v2 = (void *)*((_QWORD *)this + 3);
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *((_QWORD *)this + 3) = 0LL;
  }
}
