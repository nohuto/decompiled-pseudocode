/*
 * XREFs of ?OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z @ 0x180003FA0
 * Callers:
 *     ?Invoke@?$CGenericApplicationManagerWorkItem@UApplicationStateChangedContext@@@@UEAAXXZ @ 0x180005010 (-Invoke@-$CGenericApplicationManagerWorkItem@UApplicationStateChangedContext@@@@UEAAXXZ.c)
 * Callees:
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z @ 0x180004108 (-OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z.c)
 *     ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x180004F5C (-ReviveProcessesPendingTermination@CApplication@@QEAAXXZ.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z @ 0x18001F320 (-GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     WPP_SF_Ss @ 0x18009F900 (WPP_SF_Ss.c)
 *     ?MarkAsPendingTermination@CApplication@@QEAAXXZ @ 0x1800A077C (-MarkAsPendingTermination@CApplication@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnApplicationStateChanged(
        CApplicationManager *this,
        struct ApplicationStateChangedContext *a2)
{
  int Application; // eax
  unsigned int v5; // esi
  int v7; // edx
  const char *v8; // rax
  CApplication *v9; // rdi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-30h] BYREF
  char v11; // [rsp+40h] [rbp-28h]
  CApplication *v12; // [rsp+70h] [rbp+8h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v11 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v12 = 0LL;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v8 = "LAUNCHED";
    if ( *((_DWORD *)a2 + 3) )
      v8 = "PENDING_TERMINATION";
    WPP_SF_Ss(*((_QWORD *)WPP_GLOBAL_Control + 2), (__int64)v8);
  }
  Application = CApplicationManager::GetApplication(
                  this,
                  *(const unsigned __int16 **)a2,
                  *((_DWORD *)a2 + 2),
                  &v12,
                  0,
                  0LL);
  v5 = Application;
  if ( Application >= 0 )
  {
    v7 = *((_DWORD *)a2 + 3);
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        v9 = v12;
        if ( *((_DWORD *)v12 + 28) )
          CApplicationManager::OnApplicationClosed(this, *(unsigned __int16 **)a2, *((_DWORD *)a2 + 2));
        CApplication::MarkAsPendingTermination(v9);
      }
    }
    else
    {
      CApplication::ReviveProcessesPendingTermination(v12);
    }
  }
  else if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      65LL,
      &WPP_470fb16e4de1ac112a2f931f3fb204f0_Traceguids,
      (unsigned int)Application);
  }
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  return v5;
}
