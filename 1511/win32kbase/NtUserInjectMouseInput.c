/*
 * XREFs of NtUserInjectMouseInput @ 0x1C00B0D90
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
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C00C66E8 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C00C7400 (RIMIDEInjectMouseFromMouseInputStruct.c)
 */

__int64 __fastcall NtUserInjectMouseInput(unsigned __int64 Src, unsigned int a2)
{
  __int64 v2; // r15
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdi
  LARGE_INTEGER v9; // rbx
  LARGE_INTEGER v10; // r8
  bool v11; // al
  __int64 v12; // rdx
  __int64 CurrentProcessWin32Process; // rsi
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rcx
  size_t v17; // rbx
  void *v18; // rax
  void *v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v27; // [rsp+20h] [rbp-48h]

  v2 = a2;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(Src);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v5 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v8 = PsGetCurrentThreadWin32Thread(v6);
  if ( v8 )
  {
    v9 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v8 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0 )
    {
      LOBYTE(v7) = byte_1C01020C8 - 1;
      v11 = (unsigned __int8)(byte_1C01020C8 - 1) > 2u
         && (qword_1C01020B0 & 0x200000010000000LL) != 0
         && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8;
      if ( v11 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        Template_xqx(v7, &AcquiredExclusiveUserCritEvent, v10.QuadPart, v9.QuadPart, 0, gullUserCritAcquireToken);
    }
    if ( v9.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      LODWORD(v27) = 1000 * v9.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v10.QuadPart,
        0LL,
        v27,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v8 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
  if ( (unsigned int)(v2 - 1) > 9 )
  {
    v16 = 87LL;
    goto LABEL_35;
  }
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(0LL) )
  {
    v16 = 5LL;
LABEL_35:
    v23 = 0;
    UserSetLastError(v16, v12);
    goto LABEL_36;
  }
  v17 = 32 * v2;
  if ( 32 * v2 )
  {
    if ( (((-(__int64)(PsGetCurrentProcessWow64Process(v14, v12, v15) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & Src) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v17 + Src > (unsigned __int64)W32UserProbeAddress || v17 + Src < Src )
      *(_BYTE *)W32UserProbeAddress = 0;
  }
  v18 = (void *)Win32AllocPoolWithQuota();
  v19 = v18;
  if ( !v18 )
    ExRaiseStatus(-1073741801);
  memmove(v18, (const void *)Src, v17);
  if ( *(_QWORD *)(CurrentProcessWin32Process + 856) == -1LL
    && (v21 = PsGetCurrentProcessWin32Process(v20), (int)RIMIDECreatePseudoMouseOrKeyboardDevice(0LL, v21 + 856) < 0) )
  {
    v23 = 0;
    UserSetLastError(1359LL, v22);
  }
  else
  {
    v23 = RIMIDEInjectMouseFromMouseInputStruct(*(_QWORD *)(CurrentProcessWin32Process + 856), v19, (unsigned int)v2);
  }
  if ( v19 )
    Win32FreePool();
LABEL_36:
  UserSessionSwitchLeaveCrit(v25, v24);
  return v23;
}
