/*
 * XREFs of FsRtlGetFileSize @ 0x1404711C4
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x14002F658 (FsRtlCreateSectionForDataScan.c)
 *     MiCreateDataFileMap @ 0x1404706C4 (MiCreateDataFileMap.c)
 *     MmExtendSection @ 0x1404B096C (MmExtendSection.c)
 *     MiCreateSection @ 0x1404B3940 (MiCreateSection.c)
 *     MiCreateImageFileMap @ 0x1404FCC48 (MiCreateImageFileMap.c)
 *     ExpQueryElamCertInfo @ 0x1406EE818 (ExpQueryElamCertInfo.c)
 *     VerifierFsRtlGetFileSize @ 0x140741CFC (VerifierFsRtlGetFileSize.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140048020 (IoGetRelatedDeviceObject.c)
 *     IoAllocateIrpEx @ 0x1400484C4 (IoAllocateIrpEx.c)
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     IoSetThreadHardErrorMode @ 0x1400EFE84 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

NTSTATUS __stdcall FsRtlGetFileSize(PFILE_OBJECT FileObject, PLARGE_INTEGER FileSize)
{
  __int64 v4; // rdx
  PDEVICE_OBJECT RelatedDeviceObject; // rdi
  PFAST_IO_DISPATCH FastIoDispatch; // rax
  unsigned __int8 (__fastcall *FastIoQueryStandardInfo)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  NTSTATUS result; // eax
  __int64 v9; // rdx
  IRP *Irp; // rbx
  BOOLEAN v11; // al
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  BOOLEAN v13; // r15
  NTSTATUS v14; // ebx
  NTSTATUS v15; // ecx
  _DWORD v16[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v17; // [rsp+38h] [rbp-48h]
  struct _KEVENT Event; // [rsp+40h] [rbp-40h] BYREF
  int v19; // [rsp+58h] [rbp-28h] BYREF
  __int128 v20; // [rsp+5Ch] [rbp-24h]
  int v21; // [rsp+6Ch] [rbp-14h]

  v16[0] = 0;
  v19 = 0;
  v16[1] = 0;
  v17 = 0LL;
  v20 = 0uLL;
  v21 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  if ( !FastIoDispatch
    || (FastIoQueryStandardInfo = (unsigned __int8 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoQueryStandardInfo) == 0LL
    || (LOBYTE(v4) = 1, !FastIoQueryStandardInfo(FileObject, v4, &v19, v16, RelatedDeviceObject)) )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    LOBYTE(v9) = RelatedDeviceObject->StackSize;
    Irp = (IRP *)IoAllocateIrpEx((__int64)RelatedDeviceObject, v9, 0LL);
    if ( !Irp )
      return -1073741670;
    v11 = IoSetThreadHardErrorMode(0);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    v13 = v11;
    Irp->Flags = 66;
    Irp->UserIosb = (PIO_STATUS_BLOCK)v16;
    Irp->UserEvent = &Event;
    Irp->RequestorMode = 0;
    Irp->Tail.Overlay.OriginalFileObject = FileObject;
    Irp->Tail.Overlay.Thread = KeGetCurrentThread();
    Irp->AssociatedIrp.MasterIrp = (struct _IRP *)&v19;
    CurrentStackLocation[-1].MajorFunction = 5;
    CurrentStackLocation[-1].FileObject = FileObject;
    CurrentStackLocation[-1].DeviceObject = RelatedDeviceObject;
    CurrentStackLocation[-1].Parameters.Read.Length = 24;
    CurrentStackLocation[-1].Parameters.Create.Options = 5;
    v14 = IofCallDriver(RelatedDeviceObject, Irp);
    if ( v14 == 259 )
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v15 = v16[0];
    if ( v14 < 0 )
      v15 = v14;
    v16[0] = v15;
    IoSetThreadHardErrorMode(v13);
  }
  result = v16[0];
  if ( v16[0] >= 0 )
  {
    if ( BYTE1(v21) )
      return -1073741638;
    else
      *FileSize = *(PLARGE_INTEGER)((char *)&v20 + 4);
  }
  return result;
}
