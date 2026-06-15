/*
 * XREFs of ?Invoke@CAppStateChangedWorkItem@@UEAAXXZ @ 0x18001DF00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_Sd @ 0x18000A56C (WPP_SF_Sd.c)
 *     ?UpdateAppState@CApplication@@QEAAXHPEAH@Z @ 0x18000AF48 (-UpdateAppState@CApplication@@QEAAXHPEAH@Z.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z @ 0x1800122B4 (-GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180013C80 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAppStateChangedWorkItem::Invoke(const wchar_t **this)
{
  BOOL v2; // r14d
  struct CApplication *v3; // r15
  unsigned int v4; // esi
  int v5; // r12d
  const unsigned __int16 *v6; // rbx
  CApplicationManager *v7; // rdi
  int Application; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-18h] BYREF
  char v10; // [rsp+40h] [rbp-10h]
  int v11; // [rsp+90h] [rbp+40h] BYREF
  int v12; // [rsp+98h] [rbp+48h] BYREF
  CApplication *v13; // [rsp+A0h] [rbp+50h] BYREF

  v2 = 0;
  v3 = 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x14u,
      &WPP_ad7b8a207b4c33c21ba4cfb512d2eba6_Traceguids,
      this[1],
      *((_DWORD *)this + 4));
  }
  v4 = *((_DWORD *)this + 5);
  v5 = *((_DWORD *)this + 4);
  v6 = this[1];
  v7 = g_ApplicationManager;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24);
  v10 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v11 = 0;
  v12 = 0;
  Application = CApplicationManager::GetApplication(v7, v6, v4, &v13, 1, &v11);
  if ( Application >= 0 )
  {
    v3 = v13;
    CApplication::UpdateAppState(v13, v5, &v12);
    v2 = v11 || v12;
  }
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  if ( Application < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x15u,
        &WPP_ad7b8a207b4c33c21ba4cfb512d2eba6_Traceguids,
        Application);
    }
    AudPolicyLogError("CAppStateChangedWorkItem::Invoke", 608, Application);
  }
  else if ( v2 )
  {
    CApplicationManager::OnApplicationInteractivityChanged(g_ApplicationManager, v3);
  }
}
