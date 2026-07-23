/*
 * XREFs of _CmGetInstallerClassMappedPropertyFromRegProp @ 0x1406DDDA0
 * Callers:
 *     _CmGetInstallerClassMappedProperty @ 0x1404BB8B8 (_CmGetInstallerClassMappedProperty.c)
 *     _CmGetInstallerClassMappedPropertyKeys @ 0x1406DDFF0 (_CmGetInstallerClassMappedPropertyKeys.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _PnpParseIndirectResourceString @ 0x1404A3088 (_PnpParseIndirectResourceString.c)
 *     _PnpParseIndirectInfString @ 0x1404AC370 (_PnpParseIndirectInfString.c)
 *     _CmGetInstallerClassRegProp @ 0x1404E72F8 (_CmGetInstallerClassRegProp.c)
 */

__int64 __fastcall CmGetInstallerClassMappedPropertyFromRegProp(
        __int64 *a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        unsigned int a7,
        unsigned int *a8)
{
  unsigned int *v8; // r15
  _BYTE *v10; // rdi
  PVOID PoolWithTag; // rsi
  unsigned int v13; // r12d
  int v14; // r11d
  DEVPROPKEY **v15; // rdx
  unsigned int i; // r8d
  DEVPROPKEY *v17; // r9
  DEVPROPKEY **v18; // r14
  __int64 v19; // rcx
  unsigned int InstallerClassRegProp; // ebx
  int v21; // r13d
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // eax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  int v30; // [rsp+40h] [rbp-10h] BYREF
  int v31; // [rsp+44h] [rbp-Ch] BYREF
  int v32; // [rsp+48h] [rbp-8h] BYREF

  v8 = a8;
  v10 = (_BYTE *)a6;
  v30 = 0;
  PoolWithTag = 0LL;
  *a5 = 0;
  *v8 = 0;
  v32 = 0;
  v31 = 0;
  if ( a6 )
  {
    v13 = a7;
    v10 = (_BYTE *)(-(__int64)(a7 != 0) & a6);
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
  v21 = *((_DWORD *)v18 + 3);
  if ( v21 == 25 )
    return (unsigned int)-1073741637;
  if ( v21 == 27 )
  {
    LODWORD(a8) = 4;
    InstallerClassRegProp = CmGetInstallerClassRegProp(a1, a2, a3, 27, &v30, &v31, &a8);
    if ( (InstallerClassRegProp & 0x80000000) == 0 )
    {
      if ( v30 == *((_DWORD *)v18 + 4) )
      {
        *v8 = 1;
        *a5 = *((_DWORD *)v18 + 2);
        if ( v13 >= *v8 )
          *v10 = -(v31 != 0);
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
    v22 = CmGetInstallerClassRegProp(a1, a2, a3, v21, &v30, v10, v8);
    InstallerClassRegProp = v22;
    if ( !v22 || v22 == -1073741789 )
    {
      v25 = *((_DWORD *)v18 + 2);
      *a5 = v25;
      if ( v25 == 18 )
      {
        if ( InstallerClassRegProp )
        {
          if ( InstallerClassRegProp != -1073741789 )
            return InstallerClassRegProp;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, *v8, 0x52504E50u);
          if ( !PoolWithTag )
            return (unsigned int)-1073741801;
          LODWORD(a8) = *v8;
          v26 = CmGetInstallerClassRegProp(a1, a2, a3, v21, &v32, PoolWithTag, &a8);
          if ( v26 < 0 )
          {
            InstallerClassRegProp = v26;
LABEL_29:
            ExFreePoolWithTag(PoolWithTag, 0);
            return InstallerClassRegProp;
          }
          v10 = PoolWithTag;
        }
        if ( v10
          && (PnpParseIndirectInfString((const wchar_t *)v10, v23, v24)
           || PnpParseIndirectResourceString((const wchar_t *)v10, v27, v28)) )
        {
          *a5 = 25;
        }
        if ( PoolWithTag )
          goto LABEL_29;
      }
    }
  }
  return InstallerClassRegProp;
}
