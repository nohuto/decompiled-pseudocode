/*
 * XREFs of ExpDebuggerWorker @ 0x14072A01C
 * Callers:
 *     <none>
 * Callees:
 *     MmGetDefaultPagePriority @ 0x140043E3C (MmGetDefaultPagePriority.c)
 *     MmIsSessionAddress @ 0x14004ED20 (MmIsSessionAddress.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     DbgPrintEx @ 0x140131EAC (DbgPrintEx.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x14016D590 (MmDbgMarkPfnModifiedWorker.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     DbgBreakPointWithStatus @ 0x14018B3C0 (DbgBreakPointWithStatus.c)
 *     MmPrefetchVirtualMemory @ 0x1404FB458 (MmPrefetchVirtualMemory.c)
 *     PsGetNextProcess @ 0x14050D584 (PsGetNextProcess.c)
 *     PsTerminateProcess @ 0x1405579A8 (PsTerminateProcess.c)
 *     PsQuitNextProcess @ 0x1406C65F8 (PsQuitNextProcess.c)
 *     EtwWmitraceWorker @ 0x1406E7908 (EtwWmitraceWorker.c)
 */

void ExpDebuggerWorker()
{
  _KPROCESS *v0; // rbp
  __int64 v1; // r14
  char v2; // r15
  char DefaultPagePriority; // al
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  void *v8; // rdi
  unsigned __int64 v9; // rsi
  _QWORD *v10; // rcx
  unsigned __int64 NextProcess; // rax
  __int64 v12; // r9
  __int64 v13; // rcx
  NTSTATUS v14; // eax
  unsigned __int64 v15; // [rsp+20h] [rbp-68h] BYREF
  __int64 v16; // [rsp+28h] [rbp-60h]
  _BYTE v17[48]; // [rsp+30h] [rbp-58h] BYREF

  v0 = (_KPROCESS *)ExpDebuggerProcessAttach;
  v1 = ExpDebuggerProcessKill;
  v2 = EtwWmitraceWork;
  DefaultPagePriority = MmGetDefaultPagePriority();
  v15 = ExpDebuggerPageIn;
  v16 = 1LL;
  ExpDebuggerProcessKill = 0LL;
  v4 = DefaultPagePriority & 7 | 0xB8;
  ExpDebuggerProcessAttach = 0LL;
  ExpDebuggerPageIn = 0LL;
  _InterlockedExchange(&ExpDebuggerWork, 0);
  MmDbgMarkPfnModifiedWorker();
  v8 = 0LL;
  if ( v0 || v1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      NextProcess = PsGetNextProcess(v10, v5, v6, v7);
      v8 = (void *)NextProcess;
      if ( !NextProcess )
        break;
      if ( (_KPROCESS *)NextProcess == v0 )
      {
        KiStackAttachProcess(v0, 0, (__int64)v17);
        if ( v8 )
          goto LABEL_3;
        break;
      }
      v10 = (_QWORD *)NextProcess;
      if ( NextProcess == v1 )
      {
        PsTerminateProcess(NextProcess, 0x40010004u);
        goto LABEL_30;
      }
    }
    v12 = v1;
    if ( v0 )
      v12 = (__int64)v0;
    DbgPrintEx(0, 0, "EX debug work: Unable to find process %p\n", v12, v15, v16);
  }
LABEL_3:
  v9 = v15;
  if ( v15 )
  {
    if ( MmIsSessionAddress(v15) )
      v13 = -3LL;
    else
      v13 = -(__int64)(v15 < (unsigned __int64)MmSystemRangeStart);
    v14 = MmPrefetchVirtualMemory((char *)v13, 1uLL, (__int64)&v15, v4);
    if ( v14 < 0 )
      DbgPrintEx(0, 0, "EX page in: MmPrefetchVirtualMemory failed, 0x%08x\n", v14);
    v9 = v15;
  }
  if ( v2 )
  {
    EtwWmitraceWorker();
    v9 = v15;
  }
  if ( v0 || v1 || v9 || v2 )
    DbgBreakPointWithStatus(7u);
  if ( v8 )
  {
    KiUnstackDetachProcess((struct _KTHREAD *)v17, 0);
LABEL_30:
    PsQuitNextProcess(v8);
  }
}
