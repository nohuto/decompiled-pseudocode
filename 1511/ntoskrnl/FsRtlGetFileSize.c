/*
 * XREFs of FsRtlGetFileSize @ 0x1403F7C1C
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x140093000 (FsRtlCreateSectionForDataScan.c)
 *     MmExtendSection @ 0x1403C7408 (MmExtendSection.c)
 *     MiCreateDataFileMap @ 0x1403C86B8 (MiCreateDataFileMap.c)
 *     MiCreateImageFileMap @ 0x1403C9488 (MiCreateImageFileMap.c)
 *     MiCreateSection @ 0x1403F80B0 (MiCreateSection.c)
 *     ExpQueryElamCertInfo @ 0x14066B1D0 (ExpQueryElamCertInfo.c)
 *     VerifierFsRtlGetFileSize @ 0x1406C0508 (VerifierFsRtlGetFileSize.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x1400435F0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14007E4C0 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     IoSetThreadHardErrorMode @ 0x140092448 (IoSetThreadHardErrorMode.c)
 *     IoAllocateIrpEx @ 0x1400DF48C (IoAllocateIrpEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
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
