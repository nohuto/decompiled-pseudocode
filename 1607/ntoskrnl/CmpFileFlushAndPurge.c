/*
 * XREFs of CmpFileFlushAndPurge @ 0x1404E99BC
 * Callers:
 *     HvWriteLogFile @ 0x1403F4934 (HvWriteLogFile.c)
 *     CmpFlushHive @ 0x1403F8F8C (CmpFlushHive.c)
 *     HvWriteHivePrimaryFile @ 0x1404827F8 (HvWriteHivePrimaryFile.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x140482DBC (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x140605DC8 (HvExtendHivePrimaryFileValidDataLength.c)
 * Callees:
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x14002DBE0 (IofCallDriver.c)
 *     IoGetRelatedDeviceObject @ 0x14002DC60 (IoGetRelatedDeviceObject.c)
 *     IoFreeIrp @ 0x140055950 (IoFreeIrp.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IoAllocateIrp @ 0x1400C3FBC (IoAllocateIrp.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     CmpFileFlush @ 0x1406042B8 (CmpFileFlush.c)
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
  *(_WORD *)&v6->RequestorMode = 0;
  v6->Overlay.AllocationSize.QuadPart = 0LL;
  v6->CancelRoutine = 0LL;
  v8 = (struct _FILE_OBJECT *)Object;
  v6->Tail.Overlay.Thread = CurrentThread;
  CurrentStackLocation = v6->Tail.Overlay.CurrentStackLocation;
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
