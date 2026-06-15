/*
 * XREFs of ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x18000D220
 * Callers:
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180015360 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     WPP_SF_S @ 0x1800053A0 (WPP_SF_S.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AddCategoryOverrideToProcesses@CApplication@@IEAAXW4OverridePolicy@@W4_APPLICATION_CATEGORY@@H@Z @ 0x18000BCF8 (-AddCategoryOverrideToProcesses@CApplication@@IEAAXW4OverridePolicy@@W4_APPLICATION_CATEGORY@@H@.c)
 *     ?RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ @ 0x18000CAF4 (-RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18000D08C (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x18000D444 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplication::BeginBCMStartupLatencyGracePeriod(const wchar_t **this)
{
  __int64 v2; // rax
  signed int LastError; // eax
  const GUID *v4; // r8
  unsigned __int64 v5; // r9
  const struct _TlgProvider_t *v6; // rcx
  UINT32 cData; // [rsp+28h] [rbp-49h]
  unsigned int v8; // [rsp+38h] [rbp-39h] BYREF
  int v9; // [rsp+3Ch] [rbp-35h] BYREF
  _DWORD v10[2]; // [rsp+40h] [rbp-31h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-29h] BYREF
  char v12; // [rsp+50h] [rbp-21h]
  __int64 v13; // [rsp+58h] [rbp-19h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-9h] BYREF
  const char *v15; // [rsp+88h] [rbp+17h]
  int v16; // [rsp+90h] [rbp+1Fh]
  int v17; // [rsp+94h] [rbp+23h]
  int *v18; // [rsp+98h] [rbp+27h]
  int v19; // [rsp+A0h] [rbp+2Fh]
  int v20; // [rsp+A4h] [rbp+33h]
  unsigned int *v21; // [rsp+A8h] [rbp+37h]
  int v22; // [rsp+B0h] [rbp+3Fh]
  int v23; // [rsp+B4h] [rbp+43h]

  v13 = -2LL;
  v8 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 43);
  v12 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  CApplication::CleanupBCMStartupLatencyGracePeriod((CApplication *)this);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Eu, &WPP_5f6cc46befba39241e72a8abc69dfa61_Traceguids, this[2]);
  }
  if ( this[48]
    || (v2 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, _QWORD, const wchar_t **))(*(_QWORD *)ThreadPool + 8LL))(
               ThreadPool,
               CApplication::BCMStartupGracePeriodExpiredCallback,
               this),
        (this[48] = (const wchar_t *)v2) != 0LL) )
  {
    v10[0] = -100000000;
    v10[1] = -1;
    *((_DWORD *)this + 98) = 1;
    if ( (unsigned int)CApplication::IsRestrictedBackgroundAudioCapable((CApplication *)this) )
    {
      CApplication::AddCategoryOverrideToProcesses((__int64)this, 7, 1, 0);
      CApplication::RestrictAudioPlaybackToPrimaryCategories((CApplication *)this);
    }
    cData = 100;
    (*(void (__fastcall **)(struct CAudioThreadPool *, const wchar_t *, _DWORD *, _QWORD))(*(_QWORD *)ThreadPool + 24LL))(
      ThreadPool,
      this[48],
      v10,
      0LL);
    v5 = v8;
  }
  else
  {
    LastError = GetLastError();
    v5 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v5 = (unsigned int)LastError;
    v8 = v5;
  }
  if ( (v5 & 0x80000000) != 0LL )
  {
    v6 = (const struct _TlgProvider_t *)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Fu, &WPP_5f6cc46befba39241e72a8abc69dfa61_Traceguids, v5);
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v15 = "__FUNC__";
      v16 = 9;
      v17 = 0;
      v9 = 2161;
      v18 = &v9;
      v19 = 4;
      v20 = 0;
      v21 = &v8;
      v22 = 4;
      v23 = 0;
      TlgWrite(v6, &unk_18002D869, v4, (LPCGUID)v5, cData, &pData);
    }
  }
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
}
