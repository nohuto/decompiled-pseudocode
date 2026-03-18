/*
 * XREFs of _PnpOpenPropertiesKey @ 0x14043F144
 * Callers:
 *     _PnpGetGenericStoreProperty @ 0x14043F704 (_PnpGetGenericStoreProperty.c)
 *     _PnpSetPropertyWorker @ 0x14045CE24 (_PnpSetPropertyWorker.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14046082C (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x1404DDE30 (_CmGetInstallerClassRegPropWorker.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x1404DE78C (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     _PnpDeletePropertyWorker @ 0x1404EBCF8 (_PnpDeletePropertyWorker.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x14051496C (_PnpGetGenericStorePropertyKeys.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140694860 (_CmSetInstallerClassRegPropWorker.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x14069712C (_PnpGetGenericStorePropertyLocales.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x140697840 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x1406979D8 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x1406993A0 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x1406997E0 (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x14008FA28 (RtlUnalignedStringCchLengthW.c)
 *     RtlStringCchPrintfExW @ 0x14008FB80 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlValidSecurityDescriptor @ 0x140435370 (RtlValidSecurityDescriptor.c)
 *     _SysCtxRegOpenKey @ 0x14043BE70 (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegCreateTree @ 0x140444C98 (_PnpCtxRegCreateTree.c)
 *     _PnpCtxRegCreateKey @ 0x14045D0B0 (_PnpCtxRegCreateKey.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1405184F8 (_PnpGetPropertiesSecurityDescriptor.c)
 */

__int64 __fastcall PnpOpenPropertiesKey(
        __int64 *a1,
        __int64 a2,
        const wchar_t *a3,
        unsigned int a4,
        char a5,
        __int64 a6,
        void **a7)
{
  NTSTATUS v7; // ebx
  void *v9; // rbp
  wchar_t *PoolWithTag; // rsi
  void *v11; // r12
  unsigned int v12; // eax
  unsigned int v14; // ebx
  __int64 v15; // rcx
  NTSTATUS v16; // eax
  __int64 v18; // rcx
  int Key; // eax
  void *PropertiesSecurityDescriptor; // rax
  int v21; // r9d
  unsigned int v22; // edx
  int Tree; // eax
  __int64 v25; // [rsp+48h] [rbp-E0h]
  size_t pcchLength[2]; // [rsp+50h] [rbp-D8h] BYREF
  wchar_t pszDest[64]; // [rsp+60h] [rbp-C8h] BYREF

  v7 = 0;
  v25 = a2;
  v9 = 0LL;
  PoolWithTag = 0LL;
  v11 = 0LL;
  *a7 = 0LL;
  v12 = a4;
  if ( a3 )
  {
    v7 = RtlUnalignedStringCchLengthW(a3, 0x200uLL, pcchLength);
    if ( v7 < 0 )
      return (unsigned int)v7;
    if ( pcchLength[0] >= 0x30 )
    {
      v14 = LODWORD(pcchLength[0]) + 12;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(
                                 PagedPool,
                                 2LL * (unsigned int)(LODWORD(pcchLength[0]) + 12),
                                 0x52504E50u);
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
    }
    else
    {
      PoolWithTag = pszDest;
      v14 = 59;
    }
    v7 = RtlStringCchPrintfExW(PoolWithTag, v14, 0LL, 0LL, 0x800u, L"%s\\%s", L"Properties", a3);
    if ( v7 < 0 )
      goto LABEL_11;
    if ( a1 )
      v15 = *a1;
    else
      v15 = 0LL;
    v16 = SysCtxRegOpenKey(v15, v25, (__int64)PoolWithTag, 0, a4, (__int64)a7);
    if ( v16 == -1073741444 )
    {
      v7 = -1073741772;
      goto LABEL_11;
    }
    if ( !a5 || v16 != -1073741772 )
    {
      v7 = v16;
      goto LABEL_11;
    }
    v12 = a4;
    a2 = v25;
  }
  if ( a1 )
    v18 = *a1;
  else
    v18 = 0LL;
  Key = SysCtxRegOpenKey(v18, a2, (__int64)L"Properties", 0, v12, (__int64)a7);
  if ( Key != -1073741772 )
    goto LABEL_29;
  if ( !a5 )
  {
LABEL_23:
    v7 = Key;
    goto LABEL_24;
  }
  PropertiesSecurityDescriptor = (void *)PnpGetPropertiesSecurityDescriptor();
  v9 = PropertiesSecurityDescriptor;
  if ( PropertiesSecurityDescriptor )
  {
    if ( !RtlValidSecurityDescriptor(PropertiesSecurityDescriptor) )
    {
      v7 = -1073741595;
      goto LABEL_24;
    }
    Key = PnpCtxRegCreateKey((_DWORD)a1, v25, (unsigned int)L"Properties", v21, a4, (__int64)v9, (__int64)a7, 0LL);
LABEL_29:
    if ( Key != -1073741444 )
    {
      if ( Key < 0 )
        goto LABEL_23;
      if ( !a3 )
      {
LABEL_24:
        if ( v9 )
          ExFreePoolWithTag(v9, 0);
        goto LABEL_11;
      }
      v11 = *a7;
      v22 = (unsigned int)*a7;
      *a7 = 0LL;
      Tree = PnpCtxRegCreateTree((_DWORD)a1, v22, (_DWORD)a3, 0, a4, 0LL, (__int64)a7, 0LL);
      if ( Tree != -1073741444 )
      {
        if ( Tree < 0 )
          v7 = Tree;
        goto LABEL_24;
      }
    }
    v7 = -1073741772;
    goto LABEL_24;
  }
  v7 = -1073741595;
LABEL_11:
  if ( PoolWithTag && PoolWithTag != pszDest )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v11 )
    ZwClose(v11);
  return (unsigned int)v7;
}
