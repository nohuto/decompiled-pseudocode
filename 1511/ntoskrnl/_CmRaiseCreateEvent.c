/*
 * XREFs of _CmRaiseCreateEvent @ 0x140517BFC
 * Callers:
 *     _CmCreateDeviceContainerWorker @ 0x1404ED3C0 (_CmCreateDeviceContainerWorker.c)
 *     _CmCreateDeviceWorker @ 0x1404F0F08 (_CmCreateDeviceWorker.c)
 *     _CmCreateDeviceInterfaceWorker @ 0x140517AF0 (_CmCreateDeviceInterfaceWorker.c)
 *     _CmCreateInterfaceClassWorker @ 0x140517DF4 (_CmCreateInterfaceClassWorker.c)
 *     _CmCreateInstallerClassWorker @ 0x1406929FC (_CmCreateInstallerClassWorker.c)
 * Callees:
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x14043CB7C (_CmMapCmObjectTypeToPnpObjectType.c)
 *     _PnpObjectRaiseCreateEvent @ 0x140517C54 (_PnpObjectRaiseCreateEvent.c)
 */

__int64 (__fastcall *__fastcall CmRaiseCreateEvent(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4))(__int64, __int64, _QWORD, __int64, _QWORD *)
{
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 (__fastcall *result)(__int64, __int64, _QWORD, __int64, _QWORD *); // rax
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF

  v8 = CmMapCmObjectTypeToPnpObjectType(a3);
  PnpObjectRaiseCreateEvent(a1, v9, v8);
  result = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD *))(a1 + 328);
  if ( result )
  {
    v11[0] = a4;
    return (__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, _QWORD *))result(a1, a2, a3, 2LL, v11);
  }
  return result;
}
