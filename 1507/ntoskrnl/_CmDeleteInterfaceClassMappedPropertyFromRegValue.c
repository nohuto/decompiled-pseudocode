/*
 * XREFs of _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x140717868
 * Callers:
 *     _CmSetInterfaceClassMappedProperty @ 0x140719500 (_CmSetInterfaceClassMappedProperty.c)
 * Callees:
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     _PnpOpenPropertiesKey @ 0x14043E2E0 (_PnpOpenPropertiesKey.c)
 *     _CmOpenInterfaceClassRegKey @ 0x1404583D8 (_CmOpenInterfaceClassRegKey.c)
 *     _PnpCtxRegDeleteValue @ 0x140564078 (_PnpCtxRegDeleteValue.c)
 */

__int64 __fastcall CmDeleteInterfaceClassMappedPropertyFromRegValue(__int64 *a1, __int64 a2, char *a3, __int64 a4)
{
  unsigned int v4; // r11d
  int v5; // ebx
  __int64 v9; // r8
  DEVPROPKEY **v10; // rcx
  DEVPROPKEY *v11; // rdi
  DEVPROPKEY **v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  int v17; // edi
  __int64 v19; // [rsp+28h] [rbp-40h]
  HANDLE v20[5]; // [rsp+40h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+20h] BYREF

  v4 = *(_DWORD *)(a4 + 16);
  v5 = 0;
  v20[0] = 0LL;
  Handle = 0LL;
  if ( v4 < 2 )
    return (unsigned int)-1073741264;
  v9 = 0LL;
  v10 = &off_1407219B0;
  do
  {
    v11 = *v10;
    v12 = v10;
    if ( v4 == (*v10)->pid )
    {
      v13 = *(_QWORD *)a4 - *(_QWORD *)&v11->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v11->fmtid.Data1 )
        v13 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v11->fmtid.Data4;
      if ( !v13 )
        break;
    }
    v12 = 0LL;
    v9 = (unsigned int)(v9 + 1);
    v10 += 2;
  }
  while ( !(_DWORD)v9 );
  if ( !v12 )
    return (unsigned int)-1073741264;
  if ( v4 == 2 )
  {
    v14 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data1 )
      v14 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data4;
    if ( !v14 )
    {
      if ( !a3 )
      {
        v5 = CmOpenInterfaceClassRegKey(a1, a2, v9, a4, 1, 0, (__int64)v20, 0LL);
        if ( v5 < 0 )
        {
LABEL_24:
          if ( v20[0] )
            ZwClose(v20[0]);
          return (unsigned int)v5;
        }
        a3 = (char *)v20[0];
      }
      v15 = PnpOpenPropertiesKey(a1, a3, 0LL, 2u, 0, v19, &Handle);
      v5 = v15;
      if ( v15 == -1073741772 )
      {
        v5 = -1073741275;
      }
      else if ( v15 >= 0 )
      {
        v17 = PnpCtxRegDeleteValue(v16, Handle, L"Default");
        ZwClose(Handle);
        if ( v17 != -1073741772 && v17 != -1073741444 && v17 < 0 )
          v5 = v17;
      }
      goto LABEL_24;
    }
  }
  return (unsigned int)v5;
}
