/*
 * XREFs of ?TS_SessionIdStreamStarted@@YAJKPEAUIAudioStreamInfo@@PEBG@Z @ 0x18001E1A8
 * Callers:
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001FB30 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001C370 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TS_SessionIdStreamStarted(DWORD SessionId, struct IAudioStreamInfo *a2, const unsigned __int16 *a3)
{
  int v6; // eax
  unsigned int v7; // ecx
  __int64 v8; // rcx
  const GUID *v9; // r8
  const GUID *v10; // r9
  __int64 result; // rax
  UINT32 v12; // [rsp+20h] [rbp-49h]
  unsigned int v13; // [rsp+30h] [rbp-39h] BYREF
  struct TSSession *v14; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  const char *v16; // [rsp+60h] [rbp-9h]
  int v17; // [rsp+68h] [rbp-1h]
  int v18; // [rsp+6Ch] [rbp+3h]
  struct TSSession **v19; // [rsp+70h] [rbp+7h]
  int v20; // [rsp+78h] [rbp+Fh]
  int v21; // [rsp+7Ch] [rbp+13h]
  unsigned int *v22; // [rsp+80h] [rbp+17h]
  int v23; // [rsp+88h] [rbp+1Fh]
  int v24; // [rsp+8Ch] [rbp+23h]

  v13 = 0;
  v14 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x26u, &WPP_e3e7735b747b3b21be9d3d9ebc03ddc3_Traceguids, SessionId);
  }
  v6 = TsSessionFromSessionId(SessionId, 1, 0LL, &v14);
  if ( v6 )
  {
    v7 = (unsigned __int16)v6 | 0x80070000;
    if ( v6 <= 0 )
      v7 = v6;
    v13 = v7;
  }
  else
  {
    v8 = *((_QWORD *)v14 + 39);
    if ( v8 )
      v13 = (*(__int64 (__fastcall **)(__int64, struct IAudioStreamInfo *, const unsigned __int16 *))(*(_QWORD *)v8 + 24LL))(
              v8,
              a2,
              a3);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  result = v13;
  if ( (v13 & 0x80000000) != 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x27u, &WPP_e3e7735b747b3b21be9d3d9ebc03ddc3_Traceguids, v13);
      result = v13;
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v16 = "__FUNC__";
      v19 = &v14;
      v22 = &v13;
      v17 = 9;
      LODWORD(v14) = 2385;
      v20 = 4;
      v23 = 4;
      TlgWrite((TraceLoggingHProvider)4, &unk_18002D869, v9, v10, v12, &pData);
      return v13;
    }
  }
  return result;
}
