/*
 * XREFs of ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJK@Z @ 0x180014368
 * Callers:
 *     ?ApplySessionMuteChanges@CApplicationManager@@QEAAJPEAU_SESSIONMUTECHANGES@@@Z @ 0x180014080 (-ApplySessionMuteChanges@CApplicationManager@@QEAAJPEAU_SESSIONMUTECHANGES@@@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180015360 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001FB30 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x180020390 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A664 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z @ 0x180014254 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::ApplyPBMPolicyForAllAppsInSession(CApplicationManager *this, int a2)
{
  _QWORD *v4; // rbx
  struct CApplication *v5; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v8; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v8 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = (_QWORD *)*((_QWORD *)this + 8);
  while ( v4 )
  {
    v5 = (struct CApplication *)v4[2];
    v4 = (_QWORD *)*v4;
    if ( *((_DWORD *)v5 + 29) == a2 )
      CApplicationManager::ApplyPBMPolicy(this, v5, 209);
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
