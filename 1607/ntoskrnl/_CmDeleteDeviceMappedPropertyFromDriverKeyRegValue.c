/*
 * XREFs of _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x1406DCADC
 * Callers:
 *     _CmSetDeviceMappedProperty @ 0x14050B6D4 (_CmSetDeviceMappedProperty.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     _PnpCtxRegDeleteValue @ 0x1404D2EA8 (_PnpCtxRegDeleteValue.c)
 *     _CmOpenDeviceRegKey @ 0x1404DFCC0 (_CmOpenDeviceRegKey.c)
 */

__int64 __fastcall CmDeleteDeviceMappedPropertyFromDriverKeyRegValue(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // r11d
  unsigned int v5; // r9d
  DEVPROPKEY **v7; // r8
  DEVPROPKEY *v8; // r10
  DEVPROPKEY **v9; // rsi
  __int64 v10; // rcx
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  HANDLE Handle; // [rsp+68h] [rbp+20h] BYREF

  Handle = 0LL;
  v4 = *(_DWORD *)(a3 + 16);
  v5 = 0;
  v7 = &off_1406EC540;
  do
  {
    v8 = *v7;
    v9 = v7;
    if ( v4 == (*v7)->pid )
    {
      v10 = *(_QWORD *)a3 - *(_QWORD *)&v8->fmtid.Data1;
      if ( *(_QWORD *)a3 == *(_QWORD *)&v8->fmtid.Data1 )
        v10 = *(_QWORD *)(a3 + 8) - *(_QWORD *)v8->fmtid.Data4;
      if ( !v10 )
        break;
    }
    v9 = 0LL;
    ++v5;
    v7 += 4;
  }
  while ( v5 < 0xD );
  if ( !v9 )
    return (unsigned int)-1073741802;
  v12 = CmOpenDeviceRegKey(a1, a2, 0x12u, 0, 2, 0, (__int64)&Handle, 0LL);
  v11 = v12;
  if ( v12 == -1073741772 )
  {
    v11 = 0;
    goto LABEL_21;
  }
  if ( v12 >= 0 )
  {
    v14 = PnpCtxRegDeleteValue(v13, Handle, (const WCHAR *)v9[2]);
    if ( v14 == -1073741772 )
      goto LABEL_16;
    if ( v14 == -1073741444 )
      goto LABEL_21;
    if ( v14 >= 0 )
    {
LABEL_16:
      if ( *(_DWORD *)(a3 + 16) == 2 )
      {
        v16 = *(_QWORD *)a3 - *(_QWORD *)&DEVPKEY_Device_DriverDate.fmtid.Data1;
        if ( *(_QWORD *)a3 == *(_QWORD *)&DEVPKEY_Device_DriverDate.fmtid.Data1 )
          v16 = *(_QWORD *)(a3 + 8) - *(_QWORD *)DEVPKEY_Device_DriverDate.fmtid.Data4;
        if ( !v16 )
          PnpCtxRegDeleteValue(v15, Handle, L"DriverDate");
      }
      goto LABEL_21;
    }
    v11 = v14;
  }
LABEL_21:
  if ( Handle )
    ZwClose(Handle);
  return v11;
}
