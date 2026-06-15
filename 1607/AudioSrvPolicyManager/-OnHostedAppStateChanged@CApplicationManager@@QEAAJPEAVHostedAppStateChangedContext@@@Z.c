/*
 * XREFs of ?OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z @ 0x180015140
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_Ss @ 0x180011214 (WPP_SF_Ss.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z @ 0x18001356C (-GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180015360 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnHostedAppStateChanged(
        CApplicationManager *this,
        struct HostedAppStateChangedContext *a2,
        __int64 a3)
{
  BOOL v5; // r14d
  struct CApplication *v6; // rsi
  const char *v7; // rax
  int v8; // r15d
  unsigned int v9; // ebx
  const unsigned __int16 *v10; // rdi
  int Application; // ebx
  const GUID *v12; // r8
  const GUID *v13; // r9
  int v14; // eax
  const struct _TlgProvider_t *v15; // rcx
  UINT32 cData; // [rsp+28h] [rbp-69h]
  unsigned int v18; // [rsp+38h] [rbp-59h] BYREF
  int v19; // [rsp+3Ch] [rbp-55h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-51h] BYREF
  char v21; // [rsp+48h] [rbp-49h]
  struct CApplication *v22[3]; // [rsp+50h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-29h] BYREF
  const char *v24; // [rsp+88h] [rbp-9h]
  int v25; // [rsp+90h] [rbp-1h]
  int v26; // [rsp+94h] [rbp+3h]
  int *v27; // [rsp+98h] [rbp+7h]
  int v28; // [rsp+A0h] [rbp+Fh]
  int v29; // [rsp+A4h] [rbp+13h]
  unsigned int *v30; // [rsp+A8h] [rbp+17h]
  int v31; // [rsp+B0h] [rbp+1Fh]
  int v32; // [rsp+B4h] [rbp+23h]

  v22[1] = (struct CApplication *)-2LL;
  v18 = 0;
  v5 = 0;
  v6 = 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v7 = "HAC_NON_INTERACTIVE";
    if ( *((_DWORD *)a2 + 3) )
      v7 = "HAC_INTERACTIVE";
    WPP_SF_Ss(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x32u, a3, *(const wchar_t **)a2, v7);
  }
  v8 = *((_DWORD *)a2 + 3);
  v9 = *((_DWORD *)a2 + 2);
  v10 = *(const unsigned __int16 **)a2;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v21 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v19 = 0;
  Application = CApplicationManager::GetApplication(this, v10, v9, v22, 1, &v19);
  if ( Application >= 0 )
  {
    v6 = v22[0];
    v14 = *((_DWORD *)v22[0] + 28);
    if ( v8 )
      *((_DWORD *)v22[0] + 28) |= 4u;
    else
      *((_DWORD *)v22[0] + 28) &= ~4u;
    Application = 0;
    v5 = v19 || (v14 != 0) != (*((_DWORD *)v6 + 28) != 0);
  }
  if ( v21 )
    LeaveCriticalSection(lpCriticalSection);
  v18 = Application;
  if ( Application < 0 )
    goto LABEL_21;
  if ( v5 )
  {
    CApplicationManager::OnApplicationInteractivityChanged(this, v6);
    Application = v18;
  }
  if ( Application < 0 )
  {
LABEL_21:
    v15 = (const struct _TlgProvider_t *)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x33u,
        &WPP_2ae01a2157653d59076bb8a0ce2992be_Traceguids,
        Application);
      Application = v18;
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v24 = "__FUNC__";
      v25 = 9;
      v26 = 0;
      v19 = 2608;
      v27 = &v19;
      v28 = 4;
      v29 = 0;
      v30 = &v18;
      v31 = 4;
      v32 = 0;
      TlgWrite(v15, &unk_18002D869, v12, v13, cData, &pData);
      return v18;
    }
  }
  return (unsigned int)Application;
}
