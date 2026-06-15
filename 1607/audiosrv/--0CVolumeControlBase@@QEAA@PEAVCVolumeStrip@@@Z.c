/*
 * XREFs of ??0CVolumeControlBase@@QEAA@PEAVCVolumeStrip@@@Z @ 0x180026E30
 * Callers:
 *     ?Initialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x180017E40 (-Initialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     ??0CVolumeSoftware@@QEAA@PEAVCVolumeStrip@@@Z @ 0x18005929C (--0CVolumeSoftware@@QEAA@PEAVCVolumeStrip@@@Z.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180012D40 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 */

CVolumeControlBase *__fastcall CVolumeControlBase::CVolumeControlBase(
        CVolumeControlBase *this,
        struct CVolumeStrip *a2)
{
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CVolumeControlBase::`vftable';
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 16));
  *((_DWORD *)this + 14) = 51;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 16) = a2;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 0;
  *((_QWORD *)this + 17) = &AudioSrvVolumeTelemetryEndpointVolume::`vftable';
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 0;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_2804faa4bc893de444441e4f62789fd8_Traceguids, this);
  }
  return this;
}
