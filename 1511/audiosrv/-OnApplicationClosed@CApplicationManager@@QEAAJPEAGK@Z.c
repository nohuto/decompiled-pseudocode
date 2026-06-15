/*
 * XREFs of ?OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z @ 0x180004108
 * Callers:
 *     ?Invoke@CAppClosedWorkItem@@UEAAXXZ @ 0x180002770 (-Invoke@CAppClosedWorkItem@@UEAAXXZ.c)
 *     ?OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z @ 0x180003FA0 (-OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z.c)
 * Callees:
 *     ?UpdateAppState@CApplication@@QEAAXHPEAH@Z @ 0x180004918 (-UpdateAppState@CApplication@@QEAAXHPEAH@Z.c)
 *     ?SendAppClosureNotification@CApplication@@QEAAXXZ @ 0x180004AD0 (-SendAppClosureNotification@CApplication@@QEAAXXZ.c)
 *     ?DisconnectExclusiveModeStreams@CApplication@@QEAAXXZ @ 0x180004B5C (-DisconnectExclusiveModeStreams@CApplication@@QEAAXXZ.c)
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001E7FC (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z @ 0x18001F320 (-GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?TsSessionIsActiveMediaApplication@@YAHPEAVCApplication@@@Z @ 0x180038DD8 (-TsSessionIsActiveMediaApplication@@YAHPEAVCApplication@@@Z.c)
 *     ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x18009D44C (-TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnApplicationClosed(
        CApplicationManager *this,
        unsigned __int16 *a2,
        unsigned int a3)
{
  int Application; // edi
  CApplication *v7; // rbx
  char *v9; // [rsp+38h] [rbp-30h] BYREF
  char v10; // [rsp+40h] [rbp-28h]
  CApplication *v11; // [rsp+70h] [rbp+8h] BYREF

  Application = 0;
  v7 = 0LL;
  v11 = 0LL;
  v9 = (char *)this + 24;
  v10 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v9);
  if ( a2 )
  {
    if ( *a2 )
    {
      Application = CApplicationManager::GetApplication(this, a2, a3, &v11, 0, 0LL);
      v7 = v11;
      if ( Application >= 0 )
      {
        CApplicationManager::SilenceAndRevokePLMExemption(this, v11);
        CApplication::UpdateAppState(v7, 0, 0LL);
        if ( (unsigned int)TsSessionIsActiveMediaApplication(v7) )
          TsSessionIdRemoveActiveMediaApp(a3, v7);
        CApplication::SendAppClosureNotification(v7);
      }
    }
  }
  if ( v10 )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)&v9);
  if ( v7 )
    CApplication::DisconnectExclusiveModeStreams(v7);
  return (unsigned int)Application;
}
