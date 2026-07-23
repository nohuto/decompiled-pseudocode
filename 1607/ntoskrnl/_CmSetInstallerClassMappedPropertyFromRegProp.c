/*
 * XREFs of _CmSetInstallerClassMappedPropertyFromRegProp @ 0x1406DF2E8
 * Callers:
 *     _CmSetInstallerClassMappedProperty @ 0x1406DF048 (_CmSetInstallerClassMappedProperty.c)
 * Callees:
 *     _CmSetInstallerClassRegProp @ 0x1406D9768 (_CmSetInstallerClassRegProp.c)
 */

__int64 __fastcall CmSetInstallerClassMappedPropertyFromRegProp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _BYTE *a6,
        int a7)
{
  DEVPROPKEY **v7; // rbx
  int *v8; // r10
  unsigned int i; // edi
  DEVPROPKEY *v11; // rsi
  DEVPROPKEY **v12; // r11
  __int64 v13; // rcx
  int v15; // ecx
  unsigned int v16; // r9d
  unsigned int v17; // ecx
  __int64 v18; // rax
  unsigned int v19; // eax
  int v20; // [rsp+40h] [rbp-18h] BYREF

  v7 = &CmClassRegPropMap;
  v8 = 0LL;
  for ( i = 0; i < 9; ++i )
  {
    v11 = *v7;
    v12 = v7;
    if ( *(_DWORD *)(a4 + 16) == (*v7)->pid )
    {
      v13 = *(_QWORD *)a4 - *(_QWORD *)&v11->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v11->fmtid.Data1 )
        v13 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v11->fmtid.Data4;
      if ( !v13 )
        break;
    }
    v7 += 3;
    v12 = 0LL;
  }
  if ( !v12 )
    return 3221226032LL;
  v15 = *((_DWORD *)v12 + 2);
  v16 = *((_DWORD *)v12 + 3);
  if ( a5 != v15 )
  {
    if ( a5 == 25 )
    {
      if ( v15 != 18 )
        return 3221225485LL;
    }
    else if ( a5 >= 2 )
    {
      return 3221225485LL;
    }
  }
  v17 = *((_DWORD *)v12 + 4);
  if ( v16 == 25 )
    return 3221225659LL;
  v18 = (__int64)a6;
  if ( v16 == 27 )
  {
    if ( a6 )
    {
      if ( !a7 )
        return 3221225485LL;
      if ( *a6 == 0xFF )
      {
        v20 = 1;
      }
      else
      {
        if ( *a6 )
          return 3221225485LL;
        v20 = 0;
      }
      v8 = &v20;
      v19 = 4;
    }
    else
    {
      v19 = 0;
    }
    return CmSetInstallerClassRegProp(a1, a2, a3, 0x1Bu, v17, (__int64)v8, v19);
  }
  else
  {
    if ( a6 )
      LODWORD(v8) = a7;
    else
      v18 = 0LL;
    return CmSetInstallerClassRegProp(a1, a2, a3, v16, v17, v18, (unsigned int)v8);
  }
}
