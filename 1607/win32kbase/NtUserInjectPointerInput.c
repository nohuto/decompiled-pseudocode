/*
 * XREFs of NtUserInjectPointerInput @ 0x1C00BAD80
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSetLastError @ 0x1C0020A94 (UserSetLastError.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C003AA10 (Win32AllocPoolWithQuota.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C00D510C (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C00D6568 (RIMIDEInjectHIDReportFromPointerInfo.c)
 */

__int64 __fastcall NtUserInjectPointerInput(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rdi
  LARGE_INTEGER v10; // rcx
  LARGE_INTEGER v11; // rbx
  LARGE_INTEGER v12; // r8
  bool v13; // al
  __int64 v14; // rcx
  size_t v15; // rbx
  void *v16; // rax
  void *v17; // rdi
  int v18; // ebx
  __int64 v20; // [rsp+20h] [rbp-48h]

  v3 = a3;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v7 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v9 = PsGetCurrentThreadWin32Thread(v8);
  if ( v9 )
  {
    v11 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v9 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0 )
    {
      v13 = (unsigned __int8)(byte_1C0118B28 - 1) > 2u
         && (qword_1C0118B10 & 0x200000010000000LL) != 0
         && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18;
      if ( v13 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v10.LowPart) = byte_1C0118B28 - 1;
        Template_xqx(
          v10.QuadPart,
          &AcquiredExclusiveUserCritEvent,
          v12.QuadPart,
          v11.QuadPart,
          0,
          gullUserCritAcquireToken);
      }
    }
    if ( v11.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      LODWORD(v20) = 1000 * v11.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v12.QuadPart,
        0LL,
        v20,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v9 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v7;
  gbValidateHandleForIL = 1;
  if ( (unsigned int)(v3 - 1) > 0xFF )
  {
    v14 = 87LL;
    goto LABEL_33;
  }
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(0LL) )
  {
    v14 = 5LL;
LABEL_33:
    v18 = 0;
    UserSetLastError(v14);
    goto LABEL_34;
  }
  v15 = 152 * v3;
  if ( 152 * v3 )
  {
    if ( (((-(__int64)(PsGetCurrentProcessWow64Process(0x1AF286BCA1AF286LL) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & a2) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v15 + a2 > W32UserProbeAddress || v15 + a2 < a2 )
      *(_BYTE *)W32UserProbeAddress = 0;
  }
  v16 = (void *)Win32AllocPoolWithQuota();
  v17 = v16;
  if ( !v16 )
    ExRaiseStatus(-1073741801);
  memmove(v16, (const void *)a2, v15);
  v18 = RIMIDEInjectHIDReportFromPointerInfo(a1, v17, (unsigned int)v3);
  if ( !v18 )
    UserSetLastError(87LL);
  if ( v17 )
    Win32FreePool();
LABEL_34:
  UserSessionSwitchLeaveCrit();
  return v18;
}
