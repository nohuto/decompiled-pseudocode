/*
 * XREFs of ?NotifyAudioDGTerminated@CVolumeProvider@@UEAAXXZ @ 0x180001B20
 * Callers:
 *     ?VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z @ 0x18000192C (-VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z.c)
 * Callees:
 *     ?NotifyAudioDGTerminated@CVolumeStrip@@QEAAXXZ @ 0x180001F70 (-NotifyAudioDGTerminated@CVolumeStrip@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetNext@?$CAtlList@PEAVCVolumeStrip@@V?$CElementTraits@PEAVCVolumeStrip@@@ATL@@@ATL@@QEAAAEAPEAVCVolumeStrip@@AEAPEAU__POSITION@@@Z @ 0x18002BBE8 (-GetNext@-$CAtlList@PEAVCVolumeStrip@@V-$CElementTraits@PEAVCVolumeStrip@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 */

void __fastcall CVolumeProvider::NotifyAudioDGTerminated(CVolumeProvider *this, __int64 a2, bool a3)
{
  __int64 v4; // rbx
  CAudioSession *v5; // rcx
  CVolumeStrip *v6; // rbx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v7, (struct _RTL_CRITICAL_SECTION *)((char *)this + 16), a3);
  v4 = *((_QWORD *)this + 7);
  v8 = v4;
  v5 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_423b265ce07b3f1896f97f09dfab210f_Traceguids);
  }
  if ( v4 )
  {
    do
    {
      v6 = *(CVolumeStrip **)ATL::CAtlList<CVolumeStrip *,ATL::CElementTraits<CVolumeStrip *>>::GetNext(v5, &v8);
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          17LL,
          &WPP_423b265ce07b3f1896f97f09dfab210f_Traceguids,
          *((_QWORD *)v6 + 28));
      }
      CVolumeStrip::NotifyAudioDGTerminated(v6);
    }
    while ( v8 );
  }
  if ( v7[8] )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v7);
}
