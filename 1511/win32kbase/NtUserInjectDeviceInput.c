/*
 * XREFs of NtUserInjectDeviceInput @ 0x1C00B0820
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
 *     RIMIDEInjectDeviceInput @ 0x1C00C6C04 (RIMIDEInjectDeviceInput.c)
 */

__int64 __fastcall NtUserInjectDeviceInput(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // r15
  unsigned int v6; // edi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v8; // r12
  __int64 v9; // rcx
  LONGLONG v10; // rdx
  __int64 v11; // rsi
  LARGE_INTEGER v12; // rcx
  LARGE_INTEGER v13; // rbx
  LARGE_INTEGER v14; // r8
  bool v15; // al
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rbx
  size_t v20; // rsi
  void *v21; // rax
  void *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v26; // [rsp+20h] [rbp-58h]

  v3 = a3;
  v6 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v8 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v11 = PsGetCurrentThreadWin32Thread(v9);
  if ( v11 )
  {
    v13 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v11 + 8));
    v10 = 0x200000010000000LL;
    if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0 )
    {
      v15 = (unsigned __int8)(byte_1C01020C8 - 1) > 2u
         && (qword_1C01020B0 & 0x200000010000000LL) != 0
         && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8;
      if ( v15 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        Template_xqx(
          v12.QuadPart,
          &AcquiredExclusiveUserCritEvent,
          v14.QuadPart,
          v13.QuadPart,
          0,
          gullUserCritAcquireToken);
    }
    if ( v13.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp )
    {
      v10 = 1000 * v13.QuadPart % gliQpcFreq.QuadPart;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        LODWORD(v26) = 1000 * v13.QuadPart / gliQpcFreq.QuadPart;
        Template_xqx(
          1000 * v13.QuadPart / gliQpcFreq.QuadPart,
          &AcquiredExclusiveUserCritTelemetryEvent,
          v14.QuadPart,
          0LL,
          v26,
          gullUserCritAcquireToken);
      }
    }
    *(_QWORD *)(v11 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v8;
  gbValidateHandleForIL = 1;
  if ( !(_DWORD)v3 )
    goto LABEL_33;
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(0LL) )
  {
    v18 = 5LL;
LABEL_34:
    UserSetLastError(v18, v10);
    goto LABEL_35;
  }
  v19 = 12 * v3;
  if ( (unsigned __int64)(12 * v3) > 0xFFFFFFFF )
  {
LABEL_33:
    v18 = 87LL;
    goto LABEL_34;
  }
  if ( v19 )
  {
    if ( (((-(__int64)(PsGetCurrentProcessWow64Process(v16, v10, v17) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & a2) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v19 + a2 > (unsigned __int64)W32UserProbeAddress || v19 + a2 < a2 )
      *(_BYTE *)W32UserProbeAddress = 0;
  }
  v20 = (unsigned int)v19;
  v21 = (void *)Win32AllocPoolWithQuota();
  v22 = v21;
  if ( !v21 )
    ExRaiseStatus(-1073741801);
  memmove(v21, (const void *)a2, v20);
  if ( (int)RIMIDEInjectDeviceInput(a1, v22, (unsigned int)v3) >= 0 )
    v6 = 1;
  if ( v22 )
    Win32FreePool();
LABEL_35:
  UserSessionSwitchLeaveCrit(v24, v23);
  return v6;
}
