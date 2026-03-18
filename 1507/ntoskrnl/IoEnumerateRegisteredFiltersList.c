/*
 * XREFs of IoEnumerateRegisteredFiltersList @ 0x1405BF854
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     IopGetFsRegistrationInProgress @ 0x1401F69A4 (IopGetFsRegistrationInProgress.c)
 */

NTSTATUS __stdcall IoEnumerateRegisteredFiltersList(
        PDRIVER_OBJECT *DriverObjectList,
        ULONG DriverObjectListSize,
        PULONG ActualNumberDriverObjects)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG v7; // ebx
  __int64 *v8; // rax
  ULONG v9; // edi
  bool v10; // cc
  __int64 v11; // rbx
  NTSTATUS v12; // esi
  struct _KTHREAD *v13; // rdx
  __int16 v14; // ax
  struct _KTHREAD *v16; // rcx
  __int16 v17; // ax

  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireResourceExclusiveLite(&IopDatabaseResource, 0) )
    goto LABEL_2;
  if ( !IopGetFsRegistrationInProgress() )
  {
    ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
LABEL_2:
    v8 = (__int64 *)IopFsNotifyChangeQueueHead;
    v9 = DriverObjectListSize >> 3;
    while ( v8 != &IopFsNotifyChangeQueueHead )
    {
      v8 = (__int64 *)*v8;
      ++v7;
    }
    *ActualNumberDriverObjects = v7;
    v10 = v7 <= v9;
    v11 = IopFsNotifyChangeQueueHead;
    v12 = 0;
    if ( !v10 )
      v12 = -1073741789;
    for ( ; v9; --v9 )
    {
      if ( (__int64 *)v11 == &IopFsNotifyChangeQueueHead )
        break;
      ObfReferenceObject(*(PVOID *)(v11 + 16));
      *DriverObjectList++ = *(PDRIVER_OBJECT *)(v11 + 16);
      v11 = *(_QWORD *)v11;
    }
    ExReleaseResourceLite(&IopDatabaseResource);
    v13 = KeGetCurrentThread();
    v14 = v13->KernelApcDisable + 1;
    v13->KernelApcDisable = v14;
    if ( !v14
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
      && !v13->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return v12;
  }
  v16 = KeGetCurrentThread();
  v17 = v16->KernelApcDisable + 1;
  v16->KernelApcDisable = v17;
  if ( !v17
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink != &v16->152
    && !v16->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return -1073741267;
}
