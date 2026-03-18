/*
 * XREFs of IoEnumerateRegisteredFiltersList @ 0x14054892C
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     IopGetFsRegistrationInProgress @ 0x1401BB668 (IopGetFsRegistrationInProgress.c)
 */

NTSTATUS __stdcall IoEnumerateRegisteredFiltersList(
        PDRIVER_OBJECT *DriverObjectList,
        ULONG DriverObjectListSize,
        PULONG ActualNumberDriverObjects)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG v4; // ebx
  __int64 *v8; // rax
  ULONG v9; // esi
  NTSTATUS v10; // edi
  bool v11; // cc
  __int64 v12; // rbx

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireResourceExclusiveLite(&IopDatabaseResource, 0) )
  {
    if ( IopGetFsRegistrationInProgress() )
    {
      v10 = -1073741267;
      goto LABEL_11;
    }
    ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
  }
  v8 = (__int64 *)IopFsNotifyChangeQueueHead;
  v9 = DriverObjectListSize >> 3;
  while ( v8 != &IopFsNotifyChangeQueueHead )
  {
    v8 = (__int64 *)*v8;
    ++v4;
  }
  *ActualNumberDriverObjects = v4;
  v10 = 0;
  v11 = v4 <= v9;
  v12 = IopFsNotifyChangeQueueHead;
  if ( !v11 )
    v10 = -1073741789;
  for ( ; v9; --v9 )
  {
    if ( (__int64 *)v12 == &IopFsNotifyChangeQueueHead )
      break;
    ObfReferenceObject(*(PVOID *)(v12 + 16));
    *DriverObjectList++ = *(PDRIVER_OBJECT *)(v12 + 16);
    v12 = *(_QWORD *)v12;
  }
  ExReleaseResourceLite(&IopDatabaseResource);
LABEL_11:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v10;
}
