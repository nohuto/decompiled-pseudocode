/*
 * XREFs of _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140698E10
 * Callers:
 *     _CmSetDeviceMappedProperty @ 0x1404B126C (_CmSetDeviceMappedProperty.c)
 * Callees:
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     _CmOpenDeviceRegKey @ 0x14043AEB4 (_CmOpenDeviceRegKey.c)
 *     _PnpCtxRegSetValue @ 0x14045D128 (_PnpCtxRegSetValue.c)
 */

__int64 __fastcall CmSetDeviceMappedPropertyFromInstanceKeyRegValue(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        int a5,
        _BYTE *a6,
        ULONG a7)
{
  int v7; // r11d
  int v8; // ebx
  HANDLE v11; // rdx
  DEVPROPKEY **v12; // r9
  __int64 v14; // r15
  unsigned int i; // r10d
  DEVPROPKEY *v16; // r8
  DEVPROPKEY **v17; // rdi
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  _BOOL8 v21; // rcx
  int v22; // eax
  int v23; // eax
  BOOL v25; // [rsp+40h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-20h] BYREF

  v7 = *(_DWORD *)(a4 + 16);
  v8 = 0;
  v11 = 0LL;
  v12 = &off_1406A1D20;
  Handle = 0LL;
  v14 = a1;
  for ( i = 0; i < 2; ++i )
  {
    v16 = *v12;
    v17 = v12;
    if ( v7 == (*v12)->pid )
    {
      a1 = *(_QWORD *)a4 - *(_QWORD *)&v16->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v16->fmtid.Data1 )
        a1 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v16->fmtid.Data4;
      if ( !a1 )
        break;
    }
    v17 = 0LL;
    v12 += 4;
  }
  if ( !v17 )
    return (unsigned int)-1073741264;
  if ( a5 != *((_DWORD *)v17 + 2) )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    v8 = CmOpenDeviceRegKey(v14, a2, 0x10u, 0, 2, 0, (__int64)&Handle, 0LL);
    if ( v8 < 0 )
      goto LABEL_29;
    v11 = Handle;
  }
  v18 = (__int64)v17[2];
  v19 = *((unsigned int *)v17 + 6);
  if ( *(_DWORD *)(a4 + 16) != 2 )
    goto LABEL_24;
  v20 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Reported.fmtid.Data1;
  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Reported.fmtid.Data1 )
    v20 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Reported.fmtid.Data4;
  if ( v20 )
  {
LABEL_24:
    if ( a3 )
      v11 = a3;
    v23 = PnpCtxRegSetValue(a1, v11, v18, v19, (__int64)a6, a7);
    if ( v23 != -1073741444 )
    {
      if ( v23 < 0 )
        v8 = v23;
      goto LABEL_29;
    }
  }
  else
  {
    v21 = *a6 == 0xFF;
    v25 = *a6 == 0xFF;
    if ( a3 )
      v11 = a3;
    v22 = PnpCtxRegSetValue(v21, v11, v18, v19, (__int64)&v25, 4u);
    if ( v22 != -1073741444 )
    {
      if ( v22 < 0 )
        v8 = v22;
      goto LABEL_29;
    }
  }
  v8 = -1073741810;
LABEL_29:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v8;
}
