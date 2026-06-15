/*
 * XREFs of ?OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z @ 0x18001BCD0
 * Callers:
 *     ?Invoke@?$CGenericApplicationManagerWorkItem@VHostedAppStateChangedContext@@@@UEAAXXZ @ 0x18002D020 (-Invoke@-$CGenericApplicationManagerWorkItem@VHostedAppStateChangedContext@@@@UEAAXXZ.c)
 * Callees:
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001BB50 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?UpdateHostedApplicationState@CApplicationManager@@QEAAJPEBGKHPEAPEAVCApplication@@PEAH@Z @ 0x18001C660 (-UpdateHostedApplicationState@CApplicationManager@@QEAAJPEBGKHPEAPEAVCApplication@@PEAH@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     WPP_SF_Ss @ 0x1800A2738 (WPP_SF_Ss.c)
 */

__int64 __fastcall CApplicationManager::OnHostedAppStateChanged(
        CApplicationManager *this,
        struct HostedAppStateChangedContext *a2)
{
  int updated; // eax
  unsigned int v5; // ebx
  const char *v7; // rax
  int v8; // [rsp+48h] [rbp+10h] BYREF
  struct CApplication *v9; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0;
  v9 = 0LL;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    v7 = "HAC_INTERACTIVE";
    if ( !*((_DWORD *)a2 + 3) )
      v7 = "HAC_NON_INTERACTIVE";
    WPP_SF_Ss(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL), (__int64)v7);
  }
  updated = CApplicationManager::UpdateHostedApplicationState(
              this,
              *(const unsigned __int16 **)a2,
              *((_DWORD *)a2 + 2),
              *((_DWORD *)a2 + 3),
              &v9,
              &v8);
  v5 = updated;
  if ( updated < 0 )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        47LL,
        &WPP_a823fe2c17e0c03c8d4e6152eedcd7b2_Traceguids,
        (unsigned int)updated);
    }
  }
  else if ( v8 )
  {
    CApplicationManager::OnApplicationInteractivityChanged(this, v9);
  }
  return v5;
}
