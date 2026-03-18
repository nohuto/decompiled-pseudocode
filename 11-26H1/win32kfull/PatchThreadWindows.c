/*
 * XREFs of PatchThreadWindows @ 0x140149BF0
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     DisassociateShellFrameAppThreads @ 0x140149D88 (DisassociateShellFrameAppThreads.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

LONG_PTR __fastcall PatchThreadWindows(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  LONG_PTR result; // rax
  unsigned __int64 v12; // rbx
  __int64 v13; // rsi
  struct tagWND *v14; // r14
  __int64 v15; // rcx
  unsigned __int16 v16; // ax

  DisassociateShellFrameAppThreads(a1);
  UserSessionState = W32GetUserSessionState(v3, v2);
  v5 = *(_QWORD *)(UserSessionState + 19920);
  v8 = v5 + 32LL * *(unsigned int *)(W32GetUserSessionState(v7, v6) + 19848);
  result = W32GetUserSessionState(v10, v9);
  v12 = *(_QWORD *)(UserSessionState + 19920);
  v13 = *(_QWORD *)(result + 19864);
  if ( v12 <= v8 )
  {
    while ( 1 )
    {
      if ( *(_BYTE *)(v12 + 24) == 1 && *(_QWORD *)(v13 + 8) == a1 )
      {
        v14 = *(struct tagWND **)v13;
        if ( (*(_BYTE *)(v12 + 25) & 1) == 0 )
          goto LABEL_7;
        result = *((_QWORD *)v14 + 5);
        if ( *(_QWORD *)(result + 120) || (*(_BYTE *)(result + 18) & 4) == 0 )
          break;
      }
LABEL_3:
      v12 += 32LL;
      v13 += 40LL;
      if ( v12 > v8 )
        return result;
    }
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 5705LL);
LABEL_7:
    v15 = *((_QWORD *)v14 + 5);
    v16 = *(_WORD *)(v15 + 42);
    if ( v16 <= 0x29Au || v16 > 0x2A0u )
      *(_QWORD *)(v15 + 120) = 0LL;
    else
      *(_QWORD *)(*((_QWORD *)v14 + 5) + 120LL) = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v15, 672LL) + 19904)
                                                            + 8LL
                                                            * ((*(_WORD *)(*((_QWORD *)v14 + 5) + 42LL) & 0x2FFFu) - 666)
                                                            + 272);
    SetOrClrWF(1, v14, 0x204u, 1);
    result = SetOrClrWF(0, v14, 0x208u, 1);
    goto LABEL_3;
  }
  return result;
}
