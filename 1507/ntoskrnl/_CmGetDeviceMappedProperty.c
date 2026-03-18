/*
 * XREFs of _CmGetDeviceMappedProperty @ 0x14043B6C0
 * Callers:
 *     _PnpDispatchDevice @ 0x14043B544 (_PnpDispatchDevice.c)
 * Callees:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1404DC05C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x140532058 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1405B8298 (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 */

__int64 __fastcall CmGetDeviceMappedProperty(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        _DWORD *a9)
{
  int v9; // ebx
  unsigned int v12; // r11d
  DEVPROPKEY **v13; // rax
  unsigned int v14; // r9d
  DEVPROPKEY *v15; // rdx
  int v16; // edi
  __int64 v17; // rsi
  __int64 v18; // rbp
  DEVPROPKEY **v19; // rcx
  unsigned int v20; // edx
  DEVPROPKEY *v21; // r8
  DEVPROPKEY **i; // rcx
  DEVPROPKEY *v23; // rdx
  __int64 result; // rax
  __int64 v25; // r9
  __int64 v26; // r10
  __int64 v27; // r10

  v9 = 0;
  v12 = -1073741802;
  *a9 = 0;
  if ( a4 )
    return 3221225494LL;
  v13 = &CmDeviceRegPropMap;
  v14 = 0;
  while ( 1 )
  {
    v15 = *v13;
    if ( *(_DWORD *)(a5 + 16) == (*v13)->pid )
    {
      v26 = *(_QWORD *)a5 - *(_QWORD *)&v15->fmtid.Data1;
      if ( *(_QWORD *)a5 == *(_QWORD *)&v15->fmtid.Data1 )
        v26 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v15->fmtid.Data4;
      if ( !v26 )
        break;
    }
    ++v14;
    v13 += 3;
    if ( v14 >= 0x21 )
    {
      v16 = a8;
      v17 = a7;
      v18 = a6;
      goto LABEL_6;
    }
  }
  v16 = a8;
  v17 = a7;
  v18 = a6;
  result = CmGetDeviceMappedPropertyFromRegProp(a1, a2, a3, a5, a6, a7, a8, (__int64)a9);
  v12 = result;
  if ( (_DWORD)result != -1073741802 )
    return result;
LABEL_6:
  v19 = &off_140721F30;
  v20 = 0;
  while ( 1 )
  {
    v21 = *v19;
    if ( *(_DWORD *)(a5 + 16) == (*v19)->pid )
    {
      v27 = *(_QWORD *)a5 - *(_QWORD *)&v21->fmtid.Data1;
      if ( *(_QWORD *)a5 == *(_QWORD *)&v21->fmtid.Data1 )
        v27 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v21->fmtid.Data4;
      if ( !v27 )
        break;
    }
    ++v20;
    v19 += 4;
    if ( v20 >= 2 )
      goto LABEL_9;
  }
  result = CmGetDeviceMappedPropertyFromInstanceKeyRegValue(a1, a2, a3, a5, v18, v17, v16, (__int64)a9);
  v12 = result;
  if ( (_DWORD)result != -1073741802 )
    return result;
LABEL_9:
  for ( i = &off_140723840; ; i += 2 )
  {
    v23 = *i;
    if ( *(_DWORD *)(a5 + 16) == (*i)->pid )
    {
      v25 = *(_QWORD *)a5 - *(_QWORD *)&v23->fmtid.Data1;
      if ( *(_QWORD *)a5 == *(_QWORD *)&v23->fmtid.Data1 )
        v25 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v23->fmtid.Data4;
      if ( !v25 )
        break;
    }
    if ( (unsigned int)++v9 >= 0x18 )
      return v12;
  }
  return CmGetDeviceMappedPropertyFromComposite(a1, a2, a3, a5, v18, v17, v16, a9);
}
