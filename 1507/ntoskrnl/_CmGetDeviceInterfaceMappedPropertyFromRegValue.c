/*
 * XREFs of _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x140546BD0
 * Callers:
 *     _CmGetDeviceInterfaceMappedProperty @ 0x14043FA98 (_CmGetDeviceInterfaceMappedProperty.c)
 *     _CmGetDeviceInterfaceMappedPropertyKeys @ 0x140717C04 (_CmGetDeviceInterfaceMappedPropertyKeys.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x140025FE8 (RtlStringCbLengthW.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     _SysCtxRegOpenKey @ 0x140435B90 (_SysCtxRegOpenKey.c)
 *     _CmIsDeviceInterfaceEnabled @ 0x140436A7C (_CmIsDeviceInterfaceEnabled.c)
 *     _PnpCtxRegQueryValueIndirect @ 0x14043DFB0 (_PnpCtxRegQueryValueIndirect.c)
 *     _PnpCtxRegQueryValue @ 0x14043E1AC (_PnpCtxRegQueryValue.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x14043F154 (_CmOpenDeviceInterfaceRegKey.c)
 */

__int64 __fastcall CmGetDeviceInterfaceMappedPropertyFromRegValue(
        __int64 a1,
        const WCHAR *a2,
        char *a3,
        __int64 a4,
        _DWORD *pcbLength,
        __int64 a6,
        int a7,
        int *a8)
{
  _DWORD *v8; // rdx
  __int64 *v9; // r10
  int *v10; // r12
  __int64 v11; // r15
  int IsDeviceInterfaceEnabled; // ebx
  int v15; // r14d
  unsigned int v16; // r13d
  unsigned int v17; // r11d
  DEVPROPKEY **v18; // r8
  DEVPROPKEY *v19; // r9
  DEVPROPKEY **v20; // rax
  __int64 v21; // rcx
  int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rcx
  int ValueIndirect; // edi
  __int64 v27; // rax
  __int64 v28; // rax
  char *v29; // rdx
  __int64 v30; // rcx
  int v31; // eax
  _DWORD *v32; // rdx
  int v33; // [rsp+40h] [rbp-20h] BYREF
  int v34; // [rsp+44h] [rbp-1Ch] BYREF
  HANDLE v35; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-10h] BYREF
  HANDLE v37; // [rsp+58h] [rbp-8h] BYREF

  v8 = pcbLength;
  v9 = (__int64 *)a1;
  v10 = a8;
  v11 = a6;
  v37 = 0LL;
  *pcbLength = 0;
  IsDeviceInterfaceEnabled = 0;
  *v10 = 0;
  Handle = 0LL;
  v35 = 0LL;
  v34 = 0;
  v33 = 0;
  if ( v11 )
  {
    v15 = a7;
    v11 &= -(__int64)(a7 != 0);
  }
  else
  {
    v15 = 0;
  }
  v16 = *(_DWORD *)(a4 + 16);
  if ( v16 < 2 )
    return (unsigned int)-1073741264;
  v17 = 0;
  v18 = &off_140721C78;
  while ( 1 )
  {
    v19 = *v18;
    if ( v16 == (*v18)->pid )
    {
      v21 = *(_QWORD *)a4 - *(_QWORD *)&v19->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v19->fmtid.Data1 )
        v21 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v19->fmtid.Data4;
      if ( !v21 )
        break;
    }
    ++v17;
    v18 += 2;
    v20 = 0LL;
    if ( v17 >= 3 )
      goto LABEL_12;
  }
  v20 = v18;
LABEL_12:
  if ( !v20 )
    return (unsigned int)-1073741264;
  if ( !a3 )
  {
    IsDeviceInterfaceEnabled = CmOpenDeviceInterfaceRegKey(
                                 v9,
                                 (__int64)a2,
                                 0x30u,
                                 (__int64)v19,
                                 1,
                                 0,
                                 (__int64)&v37,
                                 0LL);
    if ( IsDeviceInterfaceEnabled < 0 )
      goto LABEL_28;
    v8 = pcbLength;
    v9 = (__int64 *)a1;
  }
  v22 = *(_DWORD *)(a4 + 16);
  if ( v22 == 2 )
  {
    v28 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data1 )
      v28 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data4;
    if ( !v28 )
    {
      v29 = (char *)v37;
      if ( a3 )
        v29 = a3;
      if ( v9 )
        v30 = *v9;
      else
        v30 = 0LL;
      v31 = SysCtxRegOpenKey(v30, v29, L"Device Parameters", 0, 1u, &v35);
      if ( v31 != -1073741772 && v31 != -1073741444 )
      {
        if ( v31 < 0 )
        {
          IsDeviceInterfaceEnabled = v31;
          goto LABEL_28;
        }
        v33 = v15;
        ValueIndirect = PnpCtxRegQueryValueIndirect(a1, (__int64)v35, (__int64)L"FriendlyName");
        ZwClose(v35);
        if ( ValueIndirect != -1073741772 && ValueIndirect != -1073741444 )
        {
          if ( !ValueIndirect || ValueIndirect == -1073741789 )
          {
            v32 = pcbLength;
            *v10 = v33;
            *v32 = 18;
            if ( ValueIndirect || !v15 )
              IsDeviceInterfaceEnabled = -1073741789;
            *v32 = *v32;
            if ( RtlStringCbLengthW((STRSAFE_PCNZWCH)v11, (unsigned int)*v10, (size_t *)&pcbLength) >= 0 )
              *v10 = (_DWORD)pcbLength + 2;
            goto LABEL_28;
          }
LABEL_63:
          IsDeviceInterfaceEnabled = ValueIndirect;
          goto LABEL_28;
        }
      }
      goto LABEL_54;
    }
  }
  if ( v22 == 3 )
  {
    v27 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_Enabled.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_Enabled.fmtid.Data1 )
      v27 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_Enabled.fmtid.Data4;
    if ( !v27 )
    {
      *v10 = 1;
      *v8 = 17;
      if ( v15 )
      {
        IsDeviceInterfaceEnabled = CmIsDeviceInterfaceEnabled((__int64)v9, a2, (__int64)v18, (__int64)&a8);
        if ( IsDeviceInterfaceEnabled >= 0 )
          *(_BYTE *)v11 = -((_BYTE)a8 != 0);
      }
      else
      {
        IsDeviceInterfaceEnabled = -1073741789;
      }
      goto LABEL_28;
    }
  }
  if ( v22 == 256 )
  {
    v23 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
      v23 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
    if ( !v23 )
    {
      IsDeviceInterfaceEnabled = CmOpenDeviceInterfaceRegKey(
                                   v9,
                                   (__int64)a2,
                                   0x31u,
                                   (__int64)v19,
                                   1,
                                   0,
                                   (__int64)&Handle,
                                   0LL);
      if ( IsDeviceInterfaceEnabled < 0 )
        goto LABEL_28;
      v33 = v15;
      ValueIndirect = PnpCtxRegQueryValue(v24, Handle, (__int64)L"DeviceInstance", (__int64)&v34, v11, (__int64)&v33);
      ZwClose(Handle);
      if ( ValueIndirect != -1073741772 && ValueIndirect != -1073741444 )
      {
        if ( !ValueIndirect || ValueIndirect == -1073741789 )
        {
          *v10 = v33;
          *pcbLength = 18;
          if ( ValueIndirect || !v15 )
            IsDeviceInterfaceEnabled = -1073741789;
          goto LABEL_28;
        }
        goto LABEL_63;
      }
LABEL_54:
      IsDeviceInterfaceEnabled = -1073741275;
      goto LABEL_28;
    }
  }
  IsDeviceInterfaceEnabled = -1073741264;
LABEL_28:
  if ( v37 )
    ZwClose(v37);
  return (unsigned int)IsDeviceInterfaceEnabled;
}
