/*
 * XREFs of IopGetSetSecurityObject @ 0x140467180
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140048020 (IoGetRelatedDeviceObject.c)
 *     IopQueueThreadIrp @ 0x140048420 (IopQueueThreadIrp.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     IopGetDevicePDO @ 0x1400D0E98 (IopGetDevicePDO.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ObDereferenceSecurityDescriptor @ 0x140486190 (ObDereferenceSecurityDescriptor.c)
 *     ObLogSecurityDescriptor @ 0x140486480 (ObLogSecurityDescriptor.c)
 *     SeQuerySecurityDescriptorInfo @ 0x1404D0650 (SeQuerySecurityDescriptorInfo.c)
 *     IopAcquireFileObjectLock @ 0x140540A5C (IopAcquireFileObjectLock.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140550548 (IopSetDeviceSecurityDescriptor.c)
 *     IopSetDeviceSecurityDescriptors @ 0x1405B7BEC (IopSetDeviceSecurityDescriptors.c)
 *     IopAllocateIrpCleanup @ 0x140670E48 (IopAllocateIrpCleanup.c)
 *     SeAssignWorldSecurityDescriptor @ 0x1406D135C (SeAssignWorldSecurityDescriptor.c)
 */

__int64 __fastcall IopGetSetSecurityObject(
        struct _FILE_OBJECT *Object,
        int a2,
        DWORD *a3,
        void *a4,
        PULONG Length,
        int a6,
        unsigned int a7,
        __int64 a8,
        char a9)
{
  struct _FILE_OBJECT *v12; // rbx
  _QWORD *p_Type; // r14
  struct _KTHREAD *v14; // r14
  char v15; // r12
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 v17; // r8
  __int64 Irp; // rax
  IRP *v19; // rdi
  __int64 v20; // rcx
  struct _KTHREAD *v21; // rax
  NTSTATUS v22; // eax
  unsigned int v23; // edi
  struct _KTHREAD *v25; // rax
  struct _KTHREAD *v26; // rcx
  __int16 v27; // ax
  struct _KTHREAD *v28; // rsi
  PSECURITY_DESCRIPTOR v29; // rbx
  __int16 v30; // ax
  struct _KTHREAD *CurrentThread; // rbx
  __int16 v32; // ax
  struct _FILE_OBJECT *DevicePDO; // rax
  struct _KTHREAD *v34; // rcx
  __int16 v35; // ax
  struct _KTHREAD *v36; // rdi
  __int16 v37; // ax
  NTSTATUS FinalStatus; // [rsp+30h] [rbp-78h]
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+38h] [rbp-70h] BYREF
  __int64 v40; // [rsp+40h] [rbp-68h] BYREF
  __int64 v41; // [rsp+48h] [rbp-60h] BYREF
  __int64 v42; // [rsp+50h] [rbp-58h]
  struct _KEVENT Event; // [rsp+58h] [rbp-50h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+0h]
  char v45; // [rsp+B0h] [rbp+8h]

  v12 = Object;
  if ( Object->Type == 3 )
  {
    p_Type = &Object->Type;
    v12 = 0LL;
LABEL_36:
    if ( a2 == 3 )
    {
      v23 = 0;
      if ( !v12 || (v12->Flags & 0x100) == 0 )
      {
        v23 = ObLogSecurityDescriptor(a4, &v40, 1LL);
        if ( (v23 & 0x80000000) == 0 )
        {
          ExFreePoolWithTag(a4, 0);
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceExclusiveLite(&IopSecurityResource, 1u);
          if ( p_Type[34] )
            *(_DWORD *)(p_Type[39] + 32LL) &= ~0x800u;
          p_Type[34] = v40;
          ExReleaseResourceLite(&IopSecurityResource);
          v32 = CurrentThread->KernelApcDisable + 1;
          CurrentThread->KernelApcDisable = v32;
          if ( !v32
            && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
            && !CurrentThread->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
        }
      }
      return v23;
    }
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v28 = KeGetCurrentThread();
        --v28->KernelApcDisable;
        ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
        v29 = (PSECURITY_DESCRIPTOR)p_Type[34];
        ObjectsSecurityDescriptor = v29;
        if ( v29 )
        {
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v29 - 2, 1uLL) <= 0 )
            __fastfail(0xEu);
          v29 = ObjectsSecurityDescriptor;
        }
        ExReleaseResourceLite(&IopSecurityResource);
        v30 = v28->KernelApcDisable + 1;
        v28->KernelApcDisable = v30;
        if ( !v30
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v28->ApcState.ApcListHead[0].Flink != &v28->152
          && !v28->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        v23 = SeQuerySecurityDescriptorInfo(a3, a4, Length, &ObjectsSecurityDescriptor);
        if ( !v29 )
          return v23;
LABEL_45:
        ObDereferenceSecurityDescriptor(v29, 1LL);
        return v23;
      }
      return 0;
    }
    DevicePDO = (struct _FILE_OBJECT *)IopGetDevicePDO((__int64)p_Type);
    v12 = DevicePDO;
    if ( !DevicePDO )
      return (unsigned int)IopSetDeviceSecurityDescriptor(p_Type, a3, a4, a7, a8);
    v23 = IopSetDeviceSecurityDescriptors(p_Type, DevicePDO, a3, a4, a7, a8);
    goto LABEL_55;
  }
  p_Type = &Object->DeviceObject->Type;
  if ( !Object->FileName.Length && !Object->RelatedFileObject || (Object->Flags & 0x800) != 0 )
    goto LABEL_36;
  if ( a2 == 2 )
    return 0;
  v41 = 0LL;
  v42 = 0LL;
  v14 = KeGetCurrentThread();
  ObfReferenceObject(Object);
  if ( (v12->Flags & 2) == 0 )
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v15 = 0;
    goto LABEL_7;
  }
  v25 = KeGetCurrentThread();
  --v25->KernelApcDisable;
  if ( _InterlockedExchange((volatile __int32 *)&v12->Busy, 1) )
  {
    v34 = KeGetCurrentThread();
    v35 = v34->KernelApcDisable + 1;
    v34->KernelApcDisable = v35;
    if ( !v35
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v34->ApcState.ApcListHead[0].Flink != &v34->152
      && !v34->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v23 = IopAcquireFileObjectLock(v12);
    if ( !v45 )
      goto LABEL_25;
LABEL_55:
    ObfDereferenceObject(v12);
    return v23;
  }
  ObfReferenceObject(v12);
LABEL_25:
  v15 = 1;
LABEL_7:
  if ( (v12->Flags & 0x4000000) == 0 )
    KeResetEvent(&v12->Event);
  RelatedDeviceObject = IoGetRelatedDeviceObject(v12);
  LOBYTE(v17) = v15 == 0;
  Irp = pIoAllocateIrp(RelatedDeviceObject, (unsigned __int8)RelatedDeviceObject->StackSize, v17, retaddr);
  v19 = (IRP *)Irp;
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
    *(_QWORD *)(Irp + 72) = &v41;
    *(_QWORD *)(Irp + 88) = 0LL;
    v20 = *(_QWORD *)(Irp + 184);
    if ( a2 == 1 )
    {
      *(_BYTE *)(v20 - 72) = 20;
      *(_DWORD *)(v20 - 64) = *a3;
      *(_DWORD *)(v20 - 56) = *Length;
      *(_QWORD *)(Irp + 112) = a4;
    }
    else
    {
      *(_BYTE *)(v20 - 72) = 21;
      *(_DWORD *)(v20 - 64) = *a3;
      *(_QWORD *)(v20 - 56) = a4;
    }
    *(_QWORD *)(v20 - 24) = v12;
    IopQueueThreadIrp(Irp);
    v21 = KeGetCurrentThread();
    ++v21->OtherOperationCount;
    __incgsdword(0x2E64u);
    v22 = IofCallDriver(RelatedDeviceObject, v19);
    v23 = v22;
    FinalStatus = v22;
    if ( v15 )
    {
      if ( v22 == 259 )
      {
        KeWaitForSingleObject(&v12->Event, Executive, 0, 0, 0LL);
        FinalStatus = v12->FinalStatus;
      }
      _InterlockedExchange((volatile __int32 *)&v12->Busy, 0);
      if ( v12->Waiters )
        KeSetEvent(&v12->Lock, 0, 0);
      ObfDereferenceObject(v12);
      v26 = KeGetCurrentThread();
      v27 = v26->KernelApcDisable + 1;
      v26->KernelApcDisable = v27;
      if ( !v27
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v26->ApcState.ApcListHead[0].Flink != &v26->152
        && !v26->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v23 = FinalStatus;
    }
    else if ( v22 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v23 = v41;
    }
    if ( v23 != -1073741808 )
    {
      if ( a2 == 1 )
      {
        if ( v23 == -2147483643 )
          v23 = -1073741789;
        *Length = v42;
      }
      return v23;
    }
    if ( a2 == 1 )
    {
      if ( (RelatedDeviceObject->Characteristics & 0x100) == 0 )
        return (unsigned int)SeAssignWorldSecurityDescriptor(a4, Length, a3);
      v36 = KeGetCurrentThread();
      --v36->KernelApcDisable;
      ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
      v29 = RelatedDeviceObject->SecurityDescriptor;
      ObjectsSecurityDescriptor = v29;
      if ( v29 )
      {
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v29 - 2, 1uLL) <= 0 )
          __fastfail(0xEu);
        v29 = ObjectsSecurityDescriptor;
      }
      ExReleaseResourceLite(&IopSecurityResource);
      v37 = v36->KernelApcDisable + 1;
      v36->KernelApcDisable = v37;
      if ( !v37
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v36->ApcState.ApcListHead[0].Flink != &v36->152
        && !v36->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v23 = SeQuerySecurityDescriptorInfo(a3, a4, Length, &ObjectsSecurityDescriptor);
      if ( !v29 )
        return v23;
      goto LABEL_45;
    }
    if ( !a2 && (RelatedDeviceObject->Flags & 0x100) != 0 )
      return (unsigned int)-1073741808;
    return 0;
  }
  IopAllocateIrpCleanup(v12, 0LL);
  return 3221225626LL;
}
