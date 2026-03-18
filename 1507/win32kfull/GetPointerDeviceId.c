/*
 * XREFs of GetPointerDeviceId @ 0x1C0039FF0
 * Callers:
 *     IsMouseDeviceOnIgnoreList @ 0x1C0039E04 (IsMouseDeviceOnIgnoreList.c)
 *     ?CheckLegacyPadControlledStatus@@YAXPEAU_DEVICE_OBJECT@@@Z @ 0x1C01CE014 (-CheckLegacyPadControlledStatus@@YAXPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?IsMouseDeviceOnWhiteList@@YAHPEAU_DEVICE_OBJECT@@H@Z @ 0x1C01CE6D4 (-IsMouseDeviceOnWhiteList@@YAHPEAU_DEVICE_OBJECT@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPointerDeviceId(PDEVICE_OBJECT DeviceObject, PUNICODE_STRING Destination)
{
  PIRP v4; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  NTSTATUS Status; // edi
  void *Information; // rbx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  KeInitializeEvent(&Event, NotificationEvent, 0);
  v4 = IoBuildSynchronousFsdRequest(0x1Bu, DeviceObject, 0LL, 0, 0LL, &Event, &IoStatusBlock);
  if ( v4 )
  {
    CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MinorFunction = 19;
    CurrentStackLocation[-1].Parameters.Read.Length = 1;
    v4->IoStatus.Status = -1073741637;
    Status = IofCallDriver(DeviceObject, v4);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status >= 0 )
    {
      Information = (void *)IoStatusBlock.Information;
      Status = RtlAppendUnicodeToString(Destination, (PCWSTR)IoStatusBlock.Information);
      ExFreePoolWithTag(Information, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Status;
}
