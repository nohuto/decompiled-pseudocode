/*
 * XREFs of _CmRaisePropertyChangeEvent @ 0x140571678
 * Callers:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140506874 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     _CmSetDeviceRegPropWorker @ 0x140571500 (_CmSetDeviceRegPropWorker.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x1406D9788 (_CmSetInstallerClassRegPropWorker.c)
 * Callees:
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x1404FE32C (_CmMapCmObjectTypeToPnpObjectType.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1405067F4 (_PnpObjectRaisePropertyChangeEvent.c)
 */

__int64 (__fastcall *__fastcall CmRaisePropertyChangeEvent(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5))(__int64, __int64, _QWORD, __int64, __int64 *)
{
  DEVPROPKEY **v9; // rax
  unsigned int v10; // r8d
  unsigned int v11; // edx
  DEVPROPKEY **v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 (__fastcall *result)(__int64, __int64, _QWORD, __int64, __int64 *); // rax
  __int64 v17; // [rsp+30h] [rbp-18h] BYREF
  int v18; // [rsp+38h] [rbp-10h]

  if ( a3 == 1 )
  {
    v9 = &CmDeviceRegPropMap;
    v10 = a3 - 1 + 33;
  }
  else
  {
    if ( a3 != 2 )
      goto LABEL_9;
    v9 = &CmClassRegPropMap;
    v10 = 9;
  }
  v11 = 0;
  do
  {
    v12 = v9;
    if ( *((_DWORD *)v9 + 3) == a5 )
      break;
    v12 = 0LL;
    ++v11;
    v9 += 3;
  }
  while ( v11 < v10 );
  if ( v12 && *v12 )
  {
    v13 = CmMapCmObjectTypeToPnpObjectType(a3);
    PnpObjectRaisePropertyChangeEvent(a1, a2, v13, v15, 0LL, v14);
  }
LABEL_9:
  result = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64 *))(a1 + 336);
  if ( result )
  {
    v17 = a4;
    v18 = a5;
    return (__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, __int64 *))result(a1, a2, a3, 4LL, &v17);
  }
  return result;
}
