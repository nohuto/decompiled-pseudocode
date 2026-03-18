/*
 * XREFs of ?HidGetCaps@@YAJPEAU_DEVICE_OBJECT@@PEAU_HIDP_PREPARSED_DATA@@PEAU_HIDP_CAPS@@@Z @ 0x1C01D40C0
 * Callers:
 *     HidCreateDeviceInfo @ 0x1C01D5214 (HidCreateDeviceInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall HidGetCaps(PDEVICE_OBJECT DeviceObject, struct _HIDP_PREPARSED_DATA *a2, struct _HIDP_CAPS *a3)
{
  _DWORD *v6; // rax
  __int64 (__fastcall **v7)(struct _HIDP_PREPARSED_DATA *, struct _HIDP_CAPS *); // rdi
  GUID *v9; // rax
  PIRP v10; // rax
  NTSTATUS Status; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-38h] BYREF

  v6 = (_DWORD *)Win32AllocPoolNonPaged(40LL, 1751675733LL);
  v7 = (__int64 (__fastcall **)(struct _HIDP_PREPARSED_DATA *, struct _HIDP_CAPS *))v6;
  if ( !v6 )
    return 3221225626LL;
  *v6 = 65576;
  if ( !gpHidInterfaceGuid )
  {
    v9 = (GUID *)Win32AllocPoolNonPaged(16LL, 1751675733LL);
    gpHidInterfaceGuid = v9;
    if ( !v9 )
      goto LABEL_7;
    *v9 = GUID_HID_INTERFACE_HIDPARSE;
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v10 = IoBuildSynchronousFsdRequest(0x1Bu, DeviceObject, 0LL, 0, 0LL, &Event, &IoStatusBlock);
  if ( v10 )
  {
    CurrentStackLocation = v10->Tail.Overlay.CurrentStackLocation;
    v10->RequestorMode = 0;
    v10->IoStatus.Status = -1073741637;
    CurrentStackLocation[-1].MinorFunction = 8;
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = gpHidInterfaceGuid;
    CurrentStackLocation[-1].Parameters.Create.Options = 65576;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)v7;
    Status = IofCallDriver(DeviceObject, v10);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status >= 0 )
      Status = v7[4](a2, a3);
    goto LABEL_12;
  }
LABEL_7:
  Status = -1073741670;
LABEL_12:
  Win32FreePool(v7);
  return (unsigned int)Status;
}
