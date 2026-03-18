/*
 * XREFs of _CmRaiseDeleteEvent @ 0x1406DBF64
 * Callers:
 *     _CmDeleteDeviceInterfaceWorker @ 0x1406D81F8 (_CmDeleteDeviceInterfaceWorker.c)
 *     _CmDeleteDeviceWorker @ 0x1406D8934 (_CmDeleteDeviceWorker.c)
 *     _CmDeleteInstallerClassWorker @ 0x1406D8F74 (_CmDeleteInstallerClassWorker.c)
 *     _CmDeleteInterfaceClassWorker @ 0x1406D9330 (_CmDeleteInterfaceClassWorker.c)
 *     _CmDeleteDeviceContainerWorker @ 0x1406D9E08 (_CmDeleteDeviceContainerWorker.c)
 * Callees:
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x1404FE32C (_CmMapCmObjectTypeToPnpObjectType.c)
 *     _PnpObjectRaiseDeleteEvent @ 0x1406DC1D8 (_PnpObjectRaiseDeleteEvent.c)
 */

__int64 (__fastcall *__fastcall CmRaiseDeleteEvent(
        __int64 a1,
        __int64 a2,
        unsigned int a3))(__int64, __int64, _QWORD, __int64, _QWORD *)
{
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 (__fastcall *result)(__int64, __int64, _QWORD, __int64, _QWORD *); // rax
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v6 = CmMapCmObjectTypeToPnpObjectType(a3);
  PnpObjectRaiseDeleteEvent(a1, v7, v6);
  result = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD *))(a1 + 336);
  if ( result )
  {
    v9[0] = 0LL;
    return (__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, _QWORD *))result(a1, a2, a3, 3LL, v9);
  }
  return result;
}
