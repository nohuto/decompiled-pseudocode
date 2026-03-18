/*
 * XREFs of NtUserInjectMouseInput @ 0x1C00BAAC0
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
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C00D6AF8 (RIMIDEInjectMouseFromMouseInputStruct.c)
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
  __int64 CurrentProcessWin32Process; // rsi
  __int64 v13; // rcx
  __int64 v14; // rcx
  size_t v15; // rbx
  void *v16; // rax
  void *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // ebx
  __int64 v22; // [rsp+20h] [rbp-48h]

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
    v14 = 87LL;
    goto LABEL_35;
  }
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(0LL) )
  {
    v14 = 5LL;
LABEL_35:
    v20 = 0;
    UserSetLastError(v14);
    goto LABEL_36;
  }
  v15 = 32 * v2;
  if ( 32 * v2 )
  {
    if ( (((-(__int64)(PsGetCurrentProcessWow64Process(v13) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & Src) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v15 + Src > W32UserProbeAddress || v15 + Src < Src )
      *(_BYTE *)W32UserProbeAddress = 0;
  }
  v16 = (void *)Win32AllocPoolWithQuota();
  v17 = v16;
  if ( !v16 )
    ExRaiseStatus(-1073741801);
  memmove(v16, (const void *)Src, v15);
  if ( *(_QWORD *)(CurrentProcessWin32Process + 848) == -1LL
    && (v19 = PsGetCurrentProcessWin32Process(v18), (int)RIMIDECreatePseudoMouseOrKeyboardDevice(0LL, v19 + 848) < 0) )
  {
    v20 = 0;
    UserSetLastError(1359LL);
  }
  else
  {
    v20 = RIMIDEInjectMouseFromMouseInputStruct(*(_QWORD *)(CurrentProcessWin32Process + 848), v17, (unsigned int)v2);
  }
  if ( v17 )
    Win32FreePool();
LABEL_36:
  UserSessionSwitchLeaveCrit();
  return v20;
}
