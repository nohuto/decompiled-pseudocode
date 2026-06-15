/*
 * XREFs of ?RegisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x180003DB8
 * Callers:
 *     s_pbmRegisterPlaybackManagerNotifications @ 0x180003010 (s_pbmRegisterPlaybackManagerNotifications.c)
 * Callees:
 *     ?RegisteredForTrackStateNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x180005584 (-RegisteredForTrackStateNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_000.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001F7FC (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::RegisterTrackStateNotificationClient(__int64 a1, struct CProcess *a2, BOOL a3)
{
  CApplicationManager *v5; // rbx
  int v6; // ebx
  _BYTE v8[32]; // [rsp+28h] [rbp-20h] BYREF

  v5 = g_ApplicationManager;
  ATL::CCritSecLock::CCritSecLock(
    (ATL::CCritSecLock *)v8,
    (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 24),
    a3);
  v6 = CApplicationManager::Register(v5, a2);
  if ( v6 < 0 )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        18LL,
        &WPP_470fb16e4de1ac112a2f931f3fb204f0_Traceguids,
        (unsigned int)v6);
    }
  }
  else
  {
    CProcess::RegisteredForTrackStateNotifications(a2, 1LL, a3);
  }
  if ( v8[8] )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v8);
  return (unsigned int)v6;
}
