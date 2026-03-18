/*
 * XREFs of PoShutdownBugCheck @ 0x1406B5E1C
 * Callers:
 *     ExpTimeRefreshWork @ 0x1403F7188 (ExpTimeRefreshWork.c)
 *     ExpSystemErrorHandler2 @ 0x1404046E4 (ExpSystemErrorHandler2.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x1400CD4B0 (PsGetCurrentThreadProcessId.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     PsGetCurrentThreadId @ 0x140111580 (PsGetCurrentThreadId.c)
 *     IoConfigureCrashDump @ 0x14016BF80 (IoConfigureCrashDump.c)
 *     ZwInitiatePowerAction @ 0x140180E10 (ZwInitiatePowerAction.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x140233810 (PopInternalAddToDumpFile.c)
 */

void __fastcall __noreturn PoShutdownBugCheck(
        char a1,
        ULONG a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a6)
{
  __int64 CurrentThreadProcessId; // rax
  ULONG_PTR v11; // rdi
  ULONG_PTR BugCheckParameter4; // rbx
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-50h] BYREF
  _KPROCESS *Process; // [rsp+38h] [rbp-48h]
  HANDLE CurrentThreadId; // [rsp+40h] [rbp-40h]
  __int64 v16; // [rsp+48h] [rbp-38h]
  ULONG v17; // [rsp+50h] [rbp-30h]
  ULONG_PTR v18; // [rsp+58h] [rbp-28h]
  ULONG_PTR v19; // [rsp+60h] [rbp-20h]
  ULONG_PTR v20; // [rsp+68h] [rbp-18h]
  ULONG_PTR v21; // [rsp+70h] [rbp-10h]
  LARGE_INTEGER Interval; // [rsp+B0h] [rbp+30h] BYREF

  if ( PopCriticalShutdownInProgress )
  {
    Interval.QuadPart = -300000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  PopInternalAddToDumpFile(0LL, 0, 0LL);
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !a1 )
  {
    Process = 0LL;
    IoConfigureCrashDump(0, 0);
  }
  CurrentThread = KeGetCurrentThread();
  CurrentThreadId = PsGetCurrentThreadId();
  CurrentThreadProcessId = PsGetCurrentThreadProcessId();
  v11 = BugCheckParameter3;
  BugCheckParameter4 = a6;
  v16 = CurrentThreadProcessId;
  v17 = a2;
  v18 = a3;
  v19 = a4;
  v20 = BugCheckParameter3;
  v21 = a6;
  qword_14032E670 = (__int64)&CurrentThread;
  ZwInitiatePowerAction(PowerActionShutdown, PowerSystemSleeping3, 0xC0000004, 0);
  KeBugCheckEx(a2, a3, a4, v11, BugCheckParameter4);
}
