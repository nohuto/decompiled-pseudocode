/*
 * XREFs of ?xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4PROCESS_INIT_HINT@@@Z @ 0x1401A4FFC
 * Callers:
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1401A4808 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     ?xxxUserNotifyProcessCreate@@YAJKW4_NotifyProcessCreateHints@@@Z @ 0x1401A5930 (-xxxUserNotifyProcessCreate@@YAJKW4_NotifyProcessCreateHints@@@Z.c)
 *     ?xxxUserNotifyProcessCreateEx@@YAJKW4_NotifyProcessCreateHints@@@Z @ 0x1402A68E4 (-xxxUserNotifyProcessCreateEx@@YAJKW4_NotifyProcessCreateHints@@@Z.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??1CWinEventNoopDeferral@@QEAA@XZ @ 0x1401A6054 (--1CWinEventNoopDeferral@@QEAA@XZ.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1401B68F4 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     zzzCalcStartCursorHide @ 0x14028AAB0 (zzzCalcStartCursorHide.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall xxxSetProcessInitState(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  __int64 v9; // rcx
  __int64 ProcessWin32Process; // rdi
  int W32ProcessImpl; // ebx
  int v13; // eax
  struct _KEVENT *v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  struct MOVESIZEDATA *v21; // rcx
  char v22; // bl
  bool v23; // r14
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  __int64 v27; // rdx
  __int64 v28; // rcx
  _BYTE v29[8]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v30; // [rsp+58h] [rbp-30h]
  int v31; // [rsp+A0h] [rbp+18h] BYREF

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v29);
  if ( *(_DWORD *)(W32GetUserSessionState(v5, v4) + 70592) && !AtomicExecutionCheck::GetCount() )
  {
    v31 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1000LL);
  }
  UserSessionState = W32GetUserSessionState(v7, v6);
  ++*(_DWORD *)(UserSessionState + 70592);
  ProcessWin32Process = PsGetProcessWin32Process(a1);
  if ( ProcessWin32Process )
  {
LABEL_10:
    if ( a2 )
    {
      v15 = *(_QWORD *)(W32GetUserGdiSessionState(v9) + 40);
      if ( PsGetCurrentProcess(v16) != v15 )
      {
        v31 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 170LL);
      }
      if ( (*(_DWORD *)(ProcessWin32Process + 12) & 0x20) != 0 )
      {
        v31 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 171LL);
      }
      *(_DWORD *)(ProcessWin32Process + 12) |= 0x20u;
      v19 = W32GetUserSessionState(v18, v17);
      *(_DWORD *)(v19 + 66792) |= 0x8000000u;
      v21 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v22 = 0;
      }
      v23 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v22 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v24 = W32GetUserSessionState(WPP_GLOBAL_Control, v20);
        LOBYTE(v25) = v23;
        LOBYTE(v26) = v22;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v26,
          v25,
          *(_QWORD *)(v24 + 69152),
          4,
          2,
          10,
          (__int64)&WPP_835b3a91c6b03c100663678aa6bd529e_Traceguids,
          ProcessWin32Process);
      }
      if ( a1 == *(_QWORD *)(W32GetUserGdiSessionState(v21) + 40) )
      {
        v31 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 183LL);
      }
      if ( a2 == 2 )
      {
        *(_DWORD *)(ProcessWin32Process + 12) |= 2u;
        v27 = 0LL;
        v28 = 0LL;
      }
      else
      {
        if ( a2 != 1 )
        {
          v31 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 194LL);
        }
        v27 = 2000LL;
        v28 = ProcessWin32Process;
      }
      zzzCalcStartCursorHide(v28, v27);
      goto LABEL_40;
    }
    if ( (*(_DWORD *)(ProcessWin32Process + 808) & 0x10000000) != 0 )
    {
      v31 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 153LL);
    }
    v13 = *(_DWORD *)(ProcessWin32Process + 12);
    if ( (v13 & 4) != 0 )
    {
      if ( (v13 & 0x20) == 0 )
      {
        v31 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 159LL);
      }
      *(_DWORD *)(ProcessWin32Process + 12) &= ~4u;
      zzzCalcStartCursorHide(0LL, 0LL);
    }
    *(_DWORD *)(ProcessWin32Process + 12) |= 1u;
    v14 = *(struct _KEVENT **)(ProcessWin32Process + 16);
    if ( v14 )
    {
      if ( v14 == (struct _KEVENT *)-1LL )
      {
LABEL_40:
        CWinEventNoopDeferral::~CWinEventNoopDeferral((CWinEventNoopDeferral *)&v31);
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v29);
        return 0LL;
      }
      KeSetEvent(v14, 1, 0);
      ObfDereferenceObject(*(PVOID *)(ProcessWin32Process + 16));
    }
    *(_QWORD *)(ProcessWin32Process + 16) = -1LL;
    goto LABEL_40;
  }
  W32ProcessImpl = AllocateW32ProcessImpl(a1);
  if ( W32ProcessImpl >= 0 )
  {
    ProcessWin32Process = PsGetProcessWin32Process(a1);
    goto LABEL_10;
  }
  CWinEventNoopDeferral::~CWinEventNoopDeferral((CWinEventNoopDeferral *)&v31);
  if ( v29[0] )
    --*(_DWORD *)(v30 + 28);
  return (unsigned int)W32ProcessImpl;
}
