/*
 * XREFs of ?NotifyAudioDGTerminated@CVolumeProvider@@QEAAXXZ @ 0x180002088
 * Callers:
 *     ?VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z @ 0x180001FD0 (-VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z.c)
 * Callees:
 *     ?NotifyAudioDGTerminated@CVolumeStrip@@QEAAXXZ @ 0x180002130 (-NotifyAudioDGTerminated@CVolumeStrip@@QEAAXXZ.c)
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18000EDE8 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 */

void __fastcall CVolumeProvider::NotifyAudioDGTerminated(struct _RTL_CRITICAL_SECTION *this)
{
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rdi
  TraceLoggingHProvider v3; // rcx
  CVolumeStrip *v4; // rdi
  PRTL_CRITICAL_SECTION_DEBUG v5; // [rsp+30h] [rbp+8h] BYREF

  EnterCriticalSection(this);
  DebugInfo = this[1].DebugInfo;
  v5 = DebugInfo;
  v3 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_196b41b4f5a2aeeda9cf96382b85a072_Traceguids);
  }
  if ( DebugInfo )
  {
    do
    {
      v4 = *(CVolumeStrip **)ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v3, &v5);
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          19LL,
          &WPP_196b41b4f5a2aeeda9cf96382b85a072_Traceguids,
          *((_QWORD *)v4 + 28));
      }
      CVolumeStrip::NotifyAudioDGTerminated(v4);
    }
    while ( v5 );
  }
  LeaveCriticalSection(this);
}
