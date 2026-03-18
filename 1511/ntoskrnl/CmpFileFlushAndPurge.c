/*
 * XREFs of CmpFileFlushAndPurge @ 0x1403D2B0C
 * Callers:
 *     HvWriteHivePrimaryFile @ 0x1403D1E60 (HvWriteHivePrimaryFile.c)
 *     HvWriteLogFile @ 0x1403D27F0 (HvWriteLogFile.c)
 *     CmpFlushHive @ 0x14044B9C0 (CmpFlushHive.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1404BF534 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x1405E67BC (HvExtendHivePrimaryFileValidDataLength.c)
 * Callees:
 *     IoAllocateIrp @ 0x14001AF44 (IoAllocateIrp.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1400435F0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14007E4C0 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     IoFreeIrp @ 0x140087080 (IoFreeIrp.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     CmpFileFlush @ 0x1405E4CAC (CmpFileFlush.c)
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
