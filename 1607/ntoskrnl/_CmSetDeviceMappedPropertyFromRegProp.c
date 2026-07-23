/*
 * XREFs of _CmSetDeviceMappedPropertyFromRegProp @ 0x1406DEE94
 * Callers:
 *     _CmSetDeviceMappedProperty @ 0x14050B6D4 (_CmSetDeviceMappedProperty.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _PnpStringFromGuid @ 0x1404CB360 (_PnpStringFromGuid.c)
 *     _CmSetDeviceRegProp @ 0x1405121B4 (_CmSetDeviceRegProp.c)
 */

NTSTATUS __fastcall CmSetDeviceMappedPropertyFromRegProp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int *a6,
        unsigned int a7)
{
  int v7; // edi
  DEVPROPKEY **v8; // r10
  unsigned int i; // r11d
  DEVPROPKEY *v14; // r9
  DEVPROPKEY **v15; // rdx
  __int64 v16; // r8
  NTSTATUS result; // eax
  int v18; // r8d
  unsigned int v19; // ebx
  unsigned int v20; // edi
  unsigned int v21; // eax
  int *v22; // rax
  unsigned int v23; // ecx
  wchar_t *v24; // rax
  int v25; // ecx
  __int64 v26; // [rsp+28h] [rbp-B0h]
  unsigned int v27; // [rsp+30h] [rbp-A8h]
  int v28; // [rsp+40h] [rbp-98h] BYREF
  wchar_t v29[40]; // [rsp+50h] [rbp-88h] BYREF

  v7 = *(_DWORD *)(a4 + 16);
  v8 = &CmDeviceRegPropMap;
  for ( i = 0; i < 0x21; ++i )
  {
    v14 = *v8;
    v15 = v8;
    if ( v7 == (*v8)->pid )
    {
      v16 = *(_QWORD *)a4 - *(_QWORD *)&v14->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v14->fmtid.Data1 )
        v16 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v14->fmtid.Data4;
      if ( !v16 )
        break;
    }
    v15 = 0LL;
    v8 += 3;
  }
  if ( !v15 )
    return -1073741264;
  v18 = *((_DWORD *)v15 + 2);
  v19 = *((_DWORD *)v15 + 3);
  if ( a5 != v18 )
  {
    if ( a5 == 25 )
    {
      if ( v18 != 18 )
        return -1073741811;
    }
    else if ( a5 >= 2 )
    {
      return -1073741811;
    }
  }
  v20 = *((_DWORD *)v15 + 4);
  if ( v19 != 9 )
  {
    if ( v19 == 25 )
      return -1073741637;
    if ( v19 == 27 )
    {
      if ( a6 )
      {
        if ( !a7 )
          return -1073741811;
        if ( *(_BYTE *)a6 == 0xFF )
        {
          v28 = 1;
        }
        else
        {
          if ( *(_BYTE *)a6 )
            return -1073741811;
          v28 = 0;
        }
        v22 = &v28;
        v23 = 4;
      }
      else
      {
        v22 = 0LL;
        v23 = 0;
      }
      return CmSetDeviceRegProp(a1, a2, a3, 0x1Bu, v20, (__int64)v22, v23, 0);
    }
    if ( v19 != 37 )
    {
      if ( a6 )
        v21 = a7;
      else
        v21 = 0;
      v27 = v21;
      v26 = (__int64)a6;
      return CmSetDeviceRegProp(a1, a2, a3, v19, v20, v26, v27, 0);
    }
  }
  if ( !a6 )
  {
    v24 = 0LL;
    v25 = 0;
    goto LABEL_37;
  }
  if ( a7 < 0x10 )
    return -1073741811;
  result = PnpStringFromGuid(a6, v29);
  if ( result >= 0 )
  {
    v24 = v29;
    v25 = 78;
LABEL_37:
    v27 = v25;
    v26 = (__int64)v24;
    return CmSetDeviceRegProp(a1, a2, a3, v19, v20, v26, v27, 0);
  }
  return result;
}
