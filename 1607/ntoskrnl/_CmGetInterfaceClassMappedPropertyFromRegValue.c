/*
 * XREFs of _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x1404D97CC
 * Callers:
 *     _CmGetInterfaceClassMappedProperty @ 0x1404D96E0 (_CmGetInterfaceClassMappedProperty.c)
 *     _CmGetInterfaceClassMappedPropertyKeys @ 0x1406DE570 (_CmGetInterfaceClassMappedPropertyKeys.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     _CmOpenInterfaceClassRegKey @ 0x1404D9DAC (_CmOpenInterfaceClassRegKey.c)
 *     _PnpOpenPropertiesKey @ 0x1404DDBBC (_PnpOpenPropertiesKey.c)
 *     _PnpCtxRegQueryValue @ 0x1404E7028 (_PnpCtxRegQueryValue.c)
 */

__int64 __fastcall CmGetInterfaceClassMappedPropertyFromRegValue(
        __int64 a1,
        int a2,
        HANDLE a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        int a7,
        _DWORD *a8)
{
  _DWORD *v8; // r13
  int v9; // ebx
  _DWORD *v10; // rax
  __int64 v13; // rdi
  int v14; // esi
  unsigned int v15; // r8d
  int v16; // r10d
  DEVPROPKEY **v17; // rdx
  DEVPROPKEY *v18; // r14
  DEVPROPKEY **v19; // r15
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  int v25; // edi
  int v26; // [rsp+20h] [rbp-30h]
  HANDLE Handle[2]; // [rsp+40h] [rbp-10h] BYREF

  v8 = a5;
  v9 = 0;
  v10 = a8;
  Handle[0] = 0LL;
  *a5 = 0;
  *v10 = 0;
  v13 = a6;
  if ( a6 )
  {
    v14 = a7;
    v13 = -(__int64)(a7 != 0) & a6;
  }
  else
  {
    v14 = 0;
  }
  v15 = *(_DWORD *)(a4 + 16);
  if ( v15 < 2 )
    return (unsigned int)-1073741264;
  v16 = 0;
  v17 = &off_1406E98A8;
  do
  {
    v18 = *v17;
    v19 = v17;
    if ( v15 == (*v17)->pid )
    {
      v20 = *(_QWORD *)a4 - *(_QWORD *)&v18->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v18->fmtid.Data1 )
        v20 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v18->fmtid.Data4;
      if ( !v20 )
        break;
    }
    v19 = 0LL;
    ++v16;
    v17 += 2;
  }
  while ( !v16 );
  if ( !v19 )
    return (unsigned int)-1073741264;
  if ( v15 == 2 )
  {
    v21 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data1 )
      v21 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data4;
    if ( !v21 )
    {
      if ( !a3 )
      {
        v9 = CmOpenInterfaceClassRegKey(a1, a2, 2, a4, 1, 0, (__int64)Handle, 0LL);
        if ( v9 < 0 )
          goto LABEL_17;
        a3 = Handle[0];
      }
      LOBYTE(v26) = 0;
      v22 = PnpOpenPropertiesKey(a1, a3, 0LL, 1LL, v26);
      v9 = v22;
      if ( v22 == -1073741772 )
      {
LABEL_16:
        v9 = -1073741275;
        goto LABEL_17;
      }
      if ( v22 >= 0 )
      {
        LODWORD(a5) = v14;
        v25 = PnpCtxRegQueryValue(v23, 0LL, L"Default", &a6, v13, &a5);
        ZwClose(0LL);
        if ( v25 != -1073741772 && v25 != -1073741444 )
        {
          if ( !v25 || v25 == -1073741789 )
          {
            *a8 = (_DWORD)a5;
            *v8 = 18;
            if ( v25 || !v14 )
              v9 = -1073741789;
          }
          else
          {
            v9 = v25;
          }
          goto LABEL_17;
        }
        goto LABEL_16;
      }
LABEL_17:
      if ( Handle[0] )
        ZwClose(Handle[0]);
    }
  }
  return (unsigned int)v9;
}
