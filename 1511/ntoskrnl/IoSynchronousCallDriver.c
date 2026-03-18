/*
 * XREFs of IoSynchronousCallDriver @ 0x1400EB0E0
 * Callers:
 *     IoForwardIrpSynchronously @ 0x1404B48B0 (IoForwardIrpSynchronously.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1404C3814 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x1404C3908 (FsRtlMdlReadEx.c)
 *     WmipGetFilePDO @ 0x14050B798 (WmipGetFilePDO.c)
 *     PopAcquireCoolingInterface @ 0x14054C598 (PopAcquireCoolingInterface.c)
 *     PopBatteryInitialize @ 0x140636B2C (PopBatteryInitialize.c)
 *     PopBatteryQueryEstimatedTime @ 0x140636CC0 (PopBatteryQueryEstimatedTime.c)
 *     PopBatteryQueryStatus @ 0x140636D40 (PopBatteryQueryStatus.c)
 *     PopBatteryReadTag @ 0x140636EBC (PopBatteryReadTag.c)
 * Callees:
 *     IofCallDriver @ 0x14007E4C0 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
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
