/*
 * XREFs of IoSynchronousCallDriver @ 0x140127F70
 * Callers:
 *     IoForwardIrpSynchronously @ 0x140546470 (IoForwardIrpSynchronously.c)
 *     FsRtlPrepareMdlWriteEx @ 0x140558E04 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x140558EF8 (FsRtlMdlReadEx.c)
 *     WmipGetFilePDO @ 0x140582DB8 (WmipGetFilePDO.c)
 *     PopAcquireCoolingInterface @ 0x1405C3B58 (PopAcquireCoolingInterface.c)
 *     PopBatteryInitialize @ 0x1406B6898 (PopBatteryInitialize.c)
 *     PopBatteryQueryEstimatedTime @ 0x1406B6A2C (PopBatteryQueryEstimatedTime.c)
 *     PopBatteryQueryStatus @ 0x1406B6AAC (PopBatteryQueryStatus.c)
 *     PopBatteryReadTag @ 0x1406B6C28 (PopBatteryReadTag.c)
 * Callees:
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall IoSynchronousCallDriver(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS result; // eax
  __int16 Object; // [rsp+30h] [rbp-28h] BYREF
  char v6; // [rsp+32h] [rbp-26h]
  int v7; // [rsp+34h] [rbp-24h]
  _QWORD v8[4]; // [rsp+38h] [rbp-20h] BYREF

  v7 = 0;
  Object = 0;
  v6 = 6;
  v8[1] = v8;
  v8[0] = v8;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)SmKmGenericCompletion;
  CurrentStackLocation[-1].Context = &Object;
  CurrentStackLocation[-1].Control = -32;
  result = IofCallDriver(a1, a2);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Object, Suspended, 0, 0, 0LL);
    return a2->IoStatus.Status;
  }
  return result;
}
