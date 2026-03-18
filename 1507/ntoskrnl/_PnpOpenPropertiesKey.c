/*
 * XREFs of _PnpOpenPropertiesKey @ 0x14043E2E0
 * Callers:
 *     _PnpGetGenericStoreProperty @ 0x14043E4F4 (_PnpGetGenericStoreProperty.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x140458610 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     _PnpSetPropertyWorker @ 0x1404DAFEC (_PnpSetPropertyWorker.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x1404E4D6C (_CmGetInstallerClassRegPropWorker.c)
 *     _PnpDeletePropertyWorker @ 0x140563ED4 (_PnpDeletePropertyWorker.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14057EC8C (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x1407143F8 (_CmSetInstallerClassRegPropWorker.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140716CBC (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x140716FC0 (_PnpGetGenericStorePropertyLocales.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x1407176D4 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x140717868 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x140719200 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x14071963C (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x14001988C (RtlUnalignedStringCchLengthW.c)
 *     RtlStringCchPrintfExW @ 0x140019C20 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     _SysCtxRegOpenKey @ 0x140435B90 (_SysCtxRegOpenKey.c)
 *     RtlValidSecurityDescriptor @ 0x1404C8FB0 (RtlValidSecurityDescriptor.c)
 *     _PnpCtxRegCreateKey @ 0x1404DDA14 (_PnpCtxRegCreateKey.c)
 *     _PnpCtxRegCreateTree @ 0x1404DE538 (_PnpCtxRegCreateTree.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x14058C9CC (_PnpGetPropertiesSecurityDescriptor.c)
 */

__int64 __fastcall PnpOpenPropertiesKey(
        __int64 *a1,
        char *a2,
        const wchar_t *a3,
        ACCESS_MASK a4,
        char a5,
        __int64 a6,
        HANDLE *a7)
{
  NTSTATUS v7; // ebx
  void *v9; // rbp
  wchar_t *PoolWithTag; // rsi
  HANDLE v11; // r12
  ACCESS_MASK v12; // eax
  unsigned int v14; // ebx
  __int64 v15; // rcx
  NTSTATUS v16; // eax
  __int64 v18; // rcx
  int Key; // eax
  void *PropertiesSecurityDescriptor; // rax
  int v21; // r9d
  unsigned int v22; // edx
  int Tree; // eax
  char *v25; // [rsp+48h] [rbp-E0h]
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
    v16 = SysCtxRegOpenKey(v15, v25, PoolWithTag, 0, a4, a7);
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
  Key = SysCtxRegOpenKey(v18, a2, L"Properties", 0, v12, a7);
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
    Key = PnpCtxRegCreateKey(
            (_DWORD)a1,
            (_DWORD)v25,
            (unsigned int)L"Properties",
            v21,
            a4,
            (__int64)v9,
            (__int64)a7,
            0LL);
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
