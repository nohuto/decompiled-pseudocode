/*
 * XREFs of ??0CMeterControlBase@@QEAA@PEAVCVolumeStrip@@@Z @ 0x180042C70
 * Callers:
 *     ?Initialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x180043950 (-Initialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 */

CMeterControlBase *__fastcall CMeterControlBase::CMeterControlBase(CMeterControlBase *this, struct CVolumeStrip *a2)
{
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CMeterControlBase::`vftable';
  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 2) = a2;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_c4b6e3fb0b78b7ef89729a36f54e7633_Traceguids, this);
  }
  return this;
}
