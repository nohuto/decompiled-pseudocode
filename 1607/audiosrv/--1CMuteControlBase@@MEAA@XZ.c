/*
 * XREFs of ??1CMuteControlBase@@MEAA@XZ @ 0x18005589C
 * Callers:
 *     _CVolumeStrip::Initialize_::_1_::dtor$13 @ 0x18003A97D (_CVolumeStrip--Initialize_--_1_--dtor$13.c)
 *     ??1CMuteHardware@@EEAA@XZ @ 0x18005590C (--1CMuteHardware@@EEAA@XZ.c)
 *     ??_GCMuteControlBase@@MEAAPEAXI@Z @ 0x180055960 (--_GCMuteControlBase@@MEAAPEAXI@Z.c)
 *     ??1CMuteSoftware@@EEAA@XZ @ 0x180059410 (--1CMuteSoftware@@EEAA@XZ.c)
 *     _CMuteSoftware::_CMuteSoftware_::_1_::dtor$0 @ 0x180059486 (_CMuteSoftware--_CMuteSoftware_--_1_--dtor$0.c)
 * Callees:
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 */

void __fastcall CMuteControlBase::~CMuteControlBase(CMuteControlBase *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CMuteControlBase::`vftable';
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xBu,
      (__int64)&WPP_5d80dfde78b839f7e098599d7a4ea935_Traceguids,
      (__int64)this);
  }
  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *((_QWORD *)this + 4) = 0LL;
  }
}
