/*
 * XREFs of PopCoolingExtensionPnpNotification @ 0x140633430
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     PopAcquireRwLockExclusive @ 0x140098DC8 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x14009D768 (PopReleaseRwLock.c)
 *     PopPropogateCoolingChange @ 0x1401E9310 (PopPropogateCoolingChange.c)
 *     PopAcquireCoolingInterface @ 0x14054C598 (PopAcquireCoolingInterface.c)
 *     PopDiagTraceCoolingExtension @ 0x14054E730 (PopDiagTraceCoolingExtension.c)
 *     PopOrphanCoolingExtension @ 0x140633730 (PopOrphanCoolingExtension.c)
 */

__int64 __fastcall PopCoolingExtensionPnpNotification(char *NotificationStructure, char *Context)
{
  __int64 v3; // rax
  signed __int64 *v4; // rsi
  __int64 v5; // rbx
  void (__fastcall *v6)(__int64); // rdi
  __int64 v7; // rax
  char *v8; // rcx
  __int64 v9; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v3 )
  {
    v4 = (signed __int64 *)(Context + 32);
    PopAcquireRwLockExclusive((__int64)(Context + 32));
    Context[64] = 0;
    PopDiagTraceCoolingExtension((__int64)Context, &POP_ETW_EVENT_COOLING_EXTENSION_REMOVE);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    *((_QWORD *)Context + 10) = &Event;
    PopPropogateCoolingChange((__int64)Context);
    PopReleaseRwLock(v4);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    PopAcquireRwLockExclusive((__int64)v4);
    *((_QWORD *)Context + 10) = 0LL;
    v5 = *((_QWORD *)Context + 12);
    v6 = (void (__fastcall *)(__int64))*((_QWORD *)Context + 14);
    PopReleaseRwLock(v4);
    v6(v5);
    return 0LL;
  }
  v7 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v7 )
    v7 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v7 )
  {
    v8 = Context;
LABEL_17:
    PopOrphanCoolingExtension(v8);
    return 0LL;
  }
  v9 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
  if ( !v9 )
    v9 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
  if ( !v9 )
  {
    if ( (int)PopAcquireCoolingInterface((__int64)Context) < 0 )
    {
      v8 = Context;
      goto LABEL_17;
    }
    PopAcquireRwLockExclusive((__int64)(Context + 32));
    Context[64] = 1;
    PopDiagTraceCoolingExtension((__int64)Context, &POP_ETW_EVENT_COOLING_EXTENSION_ADD);
    if ( *((char **)Context + 2) != Context + 16 )
      PopPropogateCoolingChange((__int64)Context);
    PopReleaseRwLock((signed __int64 *)Context + 4);
  }
  return 0LL;
}
