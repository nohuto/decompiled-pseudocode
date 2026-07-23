/*
 * XREFs of _CmGetDeviceInterfaceMappedProperty @ 0x1404E6370
 * Callers:
 *     _PnpDispatchDeviceInterface @ 0x1404E4070 (_PnpDispatchDeviceInterface.c)
 * Callees:
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1404BFAF8 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x1404E64C8 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 */

__int64 __fastcall CmGetDeviceInterfaceMappedProperty(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7,
        int a8,
        _DWORD *a9)
{
  unsigned int DeviceInterfaceMappedPropertyFromRegValue; // r10d
  DEVPROPKEY **v13; // r8
  DEVPROPKEY *v14; // rdx
  DEVPROPKEY **v15; // r8
  unsigned int v16; // r9d
  DEVPROPKEY *v17; // rdx
  __int64 v18; // rcx
  __int64 v20; // rcx

  DeviceInterfaceMappedPropertyFromRegValue = -1073741802;
  *a9 = 0;
  if ( !a4 )
  {
    v13 = &off_1406E9BB0;
    while ( 1 )
    {
      v14 = *v13;
      if ( *v13 && *(_DWORD *)(a5 + 16) == v14->pid )
      {
        v20 = *(_QWORD *)a5 - *(_QWORD *)&v14->fmtid.Data1;
        if ( *(_QWORD *)a5 == *(_QWORD *)&v14->fmtid.Data1 )
          v20 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v14->fmtid.Data4;
        if ( !v20 )
          break;
      }
      LODWORD(a4) = a4 + 1;
      v13 += 2;
      if ( (unsigned int)a4 >= 3 )
        goto LABEL_6;
    }
    DeviceInterfaceMappedPropertyFromRegValue = CmGetDeviceInterfaceMappedPropertyFromRegValue(
                                                  a1,
                                                  a2,
                                                  a3,
                                                  a5,
                                                  a6,
                                                  a7,
                                                  a8,
                                                  a9);
    if ( DeviceInterfaceMappedPropertyFromRegValue != -1073741802 )
      return DeviceInterfaceMappedPropertyFromRegValue;
LABEL_6:
    v15 = &off_1406E9FB0;
    v16 = 0;
    while ( 1 )
    {
      v17 = *v15;
      if ( *(_DWORD *)(a5 + 16) == (*v15)->pid )
      {
        v18 = *(_QWORD *)a5 - *(_QWORD *)&v17->fmtid.Data1;
        if ( *(_QWORD *)a5 == *(_QWORD *)&v17->fmtid.Data1 )
          v18 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v17->fmtid.Data4;
        if ( !v18 )
          break;
      }
      ++v16;
      v15 += 2;
      if ( v16 >= 4 )
        return DeviceInterfaceMappedPropertyFromRegValue;
    }
    return (unsigned int)CmGetDeviceInterfaceMappedPropertyFromComposite(
                           (_DWORD)a1,
                           a2,
                           a3,
                           a5,
                           (__int64)a6,
                           a7,
                           a8,
                           (__int64)a9);
  }
  return DeviceInterfaceMappedPropertyFromRegValue;
}
