/*
 * XREFs of ?RefreshPBMState@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMPTION@@@Z @ 0x1800A0BA8
 * Callers:
 *     ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x180004F5C (-ReviveProcessesPendingTermination@CApplication@@QEAAXXZ.c)
 * Callees:
 *     ?SendPBMNotification@CProcess@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x180005484 (-SendPBMNotification@CProcess@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001F254 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z @ 0x180029104 (-RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?SimulateStreamStateChange@CProcess@@QEAAXHPEAH@Z @ 0x18002A328 (-SimulateStreamStateChange@CProcess@@QEAAXHPEAH@Z.c)
 *     WPP_SF_SSd @ 0x1800A104C (WPP_SF_SSd.c)
 */

void __fastcall CProcess::RefreshPBMState(__int64 a1, int a2, int a3, int a4)
{
  int v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  if ( a3 )
  {
    v6 = 0;
    CProcess::SimulateStreamStateChange((CProcess *)a1, 1, &v6);
    if ( v6 )
      CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)g_ApplicationManager, *(_DWORD *)(a1 + 172), 3u);
  }
  CProcess::RecalculateVolume(a1, 3u);
  if ( (*(_BYTE *)(a1 + 428) & 1) != 0 )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_SSd(*((_QWORD *)WPP_GLOBAL_Control + 2), *(_QWORD *)(a1 + 184), *(_DWORD *)(a1 + 168));
    }
    CProcess::SendPBMNotification(a1, 0);
  }
  CProcess::NotifyPLM(a1, a4);
}
