/*
 * XREFs of PopCoolingExtensionPnpNotification @ 0x1406B2064
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PopPropogateCoolingChange @ 0x140236B60 (PopPropogateCoolingChange.c)
 *     PopAcquireCoolingInterface @ 0x1405C3B58 (PopAcquireCoolingInterface.c)
 *     PopDiagTraceCoolingExtension @ 0x1405C64A0 (PopDiagTraceCoolingExtension.c)
 *     PopOrphanCoolingExtension @ 0x1406B296C (PopOrphanCoolingExtension.c)
 */

__int64 __fastcall PopCoolingExtensionPnpNotification(
        char *NotificationStructure,
        char *Context,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rdx
  signed __int64 v13; // rax
  signed __int64 v14; // rcx
  unsigned __int64 v15; // rtt
  struct _KTHREAD *v16; // rcx
  __int16 v17; // ax
  struct _KTHREAD *v18; // rax
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r9
  __int64 v23; // rsi
  __int64 v24; // rsi
  void (__fastcall *v25)(__int64); // rdi
  signed __int64 v26; // rax
  signed __int64 v27; // rcx
  unsigned __int64 v28; // rtt
  struct _KTHREAD *v29; // rdx
  __int16 v30; // ax
  __int64 v31; // rax
  char *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // r9
  struct _KTHREAD *v35; // rax
  signed __int64 *v36; // rbx
  __int64 v37; // rax
  __int64 v38; // r9
  __int64 v39; // rsi
  __int64 v40; // rdx
  signed __int64 v41; // rax
  signed __int64 v42; // rcx
  signed __int64 v43; // rtt
  struct _KTHREAD *v44; // rcx
  __int16 v45; // ax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v5 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v5 )
    v5 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v5 )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = (unsigned __int64 *)(Context + 32);
    --CurrentThread->KernelApcDisable;
    v8 = KeAbPreAcquire((ULONG_PTR)(Context + 32), 0LL, 0LL, a4);
    v10 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      ExfAcquirePushLockExclusiveEx(v7, v8, (ULONG_PTR)v7, v9);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    v7[1] = (unsigned __int64)KeGetCurrentThread();
    Context[64] = 0;
    PopDiagTraceCoolingExtension((__int64)Context, &POP_ETW_EVENT_COOLING_EXTENSION_REMOVE);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    *((_QWORD *)Context + 10) = &Event;
    PopPropogateCoolingChange((__int64)Context, v11);
    if ( v7[1] )
      v7[1] = 0LL;
    _m_prefetchw(v7);
    v13 = *v7;
    v14 = *v7 - 16;
    if ( (*v7 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v14 = 0LL;
    if ( (v13 & 2) != 0 || (v15 = *v7, v15 != _InterlockedCompareExchange64((volatile signed __int64 *)v7, v14, v13)) )
      ExfReleasePushLock(v7, v12);
    KeAbPostRelease((ULONG_PTR)v7);
    v16 = KeGetCurrentThread();
    v17 = v16->KernelApcDisable + 1;
    v16->KernelApcDisable = v17;
    if ( !v17
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink != &v16->152
      && !v16->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v18 = KeGetCurrentThread();
    --v18->KernelApcDisable;
    v20 = KeAbPreAcquire((ULONG_PTR)v7, 0LL, 0LL, v19);
    v23 = v20;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      ExfAcquirePushLockExclusiveEx(v7, v20, (ULONG_PTR)v7, v22);
    if ( v23 )
      *(_BYTE *)(v23 + 26) |= 1u;
    v7[1] = (unsigned __int64)KeGetCurrentThread();
    v24 = *((_QWORD *)Context + 12);
    *((_QWORD *)Context + 10) = 0LL;
    v25 = (void (__fastcall *)(__int64))*((_QWORD *)Context + 14);
    if ( v7[1] )
      v7[1] = 0LL;
    _m_prefetchw(v7);
    v26 = *v7;
    v27 = *v7 - 16;
    if ( (*v7 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v27 = 0LL;
    if ( (v26 & 2) != 0 || (v28 = *v7, v28 != _InterlockedCompareExchange64((volatile signed __int64 *)v7, v27, v26)) )
      ExfReleasePushLock(v7, v21);
    KeAbPostRelease((ULONG_PTR)v7);
    v29 = KeGetCurrentThread();
    v30 = v29->KernelApcDisable + 1;
    v29->KernelApcDisable = v30;
    if ( !v30
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v29->ApcState.ApcListHead[0].Flink != &v29->152
      && !v29->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v25(v24);
    return 0LL;
  }
  v31 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v31 )
    v31 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v31 )
  {
    v32 = Context;
LABEL_61:
    PopOrphanCoolingExtension(v32);
    return 0LL;
  }
  v33 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
  if ( !v33 )
    v33 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
  if ( !v33 )
  {
    if ( (int)PopAcquireCoolingInterface((__int64)Context) < 0 )
    {
      v32 = Context;
      goto LABEL_61;
    }
    v35 = KeGetCurrentThread();
    v36 = (signed __int64 *)(Context + 32);
    --v35->KernelApcDisable;
    v37 = KeAbPreAcquire((ULONG_PTR)(Context + 32), 0LL, 0LL, v34);
    v39 = v37;
    if ( _interlockedbittestandset64((volatile signed __int32 *)Context + 8, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)Context + 4, v37, (ULONG_PTR)(Context + 32), v38);
    if ( v39 )
      *(_BYTE *)(v39 + 26) |= 1u;
    *((_QWORD *)Context + 5) = KeGetCurrentThread();
    Context[64] = 1;
    PopDiagTraceCoolingExtension((__int64)Context, &POP_ETW_EVENT_COOLING_EXTENSION_ADD);
    if ( *((char **)Context + 2) != Context + 16 )
      PopPropogateCoolingChange((__int64)Context, v40);
    if ( *((_QWORD *)Context + 5) )
      *((_QWORD *)Context + 5) = 0LL;
    _m_prefetchw(v36);
    v41 = *v36;
    v42 = *v36 - 16;
    if ( (*v36 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v42 = 0LL;
    if ( (v41 & 2) != 0 || (v43 = *v36, v43 != _InterlockedCompareExchange64(v36, v42, v41)) )
      ExfReleasePushLock((_QWORD *)Context + 4, v40);
    KeAbPostRelease((ULONG_PTR)(Context + 32));
    v44 = KeGetCurrentThread();
    v45 = v44->KernelApcDisable + 1;
    v44->KernelApcDisable = v45;
    if ( !v45
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v44->ApcState.ApcListHead[0].Flink != &v44->152
      && !v44->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return 0LL;
}
