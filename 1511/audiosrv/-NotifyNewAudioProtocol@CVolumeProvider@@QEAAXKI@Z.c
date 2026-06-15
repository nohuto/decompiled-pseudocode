/*
 * XREFs of ?NotifyNewAudioProtocol@CVolumeProvider@@QEAAXKI@Z @ 0x18000EF14
 * Callers:
 *     VADServerUserSessionChanged @ 0x18002FDEC (VADServerUserSessionChanged.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18000EDE8 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 *     WPP_SF_qS @ 0x18006BDEC (WPP_SF_qS.c)
 *     ?ProviderFinalRelease@CVolumeStrip@@QEAAXXZ @ 0x1800706DC (-ProviderFinalRelease@CVolumeStrip@@QEAAXXZ.c)
 *     ?RemoveAt@?$CAtlList@KV?$CElementTraits@K@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x18009C778 (-RemoveAt@-$CAtlList@KV-$CElementTraits@K@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z.c)
 */

void __fastcall CVolumeProvider::NotifyNewAudioProtocol(CVolumeProvider *this, unsigned int a2, int a3)
{
  LPCRITICAL_SECTION v3; // rsi
  _QWORD *p_Type; // rbx
  TraceLoggingHProvider v7; // rcx
  __int64 v8; // rdi
  _QWORD *v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = this;
  v3 = g_pVolumeProvider;
  EnterCriticalSection(g_pVolumeProvider);
  p_Type = &v3[1].DebugInfo->Type;
  v9 = p_Type;
  v7 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_196b41b4f5a2aeeda9cf96382b85a072_Traceguids, a2);
  }
  while ( p_Type )
  {
    v8 = *ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext((__int64)v7, &v9);
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        16LL,
        &WPP_196b41b4f5a2aeeda9cf96382b85a072_Traceguids,
        *(_QWORD *)(v8 + 224));
    }
    if ( (unsigned int)GetSessionIdFromEndpointId(*(_QWORD *)(v8 + 224)) == a2 && *(_DWORD *)(v8 + 232) != a3 )
    {
      ATL::CAtlList<unsigned long,ATL::CElementTraits<unsigned long>>::RemoveAt(&v3[1], p_Type);
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qS(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          17,
          (unsigned int)&WPP_196b41b4f5a2aeeda9cf96382b85a072_Traceguids,
          v8,
          *(_QWORD *)(v8 + 224));
      }
      CVolumeStrip::ProviderFinalRelease((LPUNKNOWN)v8);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      break;
    }
    p_Type = v9;
  }
  LeaveCriticalSection(v3);
}
