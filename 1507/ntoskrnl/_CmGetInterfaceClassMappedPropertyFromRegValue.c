/*
 * XREFs of _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x140458610
 * Callers:
 *     _CmGetInterfaceClassMappedProperty @ 0x140458524 (_CmGetInterfaceClassMappedProperty.c)
 *     _CmGetInterfaceClassMappedPropertyKeys @ 0x1407189AC (_CmGetInterfaceClassMappedPropertyKeys.c)
 * Callees:
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     _PnpCtxRegQueryValue @ 0x14043E1AC (_PnpCtxRegQueryValue.c)
 *     _PnpOpenPropertiesKey @ 0x14043E2E0 (_PnpOpenPropertiesKey.c)
 *     _CmOpenInterfaceClassRegKey @ 0x1404583D8 (_CmOpenInterfaceClassRegKey.c)
 */

__int64 __fastcall CmGetInterfaceClassMappedPropertyFromRegValue(
        __int64 *a1,
        __int64 a2,
        char *a3,
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
  __int64 v15; // r8
  int v16; // r10d
  DEVPROPKEY **v17; // rdx
  DEVPROPKEY *v18; // r14
  DEVPROPKEY **v19; // r15
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  int Value; // edi
  __int64 v26; // [rsp+28h] [rbp-28h]
  HANDLE Handle[2]; // [rsp+40h] [rbp-10h] BYREF
  HANDLE v29; // [rsp+A8h] [rbp+58h] BYREF

  v8 = a5;
  v9 = 0;
  v10 = a8;
  Handle[0] = 0LL;
  v29 = 0LL;
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
  v15 = *(unsigned int *)(a4 + 16);
  if ( (unsigned int)v15 < 2 )
    return (unsigned int)-1073741264;
  v16 = 0;
  v17 = &off_1407219B0;
  do
  {
    v18 = *v17;
    v19 = v17;
    if ( (_DWORD)v15 == (*v17)->pid )
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
  if ( (_DWORD)v15 == 2 )
  {
    v21 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data1 )
      v21 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data4;
    if ( !v21 )
    {
      if ( !a3 )
      {
        v9 = CmOpenInterfaceClassRegKey(a1, a2, v15, a4, 1, 0, (__int64)Handle, 0LL);
        if ( v9 < 0 )
          goto LABEL_17;
        a3 = (char *)Handle[0];
      }
      v22 = PnpOpenPropertiesKey(a1, a3, 0LL, 1u, 0, v26, &v29);
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
        Value = PnpCtxRegQueryValue(v23, v29, (__int64)L"Default", (__int64)&a6, v13, (__int64)&a5);
        ZwClose(v29);
        if ( Value != -1073741772 && Value != -1073741444 )
        {
          if ( !Value || Value == -1073741789 )
          {
            *a8 = (_DWORD)a5;
            *v8 = 18;
            if ( Value || !v14 )
              v9 = -1073741789;
          }
          else
          {
            v9 = Value;
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
