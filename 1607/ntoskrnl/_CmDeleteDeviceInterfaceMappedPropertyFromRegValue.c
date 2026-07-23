/*
 * XREFs of _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x1406DC850
 * Callers:
 *     _CmSetDeviceInterfaceMappedProperty @ 0x140576F88 (_CmSetDeviceInterfaceMappedProperty.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     _PnpCtxRegDeleteValue @ 0x1404D2EA8 (_PnpCtxRegDeleteValue.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x1404DBA84 (_CmOpenDeviceInterfaceRegKey.c)
 *     _SysCtxRegOpenKey @ 0x1404E0B1C (_SysCtxRegOpenKey.c)
 */

__int64 __fastcall CmDeleteDeviceInterfaceMappedPropertyFromRegValue(__int64 *a1, __int64 a2, void *a3, __int64 a4)
{
  unsigned int v4; // r11d
  int v5; // ebx
  unsigned int v10; // r8d
  DEVPROPKEY **v11; // rcx
  DEVPROPKEY *v12; // r9
  DEVPROPKEY **v13; // r10
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // rax
  HANDLE v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  HANDLE v25[5]; // [rsp+40h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+20h] BYREF

  v4 = *(_DWORD *)(a4 + 16);
  v5 = 0;
  v25[0] = 0LL;
  Handle = 0LL;
  if ( v4 < 2 )
    return (unsigned int)-1073741264;
  v10 = 0;
  v11 = &off_1406E9BB0;
  do
  {
    v12 = *v11;
    v13 = v11;
    if ( v4 == (*v11)->pid )
    {
      v14 = *(_QWORD *)a4 - *(_QWORD *)&v12->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v12->fmtid.Data1 )
        v14 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v12->fmtid.Data4;
      if ( !v14 )
        break;
    }
    v13 = 0LL;
    ++v10;
    v11 += 2;
  }
  while ( v10 < 3 );
  if ( v13 )
  {
    if ( a3
      || (v5 = CmOpenDeviceInterfaceRegKey((__int64)a1, a2, 0x30u, (__int64)v12, 1, 0, (__int64)v25, 0LL), v5 >= 0) )
    {
      v15 = *(_DWORD *)(a4 + 16);
      if ( v15 != 2 )
        goto LABEL_40;
      v16 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data1 )
        v16 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data4;
      if ( v16 )
      {
LABEL_40:
        if ( v15 == 3 )
        {
          v21 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_Enabled.fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_Enabled.fmtid.Data1 )
            v21 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_Enabled.fmtid.Data4;
          if ( !v21 )
            goto LABEL_41;
        }
        if ( v15 == 4 )
        {
          v22 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_ClassGuid.fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_ClassGuid.fmtid.Data1 )
            v22 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_ClassGuid.fmtid.Data4;
          if ( !v22 )
            goto LABEL_41;
        }
        if ( v15 != 256 )
          goto LABEL_42;
        v23 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
          v23 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
        if ( v23 )
LABEL_42:
          v5 = -1073741264;
        else
LABEL_41:
          v5 = -1073741790;
      }
      else
      {
        v17 = v25[0];
        if ( a3 )
          v17 = a3;
        if ( a1 )
          v18 = *a1;
        else
          v18 = 0LL;
        v19 = SysCtxRegOpenKey(v18, (__int64)v17, (__int64)L"Device Parameters", 0, 2u, (__int64)&Handle);
        if ( v19 != -1073741772 && v19 != -1073741444 )
        {
          if ( v19 < 0
            || (v19 = PnpCtxRegDeleteValue(v20, Handle, L"FriendlyName"), v19 != -1073741772)
            && v19 != -1073741444
            && v19 < 0 )
          {
            v5 = v19;
          }
        }
      }
    }
    if ( Handle )
      ZwClose(Handle);
    if ( v25[0] )
      ZwClose(v25[0]);
  }
  else
  {
    return (unsigned int)-1073741264;
  }
  return (unsigned int)v5;
}
