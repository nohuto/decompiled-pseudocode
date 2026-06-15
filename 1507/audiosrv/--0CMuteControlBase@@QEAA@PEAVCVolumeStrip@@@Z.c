/*
 * XREFs of ??0CMuteControlBase@@QEAA@PEAVCVolumeStrip@@@Z @ 0x18003E168
 * Callers:
 *     ?Initialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18003D6A0 (-Initialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 */

CMuteControlBase *__fastcall CMuteControlBase::CMuteControlBase(CMuteControlBase *this, struct CVolumeStrip *a2)
{
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)this = &CMuteControlBase::`vftable';
  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 2) = a2;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      10LL,
      &WPP_f04eba8ba5fc4b283a8b90cd0990f6b1_Traceguids,
      this);
  }
  return this;
}
