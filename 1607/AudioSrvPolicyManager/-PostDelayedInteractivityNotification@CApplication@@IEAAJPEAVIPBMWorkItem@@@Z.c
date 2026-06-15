/*
 * XREFs of ?PostDelayedInteractivityNotification@CApplication@@IEAAJPEAVIPBMWorkItem@@@Z @ 0x18000C4DC
 * Callers:
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180016020 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmana.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     WPP_SF_S @ 0x1800053A0 (WPP_SF_S.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ @ 0x18000C6E4 (-CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::PostDelayedInteractivityNotification(const wchar_t **this, const wchar_t *a2)
{
  __int64 v4; // rax
  signed int LastError; // eax
  const GUID *v6; // r8
  const GUID *v7; // r9
  signed int v8; // ebx
  const struct _TlgProvider_t *v9; // rcx
  UINT32 cData; // [rsp+28h] [rbp-49h]
  signed int v12; // [rsp+38h] [rbp-39h] BYREF
  int v13; // [rsp+3Ch] [rbp-35h] BYREF
  _DWORD v14[2]; // [rsp+40h] [rbp-31h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-29h] BYREF
  char v16; // [rsp+50h] [rbp-21h]
  __int64 v17; // [rsp+58h] [rbp-19h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-9h] BYREF
  const char *v19; // [rsp+88h] [rbp+17h]
  int v20; // [rsp+90h] [rbp+1Fh]
  int v21; // [rsp+94h] [rbp+23h]
  int *v22; // [rsp+98h] [rbp+27h]
  int v23; // [rsp+A0h] [rbp+2Fh]
  int v24; // [rsp+A4h] [rbp+33h]
  signed int *v25; // [rsp+A8h] [rbp+37h]
  int v26; // [rsp+B0h] [rbp+3Fh]
  int v27; // [rsp+B4h] [rbp+43h]

  v17 = -2LL;
  v12 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 50);
  v16 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  CApplication::CleanupDelayedInteractivityNotification((CApplication *)this);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x19u, &WPP_5f6cc46befba39241e72a8abc69dfa61_Traceguids, this[2]);
  }
  if ( this[55]
    || (v4 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, _QWORD, const wchar_t **))(*(_QWORD *)ThreadPool + 8LL))(
               ThreadPool,
               CApplication::DelayedInteractivityNotificationTimerExpiredCallback,
               this),
        (this[55] = (const wchar_t *)v4) != 0LL) )
  {
    this[56] = a2;
    v14[0] = -300000000;
    v14[1] = -1;
    cData = 100;
    (*(void (__fastcall **)(struct CAudioThreadPool *, const wchar_t *, _DWORD *, _QWORD))(*(_QWORD *)ThreadPool + 24LL))(
      ThreadPool,
      this[55],
      v14,
      0LL);
    v8 = v12;
  }
  else
  {
    LastError = GetLastError();
    v8 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v8 = LastError;
    v12 = v8;
  }
  if ( v8 < 0 )
  {
    v9 = (const struct _TlgProvider_t *)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Au, &WPP_5f6cc46befba39241e72a8abc69dfa61_Traceguids, v8);
      v8 = v12;
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v19 = "__FUNC__";
      v20 = 9;
      v21 = 0;
      v13 = 1494;
      v22 = &v13;
      v23 = 4;
      v24 = 0;
      v25 = &v12;
      v26 = 4;
      v27 = 0;
      TlgWrite(v9, &unk_18002D869, v6, v7, cData, &pData);
      v8 = v12;
    }
  }
  if ( v16 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v16 = 0;
  }
  return (unsigned int)v8;
}
