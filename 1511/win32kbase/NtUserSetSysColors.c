/*
 * XREFs of NtUserSetSysColors @ 0x1C007A510
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock_0 @ 0x1C0001C90 (PushW32ThreadLock_0.c)
 *     PopW32ThreadLock_0 @ 0x1C0002240 (PopW32ThreadLock_0.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C00211D0 (Win32AllocPoolWithQuota.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSetLastError @ 0x1C00436EC (UserSetLastError.c)
 *     xxxSetSysColors @ 0x1C0049F7C (xxxSetSysColors.c)
 *     FreeProfileUserName @ 0x1C007A8C0 (FreeProfileUserName.c)
 *     CreateProfileUserName @ 0x1C007A8E0 (CreateProfileUserName.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

__int64 __fastcall NtUserSetSysColors(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  char *v6; // rdi
  unsigned int *v7; // rsi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v9; // r14
  __int64 v10; // rcx
  LONGLONG v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r13
  int v14; // ecx
  LARGE_INTEGER v15; // rbx
  bool v16; // al
  int v17; // eax
  size_t v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  void *v21; // rcx
  char *v22; // rax
  unsigned int *v23; // rax
  __int64 ProfileUserName; // rbx
  unsigned int v25; // r14d
  __int64 v26; // rdx
  __int64 v27; // rcx
  _BYTE v29[24]; // [rsp+70h] [rbp-58h] BYREF
  unsigned int v30; // [rsp+D0h] [rbp+8h]

  v30 = a1;
  v6 = 0LL;
  v7 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v9 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v13 = PsGetCurrentThreadWin32Thread(v10);
  if ( v13 )
  {
    v15 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v13 + 8));
    v11 = 0x200000010000000LL;
    if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0 )
    {
      v16 = (unsigned __int8)(byte_1C01020C8 - 1) > 2u
         && (qword_1C01020B0 & 0x200000010000000LL) != 0
         && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8;
      if ( v16 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        Template_xqx(v14, (unsigned int)&AcquiredExclusiveUserCritEvent, v12, v15.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v15.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp )
    {
      v11 = 1000 * v15.QuadPart % gliQpcFreq.QuadPart;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        Template_xqx(
          1000 * v15.QuadPart / gliQpcFreq.QuadPart,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v12,
          0,
          1000 * v15.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
    }
    *(_QWORD *)(v13 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    v6 = 0LL;
    v7 = 0LL;
  }
  gptiCurrent = v9;
  gbValidateHandleForIL = 1;
  if ( (*((_DWORD *)v9 + 110) & 0x20000000) != 0 )
    v17 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 47) + 728LL) + 24LL) & 8;
  else
    v17 = 0;
  if ( v17 || gbEnforceUIPI && (unsigned int)*(_QWORD *)(*((_QWORD *)v9 + 47) + 832LL) < 0x2000 )
  {
    v25 = 0;
    UserSetLastError(5LL, v11);
  }
  else
  {
    if ( v30 )
    {
      v18 = 4LL * v30;
      if ( v18 )
      {
        if ( (((-(__int64)(PsGetCurrentProcessWow64Process((unsigned int)gbEnforceUIPI, v11, v12) != 0) & 0xFFFFFFFFFFFFFFFDuLL)
             + 3) & a2) != 0 )
          ExRaiseDatatypeMisalignment();
        v21 = W32UserProbeAddress;
        if ( v18 + a2 > (unsigned __int64)W32UserProbeAddress || v18 + a2 < a2 )
          *(_BYTE *)W32UserProbeAddress = 0;
        if ( (((-(__int64)(PsGetCurrentProcessWow64Process(v21, v19, v20) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & a3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v18 + a3 > (unsigned __int64)W32UserProbeAddress || v18 + a3 < a3 )
          *(_BYTE *)W32UserProbeAddress = 0;
      }
      v22 = (char *)Win32AllocPoolWithQuota();
      v6 = v22;
      if ( !v22 )
        ExRaiseStatus(-1073741801);
      memmove(v22, (const void *)a2, v18);
      v23 = (unsigned int *)Win32AllocPoolWithQuota();
      v7 = v23;
      if ( !v23 )
        ExRaiseStatus(-1073741801);
      memmove(v23, (const void *)a3, v18);
    }
    PushW32ThreadLock_0();
    PushW32ThreadLock_0();
    ProfileUserName = CreateProfileUserName(v29);
    v25 = xxxSetSysColors(ProfileUserName, v30, v6, v7, a4);
    FreeProfileUserName(ProfileUserName, v29);
    PopW32ThreadLock_0();
    PopW32ThreadLock_0();
    if ( v6 )
      Win32FreePool();
    if ( v7 )
      Win32FreePool();
  }
  UserSessionSwitchLeaveCrit(v27, v26);
  return v25;
}
