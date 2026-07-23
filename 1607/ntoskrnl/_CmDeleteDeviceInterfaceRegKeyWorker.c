/*
 * XREFs of _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1406D815C
 * Callers:
 *     _CmDeleteDeviceInterfaceRegKey @ 0x1406D8034 (_CmDeleteDeviceInterfaceRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1404DE090 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404E0C54 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlPrefixUnicodeString @ 0x1404E0F60 (RtlPrefixUnicodeString.c)
 *     _PnpCtxRegDeleteTree @ 0x140550B58 (_PnpCtxRegDeleteTree.c)
 *     _PnpCtxRegDeleteKey @ 0x1406D71B8 (_PnpCtxRegDeleteKey.c)
 *     _PnpCtxRegOpenCurrentUserKey @ 0x1406D7244 (_PnpCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmDeleteDeviceInterfaceRegKeyWorker(__int64 *a1, __int64 a2, int a3, int a4, char a5)
{
  wchar_t *PoolWithTag; // rdi
  unsigned __int64 v10; // rsi
  int DeviceInterfaceRegKeyPath; // ebx
  const WCHAR *v12; // rsi
  char *v13; // rdx
  int v14; // eax
  int v16; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  char *v18; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+40h] BYREF

  PoolWithTag = 0LL;
  v18 = 0LL;
  if ( !a3 || (a3 & 0xFFFFFCCC) != 0 )
    goto LABEL_27;
  LODWORD(v10) = 480;
  if ( (a3 & 0x200) != 0 )
    LODWORD(v10) = 600;
  while ( 1 )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v10, 0x52504E50u);
    if ( !PoolWithTag )
      break;
    LODWORD(cchDest) = (unsigned int)v10 >> 1;
    DeviceInterfaceRegKeyPath = CmGetDeviceInterfaceRegKeyPath(
                                  (unsigned int)v10 >> 1,
                                  a2,
                                  a3,
                                  a4,
                                  v16,
                                  PoolWithTag,
                                  cchDest,
                                  &v20);
    if ( DeviceInterfaceRegKeyPath != -1073741789 )
      goto LABEL_10;
    ExFreePoolWithTag(PoolWithTag, 0);
    PoolWithTag = 0LL;
    v10 = 2LL * (unsigned int)v20;
    if ( v10 > 0xFFFFFFFF )
    {
      DeviceInterfaceRegKeyPath = -1073741675;
      goto LABEL_28;
    }
  }
  DeviceInterfaceRegKeyPath = -1073741801;
LABEL_10:
  if ( DeviceInterfaceRegKeyPath < 0 )
    goto LABEL_28;
  if ( (a3 & 0x100) != 0 )
  {
    v12 = PoolWithTag;
    DeviceInterfaceRegKeyPath = PnpCtxRegOpenCurrentUserKey(a1);
    if ( DeviceInterfaceRegKeyPath < 0 )
      goto LABEL_28;
    v13 = 0LL;
    goto LABEL_21;
  }
  DeviceInterfaceRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, PoolWithTag);
  if ( DeviceInterfaceRegKeyPath < 0 )
    goto LABEL_28;
  if ( DestinationString.Length >= (unsigned int)v10
    || DestinationString.Length <= 0x32u
    || !RtlPrefixUnicodeString(
          &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
          &DestinationString,
          1u) )
  {
LABEL_27:
    DeviceInterfaceRegKeyPath = -1073741811;
    goto LABEL_28;
  }
  v12 = PoolWithTag + 25;
  DeviceInterfaceRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, 4, (__int64 *)&v18);
  if ( DeviceInterfaceRegKeyPath < 0 )
    goto LABEL_28;
  v13 = v18;
LABEL_21:
  if ( a5 )
    v14 = PnpCtxRegDeleteTree((__int64)a1, (__int64)v13, (__int64)v12);
  else
    v14 = PnpCtxRegDeleteKey((__int64)a1, v13, v12);
  if ( (int)(v14 + 0x80000000) >= 0 && v14 != -1073741444 )
    DeviceInterfaceRegKeyPath = v14;
LABEL_28:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)DeviceInterfaceRegKeyPath;
}
