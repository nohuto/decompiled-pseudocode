/*
 * XREFs of ?xxxReportHotKey@@YA?AW4tagHotKeyCallBackResult@@PEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140279114
 * Callers:
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1401E3D68 (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     _PostMessageExtended @ 0x140020024 (_PostMessageExtended.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?_GetShellWindow@@YAPEAUtagWND@@PEAUtagDESKTOP@@@Z @ 0x14013D9E8 (-_GetShellWindow@@YAPEAUtagWND@@PEAUtagDESKTOP@@@Z.c)
 *     _PostThreadMessageEx @ 0x1401D3210 (_PostThreadMessageEx.c)
 *     ?IsPenQuickLaunchHotKey@@YA_NIE@Z @ 0x1402572D0 (-IsPenQuickLaunchHotKey@@YA_NIE@Z.c)
 *     ?GetDestination@CHILDHOTKEY@@QEBA?AUDestination@1@XZ @ 0x14025DDE0 (-GetDestination@CHILDHOTKEY@@QEBA-AUDestination@1@XZ.c)
 *     ?HotkeyInvoked@Keyboard@InputTraceLogging@@SAXIE_N@Z @ 0x14026249C (-HotkeyInvoked@Keyboard@InputTraceLogging@@SAXIE_N@Z.c)
 *     ?GetDestination@tagHOTKEY@@QEBA?AUDestination@1@XZ @ 0x1402790A8 (-GetDestination@tagHOTKEY@@QEBA-AUDestination@1@XZ.c)
 *     ?xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z @ 0x14027952C (-xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?TraceLoggingYieldedHotkey@@YAXII@Z @ 0x140292688 (-TraceLoggingYieldedHotkey@@YAXII@Z.c)
 *     ?xxxReportWindowHotKey@@YAXPEBUtagHOTKEY@@PEAUtagWND@@W4ReportHotKeyHint@@@Z @ 0x1402A7B44 (-xxxReportWindowHotKey@@YAXPEBUtagHOTKEY@@PEAUtagWND@@W4ReportHotKeyHint@@@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxReportHotKey(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // r15d
  unsigned int v5; // r13d
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // esi
  __int64 UserSessionState; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  struct tagWND *v12; // r14
  unsigned __int64 v13; // rbx
  char v14; // r12
  __int64 v15; // rax
  char v16; // si
  __int64 (__fastcall *v17)(_QWORD, unsigned __int64); // r12
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *i; // rcx
  _QWORD *v25; // rsi
  unsigned int v26; // edx
  int v27; // edi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  struct tagTHREADINFO *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  struct tagTHREADINFO *v37; // rax
  struct tagWND *ShellWindow; // rax
  unsigned __int16 v39; // [rsp+30h] [rbp-39h]
  __int64 (__fastcall *v40)(_QWORD, unsigned __int64); // [rsp+38h] [rbp-31h]
  _QWORD v41[2]; // [rsp+40h] [rbp-29h] BYREF
  struct tagTHREADINFO *v42; // [rsp+50h] [rbp-19h]
  __int64 v43; // [rsp+58h] [rbp-11h] BYREF
  struct tagWND *v44; // [rsp+60h] [rbp-9h]
  __int64 v45; // [rsp+70h] [rbp+7h] BYREF
  struct tagWND *v46; // [rsp+78h] [rbp+Fh]
  char v47; // [rsp+D0h] [rbp+67h]
  bool v49; // [rsp+E8h] [rbp+7Fh]

  v4 = *(_DWORD *)(a1 + 40);
  v49 = *(_DWORD *)(a3 + 4) == 1;
  v5 = v49 | 2;
  if ( *(_DWORD *)(a1 + 36) )
    v5 = *(_DWORD *)(a3 + 4) == 1;
  if ( v4 == -7 || v4 == 61744 )
  {
    v37 = PtiCurrent(a1);
    ShellWindow = _GetShellWindow(*((struct tagDESKTOP **)v37 + 61));
    if ( ShellWindow )
      xxxReportWindowHotKey(a1, ShellWindow, v5);
    return 0LL;
  }
  v39 = *(_WORD *)(a1 + 34);
  if ( (v39 & 0x100) != 0 )
    return 0LL;
  tagHOTKEY::GetDestination(a1, &v45);
  if ( !(_DWORD)v45 )
    return 0LL;
  v8 = *(unsigned __int8 *)(a1 + 36);
  v47 = *(_BYTE *)(a1 + 36);
  UserSessionState = W32GetUserSessionState(v7, v6);
  v10 = *(unsigned __int16 *)(a1 + 34);
  v11 = *(_QWORD *)(a1 + 24);
  v12 = v46;
  v13 = ((unsigned __int64)v8 << 16) | *(unsigned __int16 *)(UserSessionState + 14032);
  v14 = (unsigned __int8)*(_WORD *)(a1 + 34) >> 7;
  v40 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64))(a1 + 8);
  v42 = *(struct tagTHREADINFO **)a1;
  v15 = *(_QWORD *)(a1 + 56);
  v41[0] = v11;
  v43 = v15;
  if ( v15 == a1 + 56 )
    goto LABEL_24;
  if ( (v10 & 0x1000) != 0 )
  {
    v16 = 1;
    CHILDHOTKEY::GetDestination(v15 - 32, v41);
    v10 = 0LL;
    if ( !LODWORD(v41[0]) )
      return 0LL;
    v17 = 0LL;
    v12 = (struct tagWND *)v41[1];
    v45 = 2LL;
    v4 = *(_DWORD *)(v43 - 12);
    v41[0] = *(_QWORD *)(v43 - 8);
    v18 = *(unsigned __int16 *)(v43 - 16);
    goto LABEL_26;
  }
  v16 = v14;
  if ( *(_QWORD *)(W32GetUserSessionState(a1 + 56, v10) + 18928) )
  {
    v20 = *(_QWORD *)(W32GetUserSessionState(v19, v10) + 18928);
    if ( *(_QWORD *)(v20 + 128) )
    {
      if ( (*(_DWORD *)(W32GetUserSessionState(v20, v10) + 66800) & 0x200) == 0
        || (v22 = W32GetUserSessionState(v21, v10), !IsPenQuickLaunchHotKey(*(_DWORD *)(v22 + 14032), v47)) )
      {
        v23 = W32GetUserSessionState(v21, v10);
        v10 = a1 + 56;
        for ( i = *(_QWORD **)(a1 + 56); i != (_QWORD *)v10; i = (_QWORD *)*i )
        {
          v25 = i - 4;
          if ( *(_QWORD *)(*(i - 4) + 464LL) == *(_QWORD *)(v23 + 18928) )
          {
            CHILDHOTKEY::GetDestination((__int64)(i - 4), &v43);
            if ( !(_DWORD)v43 )
              return 0LL;
            v12 = v44;
            v46 = v44;
            v45 = 2LL;
            if ( !v44 )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1908LL);
            v26 = *(_DWORD *)(a1 + 36);
            v4 = *((_DWORD *)v25 + 5);
            v42 = (struct tagTHREADINFO *)*v25;
            v40 = 0LL;
            v39 = *((_WORD *)v25 + 8);
            TraceLoggingYieldedHotkey(*(unsigned __int16 *)(a1 + 32), v26);
            break;
          }
        }
LABEL_24:
        v16 = v14;
      }
    }
  }
  v17 = v40;
  v18 = v39;
LABEL_26:
  v27 = v45;
  if ( (v18 & 0x4000) != 0 && v13 == *(_QWORD *)(W32GetUserSessionState(v18, v10) + 13992) )
    return 0LL;
  if ( v16 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(v18, v10) + 13992) != v13 )
      *(_QWORD *)(W32GetUserSessionState(v29, v28) + 13992) = v13;
    xxxReportHotKeyToShell(v12, v13, v4, v41[0], v5);
    return 0LL;
  }
  if ( v27 == 1 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(v18, v10) + 13992) != v13 )
      *(_QWORD *)(W32GetUserSessionState(v35, v34) + 13992) = v13;
    W32GetUserSessionState(v35, v34);
    InputTraceLogging::Keyboard::HotkeyInvoked();
    if ( v17 )
      return v17(v4, v13);
    PostThreadMessageEx(v42, 0x312u, (LARGE_INTEGER)v4, v13, (struct tagINPUT_MESSAGE_SOURCE *)a3);
    v33 = v42;
    goto LABEL_42;
  }
  if ( v12 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(v18, v10) + 13992) != v13 )
      *(_QWORD *)(W32GetUserSessionState(v31, v30) + 13992) = v13;
    W32GetUserSessionState(v31, v30);
    InputTraceLogging::Keyboard::HotkeyInvoked();
    PostMessageExtended(v12, 0x312u, v4, v13, (struct tagINPUT_MESSAGE_SOURCE *)a3);
    v33 = (struct tagTHREADINFO *)*((_QWORD *)v12 + 2);
LABEL_42:
    LOBYTE(v32) = v49;
    LastWokenThread::Set(v33, 1LL, v32);
  }
  return 0LL;
}
