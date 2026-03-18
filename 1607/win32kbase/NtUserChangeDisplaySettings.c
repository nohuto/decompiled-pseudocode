/*
 * XREFs of NtUserChangeDisplaySettings @ 0x1C0061670
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSetLastError @ 0x1C0020A94 (UserSetLastError.c)
 *     xxxUserChangeDisplaySettings @ 0x1C0061850 (xxxUserChangeDisplaySettings.c)
 *     DrvLogDiagDisplayChange @ 0x1C00629A0 (DrvLogDiagDisplayChange.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 */

__int64 __fastcall NtUserChangeDisplaySettings(
        struct _UNICODE_STRING *a1,
        struct _devicemodeW *a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v8; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rsi
  int v13; // ecx
  LARGE_INTEGER v14; // rdi
  int v15; // r8d
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v19; // rcx
  _QWORD v20[8]; // [rsp+40h] [rbp-88h] BYREF

  memset(v20, 0, sizeof(v20));
  EtwActivityIdControl(3u, (LPGUID)&v20[1]);
  v20[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v20[3]) = 26;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v8);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v10 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v12 = PsGetCurrentThreadWin32Thread(v11);
  if ( v12 )
  {
    v14 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v12 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
      && (qword_1C0118B10 & 0x200000010000000LL) != 0
      && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      LOBYTE(v13) = byte_1C0118B28 - 1;
      Template_xqx(v13, (unsigned int)&AcquiredExclusiveUserCritEvent, v15, v14.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v14.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v15,
        0,
        1000 * v14.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v12 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v10;
  gbValidateHandleForIL = 1;
  if ( gbVideoInitialized )
  {
    if ( (*((_DWORD *)v10 + 110) & 0x20000000) != 0 )
      v16 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 47) + 720LL) + 24LL) & 0x10;
    else
      v16 = 0;
    if ( (v16 || (unsigned int)*(_QWORD *)(*((_QWORD *)v10 + 47) + 824LL) <= 0x1FFF && gbEnforceUIPI) && a3 != 34 )
    {
      v19 = 5LL;
LABEL_29:
      v17 = -1;
      UserSetLastError(v19);
      goto LABEL_14;
    }
    if ( (a3 & 0x8000000) != 0 )
    {
      v19 = 87LL;
      goto LABEL_29;
    }
    DrvLogDiagDisplayChange(0LL, 8LL);
    v17 = xxxUserChangeDisplaySettings(a1, a2, 0LL, a3, a4, UserMode, 0, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v20);
  }
  else
  {
    v17 = -1;
  }
LABEL_14:
  UserSessionSwitchLeaveCrit();
  return v17;
}
