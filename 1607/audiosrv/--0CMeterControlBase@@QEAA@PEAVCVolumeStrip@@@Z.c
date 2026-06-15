/*
 * XREFs of ??0CMeterControlBase@@QEAA@PEAVCVolumeStrip@@@Z @ 0x180025E3C
 * Callers:
 *     ?Initialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x180017E40 (-Initialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 */

CMeterControlBase *__fastcall CMeterControlBase::CMeterControlBase(CMeterControlBase *this, struct CVolumeStrip *a2)
{
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CMeterControlBase::`vftable';
  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 2) = a2;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_b86362f75b6f31617a79fa28476bc3ef_Traceguids, this);
  }
  return this;
}
