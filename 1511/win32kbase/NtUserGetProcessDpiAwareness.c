/*
 * XREFs of NtUserGetProcessDpiAwareness @ 0x1C0021610
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSetLastError @ 0x1C00436EC (UserSetLastError.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

__int64 __fastcall NtUserGetProcessDpiAwareness(char *Handle, int *a2)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // r12
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rsi
  LARGE_INTEGER v9; // rdi
  int v10; // r8d
  int v11; // ebx
  bool v12; // al
  unsigned int v13; // edi
  NTSTATUS v14; // eax
  PVOID v15; // rsi
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v17; // ecx
  int *v18; // rcx
  PVOID v20; // [rsp+80h] [rbp+8h]
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  v20 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(Handle);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v5 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
  v8 = PsGetCurrentThreadWin32Thread(v6);
  if ( v8 )
  {
    v9 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v8 + 8));
    v11 = 2;
    if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0 )
    {
      LOBYTE(v7) = byte_1C01020C8 - 1;
      v12 = (unsigned __int8)(byte_1C01020C8 - 1) > 2u
         && (qword_1C01020B0 & 0x200000010000000LL) != 0
         && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8;
      if ( v12 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        Template_xqx(v7, (unsigned int)&AcquiredExclusiveUserCritEvent, v10, v9.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v9.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v10,
        0,
        1000 * v9.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v8 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  else
  {
    v11 = 2;
  }
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  v13 = 0;
  if ( (unsigned __int64)(Handle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
LABEL_25:
    if ( CurrentProcessWin32Process )
    {
      v17 = *(_DWORD *)(CurrentProcessWin32Process + 776);
      if ( (v17 & 0x4000) == 0 )
        v11 = (v17 >> 13) & 1;
      v13 = 1;
      v18 = a2;
      if ( a2 >= W32UserProbeAddress )
        v18 = (int *)W32UserProbeAddress;
      *v18 = *v18;
      *a2 = v11;
    }
    goto LABEL_31;
  }
  v14 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  v15 = Object;
  v20 = Object;
  if ( v14 < 0 )
  {
    UserSetLastError(87LL);
    goto LABEL_33;
  }
  if ( (unsigned int)PsGetProcessSessionId(Object) == gSessionId )
  {
    CurrentProcessWin32Process = PsGetProcessWin32Process(v15);
    goto LABEL_25;
  }
  UserSetLastError(87LL);
LABEL_31:
  if ( v20 )
    ObfDereferenceObject(v20);
LABEL_33:
  UserSessionSwitchLeaveCrit();
  return v13;
}
