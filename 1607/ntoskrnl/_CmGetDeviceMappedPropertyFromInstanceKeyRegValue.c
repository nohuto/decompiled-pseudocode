/*
 * XREFs of _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14054F090
 * Callers:
 *     _CmGetDeviceMappedProperty @ 0x1404E3720 (_CmGetDeviceMappedProperty.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x1406DD574 (_CmGetDeviceMappedPropertyKeys.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     _CmOpenDeviceRegKey @ 0x1404DFCC0 (_CmOpenDeviceRegKey.c)
 *     _PnpCtxRegQueryValue @ 0x1404E7028 (_PnpCtxRegQueryValue.c)
 */

__int64 __fastcall CmGetDeviceMappedPropertyFromInstanceKeyRegValue(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        int a7,
        _DWORD *a8)
{
  _DWORD *v8; // r13
  HANDLE v9; // rdx
  _DWORD *v10; // rax
  int v11; // ebx
  __int64 v13; // r14
  int v15; // edi
  int v16; // r11d
  DEVPROPKEY **v17; // r8
  unsigned int i; // r10d
  DEVPROPKEY *v19; // r9
  DEVPROPKEY **v20; // r15
  const WCHAR *v21; // r8
  __int64 v22; // rax
  int v23; // eax
  int v25; // eax
  int v26; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-8h] BYREF
  __int64 v28; // [rsp+90h] [rbp+40h]

  v28 = a1;
  v8 = a5;
  v9 = 0LL;
  v10 = a8;
  v11 = 0;
  v26 = 0;
  v13 = a6;
  *a5 = 0;
  *v10 = 0;
  Handle = 0LL;
  if ( v13 )
  {
    v15 = a7;
    a1 = -(__int64)(a7 != 0);
    v13 &= a1;
  }
  else
  {
    v15 = 0;
  }
  v16 = *(_DWORD *)(a4 + 16);
  v17 = &off_1406E9ED0;
  for ( i = 0; i < 2; ++i )
  {
    v19 = *v17;
    v20 = v17;
    if ( v16 == (*v17)->pid )
    {
      a1 = *(_QWORD *)a4 - *(_QWORD *)&v19->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v19->fmtid.Data1 )
        a1 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v19->fmtid.Data4;
      if ( !a1 )
        break;
    }
    v20 = 0LL;
    v17 += 4;
  }
  if ( !v20 )
    return (unsigned int)-1073741264;
  if ( !a3 )
  {
    v11 = CmOpenDeviceRegKey(v28, a2, 0x10u, 0, 1, 0, (__int64)&Handle, 0LL);
    if ( v11 < 0 )
      goto LABEL_22;
    v9 = Handle;
  }
  v21 = (const WCHAR *)v20[2];
  if ( *(_DWORD *)(a4 + 16) == 2 )
  {
    v22 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Reported.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Reported.fmtid.Data1 )
      v22 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Reported.fmtid.Data4;
    if ( !v22 )
    {
      LODWORD(a6) = 0;
      LODWORD(a5) = 4;
      if ( a3 )
        v9 = a3;
      if ( (int)PnpCtxRegQueryValue(a1, v9, v21, &v26, &a6, (unsigned int *)&a5) >= 0 && v26 == 4 && (_DWORD)a5 == 4 )
        v23 = a6;
      else
        v23 = 0;
      if ( !v23 )
      {
LABEL_21:
        v11 = -1073741275;
        goto LABEL_22;
      }
      *a8 = 1;
      *v8 = 17;
      if ( v15 )
      {
        *(_BYTE *)v13 = -1;
        goto LABEL_22;
      }
      goto LABEL_30;
    }
  }
  LODWORD(a5) = v15;
  if ( a3 )
    v9 = a3;
  v25 = PnpCtxRegQueryValue(a1, v9, v21, &v26, (void *)v13, (unsigned int *)&a5);
  if ( v25 == -1073741772 || v25 == -1073741444 )
    goto LABEL_21;
  if ( !v25 || v25 == -1073741789 )
  {
    *a8 = (_DWORD)a5;
    *v8 = *((_DWORD *)v20 + 2);
    if ( v25 || !v15 )
LABEL_30:
      v11 = -1073741789;
  }
  else
  {
    v11 = v25;
  }
LABEL_22:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v11;
}
