/*
 * XREFs of NtUserInjectPointerInput @ 0x1C00B1050
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C00211D0 (Win32AllocPoolWithQuota.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSetLastError @ 0x1C00436EC (UserSetLastError.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C00C5C18 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C00C6E68 (RIMIDEInjectHIDReportFromPointerInfo.c)
 */

__int64 __fastcall NtUserInjectPointerInput(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v7; // r15
  __int64 v8; // rcx
  LONGLONG v9; // rdx
  __int64 v10; // rdi
  LARGE_INTEGER v11; // rcx
  LARGE_INTEGER v12; // rbx
  LARGE_INTEGER v13; // r8
  bool v14; // al
  __int64 v15; // r8
  __int64 v16; // rcx
  size_t v17; // rbx
  void *v18; // rax
  void *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // ebx
  __int64 v24; // [rsp+20h] [rbp-48h]

  v3 = a3;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v7 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v10 = PsGetCurrentThreadWin32Thread(v8);
  if ( v10 )
  {
    v12 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v10 + 8));
    v9 = 0x200000010000000LL;
    if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0 )
    {
      v14 = (unsigned __int8)(byte_1C01020C8 - 1) > 2u
         && (qword_1C01020B0 & 0x200000010000000LL) != 0
         && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8;
      if ( v14 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v11.LowPart) = byte_1C01020C8 - 1;
        Template_xqx(
          v11.QuadPart,
          &AcquiredExclusiveUserCritEvent,
          v13.QuadPart,
          v12.QuadPart,
          0,
          gullUserCritAcquireToken);
      }
    }
    if ( v12.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp )
    {
      v9 = 1000 * v12.QuadPart % gliQpcFreq.QuadPart;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        LODWORD(v24) = 1000 * v12.QuadPart / gliQpcFreq.QuadPart;
        Template_xqx(
          gullUserCritAcquireToken,
          &AcquiredExclusiveUserCritTelemetryEvent,
          v13.QuadPart,
          0LL,
          v24,
          gullUserCritAcquireToken);
      }
    }
    *(_QWORD *)(v10 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v7;
  gbValidateHandleForIL = 1;
  if ( (unsigned int)(v3 - 1) > 0xFF )
  {
    v16 = 87LL;
    goto LABEL_33;
  }
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(0LL) )
  {
    v16 = 5LL;
LABEL_33:
    v22 = 0;
    UserSetLastError(v16, v9);
    goto LABEL_34;
  }
  v17 = 152 * v3;
  if ( 152 * v3 )
  {
    if ( (((-(__int64)(PsGetCurrentProcessWow64Process(0x1AF286BCA1AF286LL, v9, v15) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & a2) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v17 + a2 > (unsigned __int64)W32UserProbeAddress || v17 + a2 < a2 )
      *(_BYTE *)W32UserProbeAddress = 0;
  }
  v18 = (void *)Win32AllocPoolWithQuota();
  v19 = v18;
  if ( !v18 )
    ExRaiseStatus(-1073741801);
  memmove(v18, (const void *)a2, v17);
  v22 = RIMIDEInjectHIDReportFromPointerInfo(a1, v19, (unsigned int)v3);
  if ( !v22 )
    UserSetLastError(87LL, v20);
  if ( v19 )
    Win32FreePool();
LABEL_34:
  UserSessionSwitchLeaveCrit(v21, v20);
  return v22;
}
