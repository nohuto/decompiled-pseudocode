/*
 * XREFs of ?OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z @ 0x180002868
 * Callers:
 *     ?OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z @ 0x180002700 (-OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z.c)
 *     ?Invoke@CAppClosedWorkItem@@UEAAXXZ @ 0x180003BC0 (-Invoke@CAppClosedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?UpdateAppState@CApplication@@QEAAXHPEAH@Z @ 0x180002F8C (-UpdateAppState@CApplication@@QEAAXHPEAH@Z.c)
 *     ?SendAppClosureNotification@CApplication@@QEAAXXZ @ 0x180003150 (-SendAppClosureNotification@CApplication@@QEAAXXZ.c)
 *     ?DisconnectExclusiveModeStreams@CApplication@@QEAAXXZ @ 0x1800031D4 (-DisconnectExclusiveModeStreams@CApplication@@QEAAXXZ.c)
 *     ?TsSessionIsActiveMediaApplication@@YAHPEAVCApplication@@@Z @ 0x180007814 (-TsSessionIsActiveMediaApplication@@YAHPEAVCApplication@@@Z.c)
 *     ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x180007890 (-TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001BE44 (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z @ 0x18001C820 (-GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnApplicationClosed(
        CApplicationManager *this,
        unsigned __int16 *a2,
        unsigned int a3)
{
  int Application; // edi
  CApplication *v7; // rbx
  _BYTE v9[24]; // [rsp+38h] [rbp-30h] BYREF
  CApplication *v10; // [rsp+70h] [rbp+8h] BYREF

  Application = 0;
  v7 = 0LL;
  v10 = 0LL;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v9, (struct _RTL_CRITICAL_SECTION *)((char *)this + 24), a3);
  if ( a2 )
  {
    if ( *a2 )
    {
      Application = CApplicationManager::GetApplication(this, a2, a3, &v10, 0, 0LL);
      v7 = v10;
      if ( Application >= 0 )
      {
        CApplicationManager::SilenceAndRevokePLMExemption(this, v10);
        CApplication::UpdateAppState(v7, 0, 0LL);
        if ( (unsigned int)TsSessionIsActiveMediaApplication(v7) )
          TsSessionIdRemoveActiveMediaApp(a3, v7);
        CApplication::SendAppClosureNotification(v7);
      }
    }
  }
  if ( v9[8] )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v9);
  if ( v7 )
    CApplication::DisconnectExclusiveModeStreams(v7);
  return (unsigned int)Application;
}
