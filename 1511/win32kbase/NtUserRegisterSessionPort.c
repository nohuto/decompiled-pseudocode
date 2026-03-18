/*
 * XREFs of NtUserRegisterSessionPort @ 0x1C007FD00
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSetLastError @ 0x1C00436EC (UserSetLastError.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007FFC0 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

__int64 __fastcall NtUserRegisterSessionPort(void *a1)
{
  unsigned int v2; // ebx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rsi
  int v7; // ecx
  LARGE_INTEGER v8; // rdi
  int v9; // r8d
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  ULONG v13; // eax
  __int64 v14; // rdx

  v2 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v4 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v6 = PsGetCurrentThreadWin32Thread(v5);
  if ( v6 )
  {
    v8 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v6 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
      && (qword_1C01020B0 & 0x200000010000000LL) != 0
      && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      LOBYTE(v7) = byte_1C01020C8 - 1;
      Template_xqx(v7, (unsigned int)&AcquiredExclusiveUserCritEvent, v9, v8.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v8.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v9,
        0,
        1000 * v8.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v6 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  v10 = xxxDwmProcessStartup(a1);
  if ( v10 >= 0 )
  {
    v2 = 1;
  }
  else
  {
    v13 = RtlNtStatusToDosError(v10);
    UserSetLastError(v13, v14);
  }
  UserSessionSwitchLeaveCrit(v12, v11);
  return v2;
}
