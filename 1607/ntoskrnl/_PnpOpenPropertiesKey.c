/*
 * XREFs of _PnpOpenPropertiesKey @ 0x1404DDBBC
 * Callers:
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1404BBA40 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _PnpDeletePropertyWorker @ 0x1404D2D04 (_PnpDeletePropertyWorker.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x1404D97CC (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     _PnpGetGenericStoreProperty @ 0x1404DD9A0 (_PnpGetGenericStoreProperty.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x1404E7094 (_CmGetInstallerClassRegPropWorker.c)
 *     _PnpSetPropertyWorker @ 0x140512B14 (_PnpSetPropertyWorker.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x1406D98C0 (_CmSetInstallerClassRegPropWorker.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1406DC340 (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x1406DC644 (_PnpGetGenericStorePropertyLocales.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x1406DCD58 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x1406DCEEC (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x1406DF42C (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x1406DF88C (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x1400C1760 (RtlUnalignedStringCchLengthW.c)
 *     RtlStringCchPrintfExW @ 0x1400C1890 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlValidSecurityDescriptor @ 0x1404A8A74 (RtlValidSecurityDescriptor.c)
 *     _PnpCtxRegCreateTree @ 0x1404DD744 (_PnpCtxRegCreateTree.c)
 *     _SysCtxRegOpenKey @ 0x1404E0B1C (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegCreateKey @ 0x140512D88 (_PnpCtxRegCreateKey.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1406DFDA4 (_PnpGetPropertiesSecurityDescriptor.c)
 */

__int64 __fastcall PnpOpenPropertiesKey(__int64 *a1, int a2, const wchar_t *a3, int a4, char a5, __int64 a6, void **a7)
{
  NTSTATUS v7; // ebx
  void *v9; // rbp
  wchar_t *PoolWithTag; // rsi
  void *v11; // r12
  int v12; // eax
  unsigned int v14; // ebx
  __int64 v15; // rcx
  NTSTATUS v16; // eax
  __int64 v18; // rcx
  int Key; // eax
  void *PropertiesSecurityDescriptor; // rax
  int v21; // r9d
  int Tree; // eax
  int v24; // [rsp+48h] [rbp-E0h]
  size_t pcchLength[2]; // [rsp+50h] [rbp-D8h] BYREF
  wchar_t pszDest[64]; // [rsp+60h] [rbp-C8h] BYREF

  v7 = 0;
  v24 = a2;
  v9 = 0LL;
  PoolWithTag = 0LL;
  v11 = 0LL;
  *a7 = 0LL;
  v12 = a4;
  if ( !a3 )
    goto LABEL_19;
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
  if ( v7 >= 0 )
  {
    if ( a1 )
      v15 = *a1;
    else
      LODWORD(v15) = 0;
    v16 = SysCtxRegOpenKey(v15, v24, (_DWORD)PoolWithTag, 0, a4, (__int64)a7);
    if ( v16 == -1073741444 )
    {
      v7 = -1073741772;
      goto LABEL_11;
    }
    if ( v16 != -1073741772 || !a5 )
    {
      v7 = v16;
      goto LABEL_11;
    }
    v12 = a4;
    a2 = v24;
LABEL_19:
    if ( a1 )
      v18 = *a1;
    else
      LODWORD(v18) = 0;
    Key = SysCtxRegOpenKey(v18, a2, (unsigned int)L"Properties", 0, v12, (__int64)a7);
    if ( Key == -1073741772 )
    {
      if ( !a5 )
      {
LABEL_23:
        v7 = Key;
        goto LABEL_24;
      }
      PropertiesSecurityDescriptor = (void *)PnpGetPropertiesSecurityDescriptor();
      v9 = PropertiesSecurityDescriptor;
      if ( !PropertiesSecurityDescriptor )
      {
        v7 = -1073741595;
        goto LABEL_11;
      }
      if ( !RtlValidSecurityDescriptor(PropertiesSecurityDescriptor) )
      {
        v7 = -1073741595;
        goto LABEL_24;
      }
      Key = PnpCtxRegCreateKey((_DWORD)a1, v24, (unsigned int)L"Properties", v21, a4, (__int64)v9, (__int64)a7, 0LL);
    }
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
      *a7 = 0LL;
      Tree = PnpCtxRegCreateTree(a1);
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
LABEL_11:
  if ( PoolWithTag && PoolWithTag != pszDest )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v11 )
    ZwClose(v11);
  return (unsigned int)v7;
}
