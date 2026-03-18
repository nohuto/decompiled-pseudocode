/*
 * XREFs of _CmOpenDeviceInterfaceRegKeyWorker @ 0x14043EF34
 * Callers:
 *     _CmOpenDeviceInterfaceRegKey @ 0x14043F154 (_CmOpenDeviceInterfaceRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     _SysCtxRegOpenKey @ 0x140435B90 (_SysCtxRegOpenKey.c)
 *     RtlPrefixUnicodeString @ 0x1404369B0 (RtlPrefixUnicodeString.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x14043C0E0 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14043D1B0 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegCreateTree @ 0x1404DE538 (_PnpCtxRegCreateTree.c)
 *     _PnpCtxRegOpenCurrentUserKey @ 0x140712414 (_PnpCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmOpenDeviceInterfaceRegKeyWorker(
        __int64 *a1,
        __int64 a2,
        int a3,
        int a4,
        ACCESS_MASK a5,
        char a6,
        HANDLE *a7,
        _DWORD *a8)
{
  wchar_t *PoolWithTag; // rdi
  unsigned __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8
  int DeviceInterfaceRegKeyPath; // ebx
  const WCHAR *v17; // rsi
  char *v18; // rdx
  __int64 v19; // rcx
  int Tree; // ecx
  int v22; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  char *v25; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v27; // [rsp+A0h] [rbp+40h] BYREF

  PoolWithTag = 0LL;
  v25 = 0LL;
  Handle = 0LL;
  if ( !a3 || (a3 & 0xFFFFFCCC) != 0 )
    goto LABEL_36;
  LODWORD(v13) = 480;
  if ( (a3 & 0x200) != 0 )
    LODWORD(v13) = 600;
  while ( 1 )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v13, 0x52504E50u);
    if ( !PoolWithTag )
      break;
    LODWORD(cchDest) = (unsigned int)v13 >> 1;
    DeviceInterfaceRegKeyPath = CmGetDeviceInterfaceRegKeyPath(
                                  (unsigned int)v13 >> 1,
                                  a2,
                                  a3,
                                  a4,
                                  v22,
                                  PoolWithTag,
                                  cchDest,
                                  &v27);
    if ( DeviceInterfaceRegKeyPath != -1073741789 )
      goto LABEL_7;
    ExFreePoolWithTag(PoolWithTag, 0);
    PoolWithTag = 0LL;
    v13 = 2LL * (unsigned int)v27;
    if ( v13 > 0xFFFFFFFF )
    {
      DeviceInterfaceRegKeyPath = -1073741675;
      goto LABEL_23;
    }
  }
  DeviceInterfaceRegKeyPath = -1073741801;
LABEL_7:
  if ( DeviceInterfaceRegKeyPath < 0 )
    goto LABEL_23;
  if ( (a3 & 0x100) != 0 )
  {
    v17 = PoolWithTag;
    DeviceInterfaceRegKeyPath = PnpCtxRegOpenCurrentUserKey(a1, v14, v15, &Handle);
    if ( DeviceInterfaceRegKeyPath < 0 )
      goto LABEL_23;
    v18 = (char *)Handle;
    goto LABEL_15;
  }
  DeviceInterfaceRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, PoolWithTag);
  if ( DeviceInterfaceRegKeyPath < 0 )
    goto LABEL_23;
  if ( DestinationString.Length >= (unsigned int)v13
    || DestinationString.Length <= 0x32u
    || !RtlPrefixUnicodeString(&`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::ObjectPathRootPrefix, &DestinationString, 1u) )
  {
LABEL_36:
    DeviceInterfaceRegKeyPath = -1073741811;
    goto LABEL_23;
  }
  v17 = PoolWithTag + 25;
  DeviceInterfaceRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, 4, &v25);
  if ( DeviceInterfaceRegKeyPath < 0 )
    goto LABEL_23;
  v18 = v25;
LABEL_15:
  if ( a6 )
  {
    Tree = PnpCtxRegCreateTree((_DWORD)a1, (_DWORD)v18, (_DWORD)v17, 0, a5, 0LL, (__int64)a7, (__int64)a8);
  }
  else
  {
    if ( a1 )
      v19 = *a1;
    else
      v19 = 0LL;
    Tree = SysCtxRegOpenKey(v19, v18, v17, 0, a5, a7);
    if ( Tree >= 0 )
      *a8 = 2;
  }
  if ( Tree == -1073741444 )
  {
    DeviceInterfaceRegKeyPath = -1073741595;
  }
  else if ( Tree < 0 )
  {
    DeviceInterfaceRegKeyPath = Tree;
  }
LABEL_23:
  if ( Handle )
    ZwClose(Handle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)DeviceInterfaceRegKeyPath;
}
