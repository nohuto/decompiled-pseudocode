/*
 * XREFs of IopGetSetSecurityObject @ 0x140438940
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1400435F0 (IoGetRelatedDeviceObject.c)
 *     IopQueueThreadIrp @ 0x140043B00 (IopQueueThreadIrp.c)
 *     IofCallDriver @ 0x14007E4C0 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     IopResetEvent @ 0x14008E840 (IopResetEvent.c)
 *     IopGetDevicePDO @ 0x1400988E8 (IopGetDevicePDO.c)
 *     sub_1400E5420 @ 0x1400E5420 (sub_1400E5420.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObDereferenceSecurityDescriptor @ 0x140420D30 (ObDereferenceSecurityDescriptor.c)
 *     SeQuerySecurityDescriptorInfo @ 0x140421240 (SeQuerySecurityDescriptorInfo.c)
 *     ObLogSecurityDescriptor @ 0x14042E2C0 (ObLogSecurityDescriptor.c)
 *     IopAcquireFileObjectLock @ 0x1404AC66C (IopAcquireFileObjectLock.c)
 *     IopSetDeviceSecurityDescriptor @ 0x1404BAE04 (IopSetDeviceSecurityDescriptor.c)
 *     IopSetDeviceSecurityDescriptors @ 0x140541898 (IopSetDeviceSecurityDescriptors.c)
 *     IopAllocateIrpCleanup @ 0x1405F70B8 (IopAllocateIrpCleanup.c)
 *     SeAssignWorldSecurityDescriptor @ 0x14064DD44 (SeAssignWorldSecurityDescriptor.c)
 */

__int64 __fastcall IopGetSetSecurityObject(
        struct _FILE_OBJECT *Object,
        int a2,
        DWORD *a3,
        char *a4,
        PULONG Length,
        int a6,
        unsigned int a7,
        __int64 a8,
        char a9)
{
  struct _FILE_OBJECT *v12; // rbx
  _QWORD *p_Type; // r15
  struct _KTHREAD *v14; // r15
  __int64 v15; // rdx
  __int64 v16; // r8
  char v17; // di
  __int64 v18; // r8
  __int64 Irp; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  IRP *v22; // rdi
  __int64 v23; // rcx
  struct _KTHREAD *v24; // rax
  NTSTATUS v25; // eax
  unsigned int v26; // edi
  struct _KTHREAD *v28; // rdi
  PSECURITY_DESCRIPTOR SecurityDescriptor; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  struct _FILE_OBJECT *DevicePDO; // rax
  PDEVICE_OBJECT v32; // rbx
  struct _KTHREAD *v33; // rdi
  char v34; // [rsp+30h] [rbp-78h]
  NTSTATUS FinalStatus; // [rsp+34h] [rbp-74h]
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+38h] [rbp-70h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp-68h]
  __int64 v38; // [rsp+48h] [rbp-60h] BYREF
  __int64 v39; // [rsp+50h] [rbp-58h] BYREF
  __int64 v40; // [rsp+58h] [rbp-50h]
  struct _KEVENT Event; // [rsp+60h] [rbp-48h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+0h]
  char v43; // [rsp+B0h] [rbp+8h]

  v12 = Object;
  if ( Object->Type == 3 )
  {
    p_Type = &Object->Type;
    v12 = 0LL;
    goto LABEL_31;
  }
  p_Type = &Object->DeviceObject->Type;
  if ( !Object->FileName.Length && !Object->RelatedFileObject || (Object->Flags & 0x800) != 0 )
  {
LABEL_31:
    switch ( a2 )
    {
      case 3:
        v26 = 0;
        if ( !v12 || (v12->Flags & 0x100) == 0 )
        {
          v26 = ObLogSecurityDescriptor(a4, &v38, 1u);
          if ( (v26 & 0x80000000) == 0 )
          {
            ExFreePoolWithTag(a4, 0);
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&IopSecurityResource, 1u);
            if ( p_Type[34] )
              *(_DWORD *)(p_Type[39] + 32LL) &= ~0x800u;
            p_Type[34] = v38;
            ExReleaseResourceLite(&IopSecurityResource);
            KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
          }
        }
        return v26;
      case 0:
        DevicePDO = (struct _FILE_OBJECT *)IopGetDevicePDO((__int64)p_Type);
        v12 = DevicePDO;
        if ( DevicePDO )
        {
          v26 = IopSetDeviceSecurityDescriptors(p_Type, DevicePDO, a3, a4, a7, a8);
LABEL_47:
          ObfDereferenceObject(v12);
          return v26;
        }
        return (unsigned int)IopSetDeviceSecurityDescriptor(p_Type, a3, a4, a7, a8);
      case 1:
        v28 = KeGetCurrentThread();
        --v28->KernelApcDisable;
        ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
        SecurityDescriptor = (PSECURITY_DESCRIPTOR)p_Type[34];
        ObjectsSecurityDescriptor = SecurityDescriptor;
        if ( SecurityDescriptor )
        {
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)SecurityDescriptor - 2, 1uLL) <= 0 )
            __fastfail(0xEu);
          SecurityDescriptor = ObjectsSecurityDescriptor;
        }
        ExReleaseResourceLite(&IopSecurityResource);
        KiLeaveCriticalRegionUnsafe((__int64)v28);
        v26 = SeQuerySecurityDescriptorInfo(a3, a4, Length, &ObjectsSecurityDescriptor);
        if ( !SecurityDescriptor )
          return v26;
LABEL_38:
        ObDereferenceSecurityDescriptor((__int64)SecurityDescriptor, 1u);
        return v26;
    }
    return 0;
  }
  if ( a2 == 2 )
    return 0;
  v39 = 0LL;
  v40 = 0LL;
  v14 = KeGetCurrentThread();
  ObfReferenceObject(Object);
  if ( (v12->Flags & 2) != 0 )
  {
    if ( !sub_1400E5420((volatile __int32 *)&v12->Type) )
    {
      v26 = IopAcquireFileObjectLock(v12);
      if ( v34 )
        goto LABEL_47;
    }
    v17 = 1;
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v17 = 0;
  }
  v43 = v17;
  IopResetEvent((__int64)v12, v15, v16);
  DeviceObject = IoGetRelatedDeviceObject(v12);
  LOBYTE(v18) = v17 == 0;
  Irp = pIoAllocateIrp(DeviceObject, (unsigned __int8)DeviceObject->StackSize, v18, retaddr);
  v22 = (IRP *)Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = v12;
    *(_QWORD *)(Irp + 152) = v14;
    *(_BYTE *)(Irp + 64) = a9;
    if ( (v12->Flags & 2) != 0 )
    {
      *(_QWORD *)(Irp + 80) = 0LL;
      *(_BYTE *)(Irp + 71) |= 2u;
    }
    else
    {
      *(_QWORD *)(Irp + 80) = &Event;
      *(_DWORD *)(Irp + 16) = 4;
    }
    *(_QWORD *)(Irp + 72) = &v39;
    *(_QWORD *)(Irp + 88) = 0LL;
    v23 = *(_QWORD *)(Irp + 184);
    if ( a2 == 1 )
    {
      *(_BYTE *)(v23 - 72) = 20;
      *(_DWORD *)(v23 - 64) = *a3;
      *(_DWORD *)(v23 - 56) = *Length;
      *(_QWORD *)(Irp + 112) = a4;
    }
    else
    {
      *(_BYTE *)(v23 - 72) = 21;
      *(_DWORD *)(v23 - 64) = *a3;
      *(_QWORD *)(v23 - 56) = a4;
    }
    *(_QWORD *)(v23 - 24) = v12;
    IopQueueThreadIrp(Irp, v20, v21);
    v24 = KeGetCurrentThread();
    ++v24->OtherOperationCount;
    __incgsdword(0x2E64u);
    v25 = IofCallDriver(DeviceObject, v22);
    v26 = v25;
    FinalStatus = v25;
    if ( v43 )
    {
      if ( v25 == 259 )
      {
        KeWaitForSingleObject(&v12->Event, Executive, 0, 0, 0LL);
        FinalStatus = v12->FinalStatus;
      }
      _InterlockedExchange((volatile __int32 *)&v12->Busy, 0);
      if ( v12->Waiters )
        KeSetEvent(&v12->Lock, 0, 0);
      ObfDereferenceObject(v12);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v26 = FinalStatus;
    }
    else if ( v25 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v26 = v39;
    }
    if ( v26 != -1073741808 )
    {
      if ( a2 == 1 )
      {
        if ( v26 == -2147483643 )
          v26 = -1073741789;
        *Length = v40;
      }
      return v26;
    }
    if ( a2 == 1 )
    {
      v32 = DeviceObject;
      if ( (DeviceObject->Characteristics & 0x100) == 0 )
        return (unsigned int)SeAssignWorldSecurityDescriptor(a4, Length, a3);
      v33 = KeGetCurrentThread();
      --v33->KernelApcDisable;
      ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
      SecurityDescriptor = v32->SecurityDescriptor;
      ObjectsSecurityDescriptor = SecurityDescriptor;
      if ( SecurityDescriptor )
      {
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)SecurityDescriptor - 2, 1uLL) <= 0 )
          __fastfail(0xEu);
        SecurityDescriptor = ObjectsSecurityDescriptor;
      }
      ExReleaseResourceLite(&IopSecurityResource);
      KiLeaveCriticalRegionUnsafe((__int64)v33);
      v26 = SeQuerySecurityDescriptorInfo(a3, a4, Length, &ObjectsSecurityDescriptor);
      if ( !SecurityDescriptor )
        return v26;
      goto LABEL_38;
    }
    if ( !a2 && (DeviceObject->Flags & 0x100) != 0 )
      return (unsigned int)-1073741808;
    return 0;
  }
  IopAllocateIrpCleanup(v12, 0LL);
  return 3221225626LL;
}
