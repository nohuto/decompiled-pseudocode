/*
 * XREFs of _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1404BFAF8
 * Callers:
 *     _CmGetDeviceInterfaceMappedProperty @ 0x1404E6370 (_CmGetDeviceInterfaceMappedProperty.c)
 *     _CmGetDeviceInterfaceMappedPropertyKeys @ 0x1406DD288 (_CmGetDeviceInterfaceMappedPropertyKeys.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x1404DBA84 (_CmOpenDeviceInterfaceRegKey.c)
 *     _CmIsDeviceInterfaceEnabled @ 0x1404DDFA4 (_CmIsDeviceInterfaceEnabled.c)
 *     _SysCtxRegOpenKey @ 0x1404E0B1C (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegQueryValueIndirect @ 0x1404E4524 (_PnpCtxRegQueryValueIndirect.c)
 *     _PnpCtxRegQueryValue @ 0x1404E7028 (_PnpCtxRegQueryValue.c)
 */

__int64 __fastcall CmGetDeviceInterfaceMappedPropertyFromRegValue(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        int a7,
        _DWORD *a8)
{
  _DWORD *v8; // rdx
  _DWORD *v10; // rax
  __int64 v11; // rcx
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
  __int64 v24; // rcx
  int ValueIndirect; // edi
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // edx
  __int64 v30; // rcx
  int v31; // eax
  _DWORD *v32; // rax
  int v33; // [rsp+40h] [rbp-20h] BYREF
  int v34; // [rsp+44h] [rbp-1Ch] BYREF
  HANDLE v35; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-10h] BYREF
  HANDLE v37; // [rsp+58h] [rbp-8h] BYREF
  char v39; // [rsp+B8h] [rbp+58h] BYREF

  v8 = a5;
  v10 = a8;
  v11 = 0LL;
  v12 = a6;
  v37 = 0LL;
  *a5 = 0;
  IsDeviceInterfaceEnabled = 0;
  *v10 = 0;
  Handle = 0LL;
  v35 = 0LL;
  v34 = 0;
  v33 = 0;
  v39 = 0;
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
  v19 = &off_1406E9BB0;
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
  v11 = *(_QWORD *)a4 - *(_QWORD *)&v20->fmtid.Data1;
  if ( *(_QWORD *)a4 == *(_QWORD *)&v20->fmtid.Data1 )
    v11 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v20->fmtid.Data4;
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
    IsDeviceInterfaceEnabled = CmOpenDeviceInterfaceRegKey((_DWORD)a1, a2, 48, (_DWORD)v20, 1, v11, (__int64)&v37, v11);
    if ( IsDeviceInterfaceEnabled >= 0 )
    {
      v8 = a5;
      goto LABEL_15;
    }
    goto LABEL_27;
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
      v29 = (int)v37;
      if ( a3 )
        v29 = a3;
      if ( a1 )
        v30 = *a1;
      else
        LODWORD(v30) = 0;
      v31 = SysCtxRegOpenKey(v30, v29, (unsigned int)L"Device Parameters", 0, 1, (__int64)&v35);
      if ( v31 != -1073741772 && v31 != -1073741444 )
      {
        if ( v31 < 0 )
        {
          IsDeviceInterfaceEnabled = v31;
          goto LABEL_27;
        }
        v33 = v16;
        ValueIndirect = PnpCtxRegQueryValueIndirect(
                          (_DWORD)a1,
                          (_DWORD)v35,
                          (unsigned int)L"FriendlyName",
                          (unsigned int)&v34,
                          v12,
                          (__int64)&v33,
                          (__int64)&v39);
        ZwClose(v35);
        if ( ValueIndirect != -1073741772 && ValueIndirect != -1073741444 )
        {
          if ( !ValueIndirect || ValueIndirect == -1073741789 )
          {
            *a8 = v33;
            v32 = a5;
            *a5 = 18;
            if ( ValueIndirect || !v16 )
              IsDeviceInterfaceEnabled = -1073741789;
            if ( v39 )
              *v32 = 25;
            goto LABEL_27;
          }
LABEL_62:
          IsDeviceInterfaceEnabled = ValueIndirect;
          goto LABEL_27;
        }
      }
      goto LABEL_53;
    }
  }
  if ( v22 == 3 )
  {
    v27 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_Enabled.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_Enabled.fmtid.Data1 )
      v27 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_Enabled.fmtid.Data4;
    if ( !v27 )
    {
      *a8 = 1;
      *v8 = 17;
      if ( v16 )
      {
        IsDeviceInterfaceEnabled = CmIsDeviceInterfaceEnabled(a1, a2, v19, &a6);
        if ( IsDeviceInterfaceEnabled >= 0 )
          *(_BYTE *)v12 = -((_BYTE)a6 != 0);
      }
      else
      {
        IsDeviceInterfaceEnabled = -1073741789;
      }
      goto LABEL_27;
    }
  }
  if ( v22 != 256 )
    goto LABEL_67;
  v23 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
    v23 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
  if ( v23 )
  {
LABEL_67:
    IsDeviceInterfaceEnabled = -1073741264;
    goto LABEL_27;
  }
  IsDeviceInterfaceEnabled = CmOpenDeviceInterfaceRegKey((_DWORD)a1, a2, 49, (_DWORD)v20, 1, 0, (__int64)&Handle, 0LL);
  if ( IsDeviceInterfaceEnabled >= 0 )
  {
    v33 = v16;
    ValueIndirect = PnpCtxRegQueryValue(v24, Handle, L"DeviceInstance", &v34, v12, &v33);
    ZwClose(Handle);
    if ( ValueIndirect != -1073741772 && ValueIndirect != -1073741444 )
    {
      if ( !ValueIndirect || ValueIndirect == -1073741789 )
      {
        *a8 = v33;
        *a5 = 18;
        if ( ValueIndirect || !v16 )
          IsDeviceInterfaceEnabled = -1073741789;
        goto LABEL_27;
      }
      goto LABEL_62;
    }
LABEL_53:
    IsDeviceInterfaceEnabled = -1073741275;
  }
LABEL_27:
  if ( v37 )
    ZwClose(v37);
  return (unsigned int)IsDeviceInterfaceEnabled;
}
