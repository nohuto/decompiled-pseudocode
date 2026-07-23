/*
 * XREFs of ExpDebuggerWorker @ 0x1406F3E60
 * Callers:
 *     <none>
 * Callees:
 *     MmIsSessionAddress @ 0x1400137C0 (MmIsSessionAddress.c)
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     MmGetDefaultPagePriority @ 0x1400D1BB8 (MmGetDefaultPagePriority.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x140149174 (MmDbgMarkPfnModifiedWorker.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     DbgBreakPointWithStatus @ 0x1401672F0 (DbgBreakPointWithStatus.c)
 *     PsTerminateProcess @ 0x1404CE4F8 (PsTerminateProcess.c)
 *     MmPrefetchVirtualMemory @ 0x1404D760C (MmPrefetchVirtualMemory.c)
 *     PsGetNextProcess @ 0x1404EBF8C (PsGetNextProcess.c)
 *     PsQuitNextProcess @ 0x14054CE9C (PsQuitNextProcess.c)
 *     EtwWmitraceWorker @ 0x1406A5180 (EtwWmitraceWorker.c)
 */

void ExpDebuggerWorker()
{
  _KPROCESS *v0; // rbp
  __int64 v1; // r14
  char v2; // r15
  char DefaultPagePriority; // al
  int v4; // ebx
  void *v5; // rdi
  unsigned __int64 v6; // rsi
  _QWORD *v7; // rcx
  ULONG_PTR NextProcess; // rax
  __int64 v9; // r9
  __int64 v10; // rcx
  NTSTATUS v11; // eax
  unsigned __int64 v12; // [rsp+20h] [rbp-68h] BYREF
  __int64 v13; // [rsp+28h] [rbp-60h]
  _BYTE v14[48]; // [rsp+30h] [rbp-58h] BYREF

  v0 = (_KPROCESS *)ExpDebuggerProcessAttach;
  v1 = ExpDebuggerProcessKill;
  v2 = EtwWmitraceWork;
  DefaultPagePriority = MmGetDefaultPagePriority();
  v12 = ExpDebuggerPageIn;
  v13 = 1LL;
  ExpDebuggerProcessKill = 0LL;
  v4 = DefaultPagePriority & 7 | 0xB8;
  ExpDebuggerProcessAttach = 0LL;
  ExpDebuggerPageIn = 0LL;
  _InterlockedExchange(&ExpDebuggerWork, 0);
  MmDbgMarkPfnModifiedWorker();
  v5 = 0LL;
  if ( v0 || v1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      NextProcess = PsGetNextProcess(v7);
      v5 = (void *)NextProcess;
      if ( !NextProcess )
        break;
      if ( (_KPROCESS *)NextProcess == v0 )
      {
        KiStackAttachProcess(v0, 0, (__int64)v14);
        if ( v5 )
          goto LABEL_3;
        break;
      }
      v7 = (_QWORD *)NextProcess;
      if ( NextProcess == v1 )
      {
        PsTerminateProcess(NextProcess);
        goto LABEL_30;
      }
    }
    v9 = v1;
    if ( v0 )
      v9 = (__int64)v0;
    DbgPrintEx(0, 0, "EX debug work: Unable to find process %p\n", v9, v12, v13);
  }
LABEL_3:
  v6 = v12;
  if ( v12 )
  {
    if ( MmIsSessionAddress(v12) )
      v10 = -3LL;
    else
      v10 = -(__int64)(v12 < 0xFFFF800000000000uLL);
    v11 = MmPrefetchVirtualMemory((char *)v10, 1uLL, (__int64)&v12, v4);
    if ( v11 < 0 )
      DbgPrintEx(0, 0, "EX page in: MmPrefetchVirtualMemory failed, 0x%08x\n", v11);
    v6 = v12;
  }
  if ( v2 )
  {
    EtwWmitraceWorker();
    v6 = v12;
  }
  if ( v0 || v1 || v6 || v2 )
    DbgBreakPointWithStatus(7u);
  if ( v5 )
  {
    KiUnstackDetachProcess((struct _KTHREAD *)v14, 0);
LABEL_30:
    PsQuitNextProcess(v5);
  }
}
