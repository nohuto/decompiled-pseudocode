/*
 * XREFs of ?RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x1800024DC
 * Callers:
 *     s_pbmRegisterPlaybackManagerNotifications @ 0x180003B30 (s_pbmRegisterPlaybackManagerNotifications.c)
 * Callees:
 *     ?RegisteredForSoundLevelNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x180003810 (-RegisteredForSoundLevelNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_000.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001CD88 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::RegisterSoundLevelNotificationClient(
        __int64 a1,
        struct CProcess *a2,
        unsigned int a3)
{
  CApplicationManager *v5; // rbx
  int v6; // ebx
  char *v8; // [rsp+28h] [rbp-20h] BYREF
  char v9; // [rsp+30h] [rbp-18h]

  v5 = g_ApplicationManager;
  v8 = (char *)g_ApplicationManager + 24;
  v9 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v8);
  v6 = CApplicationManager::Register(v5, a2);
  if ( v6 < 0 )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        17LL,
        &WPP_a823fe2c17e0c03c8d4e6152eedcd7b2_Traceguids,
        (unsigned int)v6,
        -2);
    }
  }
  else
  {
    CProcess::RegisteredForSoundLevelNotifications(a2, 1LL, a3);
  }
  if ( v9 )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)&v8);
  return (unsigned int)v6;
}
