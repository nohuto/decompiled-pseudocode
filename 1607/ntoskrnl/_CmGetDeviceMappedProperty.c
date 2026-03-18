/*
 * XREFs of _CmGetDeviceMappedProperty @ 0x140500790
 * Callers:
 *     _PnpDispatchDevice @ 0x140500604 (_PnpDispatchDevice.c)
 * Callees:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1404CE780 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1404FB708 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14054CF80 (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 */

__int64 __fastcall CmGetDeviceMappedProperty(
        __int64 a1,
        const wchar_t *a2,
        size_t a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        wchar_t *a7,
        unsigned int a8,
        int *a9,
        int a10)
{
  __int64 v11; // r11
  unsigned int v12; // r10d
  __int64 result; // rax
  int v14; // edi
  DEVPROPKEY **v15; // rdx
  unsigned int v16; // r8d
  DEVPROPKEY *v17; // rcx
  DEVPROPKEY **v18; // rdx
  unsigned int v19; // r8d
  DEVPROPKEY *v20; // rcx
  DEVPROPKEY **i; // rdx
  DEVPROPKEY *v22; // rcx

  v11 = (__int64)a2;
  v12 = -1073741802;
  if ( (_WORD)a10 )
    return 3221225485LL;
  v14 = 0;
  *a9 = 0;
  if ( a4 )
    return 3221225494LL;
  v15 = &CmDeviceRegPropMap;
  v16 = 0;
  while ( 1 )
  {
    v17 = *v15;
    if ( *(_DWORD *)(a5 + 16) == (*v15)->pid
      && *(_QWORD *)a5 == *(_QWORD *)&v17->fmtid.Data1
      && *(_QWORD *)(a5 + 8) == *(_QWORD *)v17->fmtid.Data4 )
    {
      break;
    }
    ++v16;
    v15 += 3;
    if ( v16 >= 0x21 )
      goto LABEL_12;
  }
  result = CmGetDeviceMappedPropertyFromRegProp(a1, v11, a3, a5, a6, a7, a8, a9, a10);
  v12 = result;
  if ( (_DWORD)result != -1073741802 )
    return result;
  LODWORD(v11) = (_DWORD)a2;
LABEL_12:
  v18 = &off_1406E9DA0;
  v19 = 0;
  while ( 1 )
  {
    v20 = *v18;
    if ( *(_DWORD *)(a5 + 16) == (*v18)->pid
      && *(_QWORD *)a5 == *(_QWORD *)&v20->fmtid.Data1
      && *(_QWORD *)(a5 + 8) == *(_QWORD *)v20->fmtid.Data4 )
    {
      break;
    }
    ++v19;
    v18 += 4;
    if ( v19 >= 2 )
      goto LABEL_19;
  }
  result = CmGetDeviceMappedPropertyFromInstanceKeyRegValue(a1, v11, a3, a5, (__int64)a6, (__int64)a7, a8, (__int64)a9);
  v12 = result;
  if ( (_DWORD)result != -1073741802 )
    return result;
LABEL_19:
  for ( i = &off_1406EB800; ; i += 2 )
  {
    v22 = *i;
    if ( *(_DWORD *)(a5 + 16) == (*i)->pid
      && *(_QWORD *)a5 == *(_QWORD *)&v22->fmtid.Data1
      && *(_QWORD *)(a5 + 8) == *(_QWORD *)v22->fmtid.Data4 )
    {
      break;
    }
    if ( (unsigned int)++v14 >= 0x18 )
      return v12;
  }
  return CmGetDeviceMappedPropertyFromComposite(a1, a2, a3, a5, a6, a7, a8, a9, a10);
}
