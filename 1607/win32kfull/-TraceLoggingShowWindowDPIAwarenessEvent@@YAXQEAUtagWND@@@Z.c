/*
 * XREFs of ?TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z @ 0x1C00E54AC
 * Callers:
 *     xxxShowWindowEx @ 0x1C009E4B4 (xxxShowWindowEx.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     ProcessDpiAwarenessFromKernelDpiAwarenessContext @ 0x1C00E5564 (ProcessDpiAwarenessFromKernelDpiAwarenessContext.c)
 *     _TlgKeywordOn @ 0x1C00E56D0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C021F6CC (_TlgCreateSz.c)
 */

void __fastcall TraceLoggingShowWindowDPIAwarenessEvent(struct tagWND *const a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 i; // rdx
  _QWORD *CurrentProcessWin32Process; // rax
  const CHAR *ProcessImageFileName; // rax
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  int v10; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-38h] BYREF
  int *v13; // [rsp+70h] [rbp-28h]
  int v14; // [rsp+78h] [rbp-20h]
  int v15; // [rsp+7Ch] [rbp-1Ch]

  if ( (*(_DWORD *)(gpsi + 2220LL) & 0x20) == 0 )
  {
    v10 = ProcessDpiAwarenessFromKernelDpiAwarenessContext(*((unsigned int *)a1 + 88));
    if ( (v10 & 0xF) == 2 )
    {
      for ( i = *(_QWORD *)(PsGetCurrentProcessWin32Process(v2, v1) + 288); i; i = *(_QWORD *)(i + 584) )
      {
        if ( (**(_DWORD **)(i + 432) & 0x20000000) != 0 )
        {
          v10 = 128;
          break;
        }
      }
    }
    if ( dword_1C0320840 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0320840, 0x400000000000uLL) )
      {
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v4, v3);
        ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName(*CurrentProcessWin32Process);
        TlgCreateSz(&pDesc, ProcessImageFileName);
        v15 = 0;
        v13 = &v10;
        v14 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C0320840, &unk_1C02EF2F9, v8, v9, 4u, &pData);
      }
    }
  }
}
