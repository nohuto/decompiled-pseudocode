/*
 * XREFs of _CmRaiseCreateEvent @ 0x1406DC028
 * Callers:
 *     _CmCreateDeviceWorker @ 0x14050D694 (_CmCreateDeviceWorker.c)
 *     _CmCreateDeviceContainerWorker @ 0x140512FF8 (_CmCreateDeviceContainerWorker.c)
 *     _CmCreateDeviceInterfaceWorker @ 0x1406D73CC (_CmCreateDeviceInterfaceWorker.c)
 *     _CmCreateInstallerClassWorker @ 0x1406D7658 (_CmCreateInstallerClassWorker.c)
 *     _CmCreateInterfaceClassWorker @ 0x1406D7860 (_CmCreateInterfaceClassWorker.c)
 * Callees:
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x1404E12BC (_CmMapCmObjectTypeToPnpObjectType.c)
 *     _PnpObjectRaiseCreateEvent @ 0x1406DC2E4 (_PnpObjectRaiseCreateEvent.c)
 */

__int64 (__fastcall *__fastcall CmRaiseCreateEvent(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4))(__int64, __int64, _QWORD, __int64, _QWORD *)
{
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 (__fastcall *result)(__int64, __int64, _QWORD, __int64, _QWORD *); // rax
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF

  v8 = CmMapCmObjectTypeToPnpObjectType(a3);
  PnpObjectRaiseCreateEvent(a1, v9, v8, v10);
  result = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD *))(a1 + 336);
  if ( result )
  {
    v12[0] = a4;
    return (__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, _QWORD *))result(a1, a2, a3, 2LL, v12);
  }
  return result;
}
