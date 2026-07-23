/*
 * XREFs of IopGetSetSecurityObject @ 0x1405044D0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x14002DBE0 (IofCallDriver.c)
 *     IoGetRelatedDeviceObject @ 0x14002DC60 (IoGetRelatedDeviceObject.c)
 *     IopQueueThreadIrp @ 0x14002DCF0 (IopQueueThreadIrp.c)
 *     IopResetEvent @ 0x14002E140 (IopResetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IopGetDevicePDO @ 0x1400F9440 (IopGetDevicePDO.c)
 *     IopAcquireFastLock_0 @ 0x1400FA700 (IopAcquireFastLock_0.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IopAcquireFileObjectLock @ 0x1403EE090 (IopAcquireFileObjectLock.c)
 *     SeQuerySecurityDescriptorInfo @ 0x1404038C0 (SeQuerySecurityDescriptorInfo.c)
 *     ObLogSecurityDescriptor @ 0x14041EBB0 (ObLogSecurityDescriptor.c)
 *     ObDereferenceSecurityDescriptor @ 0x14041EF90 (ObDereferenceSecurityDescriptor.c)
 *     IopSetDeviceSecurityDescriptor @ 0x1404C913C (IopSetDeviceSecurityDescriptor.c)
 *     IopSetDeviceSecurityDescriptors @ 0x140574FB8 (IopSetDeviceSecurityDescriptors.c)
 *     IopAllocateIrpCleanup @ 0x140620E74 (IopAllocateIrpCleanup.c)
 *     SeAssignWorldSecurityDescriptor @ 0x14068D50C (SeAssignWorldSecurityDescriptor.c)
 */

__int64 __fastcall IopGetSetSecurityObject(
        struct _FILE_OBJECT *Object,
        int a2,
        DWORD *a3,
        void *a4,
        PULONG Length,
        int a6,
        POOL_TYPE a7,
        GENERIC_MAPPING *a8,
        char a9)
{
  struct _FILE_OBJECT *v12; // rbx
  _QWORD *p_Type; // r15
  struct _KTHREAD *v14; // r15
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  char v19; // di
  __int64 v20; // r8
  __int64 Irp; // rax
  IRP *v22; // rdi
  __int64 v23; // rcx
  struct _KTHREAD *v24; // rax
  NTSTATUS v25; // eax
  unsigned int v26; // edi
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  struct _KTHREAD *v31; // rdi
  PSECURITY_DESCRIPTOR v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  struct _FILE_OBJECT *DevicePDO; // rax
  PDEVICE_OBJECT v41; // rbx
  struct _KTHREAD *v42; // rdi
  PSECURITY_DESCRIPTOR SecurityDescriptor; // rbx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  _BYTE v47[4]; // [rsp+30h] [rbp-78h] BYREF
  unsigned int FinalStatus; // [rsp+34h] [rbp-74h]
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+38h] [rbp-70h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp-68h]
  __int64 v51; // [rsp+48h] [rbp-60h] BYREF
  __int64 v52; // [rsp+50h] [rbp-58h] BYREF
  __int64 v53; // [rsp+58h] [rbp-50h]
  struct _KEVENT Event; // [rsp+60h] [rbp-48h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+0h]
  char v56; // [rsp+B0h] [rbp+8h]

  v12 = Object;
  if ( Object->Type == 3 )
  {
    p_Type = &Object->Type;
    v12 = 0LL;
LABEL_31:
    if ( a2 == 3 )
    {
      v26 = 0;
      if ( !v12 || (v12->Flags & 0x100) == 0 )
      {
        v26 = ObLogSecurityDescriptor(a4, &v51, 1u);
        FinalStatus = v26;
        if ( (v26 & 0x80000000) == 0 )
        {
          ExFreePoolWithTag(a4, 0);
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceExclusiveLite(&IopSecurityResource, 1u);
          if ( p_Type[34] )
            *(_DWORD *)(p_Type[39] + 32LL) &= ~0x800u;
          p_Type[34] = v51;
          ExReleaseResourceLite(&IopSecurityResource);
          KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v37, v38, v39);
          return FinalStatus;
        }
      }
      return v26;
    }
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v31 = KeGetCurrentThread();
        --v31->KernelApcDisable;
        ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
        v32 = (PSECURITY_DESCRIPTOR)p_Type[34];
        ObjectsSecurityDescriptor = v32;
        if ( v32 )
        {
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v32 - 2, 1uLL) <= 0 )
            __fastfail(0xEu);
          v32 = ObjectsSecurityDescriptor;
        }
        ExReleaseResourceLite(&IopSecurityResource);
        KiLeaveCriticalRegionUnsafe((__int64)v31, v33, v34, v35);
        v26 = SeQuerySecurityDescriptorInfo(a3, a4, Length, &ObjectsSecurityDescriptor);
        if ( v32 )
          ObDereferenceSecurityDescriptor((__int64)v32, 1u);
        return v26;
      }
      return 0;
    }
    DevicePDO = (struct _FILE_OBJECT *)IopGetDevicePDO((__int64)p_Type);
    v12 = DevicePDO;
    if ( !DevicePDO )
      return (unsigned int)IopSetDeviceSecurityDescriptor((__int64)p_Type, a3, a4, a7, a8);
    v26 = IopSetDeviceSecurityDescriptors(p_Type, DevicePDO, a3, a4, a7, a8);
LABEL_47:
    ObfDereferenceObject(v12);
    return v26;
  }
  p_Type = &Object->DeviceObject->Type;
  if ( !Object->FileName.Length && !Object->RelatedFileObject || (Object->Flags & 0x800) != 0 )
    goto LABEL_31;
  if ( a2 == 2 )
    return 0;
  v52 = 0LL;
  v53 = 0LL;
  v14 = KeGetCurrentThread();
  PreviousMode = v14->PreviousMode;
  ObfReferenceObject(Object);
  if ( (v12->Flags & 2) == 0 )
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v19 = 0;
    goto LABEL_7;
  }
  if ( !IopAcquireFastLock_0((volatile __int32 *)&v12->Type, v16, v17, v18) )
  {
    v26 = IopAcquireFileObjectLock((char *)v12, PreviousMode, (v12->Flags & 4) != 0, v47);
    FinalStatus = v26;
    if ( v47[0] )
      goto LABEL_47;
  }
  v19 = 1;
LABEL_7:
  v56 = v19;
  IopResetEvent((__int64)v12);
  DeviceObject = IoGetRelatedDeviceObject(v12);
  LOBYTE(v20) = v19 == 0;
  Irp = pIoAllocateIrp(DeviceObject, (unsigned __int8)DeviceObject->StackSize, v20, retaddr);
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
    *(_QWORD *)(Irp + 72) = &v52;
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
    IopQueueThreadIrp(Irp);
    v24 = KeGetCurrentThread();
    ++v24->OtherOperationCount;
    __incgsdword(0x2E64u);
    v25 = IofCallDriver(DeviceObject, v22);
    v26 = v25;
    FinalStatus = v25;
    if ( v56 )
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
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v28, v29, v30);
      v26 = FinalStatus;
    }
    else if ( v25 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v26 = v52;
      FinalStatus = v52;
    }
    if ( v26 != -1073741808 )
    {
      if ( a2 == 1 )
      {
        if ( v26 == -2147483643 )
          v26 = -1073741789;
        *Length = v53;
      }
      return v26;
    }
    if ( a2 == 1 )
    {
      v41 = DeviceObject;
      if ( (DeviceObject->Characteristics & 0x100) != 0 )
      {
        v42 = KeGetCurrentThread();
        --v42->KernelApcDisable;
        ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
        SecurityDescriptor = v41->SecurityDescriptor;
        ObjectsSecurityDescriptor = SecurityDescriptor;
        if ( SecurityDescriptor )
        {
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)SecurityDescriptor - 2, 1uLL) <= 0 )
            __fastfail(0xEu);
          SecurityDescriptor = ObjectsSecurityDescriptor;
        }
        ExReleaseResourceLite(&IopSecurityResource);
        KiLeaveCriticalRegionUnsafe((__int64)v42, v44, v45, v46);
        v26 = SeQuerySecurityDescriptorInfo(a3, a4, Length, &ObjectsSecurityDescriptor);
        if ( SecurityDescriptor )
          ObDereferenceSecurityDescriptor((__int64)SecurityDescriptor, 1u);
      }
      else
      {
        v26 = SeAssignWorldSecurityDescriptor(a4, Length, a3);
        FinalStatus = v26;
      }
      return v26;
    }
    if ( !a2 && (DeviceObject->Flags & 0x100) != 0 )
      return (unsigned int)-1073741808;
    return 0;
  }
  IopAllocateIrpCleanup(v12, 0LL);
  return 3221225626LL;
}
