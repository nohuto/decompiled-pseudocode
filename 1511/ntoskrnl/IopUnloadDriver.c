/*
 * XREFs of IopUnloadDriver @ 0x140493DE4
 * Callers:
 *     PnpUnloadAttachedDriver @ 0x140493B70 (PnpUnloadAttachedDriver.c)
 *     NtUnloadDriver @ 0x14051B0F0 (NtUnloadDriver.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x14074F150 (PipUnloadEarlyLaunchDrivers.c)
 * Callees:
 *     PnpDiagnosticTraceObject @ 0x14001A954 (PnpDiagnosticTraceObject.c)
 *     RtlImageNtHeader @ 0x140037CD8 (RtlImageNtHeader.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140079E5C (PsIsCurrentThreadInServerSilo.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     sub_1400D08C8 @ 0x1400D08C8 (sub_1400D08C8.c)
 *     PnpDiagnosticTraceDriverFullInfo @ 0x1400D08F0 (PnpDiagnosticTraceDriverFullInfo.c)
 *     IopCleanupNotifications @ 0x1400D0F40 (IopCleanupNotifications.c)
 *     IopCheckUnloadDriver @ 0x1400D103C (IopCheckUnloadDriver.c)
 *     DbgPrint @ 0x1400E696C (DbgPrint.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     ZwUnloadDriver @ 0x140153BA0 (ZwUnloadDriver.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IopGetDriverNameFromKeyNode @ 0x1403BC9F4 (IopGetDriverNameFromKeyNode.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByName @ 0x140422190 (ObOpenObjectByName.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     PnpIsLegacyDriver @ 0x140493A14 (PnpIsLegacyDriver.c)
 *     ObMakeTemporaryObject @ 0x140494274 (ObMakeTemporaryObject.c)
 *     IopOpenRegistryKey @ 0x14049446C (IopOpenRegistryKey.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall IopUnloadDriver(unsigned __int16 *a1, char a2)
{
  ULONG64 v3; // rsi
  unsigned __int16 MinorImageVersion; // r14
  KPROCESSOR_MODE PreviousMode; // dl
  int DriverNameFromKeyNode; // edi
  void (__fastcall **v7)(PVOID); // rbx
  void (__fastcall **v8)(PVOID); // r12
  void (__fastcall **v10)(PVOID); // rcx
  int v11; // eax
  unsigned __int64 v12; // rcx
  ULONG64 v13; // rdx
  PVOID v14; // rdi
  unsigned int v15; // ebx
  UNICODE_STRING DriverServiceName; // [rsp+40h] [rbp-E8h] BYREF
  UNICODE_STRING Destination; // [rsp+50h] [rbp-D8h] BYREF
  PVOID v18; // [rsp+60h] [rbp-C8h]
  HANDLE v19; // [rsp+68h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-B8h] BYREF
  int v21; // [rsp+78h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+80h] [rbp-A8h]
  UNICODE_STRING *p_Destination; // [rsp+88h] [rbp-A0h]
  int v24; // [rsp+90h] [rbp-98h]
  __int128 v25; // [rsp+98h] [rbp-90h]
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+B0h] [rbp-78h] BYREF
  struct _KEVENT Event; // [rsp+D0h] [rbp-58h] BYREF
  PVOID v28; // [rsp+E8h] [rbp-40h]
  char v29; // [rsp+140h] [rbp+18h] BYREF
  PVOID Object; // [rsp+148h] [rbp+20h] BYREF

  v3 = (ULONG64)a1;
  v18 = 0LL;
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
    DriverNameFromKeyNode = IopOpenRegistryKey(&Handle, 0LL, v3, 131097LL, 0);
    if ( DriverNameFromKeyNode >= 0 )
    {
      DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(Handle, &Destination);
      ObCloseHandle(Handle, 0);
      if ( DriverNameFromKeyNode >= 0 )
      {
        v21 = 48;
        v22 = 0LL;
        v24 = 576;
        p_Destination = &Destination;
        v25 = 0LL;
        DriverNameFromKeyNode = ObOpenObjectByName((__int64)&v21, IoDriverObjectType, 0, 0LL, 1u, 0LL, &v19);
        if ( DriverNameFromKeyNode >= 0 )
        {
          DriverNameFromKeyNode = ObReferenceObjectByHandle(v19, 0, IoDriverObjectType, 0, &Object, 0LL);
          ObCloseHandle(v19, 0);
          if ( DriverNameFromKeyNode >= 0 )
          {
            v7 = (void (__fastcall **)(PVOID))Object;
            MinorImageVersion = RtlImageNtHeader(*((PVOID *)Object + 3))->OptionalHeader.MinorImageVersion;
            v8 = v7 + 13;
            if ( v7[13] && v7[5] )
            {
              if ( a2 || (unsigned int)PnpIsLegacyDriver((__int64)v7) )
              {
                DriverNameFromKeyNode = IopCheckUnloadDriver(v7, &v29);
                if ( (int)(DriverNameFromKeyNode + 0x80000000) >= 0 && DriverNameFromKeyNode != -1073741808 )
                {
                  if ( v29 )
                  {
                    if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
                    {
                      v7 = (void (__fastcall **)(PVOID))Object;
                      (*v8)(Object);
                    }
                    else
                    {
                      KeInitializeEvent(&Event, NotificationEvent, 0);
                      v7 = (void (__fastcall **)(PVOID))Object;
                      v28 = Object;
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
              v10 = v7;
            }
            ObfDereferenceObject(v10);
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
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  v11 = *(_DWORD *)v3;
  *(_DWORD *)&DriverServiceName.Length = v11;
  v12 = *(_QWORD *)(v3 + 8);
  DriverServiceName.Buffer = (wchar_t *)v12;
  if ( !(_WORD)v11 )
    return 3221225485LL;
  if ( (v12 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v13 = v12 + (unsigned __int16)v11;
  if ( v13 > MmUserProbeAddress || v13 < v12 )
    *(_BYTE *)MmUserProbeAddress = 0;
  v14 = sub_1400D08C8(v12, DriverServiceName.Length);
  v18 = v14;
  memmove(v14, DriverServiceName.Buffer, DriverServiceName.Length);
  DriverServiceName.Buffer = (wchar_t *)v14;
  v15 = ZwUnloadDriver(&DriverServiceName);
  ExFreePoolWithTag(v14, 0);
  return v15;
}
