/*
 * XREFs of HidCreateDeviceInfo @ 0x1C01D5214
 * Callers:
 *     CreateDeviceInfo @ 0x1C01DEF4C (CreateDeviceInfo.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     GetDeviceObjectPointer @ 0x1C0095D70 (GetDeviceObjectPointer.c)
 *     SearchHidTLCInfo @ 0x1C010243C (SearchHidTLCInfo.c)
 *     AllocateAndLinkHidTLCInfo @ 0x1C010FAFC (AllocateAndLinkHidTLCInfo.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?AllocateHidConfigDesc@@YAPEAUtagHIDDESC@@PEAUDEVICEINFO@@PEAXPEAU_HIDP_CAPS@@PEAU_HID_COLLECTION_INFORMATION@@PEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@@Z @ 0x1C01D3C48 (-AllocateHidConfigDesc@@YAPEAUtagHIDDESC@@PEAUDEVICEINFO@@PEAXPEAU_HIDP_CAPS@@PEAU_HID_COLLECTIO.c)
 *     ?AllocateHidDesc@@YAPEAUtagHIDDESC@@PEAUDEVICEINFO@@PEAXPEAU_HIDP_CAPS@@PEAU_HID_COLLECTION_INFORMATION@@PEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@@Z @ 0x1C01D3DC4 (-AllocateHidDesc@@YAPEAUtagHIDDESC@@PEAUDEVICEINFO@@PEAXPEAU_HIDP_CAPS@@PEAU_HID_COLLECTION_INFO.c)
 *     ?HidGetCaps@@YAJPEAU_DEVICE_OBJECT@@PEAU_HIDP_PREPARSED_DATA@@PEAU_HIDP_CAPS@@@Z @ 0x1C01D40C0 (-HidGetCaps@@YAJPEAU_DEVICE_OBJECT@@PEAU_HIDP_PREPARSED_DATA@@PEAU_HIDP_CAPS@@@Z.c)
 *     FreeHidDesc @ 0x1C01D501C (FreeHidDesc.c)
 */

struct tagHIDDESC *__fastcall HidCreateDeviceInfo(struct DEVICEINFO *a1)
{
  struct tagHIDDESC *v2; // rdi
  struct _DEVICE_OBJECT *v3; // rbx
  PIRP v4; // rax
  struct _FILE_OBJECT *v5; // r14
  NTSTATUS Status; // eax
  void *OutputBuffer; // rsi
  PIRP v8; // rax
  NTSTATUS v9; // eax
  __int64 v11; // rax
  __int16 v12; // dx
  __int16 v13; // cx
  HANDLE Handle; // [rsp+50h] [rbp-79h] BYREF
  _BYTE v15[8]; // [rsp+58h] [rbp-71h] BYREF
  PVOID Object; // [rsp+60h] [rbp-69h] BYREF
  PVOID v17; // [rsp+68h] [rbp-61h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-59h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-41h] BYREF
  struct _HID_COLLECTION_INFORMATION Timeout[2]; // [rsp+98h] [rbp-31h] BYREF
  struct _HIDP_CAPS v21; // [rsp+B0h] [rbp-19h] BYREF

  v2 = 0LL;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v15);
  if ( (int)GetDeviceObjectPointer(
              (struct _UNICODE_STRING *)((char *)a1 + 200),
              0,
              3u,
              &Handle,
              &v17,
              (PDEVICE_OBJECT *)&Object) >= 0 )
  {
    v3 = (struct _DEVICE_OBJECT *)Object;
    ObfReferenceObject(Object);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v4 = IoBuildDeviceIoControlRequest(0xB01A8u, v3, 0LL, 0, Timeout, 0xCu, 0, &Event, &IoStatusBlock);
    v5 = (struct _FILE_OBJECT *)v17;
    if ( !v4 )
      goto LABEL_19;
    v4->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v17;
    Status = IofCallDriver(v3, v4);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status )
      goto LABEL_19;
    OutputBuffer = (void *)Win32AllocPoolNonPaged(Timeout[0].DescriptorSize, 1349022549LL);
    if ( !OutputBuffer )
      goto LABEL_19;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v8 = IoBuildDeviceIoControlRequest(
           0xB0193u,
           v3,
           0LL,
           0,
           OutputBuffer,
           Timeout[0].DescriptorSize,
           0,
           &Event,
           &IoStatusBlock);
    if ( !v8 )
      goto LABEL_18;
    v8->Tail.Overlay.CurrentStackLocation[-1].FileObject = v5;
    v9 = IofCallDriver(v3, v8);
    if ( v9 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v9 = IoStatusBlock.Status;
    }
    if ( v9 || (unsigned int)HidGetCaps(v3, (struct _HIDP_PREPARSED_DATA *)OutputBuffer, &v21) != 1114112 )
      goto LABEL_18;
    if ( v21.UsagePage == 1 )
    {
      if ( v21.Usage && (v21.Usage <= 2u || v21.Usage > 5u && (v21.Usage <= 7u || v21.Usage == 128)) )
        goto LABEL_18;
    }
    else if ( v21.UsagePage == 13 && v21.Usage == 14 )
    {
      v2 = AllocateHidConfigDesc(a1, OutputBuffer, &v21, Timeout, v3, v5);
      if ( v2 )
        goto LABEL_30;
      goto LABEL_18;
    }
    v2 = AllocateHidDesc(a1, (struct _HIDP_PREPARSED_DATA *)OutputBuffer, &v21, Timeout, v3, v5);
    if ( v2 )
    {
      v11 = (__int64)SearchHidTLCInfo(v21.UsagePage, v21.Usage);
      if ( !v11 )
      {
        v11 = AllocateAndLinkHidTLCInfo(v13, v12);
        if ( !v11 )
        {
          FreeHidDesc(v2);
          v2 = 0LL;
          goto LABEL_19;
        }
      }
      ++*(_DWORD *)(v11 + 20);
      *((_QWORD *)a1 + 51) = v11;
LABEL_30:
      ObfDereferenceObject(v3);
      ObfDereferenceObject(v5);
      ZwClose(Handle);
      goto LABEL_20;
    }
LABEL_18:
    Win32FreePool(OutputBuffer);
LABEL_19:
    ObfDereferenceObject(v5);
    ZwClose(Handle);
    ObfDereferenceObject(v3);
  }
LABEL_20:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v15);
  return v2;
}
