/*
 * XREFs of ACPIRootDeviceNotifyPepDiscoverDevice @ 0x1C00048D4
 * Callers:
 *     ACPIRootInitialize @ 0x1C006640C (ACPIRootInitialize.c)
 * Callees:
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C0004A44 (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 */

__int64 ACPIRootDeviceNotifyPepDiscoverDevice()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  __int64 result; // rax
  _QWORD v3[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v4; // [rsp+40h] [rbp-28h]
  struct _KEVENT Event; // [rsp+48h] [rbp-20h] BYREF

  v0 = RootDeviceExtension;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v1 = *(_QWORD *)(v0 + 704);
  v3[0] = 0LL;
  v3[1] = &Event;
  v4 = 3221225473LL;
  result = AcpiNotifyPlExtDiscoverDeviceAsync(v1, ACPIRootDeviceDiscoverDeviceCompletion, v3);
  if ( (_DWORD)result == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    result = (unsigned int)v4;
  }
  if ( (int)result >= 0 && v3[0] )
  {
    *(_QWORD *)(v0 + 888) = v3[0];
    _InterlockedOr64((volatile signed __int64 *)(v0 + 904), 0x4000000uLL);
  }
  _InterlockedOr64((volatile signed __int64 *)(v0 + 904), 0x2000000uLL);
  return result;
}
