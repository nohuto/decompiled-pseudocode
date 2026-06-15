/*
 * XREFs of ?EventWorkerThread@@YAKPEAX@Z @ 0x180003BD0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     WPP_SF_ @ 0x18000537C (WPP_SF_.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

HRESULT __fastcall EventWorkerThread(PVOID Parameter)
{
  HRESULT result; // eax
  const GUID *v2; // r8
  const GUID *v3; // r9
  _UNKNOWN **v4; // rcx
  unsigned __int64 v5; // rbx
  DWORD dwMilliseconds; // [rsp+20h] [rbp-39h]
  HRESULT v7; // [rsp+30h] [rbp-29h] BYREF
  DWORD NumberOfBytesTransferred; // [rsp+34h] [rbp-25h] BYREF
  unsigned __int64 CompletionKey; // [rsp+38h] [rbp-21h] BYREF
  LPOVERLAPPED Overlapped; // [rsp+40h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  const char *v12; // [rsp+70h] [rbp+17h]
  int v13; // [rsp+78h] [rbp+1Fh]
  int v14; // [rsp+7Ch] [rbp+23h]
  DWORD *p_NumberOfBytesTransferred; // [rsp+80h] [rbp+27h]
  int v16; // [rsp+88h] [rbp+2Fh]
  int v17; // [rsp+8Ch] [rbp+33h]
  HRESULT *v18; // [rsp+90h] [rbp+37h]
  int v19; // [rsp+98h] [rbp+3Fh]
  int v20; // [rsp+9Ch] [rbp+43h]

  result = CoInitializeEx(0LL, 0);
  v7 = result;
  if ( result )
  {
    v4 = (_UNKNOWN **)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
    {
      if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_cc260ea604cc33204d9fadc8e89a5303_Traceguids);
        result = v7;
        v4 = (_UNKNOWN **)WPP_GLOBAL_Control;
      }
      if ( v4 != &WPP_GLOBAL_Control && (*((_DWORD *)v4 + 7) & 0x40000000) != 0 && *((_BYTE *)v4 + 25) >= 2u )
      {
        WPP_SF_D((TRACEHANDLE)v4[2], 0xBu, &WPP_cc260ea604cc33204d9fadc8e89a5303_Traceguids, result);
        result = v7;
      }
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v12 = "__FUNC__";
      p_NumberOfBytesTransferred = &NumberOfBytesTransferred;
      v18 = &v7;
      v13 = 9;
      NumberOfBytesTransferred = 104;
      v16 = 4;
      v19 = 4;
      TlgWrite((TraceLoggingHProvider)v4, &unk_18002D869, v2, v3, dwMilliseconds, &pData);
      return v7;
    }
  }
  else
  {
    while ( 1 )
    {
      while ( !GetQueuedCompletionStatus(
                 g_WorkerEventPort,
                 &NumberOfBytesTransferred,
                 &CompletionKey,
                 &Overlapped,
                 0xFFFFFFFF) )
        ;
      if ( NumberOfBytesTransferred == -1 )
        break;
      v5 = CompletionKey;
      (**(void (__fastcall ***)(unsigned __int64))CompletionKey)(CompletionKey);
      (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)v5 + 8LL))(v5, 1LL);
    }
    CoUninitialize();
    return 0;
  }
  return result;
}
