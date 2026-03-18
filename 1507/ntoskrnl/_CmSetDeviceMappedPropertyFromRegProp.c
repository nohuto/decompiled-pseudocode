/*
 * XREFs of _CmSetDeviceMappedPropertyFromRegProp @ 0x14058BDB0
 * Callers:
 *     _CmSetDeviceMappedProperty @ 0x140542890 (_CmSetDeviceMappedProperty.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _PnpStringFromGuid @ 0x140440494 (_PnpStringFromGuid.c)
 *     _CmSetDeviceRegProp @ 0x1404D8AB8 (_CmSetDeviceRegProp.c)
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
  int v17; // r8d
  unsigned int v18; // ebx
  unsigned int v19; // edi
  unsigned int v20; // eax
  NTSTATUS result; // eax
  wchar_t *v22; // rax
  int v23; // ecx
  int *v24; // rax
  unsigned int v25; // ecx
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
  v17 = *((_DWORD *)v15 + 2);
  v18 = *((_DWORD *)v15 + 3);
  if ( a5 != v17 )
  {
    if ( a5 == 25 )
    {
      if ( v17 != 18 )
        return -1073741811;
    }
    else if ( a5 >= 2 )
    {
      return -1073741811;
    }
  }
  v19 = *((_DWORD *)v15 + 4);
  if ( v18 != 9 )
  {
    if ( v18 == 25 )
      return -1073741637;
    if ( v18 == 27 )
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
        v24 = &v28;
        v25 = 4;
      }
      else
      {
        v24 = 0LL;
        v25 = 0;
      }
      return CmSetDeviceRegProp(a1, a2, a3, 0x1Bu, v19, (__int64)v24, v25, 0);
    }
    if ( v18 != 37 )
    {
      if ( a6 )
        v20 = a7;
      else
        v20 = 0;
      v27 = v20;
      v26 = (__int64)a6;
      return CmSetDeviceRegProp(a1, a2, a3, v18, v19, v26, v27, 0);
    }
  }
  if ( !a6 )
  {
    v22 = 0LL;
    v23 = 0;
    goto LABEL_25;
  }
  if ( a7 < 0x10 )
    return -1073741811;
  result = PnpStringFromGuid(a6, v29);
  if ( result >= 0 )
  {
    v22 = v29;
    v23 = 78;
LABEL_25:
    v27 = v23;
    v26 = (__int64)v22;
    return CmSetDeviceRegProp(a1, a2, a3, v18, v19, v26, v27, 0);
  }
  return result;
}
