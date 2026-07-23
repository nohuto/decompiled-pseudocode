/*
 * XREFs of PopCoolingExtensionPnpNotification @ 0x14066BA0C
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14000D858 (PopReleaseRwLock.c)
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     PopAcquireRwLockExclusive @ 0x1400F9D28 (PopAcquireRwLockExclusive.c)
 *     PopPropogateCoolingChange @ 0x140201B58 (PopPropogateCoolingChange.c)
 *     PopDiagTraceCoolingExtension @ 0x14052E2B4 (PopDiagTraceCoolingExtension.c)
 *     PopAcquireCoolingInterface @ 0x14056CCB8 (PopAcquireCoolingInterface.c)
 *     PopOrphanCoolingExtension @ 0x14066BD0C (PopOrphanCoolingExtension.c)
 */

__int64 __fastcall PopCoolingExtensionPnpNotification(char *NotificationStructure, unsigned __int64 *Context)
{
  __int64 v3; // rax
  signed __int64 *v4; // rsi
  unsigned __int64 v5; // rbx
  void (__fastcall *v6)(unsigned __int64); // rdi
  __int64 v7; // rax
  unsigned __int64 *v8; // rcx
  __int64 v9; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v3 )
  {
    v4 = (signed __int64 *)(Context + 4);
    PopAcquireRwLockExclusive(Context + 4);
    *((_BYTE *)Context + 64) = 0;
    PopDiagTraceCoolingExtension((__int64)Context, &POP_ETW_EVENT_COOLING_EXTENSION_REMOVE);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    Context[10] = (unsigned __int64)&Event;
    PopPropogateCoolingChange((__int64)Context);
    PopReleaseRwLock(v4);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    PopAcquireRwLockExclusive((unsigned __int64 *)v4);
    Context[10] = 0LL;
    v5 = Context[12];
    v6 = (void (__fastcall *)(unsigned __int64))Context[14];
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
    PopAcquireRwLockExclusive(Context + 4);
    *((_BYTE *)Context + 64) = 1;
    PopDiagTraceCoolingExtension((__int64)Context, &POP_ETW_EVENT_COOLING_EXTENSION_ADD);
    if ( (unsigned __int64 *)Context[2] != Context + 2 )
      PopPropogateCoolingChange((__int64)Context);
    PopReleaseRwLock((signed __int64 *)Context + 4);
  }
  return 0LL;
}
