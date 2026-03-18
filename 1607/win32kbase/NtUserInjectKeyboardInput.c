/*
 * XREFs of NtUserInjectKeyboardInput @ 0x1C00BA7F0
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
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C00D5DD8 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C00D6834 (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
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
  __int64 CurrentProcessWin32Process; // rsi
  __int64 v13; // rcx
  __int64 v14; // rbx
  void *v15; // rax
  void *v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v22; // [rsp+20h] [rbp-38h]

  v2 = a2;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(Src);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v5 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v8 = PsGetCurrentThreadWin32Thread(v6);
  if ( v8 )
  {
    v9 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v8 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0 )
    {
      LOBYTE(v7) = byte_1C0118B28 - 1;
      v11 = (unsigned __int8)(byte_1C0118B28 - 1) > 2u
         && (qword_1C0118B10 & 0x200000010000000LL) != 0
         && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18;
      if ( v11 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        Template_xqx(v7, &AcquiredExclusiveUserCritEvent, v10.QuadPart, v9.QuadPart, 0, gullUserCritAcquireToken);
    }
    if ( v9.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      LODWORD(v22) = 1000 * v9.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v10.QuadPart,
        0LL,
        v22,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v8 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
  if ( (unsigned int)(v2 - 1) > 9 )
  {
    v13 = 87LL;
    goto LABEL_37;
  }
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(0LL) )
  {
    v13 = 5LL;
LABEL_37:
    v20 = 0;
    UserSetLastError(v13);
    goto LABEL_38;
  }
  v14 = 24 * v2;
  if ( 24 * v2 )
  {
    if ( (((-(__int64)(PsGetCurrentProcessWow64Process(0xAAAAAAAAAAAAAAALL) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & Src) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v14 + Src > W32UserProbeAddress || v14 + Src < Src )
      *(_BYTE *)W32UserProbeAddress = 0;
  }
  v15 = (void *)Win32AllocPoolWithQuota();
  v16 = v15;
  if ( !v15 )
    ExRaiseStatus(-1073741801);
  memmove(v15, (const void *)Src, 24 * v2);
  if ( *(_QWORD *)(CurrentProcessWin32Process + 856) == -1LL )
  {
    v18 = PsGetCurrentProcessWin32Process(v17);
    if ( (int)RIMIDECreatePseudoMouseOrKeyboardDevice(1LL, v18 + 856) < 0 )
    {
      v19 = 1359LL;
LABEL_31:
      v20 = 0;
      UserSetLastError(v19);
      goto LABEL_34;
    }
  }
  v20 = RIMIDEInjectKeyboardFromKeybdInputStruct(*(_QWORD *)(CurrentProcessWin32Process + 856), v16, (unsigned int)v2);
  if ( !v20 )
  {
    v19 = 87LL;
    goto LABEL_31;
  }
LABEL_34:
  if ( v16 )
    Win32FreePool();
LABEL_38:
  UserSessionSwitchLeaveCrit();
  return v20;
}
