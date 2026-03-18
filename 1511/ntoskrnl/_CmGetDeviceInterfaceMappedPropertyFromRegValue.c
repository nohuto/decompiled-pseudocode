/*
 * XREFs of _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x14045D154
 * Callers:
 *     _CmGetDeviceInterfaceMappedProperty @ 0x140441914 (_CmGetDeviceInterfaceMappedProperty.c)
 *     _CmGetDeviceInterfaceMappedPropertyKeys @ 0x140697B48 (_CmGetDeviceInterfaceMappedPropertyKeys.c)
 * Callees:
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     _SysCtxRegOpenKey @ 0x14043BE70 (_SysCtxRegOpenKey.c)
 *     _CmIsDeviceInterfaceEnabled @ 0x14043F358 (_CmIsDeviceInterfaceEnabled.c)
 *     _PnpCtxRegQueryValueIndirect @ 0x140441644 (_PnpCtxRegQueryValueIndirect.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x140442160 (_CmOpenDeviceInterfaceRegKey.c)
 *     _PnpCtxRegQueryValue @ 0x14045D6F8 (_PnpCtxRegQueryValue.c)
 */

__int64 __fastcall CmGetDeviceInterfaceMappedPropertyFromRegValue(
        __int64 *a1,
        const WCHAR *a2,
        void *a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        int a7,
        _DWORD *a8)
{
  _DWORD *v8; // rdx
  _DWORD *v10; // rax
  _DWORD *v11; // rcx
  __int64 v12; // r12
  int IsDeviceInterfaceEnabled; // ebx
  int v16; // r14d
  unsigned int v17; // r11d
  unsigned int v18; // r10d
  DEVPROPKEY **v19; // r8
  DEVPROPKEY *v20; // r9
  DEVPROPKEY **v21; // r15
  int v22; // ecx
  __int64 v23; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  int ValueIndirect; // edi
  __int64 v28; // rax
  HANDLE v29; // rdx
  __int64 v30; // rcx
  int v31; // eax
  int v32; // [rsp+40h] [rbp-20h] BYREF
  int v33; // [rsp+44h] [rbp-1Ch] BYREF
  HANDLE v34; // [rsp+48h] [rbp-18h] BYREF
  HANDLE v35; // [rsp+50h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-8h] BYREF

  v8 = a5;
  v10 = a8;
  v11 = 0LL;
  v12 = a6;
  Handle = 0LL;
  *a5 = 0;
  IsDeviceInterfaceEnabled = 0;
  *v10 = 0;
  v35 = 0LL;
  v34 = 0LL;
  v33 = 0;
  v32 = 0;
  if ( v12 )
  {
    v16 = a7;
    v12 &= -(__int64)(a7 != 0);
    v11 = 0LL;
  }
  else
  {
    v16 = 0;
  }
  v17 = *(_DWORD *)(a4 + 16);
  if ( v17 < 2 )
    return (unsigned int)-1073741264;
  v18 = 0;
  v19 = &off_1406A1A38;
  while ( 1 )
  {
    v20 = *v19;
    v21 = v19;
    if ( v17 == (*v19)->pid )
      break;
LABEL_6:
    ++v18;
    v19 += 2;
    v21 = 0LL;
    if ( v18 >= 3 )
      goto LABEL_11;
  }
  v11 = (_DWORD *)(*(_QWORD *)a4 - *(_QWORD *)&v20->fmtid.Data1);
  if ( *(_QWORD *)a4 == *(_QWORD *)&v20->fmtid.Data1 )
    v11 = (_DWORD *)(*(_QWORD *)(a4 + 8) - *(_QWORD *)v20->fmtid.Data4);
  if ( v11 )
  {
    v11 = 0LL;
    goto LABEL_6;
  }
LABEL_11:
  if ( !v21 )
    return (unsigned int)-1073741264;
  if ( !a3 )
  {
    IsDeviceInterfaceEnabled = CmOpenDeviceInterfaceRegKey(
                                 (__int64)a1,
                                 (__int64)a2,
                                 0x30u,
                                 (__int64)v20,
                                 1,
                                 (char)v11,
                                 (__int64)&Handle,
                                 v11);
    if ( IsDeviceInterfaceEnabled >= 0 )
    {
      v8 = a5;
      goto LABEL_15;
    }
    goto LABEL_23;
  }
LABEL_15:
  v22 = *(_DWORD *)(a4 + 16);
  if ( v22 == 2 )
  {
    v28 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data1 )
      v28 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data4;
    if ( !v28 )
    {
      v29 = Handle;
      if ( a3 )
        v29 = a3;
      if ( a1 )
        v30 = *a1;
      else
        v30 = 0LL;
      v31 = SysCtxRegOpenKey(v30, (__int64)v29, (__int64)L"Device Parameters", 0, 1u, (__int64)&v34);
      if ( v31 != -1073741772 && v31 != -1073741444 )
      {
        if ( v31 < 0 )
        {
          IsDeviceInterfaceEnabled = v31;
          goto LABEL_23;
        }
        v32 = v16;
        ValueIndirect = PnpCtxRegQueryValueIndirect((__int64)a1, (__int64)v34, (__int64)L"FriendlyName");
        ZwClose(v34);
        if ( ValueIndirect != -1073741772 && ValueIndirect != -1073741444 )
        {
          if ( !ValueIndirect || ValueIndirect == -1073741789 )
          {
            *a8 = v32;
            *a5 = 18;
            if ( ValueIndirect || !v16 )
              IsDeviceInterfaceEnabled = -1073741789;
            goto LABEL_23;
          }
LABEL_62:
          IsDeviceInterfaceEnabled = ValueIndirect;
          goto LABEL_23;
        }
      }
      goto LABEL_53;
    }
  }
  if ( v22 == 3 )
  {
    v23 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_Enabled.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_Enabled.fmtid.Data1 )
      v23 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_Enabled.fmtid.Data4;
    if ( !v23 )
    {
      *a8 = 1;
      *v8 = 17;
      if ( v16 )
      {
        IsDeviceInterfaceEnabled = CmIsDeviceInterfaceEnabled((__int64)a1, a2, (__int64)v19, (__int64)&a6);
        if ( IsDeviceInterfaceEnabled >= 0 )
          *(_BYTE *)v12 = -((_BYTE)a6 != 0);
      }
      else
      {
        IsDeviceInterfaceEnabled = -1073741789;
      }
      goto LABEL_23;
    }
  }
  if ( v22 != 256 )
    goto LABEL_67;
  v25 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
    v25 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
  if ( v25 )
  {
LABEL_67:
    IsDeviceInterfaceEnabled = -1073741264;
    goto LABEL_23;
  }
  IsDeviceInterfaceEnabled = CmOpenDeviceInterfaceRegKey(
                               (__int64)a1,
                               (__int64)a2,
                               0x31u,
                               (__int64)v20,
                               1,
                               0,
                               (__int64)&v35,
                               0LL);
  if ( IsDeviceInterfaceEnabled >= 0 )
  {
    v32 = v16;
    ValueIndirect = PnpCtxRegQueryValue(v26, v35, L"DeviceInstance", &v33, v12, &v32);
    ZwClose(v35);
    if ( ValueIndirect != -1073741772 && ValueIndirect != -1073741444 )
    {
      if ( !ValueIndirect || ValueIndirect == -1073741789 )
      {
        *a8 = v32;
        *a5 = 18;
        if ( ValueIndirect || !v16 )
          IsDeviceInterfaceEnabled = -1073741789;
        goto LABEL_23;
      }
      goto LABEL_62;
    }
LABEL_53:
    IsDeviceInterfaceEnabled = -1073741275;
  }
LABEL_23:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)IsDeviceInterfaceEnabled;
}
