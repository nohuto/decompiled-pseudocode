/*
 * XREFs of _CmSetDeviceInterfaceMappedProperty @ 0x140576F88
 * Callers:
 *     _PnpDispatchDeviceInterface @ 0x1404E4070 (_PnpDispatchDeviceInterface.c)
 *     _CmDeleteDeviceInterfaceWorker @ 0x1406D8330 (_CmDeleteDeviceInterfaceWorker.c)
 * Callees:
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1404E9784 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x1406DC850 (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x1406DE838 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 */

__int64 __fastcall CmSetDeviceInterfaceMappedProperty(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        int a8)
{
  unsigned int v11; // ebx
  DEVPROPKEY **v12; // r9
  unsigned int v13; // r10d
  DEVPROPKEY *v14; // rdx
  DEVPROPKEY **v15; // rdx
  unsigned int v16; // r8d
  DEVPROPKEY *v17; // r9
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx

  v11 = -1073741802;
  if ( !a4 )
  {
    v12 = &off_1406E9BB0;
    v13 = 0;
    while ( 1 )
    {
      v14 = *v12;
      if ( *v12 && *(_DWORD *)(a5 + 16) == v14->pid )
      {
        v19 = *(_QWORD *)a5 - *(_QWORD *)&v14->fmtid.Data1;
        if ( *(_QWORD *)a5 == *(_QWORD *)&v14->fmtid.Data1 )
          v19 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v14->fmtid.Data4;
        if ( !v19 )
          break;
      }
      ++v13;
      v12 += 2;
      if ( v13 >= 3 )
        goto LABEL_6;
    }
    if ( a6 < 2 )
      v20 = CmDeleteDeviceInterfaceMappedPropertyFromRegValue(a1, a2, a3, a5);
    else
      v20 = CmSetDeviceInterfaceMappedPropertyFromRegValue(a1, a2, a3, a5, a6, a7, a8);
    v11 = v20;
    if ( v20 >= 0 )
      PnpObjectRaisePropertyChangeEvent(a1, a2, 3LL, a3, 0LL, a5);
    if ( v11 != -1073741802 )
      return v11;
LABEL_6:
    v15 = &off_1406E9FB0;
    v16 = 0;
    while ( 1 )
    {
      v17 = *v15;
      if ( *(_DWORD *)(a5 + 16) == (*v15)->pid )
      {
        v21 = *(_QWORD *)a5 - *(_QWORD *)&v17->fmtid.Data1;
        if ( *(_QWORD *)a5 == *(_QWORD *)&v17->fmtid.Data1 )
          v21 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v17->fmtid.Data4;
        if ( !v21 )
          break;
      }
      ++v16;
      v15 += 2;
      if ( v16 >= 4 )
        return v11;
    }
    return (unsigned int)-1073741790;
  }
  return v11;
}
