/*
 * XREFs of IoRegisterFileSystem @ 0x140550E04
 * Callers:
 *     RawInitialize @ 0x14079C354 (RawInitialize.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     IopSetFsRegistrationInProgress @ 0x14013C8B4 (IopSetFsRegistrationInProgress.c)
 *     FsRtlSetDriverBacking @ 0x140550FA0 (FsRtlSetDriverBacking.c)
 */

void __stdcall IoRegisterFileSystem(PDEVICE_OBJECT DeviceObject)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *v3; // rdx
  struct _LIST_ENTRY *Blink; // r8
  ULONG DeviceType; // eax
  __int64 v6; // r9
  __int64 *v7; // rcx
  ULONG Flags; // eax
  struct _LIST_ENTRY *Flink; // rcx
  union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *v10; // rax
  __int64 *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // rax
  union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *p_Queue; // rax
  union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *v17; // rax

  FsRtlSetDriverBacking(DeviceObject->DriverObject, 1LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  IopSetFsRegistrationInProgress(1);
  ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
  DeviceType = DeviceObject->DeviceType;
  v6 = 3LL;
  if ( DeviceType == 20 )
  {
    v7 = &IopNetworkFileSystemQueueHead;
  }
  else
  {
    switch ( DeviceType )
    {
      case 3u:
        v7 = &IopCdRomFileSystemQueueHead;
        break;
      case 8u:
        v7 = &IopDiskFileSystemQueueHead;
        break;
      case 0x20u:
        v7 = &IopTapeFileSystemQueueHead;
        break;
      default:
        goto LABEL_12;
    }
    DeviceObject->DriverObject->Flags |= 0x80u;
  }
  Flags = DeviceObject->Flags;
  if ( (Flags & 0x10000) != 0 )
  {
    v3 = (struct _LIST_ENTRY *)v7[1];
    p_Queue = &DeviceObject->Queue;
    Blink = v3->Blink;
    if ( Blink->Flink != v3 )
      __fastfail(3u);
    p_Queue->ListEntry.Flink = v3;
    DeviceObject->Queue.ListEntry.Blink = Blink;
    Blink->Flink = &p_Queue->ListEntry;
    v3->Blink = &p_Queue->ListEntry;
  }
  else
  {
    v3 = (struct _LIST_ENTRY *)*v7;
    if ( (Flags & 0x200) != 0 )
    {
      v17 = &DeviceObject->Queue;
      if ( (__int64 *)v3->Blink != v7 )
        __fastfail(3u);
      v17->ListEntry.Flink = v3;
      DeviceObject->Queue.ListEntry.Blink = (struct _LIST_ENTRY *)v7;
      v3->Blink = &v17->ListEntry;
      *v7 = (__int64)v17;
    }
    else
    {
      Blink = (struct _LIST_ENTRY *)v7;
      while ( v3 != (struct _LIST_ENTRY *)v7 && ((__int64)v3[-2].Flink & 0x200) != 0 )
      {
        Blink = v3;
        v3 = v3->Flink;
      }
      Flink = Blink->Flink;
      v10 = &DeviceObject->Queue;
      if ( Blink->Flink->Blink != Blink )
        __fastfail(3u);
      v10->ListEntry.Flink = Flink;
      DeviceObject->Queue.ListEntry.Blink = Blink;
      Flink->Blink = &v10->ListEntry;
      Blink->Flink = &v10->ListEntry;
    }
  }
LABEL_12:
  ++IopFsRegistrationOps;
  DeviceObject->Flags &= ~0x80u;
  v11 = (__int64 *)IopFsNotifyChangeQueueHead;
  while ( v11 != &IopFsNotifyChangeQueueHead )
  {
    v15 = v11;
    LOBYTE(v3) = 1;
    v11 = (__int64 *)*v11;
    ((void (__fastcall *)(PDEVICE_OBJECT, struct _LIST_ENTRY *, struct _LIST_ENTRY *, __int64))v15[3])(
      DeviceObject,
      v3,
      Blink,
      v6);
  }
  IopSetFsRegistrationInProgress(0);
  ExReleaseResourceLite(&IopDatabaseResource);
  IopSetFsRegistrationInProgress(0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v12, v13, v14);
  IopIncrementDeviceObjectRefCount((ULONG_PTR)DeviceObject, 1);
}
