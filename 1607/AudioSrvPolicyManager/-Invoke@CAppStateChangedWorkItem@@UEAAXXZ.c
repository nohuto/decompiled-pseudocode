/*
 * XREFs of ?Invoke@CAppStateChangedWorkItem@@UEAAXXZ @ 0x180020BA0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_Sd @ 0x18000A814 (WPP_SF_Sd.c)
 *     ?UpdateAppState@CApplication@@QEAAXHPEAH@Z @ 0x18000B380 (-UpdateAppState@CApplication@@QEAAXHPEAH@Z.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z @ 0x18001356C (-GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180015360 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
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
  const GUID *v9; // r8
  const GUID *v10; // r9
  UINT32 cData; // [rsp+28h] [rbp-69h]
  int v12; // [rsp+38h] [rbp-59h] BYREF
  int v13; // [rsp+3Ch] [rbp-55h] BYREF
  int v14; // [rsp+40h] [rbp-51h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-49h] BYREF
  char v16; // [rsp+50h] [rbp-41h]
  CApplication *v17[2]; // [rsp+58h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-29h] BYREF
  const char *v19; // [rsp+88h] [rbp-9h]
  int v20; // [rsp+90h] [rbp-1h]
  int v21; // [rsp+94h] [rbp+3h]
  int *v22; // [rsp+98h] [rbp+7h]
  int v23; // [rsp+A0h] [rbp+Fh]
  int v24; // [rsp+A4h] [rbp+13h]
  int *v25; // [rsp+A8h] [rbp+17h]
  int v26; // [rsp+B0h] [rbp+1Fh]
  int v27; // [rsp+B4h] [rbp+23h]

  v17[1] = (CApplication *)-2LL;
  v13 = 0;
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
  v16 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v14 = 0;
  v12 = 0;
  Application = CApplicationManager::GetApplication(v7, v6, v4, v17, 1, &v14);
  if ( Application >= 0 )
  {
    v3 = v17[0];
    CApplication::UpdateAppState(v17[0], v5, &v12);
    v2 = v14 || v12;
  }
  if ( v16 )
    LeaveCriticalSection(lpCriticalSection);
  v13 = Application;
  if ( Application < 0 )
    goto LABEL_18;
  if ( v2 )
  {
    CApplicationManager::OnApplicationInteractivityChanged(g_ApplicationManager, v3);
    Application = v13;
  }
  if ( Application < 0 )
  {
LABEL_18:
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
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v19 = "__FUNC__";
      v20 = 9;
      v21 = 0;
      v12 = 608;
      v22 = &v12;
      v23 = 4;
      v24 = 0;
      v25 = &v13;
      v26 = 4;
      v27 = 0;
      TlgWrite((TraceLoggingHProvider)4, &unk_18002D869, v9, v10, cData, &pData);
    }
  }
}
