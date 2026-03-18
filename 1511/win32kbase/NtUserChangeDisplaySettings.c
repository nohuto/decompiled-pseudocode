/*
 * XREFs of NtUserChangeDisplaySettings @ 0x1C0053400
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSetLastError @ 0x1C00436EC (UserSetLastError.c)
 *     xxxUserChangeDisplaySettings @ 0x1C0052F30 (xxxUserChangeDisplaySettings.c)
 *     DrvLogDiagDisplayChange @ 0x1C0053620 (DrvLogDiagDisplayChange.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

__int64 __fastcall NtUserChangeDisplaySettings(struct _UNICODE_STRING *a1, struct _devicemodeW *a2, int a3, void *a4)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  LARGE_INTEGER PerformanceCounter; // rax
  int v15; // r8d
  LONGLONG v16; // rdi
  unsigned int v17; // ebx
  int v18; // eax
  __int64 v19; // rcx

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v9 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v13 = PsGetCurrentThreadWin32Thread(v10);
  if ( v13 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v11 = 0x200000010000000LL;
    v16 = PerformanceCounter.QuadPart - *(_QWORD *)(v13 + 8);
    if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0 )
    {
      LOBYTE(v12) = byte_1C01020C8 - 1;
      if ( (unsigned __int8)(byte_1C01020C8 - 1) > 2u
        && (qword_1C01020B0 & 0x200000010000000LL) != 0
        && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        Template_xqx(v12, (unsigned int)&AcquiredExclusiveUserCritEvent, v15, v16, 0, gullUserCritAcquireToken);
      }
    }
    if ( v16 >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      Template_xqx(
        gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v15,
        0,
        1000 * v16 / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    *(_QWORD *)(v13 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v9;
  gbValidateHandleForIL = 1;
  if ( gbVideoInitialized )
  {
    if ( (*((_DWORD *)v9 + 110) & 0x20000000) != 0 )
      v18 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 47) + 728LL) + 24LL) & 0x10;
    else
      v18 = 0;
    if ( (v18 || gbEnforceUIPI && (unsigned int)*(_QWORD *)(*((_QWORD *)v9 + 47) + 832LL) <= 0x1FFF) && a3 != 34 )
    {
      v19 = 5LL;
    }
    else
    {
      if ( (a3 & 0x8000000) == 0 )
      {
        DrvLogDiagDisplayChange(0LL, 8LL);
        v17 = xxxUserChangeDisplaySettings(a1, a2, 0LL, a3, a4, UserMode, 0);
        goto LABEL_28;
      }
      v19 = 87LL;
    }
    v17 = -1;
    UserSetLastError(v19, v11);
  }
  else
  {
    v17 = -1;
  }
LABEL_28:
  UserSessionSwitchLeaveCrit(v12, v11);
  return v17;
}
