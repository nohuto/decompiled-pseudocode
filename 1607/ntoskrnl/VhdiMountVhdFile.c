/*
 * XREFs of VhdiMountVhdFile @ 0x1407D2DF0
 * Callers:
 *     IopInitializeBootDrivers @ 0x14079B23C (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     IofCallDriver @ 0x14002DBE0 (IofCallDriver.c)
 *     IoGetRelatedDeviceObject @ 0x14002DC60 (IoGetRelatedDeviceObject.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     IoBuildDeviceIoControlRequest @ 0x1400EAF4C (IoBuildDeviceIoControlRequest.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     wcscat_s @ 0x1401535B8 (wcscat_s.c)
 *     ZwCreateFile @ 0x14015AC90 (ZwCreateFile.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     IoGetDeviceInterfaces @ 0x1404D8C7C (IoGetDeviceInterfaces.c)
 *     IoGetDeviceObjectPointer @ 0x1404EB378 (IoGetDeviceObjectPointer.c)
 */

__int64 __fastcall VhdiMountVhdFile(wchar_t *Src)
{
  NTSTATUS DeviceInterfaces; // ebx
  PZZWSTR v3; // r12
  __int64 v4; // r15
  __int64 v5; // rax
  unsigned int v6; // ebx
  ULONG v7; // r13d
  char *PoolWithTag; // rax
  void *v9; // rdi
  ULONG OutputBufferLength; // ebx
  _DWORD *v11; // rsi
  IRP *v12; // rax
  char *v13; // rbx
  __int128 v14; // xmm0
  PZZWSTR v15; // r14
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rbx
  PIRP v17; // rax
  PZZWSTR SymbolicLinkList; // [rsp+68h] [rbp-A0h] BYREF
  struct _KEVENT Object; // [rsp+70h] [rbp-98h] BYREF
  PFILE_OBJECT FileObject; // [rsp+88h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING v24; // [rsp+B0h] [rbp-58h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-48h] BYREF
  _OWORD v26[6]; // [rsp+F8h] [rbp-10h] BYREF
  _DWORD InputBuffer[12]; // [rsp+158h] [rbp+50h] BYREF
  _OWORD EaBuffer[7]; // [rsp+188h] [rbp+80h] BYREF

  SymbolicLinkList = 0LL;
  FileObject = 0LL;
  if ( !Src )
  {
    DeviceInterfaces = -1073741811;
    goto LABEL_3;
  }
  memset(v26, 0, 0x54uLL);
  DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_SURFACE_VIRTUAL_DRIVE, 0LL, 0, &SymbolicLinkList);
  if ( DeviceInterfaces < 0 )
    goto LABEL_3;
  v3 = SymbolicLinkList;
  if ( !*SymbolicLinkList )
  {
    DeviceInterfaces = -1073741275;
    goto LABEL_3;
  }
  RtlInitUnicodeString(&DestinationString, SymbolicLinkList);
  DeviceInterfaces = IoGetDeviceObjectPointer(
                       &DestinationString,
                       0x10000000u,
                       &FileObject,
                       (PDEVICE_OBJECT *)&SymbolicLinkList);
  if ( DeviceInterfaces < 0 )
    goto LABEL_3;
  v4 = -1LL;
  v5 = -1LL;
  do
    ++v5;
  while ( Src[v5] );
  v6 = 2 * v5 + 2;
  v7 = 2 * v5 + 34;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x42646856u);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_11;
  *((_DWORD *)PoolWithTag + 1) = 0;
  *(_OWORD *)(PoolWithTag + 8) = VIRTUAL_STORAGE_TYPE_VENDOR_UNKNOWN;
  *(_DWORD *)PoolWithTag = 1;
  *((_DWORD *)PoolWithTag + 6) = 32;
  *((_DWORD *)PoolWithTag + 7) = v6;
  memmove(PoolWithTag + 32, Src, v6);
  OutputBufferLength = v6 + 540;
  v11 = ExAllocatePoolWithTag(NonPagedPoolNx, OutputBufferLength, 0x42646856u);
  if ( !v11 )
  {
LABEL_11:
    DeviceInterfaces = -1073741801;
    goto LABEL_3;
  }
  Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
  Object.Header.SignalState = 0;
  Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
  LOWORD(Object.Header.Lock) = 1;
  Object.Header.Size = 6;
  v12 = IoBuildDeviceIoControlRequest(
          0x2D592Cu,
          (PDEVICE_OBJECT)SymbolicLinkList,
          v9,
          v7,
          v11,
          OutputBufferLength,
          0,
          &Object,
          &IoStatusBlock);
  if ( !v12 )
    goto LABEL_14;
  DeviceInterfaces = IofCallDriver((PDEVICE_OBJECT)SymbolicLinkList, v12);
  if ( DeviceInterfaces == 259 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    DeviceInterfaces = IoStatusBlock.Status;
  }
  if ( DeviceInterfaces < 0 )
    goto LABEL_3;
  v13 = (char *)v11 + (unsigned int)v11[5];
  if ( *(_WORD *)v13 == 92 && *((_WORD *)v13 + 1) == 92 && *((_WORD *)v13 + 2) == 46 && *((_WORD *)v13 + 3) == 92 )
    *(_DWORD *)(v13 + 2) = 4128831;
  do
    ++v4;
  while ( Src[v4] );
  wcscat_s((wchar_t *)v13, (unsigned int)(v4 + 257), Src);
  RtlInitUnicodeString(&v24, (PCWSTR)v13);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = &v24;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  memset(EaBuffer, 0, 0x68uLL);
  *(_QWORD *)&EaBuffer[0] = 0x54078000000000LL;
  *((_QWORD *)&EaBuffer[0] + 1) = 0x4B534454524956LL;
  v14 = *(_OWORD *)v11;
  LODWORD(v26[2]) = v11[4];
  *(_QWORD *)((char *)&v26[2] + 4) = 0x400000054LL;
  EaBuffer[2] = v14;
  DWORD1(v26[3]) = 2;
  LODWORD(EaBuffer[6]) = v26[5];
  EaBuffer[1] = GUID_DEVINTERFACE_SURFACE_VIRTUAL_DRIVE;
  EaBuffer[3] = v26[2];
  EaBuffer[4] = v26[3];
  EaBuffer[5] = v26[4];
  DeviceInterfaces = ZwCreateFile(
                       &FileHandle,
                       0x80000000,
                       &ObjectAttributes,
                       &IoStatusBlock,
                       0LL,
                       0x80u,
                       1u,
                       2u,
                       0,
                       EaBuffer,
                       0x67u);
  if ( DeviceInterfaces < 0 )
    goto LABEL_3;
  DeviceInterfaces = ObReferenceObjectByHandle(FileHandle, 0xC0100000, 0LL, 0, (PVOID *)&SymbolicLinkList, 0LL);
  if ( DeviceInterfaces < 0 )
    goto LABEL_3;
  v15 = SymbolicLinkList;
  RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)SymbolicLinkList);
  memset(InputBuffer, 0, 0x28uLL);
  InputBuffer[0] = 1;
  Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
  LOWORD(Object.Header.Lock) = 1;
  Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
  Object.Header.Size = 6;
  Object.Header.SignalState = 0;
  v17 = IoBuildDeviceIoControlRequest(
          0x2D191Cu,
          RelatedDeviceObject,
          InputBuffer,
          0x28u,
          0LL,
          0,
          0,
          &Object,
          &IoStatusBlock);
  if ( !v17 )
  {
LABEL_14:
    DeviceInterfaces = -1073741670;
    goto LABEL_3;
  }
  v17->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v15;
  DeviceInterfaces = IofCallDriver(RelatedDeviceObject, v17);
  if ( DeviceInterfaces == 259 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    DeviceInterfaces = IoStatusBlock.Status;
  }
  if ( DeviceInterfaces < 0 )
LABEL_3:
    KeBugCheckEx(0x12Fu, 5uLL, DeviceInterfaces, 0LL, 0LL);
  ExFreePoolWithTag(v9, 0x42646856u);
  ExFreePoolWithTag(v11, 0x42646856u);
  if ( v15 )
    ObfDereferenceObjectWithTag(v15, 0x746C6644u);
  if ( FileObject )
    ObfDereferenceObjectWithTag(FileObject, 0x746C6644u);
  ExFreePoolWithTag(v3, 0);
  return (unsigned int)DeviceInterfaces;
}
