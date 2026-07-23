/*
 * XREFs of IoSynchronousCallDriver @ 0x1400AAB98
 * Callers:
 *     FsRtlGetFileExtents @ 0x1401B8094 (FsRtlGetFileExtents.c)
 *     IoForwardIrpSynchronously @ 0x1404BFF4C (IoForwardIrpSynchronously.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1404D017C (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x1404D0270 (FsRtlMdlReadEx.c)
 *     WmipGetFilePDO @ 0x140546C44 (WmipGetFilePDO.c)
 *     PopAcquireCoolingInterface @ 0x14056CCB8 (PopAcquireCoolingInterface.c)
 *     ?Read@PC_ENVIRONMENT@@SAJPEAX0K_K@Z @ 0x140575240 (-Read@PC_ENVIRONMENT@@SAJPEAX0K_K@Z.c)
 *     ?Write@PC_ENVIRONMENT@@SAJPEAX0K_K@Z @ 0x14061FF4C (-Write@PC_ENVIRONMENT@@SAJPEAX0K_K@Z.c)
 *     PopBatteryInitialize @ 0x14066EFEC (PopBatteryInitialize.c)
 *     PopBatteryQueryEstimatedTime @ 0x14066F180 (PopBatteryQueryEstimatedTime.c)
 *     PopBatteryQueryStatus @ 0x14066F208 (PopBatteryQueryStatus.c)
 *     PopBatteryReadTag @ 0x14066F384 (PopBatteryReadTag.c)
 * Callees:
 *     IofCallDriver @ 0x14002DBE0 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall IoSynchronousCallDriver(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS result; // eax
  __int16 Object; // [rsp+30h] [rbp-28h] BYREF
  char v6; // [rsp+32h] [rbp-26h]
  int v7; // [rsp+34h] [rbp-24h]
  _QWORD v8[4]; // [rsp+38h] [rbp-20h] BYREF

  Object = 0;
  v7 = 0;
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
