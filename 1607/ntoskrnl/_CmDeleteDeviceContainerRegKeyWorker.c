/*
 * XREFs of _CmDeleteDeviceContainerRegKeyWorker @ 0x1406D9D7C
 * Callers:
 *     _CmDeleteDeviceContainerRegKey @ 0x1406D9C64 (_CmDeleteDeviceContainerRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404E0C54 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlPrefixUnicodeString @ 0x1404E0F60 (RtlPrefixUnicodeString.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x140513790 (_CmGetDeviceContainerRegKeyPath.c)
 *     _PnpCtxRegDeleteTree @ 0x140550B58 (_PnpCtxRegDeleteTree.c)
 *     _PnpCtxRegDeleteKey @ 0x1406D71B8 (_PnpCtxRegDeleteKey.c)
 *     _PnpCtxRegOpenCurrentUserKey @ 0x1406D7244 (_PnpCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmDeleteDeviceContainerRegKeyWorker(__int64 *a1, __int64 a2, unsigned int a3, int a4, char a5)
{
  wchar_t *pszDest; // rdi
  unsigned int v9; // r14d
  SIZE_T i; // rdx
  int DeviceContainerRegKeyPath; // ebx
  unsigned __int64 v12; // rax
  __int64 v13; // r9
  const WCHAR *v14; // rsi
  char *v15; // rdx
  int v16; // eax
  int v18; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  char *v20; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+48h] BYREF

  LODWORD(v22) = a4;
  pszDest = 0LL;
  v20 = 0LL;
  if ( !a3 || (a3 & 0xFFFFFEAF) != 0 )
    goto LABEL_26;
  v9 = 260;
  for ( i = 260LL; ; i = (unsigned int)v12 )
  {
    pszDest = (wchar_t *)ExAllocatePoolWithTag(PagedPool, i, 0x52504E50u);
    if ( !pszDest )
      break;
    LODWORD(cchDest) = v9 >> 1;
    DeviceContainerRegKeyPath = CmGetDeviceContainerRegKeyPath(v9 >> 1, a2, a3, v13, v18, pszDest, cchDest, &v22);
    if ( DeviceContainerRegKeyPath != -1073741789 )
      goto LABEL_9;
    ExFreePoolWithTag(pszDest, 0);
    pszDest = 0LL;
    v12 = 2LL * (unsigned int)v22;
    if ( v12 > 0xFFFFFFFF )
    {
      DeviceContainerRegKeyPath = -1073741675;
      goto LABEL_27;
    }
    v9 = 2 * v22;
  }
  DeviceContainerRegKeyPath = -1073741801;
LABEL_9:
  if ( DeviceContainerRegKeyPath < 0 )
    goto LABEL_27;
  if ( (a3 & 0x100) != 0 )
  {
    v14 = pszDest;
    DeviceContainerRegKeyPath = PnpCtxRegOpenCurrentUserKey(a1);
    if ( DeviceContainerRegKeyPath < 0 )
      goto LABEL_27;
    v15 = 0LL;
    goto LABEL_20;
  }
  DeviceContainerRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, pszDest);
  if ( DeviceContainerRegKeyPath < 0 )
    goto LABEL_27;
  if ( DestinationString.Length >= v9
    || DestinationString.Length <= 0x32u
    || !RtlPrefixUnicodeString(
          &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
          &DestinationString,
          1u) )
  {
LABEL_26:
    DeviceContainerRegKeyPath = -1073741811;
    goto LABEL_27;
  }
  v14 = pszDest + 25;
  DeviceContainerRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, 4, (__int64 *)&v20);
  if ( DeviceContainerRegKeyPath < 0 )
    goto LABEL_27;
  v15 = v20;
LABEL_20:
  if ( a5 )
    v16 = PnpCtxRegDeleteTree((__int64)a1, (__int64)v15, (__int64)v14);
  else
    v16 = PnpCtxRegDeleteKey((__int64)a1, v15, v14);
  if ( (int)(v16 + 0x80000000) >= 0 && v16 != -1073741444 )
    DeviceContainerRegKeyPath = v16;
LABEL_27:
  if ( pszDest )
    ExFreePoolWithTag(pszDest, 0);
  return (unsigned int)DeviceContainerRegKeyPath;
}
