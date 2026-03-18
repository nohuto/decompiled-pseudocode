/*
 * XREFs of IopShutdownBaseFileSystems @ 0x1403DA1F0
 * Callers:
 *     IoShutdownSystem @ 0x1403D9EDC (IoShutdownSystem.c)
 * Callees:
 *     KeInitializeEvent @ 0x14002DEA0 (KeInitializeEvent.c)
 *     IoGetAttachedDevice @ 0x14002DEC0 (IoGetAttachedDevice.c)
 *     IofCallDriver @ 0x14002E060 (IofCallDriver.c)
 *     KeResetEvent @ 0x14002E630 (KeResetEvent.c)
 *     IopDecrementDeviceObjectRef @ 0x14002ECF0 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14002EDD0 (IopIncrementDeviceObjectRefCount.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     ObfReferenceObject @ 0x14006A060 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     IoBuildSynchronousFsdRequest @ 0x1404CDF10 (IoBuildSynchronousFsdRequest.c)
 */

LONG_PTR __fastcall IopShutdownBaseFileSystems(LONG_PTR *a1)
{
  LONG_PTR *v2; // rbx
  LONG_PTR result; // rax
  PDEVICE_OBJECT v4; // rsi
  PDEVICE_OBJECT AttachedDevice; // rbx
  IRP *v6; // rax
  LONG_PTR v7; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  KeInitializeEvent(&Event, NotificationEvent, 0);
  v2 = (LONG_PTR *)*a1;
  result = *(_QWORD *)*a1;
  if ( *(LONG_PTR **)(*a1 + 8) != a1 || *(LONG_PTR **)(result + 8) != v2 )
    __fastfail(3u);
  *a1 = result;
  *(_QWORD *)(result + 8) = a1;
  while ( v2 != a1 )
  {
    *v2 = 0LL;
    v2[1] = 0LL;
    ObfReferenceObject(v2 - 10);
    IopIncrementDeviceObjectRefCount((ULONG_PTR)(v2 - 10), 1);
    AttachedDevice = (PDEVICE_OBJECT)(v2 - 10);
    v4 = AttachedDevice;
    if ( AttachedDevice->AttachedDevice )
      AttachedDevice = IoGetAttachedDevice(AttachedDevice);
    v6 = IoBuildSynchronousFsdRequest(0x10u, AttachedDevice, 0LL, 0, 0LL, &Event, &IoStatusBlock);
    if ( v6 && IofCallDriver(AttachedDevice, v6) == 259 )
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v2 = (LONG_PTR *)*a1;
    v7 = *(_QWORD *)*a1;
    if ( *(LONG_PTR **)(*a1 + 8) != a1 || *(LONG_PTR **)(v7 + 8) != v2 )
      __fastfail(3u);
    *a1 = v7;
    *(_QWORD *)(v7 + 8) = a1;
    KeResetEvent(&Event);
    IopDecrementDeviceObjectRef((ULONG_PTR)v4, 0);
    result = ObfDereferenceObject(v4);
  }
  return result;
}
