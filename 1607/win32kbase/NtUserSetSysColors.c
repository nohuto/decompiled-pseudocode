/*
 * XREFs of NtUserSetSysColors @ 0x1C005CBB0
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock_0 @ 0x1C0001D98 (PushW32ThreadLock_0.c)
 *     PopW32ThreadLock_0 @ 0x1C0001DA0 (PopW32ThreadLock_0.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSetLastError @ 0x1C0020A94 (UserSetLastError.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C003AA10 (Win32AllocPoolWithQuota.c)
 *     CreateProfileUserName @ 0x1C0054DA0 (CreateProfileUserName.c)
 *     xxxSetSysColors @ 0x1C005B018 (xxxSetSysColors.c)
 *     FreeProfileUserName @ 0x1C005CEF0 (FreeProfileUserName.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 */

__int64 __fastcall NtUserSetSysColors(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  char *v6; // rdi
  char *v7; // rsi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v9; // r14
  __int64 v10; // rcx
  __int64 v11; // r13
  int v12; // ecx
  LARGE_INTEGER v13; // rbx
  int v14; // r8d
  int v15; // eax
  size_t v16; // rbx
  ULONGLONG v17; // rcx
  char *v18; // rax
  char *v19; // rax
  __int64 ProfileUserName; // rbx
  int v21; // r14d
  bool v23; // al
  _BYTE v24[24]; // [rsp+58h] [rbp-70h] BYREF
  unsigned int v25; // [rsp+D0h] [rbp+8h]

  v25 = a1;
  v6 = 0LL;
  v7 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v9 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v11 = PsGetCurrentThreadWin32Thread(v10);
  if ( v11 )
  {
    v13 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v11 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0 )
    {
      v23 = (unsigned __int8)(byte_1C0118B28 - 1) > 2u
         && (qword_1C0118B10 & 0x200000010000000LL) != 0
         && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18;
      if ( v23 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        Template_xqx(v12, (unsigned int)&AcquiredExclusiveUserCritEvent, v14, v13.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v13.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        1000 * v13.QuadPart / gliQpcFreq.QuadPart,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v14,
        0,
        1000 * v13.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v11 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    v6 = 0LL;
    v7 = 0LL;
  }
  gptiCurrent = v9;
  gbValidateHandleForIL = 1;
  if ( (*((_DWORD *)v9 + 110) & 0x20000000) != 0 )
    v15 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 47) + 720LL) + 24LL) & 8;
  else
    v15 = 0;
  if ( v15 || gbEnforceUIPI && (unsigned int)*(_QWORD *)(*((_QWORD *)v9 + 47) + 824LL) < 0x2000 )
  {
    v21 = 0;
    UserSetLastError(5LL);
  }
  else
  {
    if ( v25 )
    {
      v16 = 4LL * v25;
      if ( v16 )
      {
        if ( (((-(__int64)(PsGetCurrentProcessWow64Process((unsigned int)gbEnforceUIPI) != 0) & 0xFFFFFFFFFFFFFFFDuLL)
             + 3) & a2) != 0 )
          ExRaiseDatatypeMisalignment();
        v17 = W32UserProbeAddress;
        if ( v16 + a2 > W32UserProbeAddress || v16 + a2 < a2 )
          *(_BYTE *)W32UserProbeAddress = 0;
        if ( (((-(__int64)(PsGetCurrentProcessWow64Process(v17) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & a3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v16 + a3 > W32UserProbeAddress || v16 + a3 < a3 )
          *(_BYTE *)W32UserProbeAddress = 0;
      }
      v18 = (char *)Win32AllocPoolWithQuota();
      v6 = v18;
      if ( !v18 )
        ExRaiseStatus(-1073741801);
      memmove(v18, (const void *)a2, v16);
      v19 = (char *)Win32AllocPoolWithQuota();
      v7 = v19;
      if ( !v19 )
        ExRaiseStatus(-1073741801);
      memmove(v19, (const void *)a3, v16);
    }
    PushW32ThreadLock_0();
    PushW32ThreadLock_0();
    ProfileUserName = CreateProfileUserName();
    v21 = xxxSetSysColors(ProfileUserName, v25, v6, v7, a4);
    FreeProfileUserName(ProfileUserName, v24);
    PopW32ThreadLock_0();
    PopW32ThreadLock_0();
    if ( v6 )
      Win32FreePool();
    if ( v7 )
      Win32FreePool();
  }
  UserSessionSwitchLeaveCrit();
  return v21;
}
