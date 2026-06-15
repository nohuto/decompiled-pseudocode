/*
 * XREFs of ?HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBGK@Z @ 0x180013BD4
 * Callers:
 *     ?Invoke@CTransportControlRouterWorkItem@@UEAAXXZ @ 0x1800217D0 (-Invoke@CTransportControlRouterWorkItem@@UEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     WPP_SF_S @ 0x1800053A0 (WPP_SF_S.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A664 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z @ 0x180013DD8 (-HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001C370 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::HandleMediaPlaybackRequestForApp(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        DWORD a3)
{
  const GUID *v5; // r8
  struct CApplication *v6; // rdi
  _QWORD *v7; // rbx
  const wchar_t **v8; // rsi
  CApplicationManager *v9; // rcx
  _UNKNOWN **v10; // rcx
  const GUID *v11; // r9
  unsigned int v12; // ebx
  UINT32 v14; // [rsp+28h] [rbp-69h]
  unsigned int active; // [rsp+38h] [rbp-59h] BYREF
  struct TSSession *v16; // [rsp+40h] [rbp-51h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-49h] BYREF
  char v18; // [rsp+50h] [rbp-41h]
  __int64 v19; // [rsp+58h] [rbp-39h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-29h] BYREF
  const char *v21; // [rsp+88h] [rbp-9h]
  int v22; // [rsp+90h] [rbp-1h]
  int v23; // [rsp+94h] [rbp+3h]
  struct TSSession **v24; // [rsp+98h] [rbp+7h]
  int v25; // [rsp+A0h] [rbp+Fh]
  int v26; // [rsp+A4h] [rbp+13h]
  int *p_active; // [rsp+A8h] [rbp+17h]
  int v28; // [rsp+B0h] [rbp+1Fh]
  int v29; // [rsp+B4h] [rbp+23h]

  v19 = -2LL;
  active = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24);
  v18 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( a2 )
  {
    v6 = 0LL;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
    if ( !(unsigned int)TsSessionFromSessionId(a3, 0, 0LL, &v16) )
    {
      v7 = (_QWORD *)*((_QWORD *)v16 + 13);
      while ( v7 )
      {
        v8 = (const wchar_t **)v7[2];
        v7 = (_QWORD *)*v7;
        if ( !_wcsicmp(v8[2], a2) )
        {
          v6 = (struct CApplication *)v8;
          break;
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
    if ( v6 )
    {
      active = CApplicationManager::HandleMediaPlaybackRequestForActiveMediaApp(v9, v6);
LABEL_14:
      v10 = (_UNKNOWN **)WPP_GLOBAL_Control;
      goto LABEL_15;
    }
  }
  v10 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x28u, &WPP_2ae01a2157653d59076bb8a0ce2992be_Traceguids, a2);
    goto LABEL_14;
  }
LABEL_15:
  v11 = (const GUID *)active;
  if ( (active & 0x80000000) != 0 )
  {
    if ( v10 != &WPP_GLOBAL_Control && (*((_DWORD *)v10 + 7) & 0x40000000) != 0 && *((_BYTE *)v10 + 25) >= 2u )
      WPP_SF_D((TRACEHANDLE)v10[2], 0x29u, &WPP_2ae01a2157653d59076bb8a0ce2992be_Traceguids, active);
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v21 = "__FUNC__";
      v22 = 9;
      v23 = 0;
      LODWORD(v16) = 1549;
      v24 = &v16;
      v25 = 4;
      v26 = 0;
      p_active = (int *)&active;
      v28 = 4;
      v29 = 0;
      TlgWrite((TraceLoggingHProvider)v10, &unk_18002D869, v5, v11, v14, &pData);
    }
  }
  v12 = active;
  if ( v18 )
    LeaveCriticalSection(lpCriticalSection);
  return v12;
}
