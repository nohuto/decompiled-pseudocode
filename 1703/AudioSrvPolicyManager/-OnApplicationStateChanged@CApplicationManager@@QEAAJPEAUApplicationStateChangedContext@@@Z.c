/*
 * XREFs of ?OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z @ 0x180014A60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x18000C7B0 (-ReviveProcessesPendingTermination@CApplication@@QEAAXXZ.c)
 *     WPP_SF_Ss @ 0x180010834 (WPP_SF_Ss.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z @ 0x1800122B4 (-GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z @ 0x180013578 (-OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnApplicationStateChanged(
        CApplicationManager *this,
        struct ApplicationStateChangedContext *a2)
{
  __int64 v4; // r8
  const char *v5; // rax
  int Application; // eax
  unsigned int v7; // esi
  int v8; // edx
  CApplication *v9; // rdi
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-28h] BYREF
  char v14; // [rsp+40h] [rbp-20h]
  LPCRITICAL_SECTION v15; // [rsp+48h] [rbp-18h] BYREF
  char v16; // [rsp+50h] [rbp-10h]
  CApplication *v17; // [rsp+80h] [rbp+20h] BYREF

  v15 = (LPCRITICAL_SECTION)((char *)this + 24);
  v16 = 0;
  ATL::CCritSecLock::Lock(&v15);
  v17 = 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v5 = "PENDING_TERMINATION";
    if ( !*((_DWORD *)a2 + 3) )
      v5 = "LAUNCHED";
    WPP_SF_Ss(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x43u, v4, *(const wchar_t **)a2, v5);
  }
  Application = CApplicationManager::GetApplication(
                  this,
                  *(const unsigned __int16 **)a2,
                  *((_DWORD *)a2 + 2),
                  &v17,
                  0,
                  0LL);
  v7 = Application;
  if ( Application < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x44u,
        &WPP_719a5be54ec33420ebdafeb185f33b54_Traceguids,
        Application);
    }
    AudPolicyLogError("CApplicationManager::OnApplicationStateChanged", 3162, v7);
  }
  else
  {
    v8 = *((_DWORD *)a2 + 3);
    if ( v8 )
    {
      if ( v8 == 1 )
      {
        v9 = v17;
        if ( *((_DWORD *)v17 + 42) )
          CApplicationManager::OnApplicationClosed(this, *(unsigned __int16 **)a2, *((_DWORD *)a2 + 2));
        lpCriticalSection = (LPCRITICAL_SECTION)((char *)v9 + 32);
        v14 = 0;
        ATL::CCritSecLock::Lock(&lpCriticalSection);
        v10 = (_QWORD *)*((_QWORD *)v9 + 9);
        while ( v10 )
        {
          v11 = v10[2];
          v10 = (_QWORD *)*v10;
          if ( !*(_DWORD *)(v11 + 416) )
            *(_DWORD *)(v11 + 416) = 1;
        }
        if ( v14 )
          LeaveCriticalSection(lpCriticalSection);
      }
    }
    else
    {
      CApplication::ReviveProcessesPendingTermination(v17);
    }
  }
  if ( v16 )
    LeaveCriticalSection(v15);
  return v7;
}
