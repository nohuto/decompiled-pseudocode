/*
 * XREFs of IoRegisterFileSystem @ 0x140522C74
 * Callers:
 *     RawInitialize @ 0x1407528E0 (RawInitialize.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     IopSetFsRegistrationInProgress @ 0x140133E30 (IopSetFsRegistrationInProgress.c)
 *     FsRtlSetDriverBacking @ 0x140522E10 (FsRtlSetDriverBacking.c)
 */

void __stdcall IoRegisterFileSystem(PDEVICE_OBJECT DeviceObject)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *v3; // rdx
  ULONG DeviceType; // eax
  __int64 *v5; // rcx
  ULONG Flags; // eax
  struct _LIST_ENTRY *v7; // r8
  struct _LIST_ENTRY *Flink; // rcx
  union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *v9; // rax
  __int64 *v10; // rdi
  __int64 *v11; // rax
  union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *p_Queue; // rax
  struct _LIST_ENTRY *Blink; // r8
  union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *v14; // rax

  FsRtlSetDriverBacking(DeviceObject->DriverObject, 1LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  IopSetFsRegistrationInProgress(1);
  ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
  DeviceType = DeviceObject->DeviceType;
  if ( DeviceType == 20 )
  {
    v5 = &IopNetworkFileSystemQueueHead;
  }
  else
  {
    switch ( DeviceType )
    {
      case 3u:
        v5 = &IopCdRomFileSystemQueueHead;
        break;
      case 8u:
        v5 = &IopDiskFileSystemQueueHead;
        break;
      case 0x20u:
        v5 = &IopTapeFileSystemQueueHead;
        break;
      default:
        goto LABEL_12;
    }
    DeviceObject->DriverObject->Flags |= 0x80u;
  }
  Flags = DeviceObject->Flags;
  if ( (Flags & 0x10000) != 0 )
  {
    v3 = (struct _LIST_ENTRY *)v5[1];
    p_Queue = &DeviceObject->Queue;
    Blink = v3->Blink;
    DeviceObject->Queue.ListEntry.Flink = v3;
    DeviceObject->Queue.ListEntry.Blink = Blink;
    if ( Blink->Flink != v3 )
      __fastfail(3u);
    Blink->Flink = &p_Queue->ListEntry;
    v3->Blink = &p_Queue->ListEntry;
  }
  else
  {
    v3 = (struct _LIST_ENTRY *)*v5;
    if ( (Flags & 0x200) != 0 )
    {
      v14 = &DeviceObject->Queue;
      DeviceObject->Queue.ListEntry.Flink = v3;
      DeviceObject->Queue.ListEntry.Blink = (struct _LIST_ENTRY *)v5;
      if ( (__int64 *)v3->Blink != v5 )
        __fastfail(3u);
      v3->Blink = &v14->ListEntry;
      *v5 = (__int64)v14;
    }
    else
    {
      v7 = (struct _LIST_ENTRY *)v5;
      while ( v3 != (struct _LIST_ENTRY *)v5 && ((__int64)v3[-2].Flink & 0x200) != 0 )
      {
        v7 = v3;
        v3 = v3->Flink;
      }
      Flink = v7->Flink;
      v9 = &DeviceObject->Queue;
      DeviceObject->Queue.ListEntry.Flink = v7->Flink;
      DeviceObject->Queue.ListEntry.Blink = v7;
      if ( Flink->Blink != v7 )
        __fastfail(3u);
      Flink->Blink = &v9->ListEntry;
      v7->Flink = &v9->ListEntry;
    }
  }
LABEL_12:
  ++IopFsRegistrationOps;
  DeviceObject->Flags &= ~0x80u;
  v10 = (__int64 *)IopFsNotifyChangeQueueHead;
  while ( v10 != &IopFsNotifyChangeQueueHead )
  {
    v11 = v10;
    LOBYTE(v3) = 1;
    v10 = (__int64 *)*v10;
    ((void (__fastcall *)(PDEVICE_OBJECT, struct _LIST_ENTRY *))v11[3])(DeviceObject, v3);
  }
  IopSetFsRegistrationInProgress(0);
  ExReleaseResourceLite(&IopDatabaseResource);
  IopSetFsRegistrationInProgress(0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  IopIncrementDeviceObjectRefCount((ULONG_PTR)DeviceObject, 1);
}
