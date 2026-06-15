/*
 * XREFs of ?StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z @ 0x18000C038
 * Callers:
 *     ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x18000BE28 (-GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     WPP_SF_S @ 0x1800053A0 (WPP_SF_S.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::StartGoodFaithPLMExemptionTimer(const wchar_t **this, int a2)
{
  const GUID *v4; // r8
  _UNKNOWN **v5; // rcx
  __int64 v6; // rdx
  signed int LastError; // eax
  unsigned int v8; // ecx
  const GUID *v9; // r9
  unsigned int v10; // ebx
  UINT32 cData; // [rsp+28h] [rbp-49h]
  unsigned int v13; // [rsp+38h] [rbp-39h] BYREF
  int v14; // [rsp+3Ch] [rbp-35h] BYREF
  _DWORD v15[2]; // [rsp+40h] [rbp-31h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-29h] BYREF
  char v17; // [rsp+50h] [rbp-21h]
  __int64 v18; // [rsp+58h] [rbp-19h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-9h] BYREF
  const char *v20; // [rsp+88h] [rbp+17h]
  int v21; // [rsp+90h] [rbp+1Fh]
  int v22; // [rsp+94h] [rbp+23h]
  int *v23; // [rsp+98h] [rbp+27h]
  int v24; // [rsp+A0h] [rbp+2Fh]
  int v25; // [rsp+A4h] [rbp+33h]
  int *v26; // [rsp+A8h] [rbp+37h]
  int v27; // [rsp+B0h] [rbp+3Fh]
  int v28; // [rsp+B4h] [rbp+43h]

  v18 = -2LL;
  v13 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 36);
  v17 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v5 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x13u, &WPP_5f6cc46befba39241e72a8abc69dfa61_Traceguids, this[2]);
    v5 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( !this[41] )
  {
    v6 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), const wchar_t **))(*(_QWORD *)ThreadPool + 8LL))(
           ThreadPool,
           CApplication::GoodFaithPLMExemptionTimerExpiredCallback,
           this);
    this[41] = (const wchar_t *)v6;
    if ( v6 )
    {
      v15[0] = -200000000;
      v15[1] = -1;
      *((_DWORD *)this + 85) = a2;
      cData = 100;
      (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, _DWORD *, _QWORD))(*(_QWORD *)ThreadPool + 24LL))(
        ThreadPool,
        v6,
        v15,
        0LL);
    }
    else
    {
      LastError = GetLastError();
      v8 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v8 = LastError;
      v13 = v8;
    }
    v5 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  v9 = (const GUID *)v13;
  if ( (v13 & 0x80000000) != 0 )
  {
    if ( v5 != &WPP_GLOBAL_Control && (*((_DWORD *)v5 + 7) & 0x40000000) != 0 && *((_BYTE *)v5 + 25) >= 2u )
      WPP_SF_D((TRACEHANDLE)v5[2], 0x14u, &WPP_5f6cc46befba39241e72a8abc69dfa61_Traceguids, v13);
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v20 = "__FUNC__";
      v21 = 9;
      v22 = 0;
      v14 = 1276;
      v23 = &v14;
      v24 = 4;
      v25 = 0;
      v26 = (int *)&v13;
      v27 = 4;
      v28 = 0;
      TlgWrite((TraceLoggingHProvider)v5, &unk_18002D869, v4, v9, cData, &pData);
    }
  }
  v10 = v13;
  if ( v17 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v17 = 0;
  }
  return v10;
}
