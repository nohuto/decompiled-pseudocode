/*
 * XREFs of NtLoadDriver @ 0x1404C8DFC
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x1400AE584 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400C1B90 (PsIsCurrentThreadInServerSilo.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     IopLoadUnloadDriver @ 0x1404C8FAC (IopLoadUnloadDriver.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtLoadDriver(PUNICODE_STRING DriverServiceName)
{
  unsigned __int64 v1; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  KPROCESSOR_MODE PreviousMode; // dl
  int v4; // eax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  PVOID PoolWithQuota_1; // rbx
  UNICODE_STRING Src; // [rsp+38h] [rbp-70h] BYREF
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+50h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-38h] BYREF
  __int64 v12; // [rsp+88h] [rbp-20h]
  void **p_Src; // [rsp+90h] [rbp-18h]
  NTSTATUS v14; // [rsp+98h] [rbp-10h]

  v1 = (unsigned __int64)DriverServiceName;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
      return -1073741727;
    if ( PsIsCurrentThreadInServerSilo() )
      return 0;
    if ( v1 >= 0x7FFFFFFF0000LL )
      v1 = 0x7FFFFFFF0000LL;
    v4 = *(_DWORD *)v1;
    *(_DWORD *)&Src.Length = v4;
    v5 = *(_QWORD *)(v1 + 8);
    Src.Buffer = (wchar_t *)v5;
    if ( !(_WORD)v4 )
      return -1073741811;
    if ( (v5 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = v5 + (unsigned __int16)v4;
    if ( v6 > 0x7FFFFFFF0000LL || v6 < v5 )
      MEMORY[0x7FFFFFFF0000] = 0;
    PoolWithQuota_1 = IopVerifierExAllocatePoolWithQuota_1(v5, Src.Length);
    memmove(PoolWithQuota_1, Src.Buffer, Src.Length);
    Src.Buffer = (wchar_t *)PoolWithQuota_1;
  }
  else
  {
    Src = *DriverServiceName;
    PoolWithQuota_1 = 0LL;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v12 = 0LL;
  p_Src = (void **)&Src;
  if ( CurrentThread->ApcState.Process == PsInitialSystemProcess )
  {
    IopLoadUnloadDriver(&WorkItem);
  }
  else
  {
    WorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopLoadUnloadDriver;
    WorkItem.Parameter = &WorkItem;
    WorkItem.List.Flink = 0LL;
    ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
    KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
  }
  if ( PoolWithQuota_1 )
    ExFreePoolWithTag(PoolWithQuota_1, 0);
  return v14;
}
