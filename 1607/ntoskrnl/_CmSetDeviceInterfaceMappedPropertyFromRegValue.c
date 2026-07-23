/*
 * XREFs of _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x1406DE838
 * Callers:
 *     _CmSetDeviceInterfaceMappedProperty @ 0x140576F88 (_CmSetDeviceInterfaceMappedProperty.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x1404DBA84 (_CmOpenDeviceInterfaceRegKey.c)
 *     _PnpCtxRegCreateKey @ 0x140512D88 (_PnpCtxRegCreateKey.c)
 *     _PnpCtxRegSetValue @ 0x140512E00 (_PnpCtxRegSetValue.c)
 */

__int64 __fastcall CmSetDeviceInterfaceMappedPropertyFromRegValue(
        __int64 a1,
        __int64 a2,
        char *a3,
        __int64 a4,
        unsigned int a5,
        void *a6,
        ULONG a7)
{
  unsigned int v7; // r11d
  int v8; // ebx
  __int64 v13; // r9
  DEVPROPKEY **v14; // rcx
  DEVPROPKEY *v15; // r10
  DEVPROPKEY **v16; // r8
  __int64 v17; // rdx
  int v18; // ecx
  int v19; // ecx
  __int64 v20; // rax
  char *v21; // rdx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  HANDLE v29; // [rsp+40h] [rbp-10h] BYREF
  HANDLE v30; // [rsp+48h] [rbp-8h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+38h] BYREF

  v7 = *(_DWORD *)(a4 + 16);
  v8 = 0;
  v30 = 0LL;
  v29 = 0LL;
  Handle = 0LL;
  if ( v7 < 2 )
    return (unsigned int)-1073741264;
  v13 = 0LL;
  v14 = &off_1406E9BB0;
  do
  {
    v15 = *v14;
    v16 = v14;
    if ( v7 == (*v14)->pid )
    {
      v17 = *(_QWORD *)a4 - *(_QWORD *)&v15->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v15->fmtid.Data1 )
        v17 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v15->fmtid.Data4;
      if ( !v17 )
        break;
    }
    v16 = 0LL;
    v13 = (unsigned int)(v13 + 1);
    v14 += 2;
  }
  while ( (unsigned int)v13 < 3 );
  if ( !v16 )
    return (unsigned int)-1073741264;
  v18 = *((_DWORD *)v16 + 2);
  if ( a5 != v18 )
  {
    if ( a5 == 25 )
    {
      if ( v18 != 18 )
        return (unsigned int)-1073741811;
    }
    else if ( a5 >= 2 )
    {
      return (unsigned int)-1073741811;
    }
  }
  if ( a3 || (v8 = CmOpenDeviceInterfaceRegKey(a1, a2, 0x30u, v13, 1, 0, (__int64)&v30, 0LL), v8 >= 0) )
  {
    v19 = *(_DWORD *)(a4 + 16);
    if ( v19 == 2 )
    {
      v20 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data1 )
        v20 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data4;
      if ( !v20 )
      {
        v21 = (char *)v30;
        if ( a3 )
          v21 = a3;
        v22 = PnpCtxRegCreateKey(a1, v21, L"Device Parameters", v13, 2u, 0LL, &v29, 0LL);
        if ( v22 == -1073741444 )
          goto LABEL_24;
        if ( v22 < 0 )
          goto LABEL_26;
        v22 = PnpCtxRegSetValue(v23, v29, L"FriendlyName", 1u, a6, a7);
LABEL_36:
        if ( v22 == -1073741444 )
        {
LABEL_24:
          v8 = -1073741772;
          goto LABEL_48;
        }
        if ( v22 >= 0 )
          goto LABEL_48;
LABEL_26:
        v8 = v22;
        goto LABEL_48;
      }
    }
    if ( v19 != 256 )
      goto LABEL_45;
    v24 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
      v24 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
    if ( v24 )
    {
LABEL_45:
      if ( v19 == 3 )
      {
        v26 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_Enabled.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_Enabled.fmtid.Data1 )
          v26 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_Enabled.fmtid.Data4;
        if ( !v26 )
          goto LABEL_46;
      }
      if ( v19 != 4 )
        goto LABEL_47;
      v27 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_ClassGuid.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_ClassGuid.fmtid.Data1 )
        v27 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_ClassGuid.fmtid.Data4;
      if ( v27 )
LABEL_47:
        v8 = -1073741264;
      else
LABEL_46:
        v8 = -1073741790;
      goto LABEL_48;
    }
    v8 = CmOpenDeviceInterfaceRegKey(a1, a2, 0x31u, v13, 2, 0, (__int64)&Handle, 0LL);
    if ( v8 >= 0 )
    {
      v22 = PnpCtxRegSetValue(v25, Handle, L"DeviceInstance", 1u, a6, a7);
      goto LABEL_36;
    }
  }
LABEL_48:
  if ( Handle )
    ZwClose(Handle);
  if ( v29 )
    ZwClose(v29);
  if ( v30 )
    ZwClose(v30);
  return (unsigned int)v8;
}
