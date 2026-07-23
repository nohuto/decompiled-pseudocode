/*
 * XREFs of ViDdiDriverEntry @ 0x1407047E8
 * Callers:
 *     <none>
 * Callees:
 *     IoDeleteDevice @ 0x14007F38C (IoDeleteDevice.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IoCreateDevice @ 0x140472390 (IoCreateDevice.c)
 *     IoWMIRegistrationControl @ 0x14053A994 (IoWMIRegistrationControl.c)
 */

__int64 __fastcall ViDdiDriverEntry(PDRIVER_OBJECT DriverObject)
{
  int v3; // ebx
  __int64 v4; // rdi
  NTSTATUS v5; // esi
  PDEVICE_OBJECT v6; // rax
  struct _DEVICE_OBJECT **v7; // rsi
  struct _DEVICE_OBJECT *v8; // rsi
  NTSTATUS v9; // ebp
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp+8h] BYREF

  DriverObject->MajorFunction[23] = (PDRIVER_DISPATCH)ViDdiDispatchWmi;
  ViDdiDeviceObjectArray = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 8uLL, 0x61446656u);
  if ( !ViDdiDeviceObjectArray )
    return 3221225626LL;
  v3 = 0;
  v4 = 0LL;
  do
  {
    v5 = IoCreateDevice(DriverObject, 4u, 0LL, 0x22u, 0x180u, 0, &DeviceObject);
    if ( v5 < 0 )
      return (unsigned int)v5;
    v6 = DeviceObject;
    v7 = (struct _DEVICE_OBJECT **)ViDdiDeviceObjectArray;
    *(_QWORD *)(v4 + ViDdiDeviceObjectArray) = DeviceObject;
    v4 += 8LL;
    *(_DWORD *)v6->DeviceExtension = v3++;
  }
  while ( !v3 );
  v8 = *v7;
  v8->Flags &= ~0x80u;
  v9 = IoWMIRegistrationControl(v8, 1u);
  if ( v9 >= 0 )
    return 0LL;
  IoDeleteDevice(v8);
  return (unsigned int)v9;
}
