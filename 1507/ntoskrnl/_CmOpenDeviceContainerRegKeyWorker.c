/*
 * XREFs of _CmOpenDeviceContainerRegKeyWorker @ 0x140537FFC
 * Callers:
 *     _CmOpenDeviceContainerRegKey @ 0x140537EF0 (_CmOpenDeviceContainerRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     _SysCtxRegOpenKey @ 0x140435B90 (_SysCtxRegOpenKey.c)
 *     RtlPrefixUnicodeString @ 0x1404369B0 (RtlPrefixUnicodeString.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14043D1B0 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegCreateTree @ 0x1404DE538 (_PnpCtxRegCreateTree.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x1405381D8 (_CmGetDeviceContainerRegKeyPath.c)
 *     _PnpCtxRegOpenCurrentUserKey @ 0x140712414 (_PnpCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmOpenDeviceContainerRegKeyWorker(
        __int64 *a1,
        int a2,
        int a3,
        int a4,
        ACCESS_MASK a5,
        char a6,
        HANDLE *a7,
        _DWORD *a8)
{
  wchar_t *pszDest; // rdi
  unsigned int v12; // r15d
  SIZE_T i; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // r9d
  int DeviceContainerRegKeyPath; // ebx
  const WCHAR *v18; // r14
  char *v19; // rdx
  __int64 v20; // rcx
  int Tree; // ecx
  unsigned __int64 v23; // rax
  int v24; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  char *v27; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v29; // [rsp+A8h] [rbp+48h] BYREF

  LODWORD(v29) = a4;
  pszDest = 0LL;
  v27 = 0LL;
  Handle = 0LL;
  if ( !a3 || (a3 & 0xFFFFFEAF) != 0 )
    goto LABEL_36;
  v12 = 260;
  for ( i = 260LL; ; i = (unsigned int)v23 )
  {
    pszDest = (wchar_t *)ExAllocatePoolWithTag(PagedPool, i, 0x52504E50u);
    if ( !pszDest )
      break;
    LODWORD(cchDest) = v12 >> 1;
    DeviceContainerRegKeyPath = CmGetDeviceContainerRegKeyPath(
                                  v12 >> 1,
                                  a2,
                                  a3,
                                  v16,
                                  v24,
                                  pszDest,
                                  cchDest,
                                  (__int64)&v29);
    if ( DeviceContainerRegKeyPath != -1073741789 )
      goto LABEL_6;
    ExFreePoolWithTag(pszDest, 0);
    pszDest = 0LL;
    v23 = 2LL * (unsigned int)v29;
    if ( v23 > 0xFFFFFFFF )
    {
      DeviceContainerRegKeyPath = -1073741675;
      goto LABEL_22;
    }
    v12 = 2 * v29;
  }
  DeviceContainerRegKeyPath = -1073741801;
LABEL_6:
  if ( DeviceContainerRegKeyPath < 0 )
    goto LABEL_22;
  if ( (a3 & 0x100) != 0 )
  {
    v18 = pszDest;
    DeviceContainerRegKeyPath = PnpCtxRegOpenCurrentUserKey(a1, v14, v15, &Handle);
    if ( DeviceContainerRegKeyPath < 0 )
      goto LABEL_22;
    v19 = (char *)Handle;
    goto LABEL_14;
  }
  DeviceContainerRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, pszDest);
  if ( DeviceContainerRegKeyPath < 0 )
    goto LABEL_22;
  if ( DestinationString.Length >= v12
    || DestinationString.Length <= 0x32u
    || !RtlPrefixUnicodeString(&`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::ObjectPathRootPrefix, &DestinationString, 1u) )
  {
LABEL_36:
    DeviceContainerRegKeyPath = -1073741811;
    goto LABEL_22;
  }
  v18 = pszDest + 25;
  DeviceContainerRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, 4, &v27);
  if ( DeviceContainerRegKeyPath < 0 )
    goto LABEL_22;
  v19 = v27;
LABEL_14:
  if ( a6 )
  {
    Tree = PnpCtxRegCreateTree(a1, (__int64)v19, (__int64)v18, 0LL, a5, 0LL);
  }
  else
  {
    if ( a1 )
      v20 = *a1;
    else
      v20 = 0LL;
    Tree = SysCtxRegOpenKey(v20, v19, v18, 0, a5, a7);
    if ( Tree >= 0 )
      *a8 = 2;
  }
  if ( Tree == -1073741444 )
  {
    DeviceContainerRegKeyPath = -1073741595;
  }
  else if ( Tree < 0 )
  {
    DeviceContainerRegKeyPath = Tree;
  }
LABEL_22:
  if ( Handle )
    ZwClose(Handle);
  if ( pszDest )
    ExFreePoolWithTag(pszDest, 0);
  return (unsigned int)DeviceContainerRegKeyPath;
}
