/*
 * XREFs of CmpFileFlushAndPurge @ 0x1404D6564
 * Callers:
 *     HvWriteLogFile @ 0x14044C3A0 (HvWriteLogFile.c)
 *     CmpFlushHive @ 0x14044C5C4 (CmpFlushHive.c)
 *     HvWriteHivePrimaryFile @ 0x1404AFC20 (HvWriteHivePrimaryFile.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1404AFEC4 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x14065DC30 (HvExtendHivePrimaryFileValidDataLength.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140048020 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     IoFreeIrp @ 0x14004BC70 (IoFreeIrp.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     IoAllocateIrp @ 0x1400CF78C (IoAllocateIrp.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     CmpFileFlush @ 0x14065BBC0 (CmpFileFlush.c)
 */

char __fastcall CmpFileFlushAndPurge(__int64 a1, unsigned int a2)
{
  void *v2; // rcx
  struct _FILE_OBJECT *v3; // rdi
  PDEVICE_OBJECT RelatedDeviceObject; // rsi
  PIRP Irp; // rax
  PIRP v6; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _FILE_OBJECT *v8; // rbp
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v10; // rax
  NTSTATUS Status; // edi
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF

  if ( (*(_BYTE *)(a1 + 124) & 4) != 0 && !a2 )
    return CmpFileFlush();
  v2 = *(void **)(a1 + 8LL * a2 + 2664);
  if ( !v2 || CmpNoWrite )
    return 1;
  if ( ObReferenceObjectByHandle(v2, 2u, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Object, 0LL) < 0 )
    return 0;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v3 = (struct _FILE_OBJECT *)Object;
  RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)Object);
  Irp = IoAllocateIrp(RelatedDeviceObject->StackSize, 0);
  v6 = Irp;
  if ( !Irp )
  {
    ObfDereferenceObject(v3);
    return 0;
  }
  Irp->Tail.Overlay.OriginalFileObject = v3;
  CurrentThread = KeGetCurrentThread();
  v6->Tail.Overlay.AuxiliaryBuffer = 0LL;
  v6->Overlay.AllocationSize.QuadPart = 0LL;
  v6->CancelRoutine = 0LL;
  v8 = (struct _FILE_OBJECT *)Object;
  v6->Tail.Overlay.Thread = CurrentThread;
  CurrentStackLocation = v6->Tail.Overlay.CurrentStackLocation;
  *(_WORD *)&v6->RequestorMode = 0;
  v6->Cancel = 0;
  *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 265;
  CurrentStackLocation[-1].FileObject = v8;
  CurrentStackLocation[-1].DeviceObject = RelatedDeviceObject;
  v10 = v6->Tail.Overlay.CurrentStackLocation;
  v10[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)SmKmGenericCompletion;
  v10[-1].Context = &Event;
  v10[-1].Control = -32;
  Status = IofCallDriver(RelatedDeviceObject, v6);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = v6->IoStatus.Status;
  }
  ObfDereferenceObject(v8);
  IoFreeIrp(v6);
  return Status >= 0;
}
