/*
 * XREFs of _CmRaiseDeleteEvent @ 0x140696F64
 * Callers:
 *     _CmDeleteDeviceInterfaceWorker @ 0x1406932CC (_CmDeleteDeviceInterfaceWorker.c)
 *     _CmDeleteDeviceWorker @ 0x140693A0C (_CmDeleteDeviceWorker.c)
 *     _CmDeleteInstallerClassWorker @ 0x14069404C (_CmDeleteInstallerClassWorker.c)
 *     _CmDeleteInterfaceClassWorker @ 0x140694408 (_CmDeleteInterfaceClassWorker.c)
 *     _CmDeleteDeviceContainerWorker @ 0x140694EE8 (_CmDeleteDeviceContainerWorker.c)
 * Callees:
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x14043CB7C (_CmMapCmObjectTypeToPnpObjectType.c)
 *     _PnpObjectRaiseDeleteEvent @ 0x1406970FC (_PnpObjectRaiseDeleteEvent.c)
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
  result = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD *))(a1 + 328);
  if ( result )
  {
    v9[0] = 0LL;
    return (__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, _QWORD *))result(a1, a2, a3, 3LL, v9);
  }
  return result;
}
