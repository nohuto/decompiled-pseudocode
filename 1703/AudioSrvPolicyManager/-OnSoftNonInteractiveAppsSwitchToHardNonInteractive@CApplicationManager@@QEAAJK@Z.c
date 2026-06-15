/*
 * XREFs of ?OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z @ 0x18001497C
 * Callers:
 *     PbmSwitchSoftNonInteractiveAppsToHardNonInteractive @ 0x180016640 (PbmSwitchSoftNonInteractiveAppsToHardNonInteractive.c)
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180014738 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmana.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnSoftNonInteractiveAppsSwitchToHardNonInteractive(
        CApplicationManager *this,
        unsigned int a2)
{
  CApplicationManager *v3; // rdi
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v8; // [rsp+30h] [rbp-18h]

  v3 = g_ApplicationManager;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24);
  v8 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x42u, &WPP_719a5be54ec33420ebdafeb185f33b54_Traceguids, a2);
  }
  v4 = (_QWORD *)*((_QWORD *)v3 + 8);
  while ( v4 )
  {
    v5 = v4[2];
    v4 = (_QWORD *)*v4;
    if ( *(_DWORD *)(v5 + 172) == a2 && *(_DWORD *)(v5 + 556) && *(_QWORD *)(v5 + 504) )
      CApplicationManager::ProcessInteractivityNotification((__int64)v3, *(const wchar_t **)(v5 + 24), 1, a2);
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
