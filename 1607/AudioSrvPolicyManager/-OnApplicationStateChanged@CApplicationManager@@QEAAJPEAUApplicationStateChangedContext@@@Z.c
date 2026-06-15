/*
 * XREFs of ?OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z @ 0x1800163F0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A664 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x18000CEA0 (-ReviveProcessesPendingTermination@CApplication@@QEAAXXZ.c)
 *     WPP_SF_Ss @ 0x180011214 (WPP_SF_Ss.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z @ 0x18001356C (-GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z @ 0x180014CA8 (-OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnApplicationStateChanged(
        CApplicationManager *this,
        struct ApplicationStateChangedContext *a2)
{
  __int64 v4; // r8
  const char *v5; // rax
  const GUID *v6; // r8
  const GUID *v7; // r9
  int v8; // edx
  LPCRITICAL_SECTION v9; // rdi
  _QWORD *LockSemaphore; // rcx
  __int64 v11; // rdx
  const struct _TlgProvider_t *v12; // rcx
  unsigned int v13; // ebx
  UINT32 cData; // [rsp+28h] [rbp-69h]
  int Application; // [rsp+38h] [rbp-59h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-51h] BYREF
  char v18; // [rsp+48h] [rbp-49h]
  LPCRITICAL_SECTION v19; // [rsp+50h] [rbp-41h] BYREF
  char v20; // [rsp+58h] [rbp-39h]
  __int64 v21; // [rsp+60h] [rbp-31h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-29h] BYREF
  const char *v23; // [rsp+88h] [rbp-9h]
  __int64 v24; // [rsp+90h] [rbp-1h]
  LPCRITICAL_SECTION *p_lpCriticalSection; // [rsp+98h] [rbp+7h]
  __int64 v26; // [rsp+A0h] [rbp+Fh]
  int *p_Application; // [rsp+A8h] [rbp+17h]
  __int64 v28; // [rsp+B0h] [rbp+1Fh]

  v21 = -2LL;
  Application = 0;
  v19 = (LPCRITICAL_SECTION)((char *)this + 24);
  v20 = 0;
  ATL::CCritSecLock::Lock(&v19);
  lpCriticalSection = 0LL;
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
                  (struct CApplication **)&lpCriticalSection,
                  0,
                  0LL);
  if ( Application < 0 )
    goto LABEL_20;
  v8 = *((_DWORD *)a2 + 3);
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      v9 = lpCriticalSection;
      if ( LODWORD(lpCriticalSection[2].SpinCount) )
        CApplicationManager::OnApplicationClosed(this, *(unsigned __int16 **)a2, *((_DWORD *)a2 + 2));
      lpCriticalSection = (LPCRITICAL_SECTION)&v9->LockSemaphore;
      v18 = 0;
      ATL::CCritSecLock::Lock(&lpCriticalSection);
      LockSemaphore = v9[1].LockSemaphore;
      while ( LockSemaphore )
      {
        v11 = LockSemaphore[2];
        LockSemaphore = (_QWORD *)*LockSemaphore;
        if ( !*(_DWORD *)(v11 + 416) )
          *(_DWORD *)(v11 + 416) = 1;
      }
      if ( v18 )
        LeaveCriticalSection(lpCriticalSection);
    }
  }
  else
  {
    CApplication::ReviveProcessesPendingTermination((CApplication *)lpCriticalSection);
  }
  if ( Application < 0 )
  {
LABEL_20:
    v12 = (const struct _TlgProvider_t *)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x44u,
        &WPP_2ae01a2157653d59076bb8a0ce2992be_Traceguids,
        Application);
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v23 = "__FUNC__";
      v24 = 9LL;
      LODWORD(lpCriticalSection) = 3156;
      p_lpCriticalSection = &lpCriticalSection;
      v26 = 4LL;
      p_Application = &Application;
      v28 = 4LL;
      TlgWrite(v12, &unk_18002D869, v6, v7, cData, &pData);
    }
  }
  v13 = Application;
  if ( v20 )
    LeaveCriticalSection(v19);
  return v13;
}
