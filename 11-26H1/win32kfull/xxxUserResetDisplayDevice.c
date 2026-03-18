/*
 * XREFs of xxxUserResetDisplayDevice @ 0x140248210
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x14023F980 (xxxUpdatePerUserSystemParameters.c)
 *     PowerOnGdi @ 0x140248020 (PowerOnGdi.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x14002A488 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     xxxRedrawWindow @ 0x14002CA0C (xxxRedrawWindow.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1400F7250 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 */

__int64 __fastcall xxxUserResetDisplayDevice(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 UserSessionState; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  result = W32GetUserSessionState(a1, a2);
  if ( *(_QWORD *)(result + 19176) )
  {
    EtwTracexxxUserResetDisplayDeviceBegin(0xFFFFFFFFLL);
    *(_QWORD *)(W32GetUserSessionState(v4, v3) + 19208) = 0LL;
    v7 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19904);
    v8 = *(_DWORD *)(v7 + 4964);
    UserSessionState = W32GetUserSessionState(v7, v9);
    zzzInternalSetCursorPos(*(unsigned int *)(*(_QWORD *)(UserSessionState + 19904) + 4960LL), v8, 2, 1);
    LOBYTE(v11) = 1;
    SetPointerInternal(v11, 6LL);
    v14 = W32GetUserSessionState(v13, v12);
    Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(
      BugCheckParameter3,
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 19176) + 8LL) + 24LL));
    v17 = W32GetUserSessionState(v16, v15);
    xxxRedrawWindow(*(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(v17 + 19176) + 8LL) + 24LL), 0LL, 0LL, 645);
    EtwTracexxxUserResetDisplayDeviceEnd(0xFFFFFFFFLL);
    return Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  }
  return result;
}
