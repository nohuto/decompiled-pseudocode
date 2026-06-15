/*
 * XREFs of ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x18000BE28
 * Callers:
 *     ?HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z @ 0x180013DD8 (-HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     WPP_SF_S @ 0x1800053A0 (WPP_SF_S.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z @ 0x18000C038 (-StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z @ 0x180014254 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::GrantGoodFaithPLMExemption(CApplication *this)
{
  const GUID *v2; // r8
  const GUID *v3; // r9
  _UNKNOWN **v4; // rcx
  int started; // edi
  UINT32 v7; // [rsp+28h] [rbp-49h]
  int v8; // [rsp+38h] [rbp-39h] BYREF
  int v9; // [rsp+3Ch] [rbp-35h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-31h] BYREF
  char v11; // [rsp+48h] [rbp-29h]
  __int64 v12; // [rsp+50h] [rbp-21h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-19h] BYREF
  const char *v14; // [rsp+78h] [rbp+7h]
  __int64 v15; // [rsp+80h] [rbp+Fh]
  int *v16; // [rsp+88h] [rbp+17h]
  __int64 v17; // [rsp+90h] [rbp+1Fh]
  int *v18; // [rsp+98h] [rbp+27h]
  __int64 v19; // [rsp+A0h] [rbp+2Fh]

  v12 = -2LL;
  v8 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v11 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_DWORD *)this + 84) )
  {
    v4 = (_UNKNOWN **)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x11u,
        &WPP_5f6cc46befba39241e72a8abc69dfa61_Traceguids,
        *((const wchar_t **)this + 2));
      v4 = (_UNKNOWN **)WPP_GLOBAL_Control;
    }
    started = -2147024809;
    v8 = -2147024809;
  }
  else
  {
    *(_QWORD *)((char *)this + 468) = 0LL;
    *(_QWORD *)((char *)this + 476) = 0LL;
    *(_QWORD *)((char *)this + 484) = 0LL;
    *((_DWORD *)this + 123) = 1;
    *((_DWORD *)this + 117) = 2;
    *((_QWORD *)this + 59) = 1LL;
    *((_DWORD *)this + 120) = 1;
    *((_DWORD *)this + 121) = 2;
    *((_DWORD *)this + 122) = 1;
    *((_DWORD *)this + 123) = 2;
    started = CApplication::StartGoodFaithPLMExemptionTimer(this, 1);
    v8 = started;
    if ( started >= 0 )
    {
      *((_DWORD *)this + 84) = 1;
      CApplicationManager::ApplyPBMPolicy(g_ApplicationManager, this, 0xA3u);
      started = v8;
      if ( v8 >= 0 )
        goto LABEL_16;
    }
    v4 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( v4 != &WPP_GLOBAL_Control && (*((_DWORD *)v4 + 7) & 0x40000000) != 0 && *((_BYTE *)v4 + 25) >= 2u )
  {
    WPP_SF_D((TRACEHANDLE)v4[2], 0x12u, &WPP_5f6cc46befba39241e72a8abc69dfa61_Traceguids, started);
    started = v8;
  }
  if ( (unsigned int)dword_180034030 > 2 )
  {
    v14 = "__FUNC__";
    v15 = 9LL;
    v9 = 1236;
    v16 = &v9;
    v17 = 4LL;
    v18 = &v8;
    v19 = 4LL;
    TlgWrite((TraceLoggingHProvider)v4, &unk_18002D869, v2, v3, v7, &pData);
    started = v8;
  }
LABEL_16:
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)started;
}
