/*
 * XREFs of NtUserSetProcessDpiAwarenessContext @ 0x1C00742C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSetLastError @ 0x1C0020A94 (UserSetLastError.c)
 *     ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C0074414 (-UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     IsValidKernelDpiAwarenessContext @ 0x1C00745B4 (IsValidKernelDpiAwarenessContext.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 */

__int64 __fastcall NtUserSetProcessDpiAwarenessContext(__int64 a1, int a2)
{
  unsigned int v3; // ebp
  int v4; // esi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rdi
  int v9; // ecx
  LARGE_INTEGER v10; // rbx
  int v11; // r8d
  __int64 v12; // rdi
  int v13; // ecx
  __int64 v14; // rbx

  v3 = a1;
  v4 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v6 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v8 = PsGetCurrentThreadWin32Thread(v7);
  if ( v8 )
  {
    v10 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v8 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
      && (qword_1C0118B10 & 0x200000010000000LL) != 0
      && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      LOBYTE(v9) = byte_1C0118B28 - 1;
      Template_xqx(v9, (unsigned int)&AcquiredExclusiveUserCritEvent, v11, v10.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v10.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v11,
        0,
        1000 * v10.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v8 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  v12 = *((_QWORD *)v6 + 47);
  if ( (unsigned int)IsValidKernelDpiAwarenessContext(v3) )
  {
    v13 = *(_DWORD *)(v12 + 768);
    if ( (v13 & 0x200000) == 0 || a2 && (v3 & 0xF) == 1 && (*(_DWORD *)(v12 + 280) & 0xF) == 2 )
    {
      v14 = *(_QWORD *)(v12 + 632);
      *(_DWORD *)(v12 + 768) = v13 | 0x200000;
      v4 = 1;
      *(_DWORD *)(v12 + 280) = v3;
      if ( v14 )
      {
        while ( 1 )
        {
          v14 = *(_QWORD *)(v14 + 16);
          if ( !v14 )
            break;
          UpdateWindowTreeDpiAwareness((struct tagPROCESSINFO *)v12, *(struct tagWND **)(*(_QWORD *)(v14 + 8) + 16LL));
          UpdateWindowTreeDpiAwareness((struct tagPROCESSINFO *)v12, *(struct tagWND **)(v14 + 96));
        }
      }
    }
  }
  else
  {
    UserSetLastError(87LL);
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
