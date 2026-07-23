/*
 * XREFs of _CmDeleteDeviceRegKeyWorker @ 0x1406D86D8
 * Callers:
 *     _CmDeleteDeviceRegKey @ 0x1406D85AC (_CmDeleteDeviceRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     wcsrchr @ 0x14014F694 (wcsrchr.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _CmGetDeviceRegKeyPath @ 0x1404E07C8 (_CmGetDeviceRegKeyPath.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404E0C54 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlPrefixUnicodeString @ 0x1404E0F60 (RtlPrefixUnicodeString.c)
 *     _CmSetDeviceRegProp @ 0x1405121B4 (_CmSetDeviceRegProp.c)
 *     _PnpCtxRegDeleteTree @ 0x140550B58 (_PnpCtxRegDeleteTree.c)
 *     _PnpCtxRegDeleteKey @ 0x1406D71B8 (_PnpCtxRegDeleteKey.c)
 *     _PnpCtxRegOpenCurrentUserKey @ 0x1406D7244 (_PnpCtxRegOpenCurrentUserKey.c)
 *     _CmDeleteDeviceRegKey @ 0x1406D85AC (_CmDeleteDeviceRegKey.c)
 *     _CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues @ 0x1406DCA60 (_CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues.c)
 */

__int64 __fastcall CmDeleteDeviceRegKeyWorker(__int64 *a1, __int64 a2, int a3, int a4, char a5)
{
  __int64 v7; // rbx
  wchar_t *PoolWithTag; // rsi
  unsigned __int64 v10; // rdi
  int DeviceRegKeyPath; // ebx
  const WCHAR *v12; // rdi
  char *v13; // r12
  int *p_DestinationString; // rcx
  int v15; // eax
  int v16; // eax
  wchar_t *v17; // rax
  wchar_t *v18; // r14
  size_t v20; // [rsp+30h] [rbp-50h]
  __int64 v21; // [rsp+40h] [rbp-40h] BYREF
  UNICODE_STRING *v22; // [rsp+48h] [rbp-38h] BYREF
  __int64 v23; // [rsp+50h] [rbp-30h]
  HANDLE Handle; // [rsp+58h] [rbp-28h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-20h] BYREF

  v23 = a2;
  v22 = 0LL;
  Handle = 0LL;
  v7 = a2;
  PoolWithTag = 0LL;
  if ( !a3 || (a3 & 0xFFFFFCE8) != 0 )
    goto LABEL_53;
  LODWORD(v10) = 240;
  if ( (a3 & 0x200) != 0 )
    LODWORD(v10) = 360;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v10, 0x52504E50u);
  if ( PoolWithTag )
  {
    while ( 1 )
    {
      LODWORD(v20) = (unsigned int)v10 >> 1;
      DeviceRegKeyPath = CmGetDeviceRegKeyPath((__int64)a1, v7, a3, a4, 0, PoolWithTag, v20, &v21);
      if ( DeviceRegKeyPath != -1073741789 )
        break;
      ExFreePoolWithTag(PoolWithTag, 0);
      v10 = 2LL * (unsigned int)v21;
      PoolWithTag = 0LL;
      if ( v10 > 0xFFFFFFFF )
      {
        DeviceRegKeyPath = -1073741675;
        goto LABEL_54;
      }
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v10, 0x52504E50u);
      if ( !PoolWithTag )
        goto LABEL_11;
      v7 = v23;
    }
  }
  else
  {
LABEL_11:
    DeviceRegKeyPath = -1073741801;
  }
  if ( DeviceRegKeyPath < 0 )
    goto LABEL_54;
  if ( (a3 & 0x100) != 0 )
  {
    v12 = PoolWithTag;
    DeviceRegKeyPath = PnpCtxRegOpenCurrentUserKey(a1);
    if ( DeviceRegKeyPath < 0 )
      goto LABEL_54;
    v13 = (char *)Handle;
    goto LABEL_22;
  }
  DeviceRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, PoolWithTag);
  if ( DeviceRegKeyPath < 0 )
    goto LABEL_54;
  if ( DestinationString.Length >= (unsigned int)v10
    || DestinationString.Length <= 0x32u
    || !RtlPrefixUnicodeString(
          &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
          &DestinationString,
          1u) )
  {
LABEL_53:
    DeviceRegKeyPath = -1073741811;
    goto LABEL_54;
  }
  v12 = PoolWithTag + 25;
  DeviceRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, 4, (__int64 *)&v22);
  if ( DeviceRegKeyPath < 0 )
    goto LABEL_54;
  v13 = (char *)v22;
LABEL_22:
  if ( (unsigned __int8)a3 == 18 && (a3 & 0xF00) == 0 )
  {
    LODWORD(v21) = 0;
    p_DestinationString = (int *)&DestinationString;
    v22 = &DestinationString;
    *(_DWORD *)&DestinationString.Length = 786;
    *(_DWORD *)(&DestinationString.MaximumLength + 1) = 530;
    LODWORD(DestinationString.Buffer) = 274;
    while ( 1 )
    {
      v15 = CmDeleteDeviceRegKey((__int64)a1, v23, *p_DestinationString, 0);
      if ( v15 )
      {
        if ( v15 != -1073741772 && v15 != -1073741811 && v15 != -1073741637 )
          break;
      }
      p_DestinationString = (int *)(&v22->MaximumLength + 1);
      LODWORD(v21) = v21 + 1;
      v22 = (UNICODE_STRING *)((char *)v22 + 4);
      if ( (unsigned __int64)(int)v21 >= 3 )
        goto LABEL_32;
    }
    DeviceRegKeyPath = v15;
LABEL_32:
    if ( DeviceRegKeyPath < 0 )
      goto LABEL_54;
    CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues(a1, v23);
    v16 = CmSetDeviceRegProp((__int64)a1, v23, 0LL, 0xAu, 1u, 0LL, 0, 0);
    if ( v16 && v16 != -1073741275 && v16 != -1073741810 )
      goto LABEL_36;
  }
  if ( a5 )
    v16 = PnpCtxRegDeleteTree((__int64)a1, (__int64)v13, (__int64)v12);
  else
    v16 = PnpCtxRegDeleteKey((__int64)a1, v13, v12);
  if ( v16 != -1073741444 )
  {
    if ( v16 < 0 )
    {
LABEL_36:
      DeviceRegKeyPath = v16;
      goto LABEL_54;
    }
    if ( (unsigned __int8)a3 != 18 && ((unsigned __int8)a3 != 17 || (a3 & 0xF00) != 0) )
    {
      v17 = wcsrchr(v12, 0x5Cu);
      if ( v17 && (*v17 = 0, (v18 = wcsrchr(v12, 0x5Cu)) != 0LL) )
      {
        v16 = PnpCtxRegDeleteKey((__int64)a1, v13, v12);
        if ( v16 != -1073741535 )
        {
          if ( v16 < 0 )
            goto LABEL_36;
          *v18 = 0;
          v16 = PnpCtxRegDeleteKey((__int64)a1, v13, v12);
          if ( (int)(v16 + 0x80000000) >= 0 && v16 != -1073741535 )
            goto LABEL_36;
        }
      }
      else
      {
        DeviceRegKeyPath = -1073741595;
      }
    }
  }
LABEL_54:
  if ( Handle )
    ZwClose(Handle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)DeviceRegKeyPath;
}
