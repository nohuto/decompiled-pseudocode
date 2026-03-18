/*
 * XREFs of NtLoadDriver @ 0x140493C20
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140079E5C (PsIsCurrentThreadInServerSilo.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     sub_1400D08C8 @ 0x1400D08C8 (sub_1400D08C8.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     IopLoadUnloadDriver @ 0x140494328 (IopLoadUnloadDriver.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtLoadDriver(PUNICODE_STRING DriverServiceName)
{
  ULONG64 v1; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  char PreviousMode; // di
  int v4; // eax
  unsigned __int64 v5; // rcx
  ULONG64 v6; // rdx
  PVOID v8; // rbx
  UNICODE_STRING Src; // [rsp+38h] [rbp-70h] BYREF
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+50h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-38h] BYREF
  __int64 v12; // [rsp+88h] [rbp-20h]
  void **p_Src; // [rsp+90h] [rbp-18h]
  NTSTATUS v14; // [rsp+98h] [rbp-10h]

  v1 = (ULONG64)DriverServiceName;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, CurrentThread->PreviousMode) )
      return -1073741727;
    if ( v1 >= MmUserProbeAddress )
      v1 = MmUserProbeAddress;
    v4 = *(_DWORD *)v1;
    *(_DWORD *)&Src.Length = v4;
    v5 = *(_QWORD *)(v1 + 8);
    Src.Buffer = (wchar_t *)v5;
    if ( !(_WORD)v4 )
      return -1073741811;
    if ( (v5 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = v5 + (unsigned __int16)v4;
    if ( v6 > MmUserProbeAddress || v6 < v5 )
      *(_BYTE *)MmUserProbeAddress = 0;
    v8 = sub_1400D08C8(v5, Src.Length);
    memmove(v8, Src.Buffer, Src.Length);
    Src.Buffer = (wchar_t *)v8;
  }
  else
  {
    Src = *DriverServiceName;
    v8 = 0LL;
  }
  if ( PreviousMode && PsIsCurrentThreadInServerSilo() )
  {
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
    return 0;
  }
  else
  {
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
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
    return v14;
  }
}
