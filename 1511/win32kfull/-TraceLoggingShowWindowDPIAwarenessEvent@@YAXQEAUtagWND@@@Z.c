/*
 * XREFs of ?TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z @ 0x1C00945E4
 * Callers:
 *     xxxShowWindowEx @ 0x1C00794D0 (xxxShowWindowEx.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0091E04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0091E28 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00945B8 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingShowWindowDPIAwarenessEvent(struct tagWND *const a1)
{
  __int64 v1; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  const CHAR *ProcessImageFileName; // rax
  LPCGUID v4; // r8
  LPCGUID v5; // r9
  __int64 i; // rdx
  int v7; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-38h] BYREF
  int *v10; // [rsp+70h] [rbp-28h]
  int v11; // [rsp+78h] [rbp-20h]
  int v12; // [rsp+7Ch] [rbp-1Ch]

  if ( (*(_DWORD *)(gpsi + 2220LL) & 0x20) == 0 )
  {
    v7 = *((_DWORD *)a1 + 86);
    if ( v7 == 2 )
    {
      for ( i = *(_QWORD *)(PsGetCurrentProcessWin32Process(a1) + 296); i; i = *(_QWORD *)(i + 584) )
      {
        a1 = (struct tagWND *const)**(unsigned int **)(i + 432);
        if ( ((unsigned int)a1 & 0x20000000) != 0 )
        {
          v7 = 128;
          break;
        }
      }
    }
    if ( (unsigned int)dword_1C031B280 > 5 )
    {
      if ( TlgKeywordOn(a1, 0x400000000000uLL) )
      {
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v1);
        ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName(*CurrentProcessWin32Process);
        TlgCreateSz(&pDesc, ProcessImageFileName);
        v12 = 0;
        v10 = &v7;
        v11 = 4;
        TlgWrite((TraceLoggingHProvider)4, &unk_1C02E9CD9, v4, v5, 4u, &pData);
      }
    }
  }
}
