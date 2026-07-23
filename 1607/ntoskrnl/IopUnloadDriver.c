/*
 * XREFs of IopUnloadDriver @ 0x140545368
 * Callers:
 *     PnpUnloadAttachedDriver @ 0x1405452B8 (PnpUnloadAttachedDriver.c)
 *     NtUnloadDriver @ 0x1406295C8 (NtUnloadDriver.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x1407BC3E0 (PipUnloadEarlyLaunchDrivers.c)
 * Callees:
 *     PnpDiagnosticTraceObject @ 0x14000805C (PnpDiagnosticTraceObject.c)
 *     RtlImageNtHeader @ 0x140013DB8 (RtlImageNtHeader.c)
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     DbgPrint @ 0x140084CC8 (DbgPrint.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x1400AE584 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     PnpDiagnosticTraceDriverFullInfo @ 0x1400AEBF0 (PnpDiagnosticTraceDriverFullInfo.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400C1B90 (PsIsCurrentThreadInServerSilo.c)
 *     IopCleanupNotifications @ 0x140130814 (IopCleanupNotifications.c)
 *     IopCheckUnloadDriver @ 0x140130910 (IopCheckUnloadDriver.c)
 *     ZwUnloadDriver @ 0x14015D830 (ZwUnloadDriver.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByName @ 0x140463564 (ObOpenObjectByName.c)
 *     IopOpenRegistryKey @ 0x1404C90F0 (IopOpenRegistryKey.c)
 *     ObMakeTemporaryObject @ 0x1404CD494 (ObMakeTemporaryObject.c)
 *     PnpIsLegacyDriver @ 0x1404D17C4 (PnpIsLegacyDriver.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 *     IopGetDriverNameFromKeyNode @ 0x140517688 (IopGetDriverNameFromKeyNode.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall IopUnloadDriver(unsigned __int16 *a1, char a2)
{
  unsigned __int64 v3; // rsi
  unsigned __int16 MinorImageVersion; // r14
  KPROCESSOR_MODE PreviousMode; // dl
  int DriverNameFromKeyNode; // edi
  void (__fastcall **v7)(PVOID); // rbx
  void (__fastcall **v8)(PVOID); // r12
  int v10; // eax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  PVOID PoolWithQuota_1; // rdi
  unsigned int v14; // ebx
  void (__fastcall **v15)(PVOID); // rcx
  ULONG Object; // [rsp+20h] [rbp-108h]
  UNICODE_STRING DriverServiceName; // [rsp+40h] [rbp-E8h] BYREF
  UNICODE_STRING Destination; // [rsp+50h] [rbp-D8h] BYREF
  PVOID v19; // [rsp+60h] [rbp-C8h]
  HANDLE Handle; // [rsp+68h] [rbp-C0h] BYREF
  HANDLE v21; // [rsp+70h] [rbp-B8h] BYREF
  int v22; // [rsp+78h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+80h] [rbp-A8h]
  UNICODE_STRING *p_Destination; // [rsp+88h] [rbp-A0h]
  int v25; // [rsp+90h] [rbp-98h]
  __int128 v26; // [rsp+98h] [rbp-90h]
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+B0h] [rbp-78h] BYREF
  struct _KEVENT Event; // [rsp+D0h] [rbp-58h] BYREF
  PVOID v29; // [rsp+E8h] [rbp-40h]
  char v30; // [rsp+140h] [rbp+18h] BYREF
  PVOID v31; // [rsp+148h] [rbp+20h] BYREF

  v3 = (unsigned __int64)a1;
  v19 = 0LL;
  LOBYTE(MinorImageVersion) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode || a2 )
  {
    PnpDiagnosticTraceObject(&KMPnPEvt_DriverUnload_Start, a1);
    Destination.Buffer = 0LL;
    *(_DWORD *)&Destination.Length = 0;
    if ( PsIsCurrentThreadInServerSilo() )
    {
      DbgPrint("Server Silo attempting to unload driver %wZ\n", v3);
      return 3221225569LL;
    }
    LOBYTE(Object) = 0;
    DriverNameFromKeyNode = IopOpenRegistryKey(&Handle, 0LL, (UNICODE_STRING *)v3, 0x20019u, Object);
    if ( DriverNameFromKeyNode >= 0 )
    {
      DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(Handle, &Destination);
      ObCloseHandle(Handle, 0);
      if ( DriverNameFromKeyNode >= 0 )
      {
        v22 = 48;
        v23 = 0LL;
        v25 = 576;
        p_Destination = &Destination;
        v26 = 0LL;
        DriverNameFromKeyNode = ObOpenObjectByName((__int64)&v22, (__int64)IoDriverObjectType, 0, 0LL, 1u, 0LL, &v21);
        if ( DriverNameFromKeyNode >= 0 )
        {
          DriverNameFromKeyNode = ObReferenceObjectByHandle(v21, 0, IoDriverObjectType, 0, &v31, 0LL);
          ObCloseHandle(v21, 0);
          if ( DriverNameFromKeyNode >= 0 )
          {
            v7 = (void (__fastcall **)(PVOID))v31;
            MinorImageVersion = RtlImageNtHeader(*((PVOID *)v31 + 3))->OptionalHeader.MinorImageVersion;
            v8 = v7 + 13;
            if ( v7[13] && v7[5] )
            {
              if ( a2 || (unsigned int)PnpIsLegacyDriver((__int64)v7) )
              {
                DriverNameFromKeyNode = IopCheckUnloadDriver(v7, &v30);
                if ( (int)(DriverNameFromKeyNode + 0x80000000) >= 0 && DriverNameFromKeyNode != -1073741808 )
                {
                  if ( v30 )
                  {
                    if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
                    {
                      v7 = (void (__fastcall **)(PVOID))v31;
                      (*v8)(v31);
                    }
                    else
                    {
                      KeInitializeEvent(&Event, NotificationEvent, 0);
                      v7 = (void (__fastcall **)(PVOID))v31;
                      v29 = v31;
                      WorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopLoadUnloadDriver;
                      WorkItem.Parameter = &WorkItem;
                      WorkItem.List.Flink = 0LL;
                      ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
                      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                    }
                    IopCleanupNotifications(v7, v7);
                    ObMakeTemporaryObject(v7);
                    ObfDereferenceObject(v7);
                  }
                  ObfDereferenceObject(v7);
                  DriverNameFromKeyNode = 0;
                }
                goto LABEL_17;
              }
            }
            else
            {
              v15 = v7;
            }
            ObfDereferenceObject(v15);
            DriverNameFromKeyNode = -1073741808;
          }
        }
      }
    }
LABEL_17:
    PnpDiagnosticTraceDriverFullInfo(
      &KMPnPEvt_DriverUnload_Stop,
      (unsigned __int16 *)v3,
      DriverNameFromKeyNode,
      (__int64)&Destination,
      MinorImageVersion);
    if ( Destination.Buffer )
      ExFreePoolWithTag(Destination.Buffer, 0);
    return (unsigned int)DriverNameFromKeyNode;
  }
  if ( !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
    return 3221225569LL;
  if ( v3 >= 0x7FFFFFFF0000LL )
    v3 = 0x7FFFFFFF0000LL;
  v10 = *(_DWORD *)v3;
  *(_DWORD *)&DriverServiceName.Length = v10;
  v11 = *(_QWORD *)(v3 + 8);
  DriverServiceName.Buffer = (wchar_t *)v11;
  if ( !(_WORD)v10 )
    return 3221225485LL;
  if ( (v11 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v12 = v11 + (unsigned __int16)v10;
  if ( v12 > 0x7FFFFFFF0000LL || v12 < v11 )
    MEMORY[0x7FFFFFFF0000] = 0;
  PoolWithQuota_1 = IopVerifierExAllocatePoolWithQuota_1(v11, DriverServiceName.Length);
  v19 = PoolWithQuota_1;
  memmove(PoolWithQuota_1, DriverServiceName.Buffer, DriverServiceName.Length);
  DriverServiceName.Buffer = (wchar_t *)PoolWithQuota_1;
  v14 = ZwUnloadDriver(&DriverServiceName);
  ExFreePoolWithTag(PoolWithQuota_1, 0);
  return v14;
}
