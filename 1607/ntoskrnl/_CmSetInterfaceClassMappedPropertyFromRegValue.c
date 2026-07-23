/*
 * XREFs of _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x1406DF88C
 * Callers:
 *     _CmSetInterfaceClassMappedProperty @ 0x1406DF750 (_CmSetInterfaceClassMappedProperty.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     _CmOpenInterfaceClassRegKey @ 0x1404D9DAC (_CmOpenInterfaceClassRegKey.c)
 *     _PnpOpenPropertiesKey @ 0x1404DDBBC (_PnpOpenPropertiesKey.c)
 *     _PnpCtxRegSetValue @ 0x140512E00 (_PnpCtxRegSetValue.c)
 */

__int64 __fastcall CmSetInterfaceClassMappedPropertyFromRegValue(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        void *a6,
        ULONG a7)
{
  unsigned int v7; // edi
  int v8; // ebx
  int v12; // r11d
  DEVPROPKEY **v13; // rcx
  DEVPROPKEY *v14; // rsi
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // edi
  __int64 v21; // [rsp+28h] [rbp-40h]
  HANDLE v22[5]; // [rsp+40h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+20h] BYREF

  v7 = *(_DWORD *)(a4 + 16);
  v8 = 0;
  v22[0] = 0LL;
  Handle = 0LL;
  if ( v7 < 2 )
    return (unsigned int)-1073741264;
  v12 = 0;
  v13 = &off_1406E98A8;
  do
  {
    v14 = *v13;
    v15 = (__int64)v13;
    if ( v7 == (*v13)->pid )
    {
      v16 = *(_QWORD *)a4 - *(_QWORD *)&v14->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v14->fmtid.Data1 )
        v16 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v14->fmtid.Data4;
      if ( !v16 )
        break;
    }
    v15 = 0LL;
    ++v12;
    v13 += 2;
  }
  while ( !v12 );
  if ( !v15 )
    return (unsigned int)-1073741264;
  if ( a5 != *(_DWORD *)(v15 + 8) )
    return (unsigned int)-1073741811;
  if ( v7 == 2 )
  {
    v17 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data1 )
      v17 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data4;
    if ( !v17 )
    {
      if ( !a3 )
      {
        v8 = CmOpenInterfaceClassRegKey((int)a1, a2, v15, a4, 1, 0, (__int64)v22, 0LL);
        if ( v8 < 0 )
        {
LABEL_24:
          if ( v22[0] )
            ZwClose(v22[0]);
          return (unsigned int)v8;
        }
        LODWORD(a3) = v22[0];
      }
      v8 = PnpOpenPropertiesKey(a1, a3, 0LL, 2, 1, v21, &Handle);
      if ( v8 >= 0 )
      {
        v19 = PnpCtxRegSetValue(v18, Handle, L"Default", 1u, a6, a7);
        ZwClose(Handle);
        if ( v19 == -1073741444 )
        {
          v8 = -1073741772;
        }
        else if ( v19 < 0 )
        {
          v8 = v19;
        }
      }
      goto LABEL_24;
    }
  }
  return (unsigned int)v8;
}
