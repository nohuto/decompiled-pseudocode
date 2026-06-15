/*
 * XREFs of ?OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z @ 0x180002700
 * Callers:
 *     ?Invoke@?$CGenericApplicationManagerWorkItem@UApplicationStateChangedContext@@@@UEAAXXZ @ 0x180001F70 (-Invoke@-$CGenericApplicationManagerWorkItem@UApplicationStateChangedContext@@@@UEAAXXZ.c)
 * Callees:
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z @ 0x180002868 (-OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z.c)
 *     ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x1800035CC (-ReviveProcessesPendingTermination@CApplication@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z @ 0x18001C820 (-GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     WPP_SF_Ss @ 0x1800A2738 (WPP_SF_Ss.c)
 *     ?MarkAsPendingTermination@CApplication@@QEAAXXZ @ 0x1800A351C (-MarkAsPendingTermination@CApplication@@QEAAXXZ.c)
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
  int v10; // [rsp+20h] [rbp-48h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-30h] BYREF
  char v12; // [rsp+40h] [rbp-28h]
  CApplication *v13; // [rsp+70h] [rbp+8h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v12 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v13 = 0LL;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    v8 = "LAUNCHED";
    if ( *((_DWORD *)a2 + 3) )
      v8 = "PENDING_TERMINATION";
    WPP_SF_Ss(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL), (__int64)v8);
  }
  Application = CApplicationManager::GetApplication(
                  this,
                  *(const unsigned __int16 **)a2,
                  *((_DWORD *)a2 + 2),
                  &v13,
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
        v9 = v13;
        if ( *((_DWORD *)v13 + 28) )
          CApplicationManager::OnApplicationClosed(this, *(unsigned __int16 **)a2, *((_DWORD *)a2 + 2));
        CApplication::MarkAsPendingTermination(v9);
      }
    }
    else
    {
      CApplication::ReviveProcessesPendingTermination(v13);
    }
  }
  else if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      64LL,
      &WPP_a823fe2c17e0c03c8d4e6152eedcd7b2_Traceguids,
      (unsigned int)Application,
      v10);
  }
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  return v5;
}
