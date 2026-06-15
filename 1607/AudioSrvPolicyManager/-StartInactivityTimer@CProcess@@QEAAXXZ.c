/*
 * XREFs of ?StartInactivityTimer@CProcess@@QEAAXXZ @ 0x18000EFC8
 * Callers:
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x180020390 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CProcess::StartInactivityTimer(CProcess *this)
{
  const GUID *v2; // r8
  _UNKNOWN **v3; // rcx
  __int64 v4; // rax
  signed int LastError; // eax
  unsigned __int64 v6; // r9
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
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 320);
  v12 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v3 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x29u,
      &WPP_5f6cc46befba39241e72a8abc69dfa61_Traceguids,
      *((_DWORD *)this + 42));
    v3 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( *((_QWORD *)this + 45) )
    goto LABEL_11;
  v4 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), CProcess *))(*(_QWORD *)ThreadPool + 8LL))(
         ThreadPool,
         CProcess::InactivityTimerCallback,
         this);
  *((_QWORD *)this + 45) = v4;
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 2);
    v10[0] = -200000000;
    v10[1] = -1;
    cData = 100;
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, _DWORD *, _QWORD))(*(_QWORD *)ThreadPool + 24LL))(
      ThreadPool,
      *((_QWORD *)this + 45),
      v10,
      0LL);
    v3 = (_UNKNOWN **)WPP_GLOBAL_Control;
LABEL_11:
    v6 = v8;
    goto LABEL_12;
  }
  LastError = GetLastError();
  v6 = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    v6 = (unsigned int)LastError;
  v8 = v6;
  v3 = (_UNKNOWN **)WPP_GLOBAL_Control;
LABEL_12:
  if ( (v6 & 0x80000000) != 0LL )
  {
    if ( v3 != &WPP_GLOBAL_Control && (*((_DWORD *)v3 + 7) & 0x40000000) != 0 && *((_BYTE *)v3 + 25) >= 2u )
      WPP_SF_D((TRACEHANDLE)v3[2], 0x2Au, &WPP_5f6cc46befba39241e72a8abc69dfa61_Traceguids, v6);
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v15 = "__FUNC__";
      v16 = 9;
      v17 = 0;
      v9 = 3116;
      v18 = &v9;
      v19 = 4;
      v20 = 0;
      v21 = &v8;
      v22 = 4;
      v23 = 0;
      TlgWrite((TraceLoggingHProvider)v3, &unk_18002D869, v2, (LPCGUID)v6, cData, &pData);
    }
  }
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
}
