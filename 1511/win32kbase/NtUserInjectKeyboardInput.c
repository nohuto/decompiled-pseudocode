/*
 * XREFs of NtUserInjectKeyboardInput @ 0x1C00B0AC0
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
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C00C7134 (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 */

__int64 __fastcall NtUserInjectKeyboardInput(unsigned __int64 Src, unsigned int a2)
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
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rbx
  void *v17; // rax
  void *v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // ebx
  __int64 v24; // rcx
  __int64 v26; // [rsp+20h] [rbp-38h]

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
      LODWORD(v26) = 1000 * v9.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v10.QuadPart,
        0LL,
        v26,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v8 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
  if ( (unsigned int)(v2 - 1) > 9 )
  {
    v15 = 87LL;
    goto LABEL_37;
  }
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(0LL) )
  {
    v15 = 5LL;
LABEL_37:
    v23 = 0;
    UserSetLastError(v15, v12);
    goto LABEL_38;
  }
  v16 = 24 * v2;
  if ( 24 * v2 )
  {
    if ( (((-(__int64)(PsGetCurrentProcessWow64Process(0xAAAAAAAAAAAAAAALL, v12, v14) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & Src) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v16 + Src > (unsigned __int64)W32UserProbeAddress || v16 + Src < Src )
      *(_BYTE *)W32UserProbeAddress = 0;
  }
  v17 = (void *)Win32AllocPoolWithQuota();
  v18 = v17;
  if ( !v17 )
    ExRaiseStatus(-1073741801);
  memmove(v17, (const void *)Src, 24 * v2);
  if ( *(_QWORD *)(CurrentProcessWin32Process + 864) == -1LL )
  {
    v20 = PsGetCurrentProcessWin32Process(v19);
    if ( (int)RIMIDECreatePseudoMouseOrKeyboardDevice(1LL, v20 + 864) < 0 )
    {
      v22 = 1359LL;
LABEL_31:
      v23 = 0;
      UserSetLastError(v22, v21);
      goto LABEL_34;
    }
  }
  v23 = RIMIDEInjectKeyboardFromKeybdInputStruct(*(_QWORD *)(CurrentProcessWin32Process + 864), v18, (unsigned int)v2);
  if ( !v23 )
  {
    v22 = 87LL;
    goto LABEL_31;
  }
LABEL_34:
  if ( v18 )
    Win32FreePool();
LABEL_38:
  UserSessionSwitchLeaveCrit(v24, v21);
  return v23;
}
