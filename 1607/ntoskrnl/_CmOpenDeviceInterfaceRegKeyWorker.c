/*
 * XREFs of _CmOpenDeviceInterfaceRegKeyWorker @ 0x1404DBB94
 * Callers:
 *     _CmOpenDeviceInterfaceRegKey @ 0x1404DBA84 (_CmOpenDeviceInterfaceRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _PnpCtxRegCreateTree @ 0x1404DD744 (_PnpCtxRegCreateTree.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1404DE090 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _SysCtxRegOpenKey @ 0x1404E0B1C (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404E0C54 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlPrefixUnicodeString @ 0x1404E0F60 (RtlPrefixUnicodeString.c)
 *     _PnpCtxRegOpenCurrentUserKey @ 0x1406D7244 (_PnpCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmOpenDeviceInterfaceRegKeyWorker(
        __int64 *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  PVOID PoolWithTag; // rdi
  unsigned __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8
  NTSTATUS DeviceInterfaceRegKeyPath; // ebx
  int v17; // esi
  int v18; // edx
  __int64 v19; // rcx
  int Tree; // ecx
  int v22; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  __int64 v25; // [rsp+48h] [rbp-18h] BYREF
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
    v17 = (int)PoolWithTag;
    DeviceInterfaceRegKeyPath = PnpCtxRegOpenCurrentUserKey(a1, v14, v15, &Handle);
    if ( DeviceInterfaceRegKeyPath < 0 )
      goto LABEL_23;
    v18 = (int)Handle;
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
  v17 = (_DWORD)PoolWithTag + 50;
  DeviceInterfaceRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, 4LL, &v25);
  if ( DeviceInterfaceRegKeyPath < 0 )
    goto LABEL_23;
  v18 = v25;
LABEL_15:
  if ( a6 )
  {
    Tree = PnpCtxRegCreateTree((_DWORD)a1, v18, v17, 0, a5, 0LL, a7, (__int64)a8);
  }
  else
  {
    if ( a1 )
      v19 = *a1;
    else
      LODWORD(v19) = 0;
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
