/*
 * XREFs of ?NotifyNewAudioProtocol@CVolumeProvider@@QEAAXKI@Z @ 0x18002CC40
 * Callers:
 *     VADServerUserSessionChanged @ 0x18002BC60 (VADServerUserSessionChanged.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     WPP_SF_qS @ 0x18006D1E0 (WPP_SF_qS.c)
 *     ?ProviderFinalRelease@CVolumeStrip@@QEAAXXZ @ 0x1800726D0 (-ProviderFinalRelease@CVolumeStrip@@QEAAXXZ.c)
 *     ?RemoveAt@?$CAtlList@KV?$CElementTraits@K@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180072FF0 (-RemoveAt@-$CAtlList@KV-$CElementTraits@K@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z.c)
 */

void __fastcall CVolumeProvider::NotifyNewAudioProtocol(CVolumeProvider *this, unsigned int a2, int a3)
{
  LPCRITICAL_SECTION v3; // rsi
  _QWORD *p_Type; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdi
  _QWORD *v9; // rbp

  v3 = g_pVolumeProvider;
  EnterCriticalSection(g_pVolumeProvider);
  p_Type = &v3[1].DebugInfo->Type;
  v7 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      17LL,
      &WPP_890e168e4d5dba4455ca7d4f19a944e5_Traceguids,
      a2);
    v7 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( p_Type )
  {
    while ( 1 )
    {
      v8 = p_Type[2];
      v9 = p_Type;
      p_Type = (_QWORD *)*p_Type;
      if ( (struct _GUID *)v7 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(v7 + 28) & 0x10000) != 0
        && *(_BYTE *)(v7 + 25) >= 4u )
      {
        WPP_SF_S(*(_QWORD *)(v7 + 16), 18LL, &WPP_890e168e4d5dba4455ca7d4f19a944e5_Traceguids, *(_QWORD *)(v8 + 224));
      }
      if ( (unsigned int)GetSessionIdFromEndpointId(*(_QWORD *)(v8 + 224)) == a2 && *(_DWORD *)(v8 + 232) != a3 )
        break;
      if ( !p_Type )
        goto LABEL_13;
      v7 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    }
    ATL::CAtlList<unsigned long,ATL::CElementTraits<unsigned long>>::RemoveAt(&v3[1], v9);
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_qS(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        19,
        (unsigned int)&WPP_890e168e4d5dba4455ca7d4f19a944e5_Traceguids,
        v8,
        *(_QWORD *)(v8 + 224));
    }
    CVolumeStrip::ProviderFinalRelease((LPUNKNOWN)v8);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
LABEL_13:
  LeaveCriticalSection(v3);
}
