/*
 * XREFs of xxxSetThreadDesktop @ 0x1400595D4
 * Callers:
 *     xxxSetCsrssThreadDesktop @ 0x140056850 (xxxSetCsrssThreadDesktop.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x140057630 (xxxRestoreCsrssThreadDesktop.c)
 *     NtUserSetThreadDesktop @ 0x14005A470 (NtUserSetThreadDesktop.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1401FFD98 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140277DD8 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x14005991C (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 *     zzzSetDesktop @ 0x140059C20 (zzzSetDesktop.c)
 *     MapDesktop @ 0x140059FC0 (MapDesktop.c)
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x1401CA7DC (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x140271C80 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     MagContextThreadCallout @ 0x1402984B0 (MagContextThreadCallout.c)
 */

__int64 __fastcall xxxSetThreadDesktop(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  struct tagTHREADINFO *v5; // rdi
  _QWORD *v6; // r14
  __int64 result; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // ecx
  __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 UserSessionState; // rax
  tagQ *v23; // rax
  _QWORD v24[5]; // [rsp+20h] [rbp-48h] BYREF
  int v25; // [rsp+48h] [rbp-20h]
  int v26; // [rsp+4Ch] [rbp-1Ch]

  v5 = PtiCurrent(a1);
  v6 = (_QWORD *)*((_QWORD *)v5 + 57);
  if ( !a2 )
    goto LABEL_3;
  v24[3] = *v6;
  v24[0] = 0LL;
  v24[1] = 0LL;
  v24[2] = 1LL;
  v24[4] = a2;
  v25 = 0;
  v26 = 1;
  result = MapDesktop(v24);
  if ( (int)result >= 0 )
  {
LABEL_3:
    v8 = *(_QWORD *)(W32GetUserGdiSessionState(v4) + 40);
    if ( PsGetCurrentProcess(v9) != v8 )
    {
      if ( *((_DWORD *)v5 + 233)
        || *((_DWORD *)v5 + 178)
        || (v20 = *((_QWORD *)v5 + 61)) != 0
        && (v21 = *(_QWORD *)(v20 + 224)) != 0
        && *(struct tagTHREADINFO **)(v21 + 32) == v5 )
      {
        UserSetLastError(170);
        return 2147483665LL;
      }
      v11 = v6 + 43;
      if ( !v6[43] && a1 )
      {
        LockObjectAssignment(v11, a2);
        v6[48] = a1;
      }
    }
    if ( *((_QWORD *)v5 + 61) != a2 )
    {
      if ( (*((_BYTE *)v5 + 1360) & 8) != 0 )
      {
        UserSessionState = W32GetUserSessionState(v11, v10);
        MagContextThreadCallout(UserSessionState + 66032, v5, 0LL, 1LL);
      }
      if ( *((_QWORD *)v5 + 61) != a2 )
      {
        if ( tagQ::AreMultipleThreadsAttached(*((tagQ **)v5 + 58)) )
        {
          v23 = (tagQ *)AllocQueue(0LL, 0LL);
          if ( !v23 )
          {
            UserSetLastError(8);
            return 3221225495LL;
          }
          tagQ::zzzAttachToQueue(v23, v5, 0LL, 0);
        }
        else
        {
          v14 = W32GetUserSessionState(v13, v12);
          v16 = *((_QWORD *)v5 + 58);
          if ( v16 == *(_QWORD *)(v14 + 18928) )
          {
            if ( !gbIgnoreStressedOutStuff && *(_QWORD *)(v16 + 136) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5097LL);
            xxxSetForegroundWindow2(0LL, v5, 0LL);
          }
          else if ( !*((_QWORD *)v5 + 61) )
          {
            v17 = *(_DWORD *)(W32GetUserSessionState(v15, v16) + 68440);
            v18 = *((_QWORD *)v5 + 58);
            v19 = (v17 & 1) - 1;
            *((_DWORD *)v5 + 196) = v19;
            *(_DWORD *)(v18 + 432) = v19;
          }
        }
      }
    }
    return zzzSetDesktop(v5, a2, a1);
  }
  return result;
}
