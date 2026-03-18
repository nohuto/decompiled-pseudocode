/*
 * XREFs of _CmGetInstallerClassMappedPropertyFromRegProp @ 0x14058BBD8
 * Callers:
 *     _CmGetInstallerClassMappedProperty @ 0x14057EA60 (_CmGetInstallerClassMappedProperty.c)
 *     _CmGetInstallerClassMappedPropertyKeys @ 0x14071842C (_CmGetInstallerClassMappedPropertyKeys.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     _CmGetInstallerClassRegProp @ 0x1404E4C04 (_CmGetInstallerClassRegProp.c)
 *     _PnpParseIndirectResourceString @ 0x140522934 (_PnpParseIndirectResourceString.c)
 *     _PnpParseIndirectInfString @ 0x14053B874 (_PnpParseIndirectInfString.c)
 */

__int64 __fastcall CmGetInstallerClassMappedPropertyFromRegProp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        wchar_t *a6,
        unsigned int a7,
        unsigned int *a8)
{
  unsigned int *v8; // r15
  wchar_t *v10; // rdi
  PVOID PoolWithTag; // rsi
  unsigned int v13; // r12d
  int v14; // r11d
  DEVPROPKEY **v15; // rdx
  unsigned int i; // r8d
  DEVPROPKEY *v17; // r9
  DEVPROPKEY **v18; // r14
  __int64 v19; // rcx
  int v20; // r13d
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  unsigned int InstallerClassRegProp; // ebx
  int v26; // eax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  int v30; // [rsp+40h] [rbp-10h] BYREF
  int v31; // [rsp+44h] [rbp-Ch] BYREF
  int v32; // [rsp+48h] [rbp-8h] BYREF

  v8 = a8;
  v10 = a6;
  v30 = 0;
  PoolWithTag = 0LL;
  *a5 = 0;
  *v8 = 0;
  v32 = 0;
  v31 = 0;
  if ( a6 )
  {
    v13 = a7;
    v10 = (wchar_t *)(-(__int64)(a7 != 0) & (unsigned __int64)a6);
  }
  else
  {
    v13 = 0;
  }
  v14 = *(_DWORD *)(a4 + 16);
  v15 = &CmClassRegPropMap;
  for ( i = 0; i < 9; ++i )
  {
    v17 = *v15;
    v18 = v15;
    if ( v14 == (*v15)->pid )
    {
      v19 = *(_QWORD *)a4 - *(_QWORD *)&v17->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v17->fmtid.Data1 )
        v19 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v17->fmtid.Data4;
      if ( !v19 )
        break;
    }
    v15 += 3;
    v18 = 0LL;
  }
  if ( !v18 )
    return (unsigned int)-1073741264;
  v20 = *((_DWORD *)v18 + 3);
  if ( v20 == 25 )
    return (unsigned int)-1073741637;
  if ( v20 == 27 )
  {
    LODWORD(a8) = 4;
    InstallerClassRegProp = CmGetInstallerClassRegProp(a1, a2, a3, 27, (__int64)&v30, (__int64)&v31, (__int64)&a8);
    if ( (InstallerClassRegProp & 0x80000000) == 0 )
    {
      if ( v30 == *((_DWORD *)v18 + 4) )
      {
        *v8 = 1;
        *a5 = *((_DWORD *)v18 + 2);
        if ( v13 >= *v8 )
          *(_BYTE *)v10 = -(v31 != 0);
        else
          return (unsigned int)-1073741789;
      }
      else
      {
        return (unsigned int)-1073741811;
      }
    }
  }
  else
  {
    *v8 = v13;
    v21 = CmGetInstallerClassRegProp(a1, a2, a3, v20, (__int64)&v30, (__int64)v10, (__int64)v8);
    InstallerClassRegProp = v21;
    if ( !v21 || v21 == -1073741789 )
    {
      v26 = *((_DWORD *)v18 + 2);
      *a5 = v26;
      if ( v26 == 18 )
      {
        if ( InstallerClassRegProp )
        {
          if ( InstallerClassRegProp != -1073741789 )
            return InstallerClassRegProp;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, *v8, 0x52504E50u);
          if ( !PoolWithTag )
            return (unsigned int)-1073741801;
          LODWORD(a8) = *v8;
          v27 = CmGetInstallerClassRegProp(a1, a2, a3, v20, (__int64)&v32, (__int64)PoolWithTag, (__int64)&a8);
          if ( v27 < 0 )
          {
            InstallerClassRegProp = v27;
LABEL_27:
            ExFreePoolWithTag(PoolWithTag, 0);
            return InstallerClassRegProp;
          }
          v10 = (wchar_t *)PoolWithTag;
        }
        if ( v10 && (PnpParseIndirectInfString(v10, v22, v23) || PnpParseIndirectResourceString(v10, v28, v29)) )
          *a5 = 25;
        if ( PoolWithTag )
          goto LABEL_27;
      }
    }
  }
  return InstallerClassRegProp;
}
