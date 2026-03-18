/*
 * XREFs of _CmOpenDeviceInterfaceRegKeyWorker @ 0x140442270
 * Callers:
 *     _CmOpenDeviceInterfaceRegKey @ 0x140442160 (_CmOpenDeviceInterfaceRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     _SysCtxRegOpenKey @ 0x14043BE70 (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14043BFA8 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlPrefixUnicodeString @ 0x14043C2B0 (RtlPrefixUnicodeString.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x140442490 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _PnpCtxRegCreateTree @ 0x140444C98 (_PnpCtxRegCreateTree.c)
 *     _PnpCtxRegOpenCurrentUserKey @ 0x140692874 (_PnpCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmOpenDeviceInterfaceRegKeyWorker(
        __int64 *a1,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  PVOID PoolWithTag; // rdi
  unsigned __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8
  int DeviceInterfaceRegKeyPath; // ebx
  __int64 v17; // rsi
  HANDLE v18; // rdx
  __int64 v19; // rcx
  int Tree; // ecx
  int v22; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  void *v25; // [rsp+48h] [rbp-18h] BYREF
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
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v13, 0x52504E50u);
    if ( !PoolWithTag )
      break;
    LODWORD(cchDest) = (unsigned int)v13 >> 1;
    DeviceInterfaceRegKeyPath = CmGetDeviceInterfaceRegKeyPath(
                                  (unsigned int)v13 >> 1,
                                  a2,
                                  a3,
                                  a4,
                                  v22,
                                  (__int64)PoolWithTag,
                                  cchDest,
                                  (__int64)&v27);
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
    v17 = (__int64)PoolWithTag;
    DeviceInterfaceRegKeyPath = PnpCtxRegOpenCurrentUserKey(a1, v14, v15, &Handle);
    if ( DeviceInterfaceRegKeyPath < 0 )
      goto LABEL_23;
    v18 = Handle;
    goto LABEL_15;
  }
  DeviceInterfaceRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)PoolWithTag);
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
  v17 = (__int64)PoolWithTag + 50;
  DeviceInterfaceRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, 4, &v25);
  if ( DeviceInterfaceRegKeyPath < 0 )
    goto LABEL_23;
  v18 = v25;
LABEL_15:
  if ( a6 )
  {
    Tree = PnpCtxRegCreateTree((_DWORD)a1, (_DWORD)v18, v17, 0, a5, 0LL, a7, (__int64)a8);
  }
  else
  {
    if ( a1 )
      v19 = *a1;
    else
      v19 = 0LL;
    Tree = SysCtxRegOpenKey(v19, (__int64)v18, v17, 0, a5, a7);
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
