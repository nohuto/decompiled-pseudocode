/*
 * XREFs of _CmOpenCommonClassRegKeyWorker @ 0x1404DE228
 * Callers:
 *     _CmOpenCommonClassRegKey @ 0x1404DE0E0 (_CmOpenCommonClassRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     _SysCtxRegOpenKey @ 0x14043BE70 (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14043BFA8 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlPrefixUnicodeString @ 0x14043C2B0 (RtlPrefixUnicodeString.c)
 *     _PnpCtxRegCreateTree @ 0x140444C98 (_PnpCtxRegCreateTree.c)
 *     _CmGetCommonClassRegKeyPath @ 0x1404DE404 (_CmGetCommonClassRegKeyPath.c)
 *     _PnpCtxRegOpenCurrentUserKey @ 0x140692874 (_PnpCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmOpenCommonClassRegKeyWorker(
        __int64 *a1,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  unsigned __int64 v8; // rsi
  __int64 v13; // rdx
  wchar_t *pszDest; // rdi
  __int64 v15; // r8
  int CommonClassRegKeyPath; // ebx
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

  v25 = 0LL;
  LODWORD(v8) = 200;
  Handle = 0LL;
  if ( (a3 & 0x200) != 0 )
    LODWORD(v8) = 320;
  while ( 1 )
  {
    pszDest = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v8, 0x52504E50u);
    if ( !pszDest )
      break;
    LODWORD(cchDest) = (unsigned int)v8 >> 1;
    CommonClassRegKeyPath = CmGetCommonClassRegKeyPath(
                              (unsigned int)v8 >> 1,
                              a2,
                              a3,
                              a4,
                              v22,
                              pszDest,
                              cchDest,
                              (__int64)&v27);
    if ( CommonClassRegKeyPath != -1073741789 )
      goto LABEL_5;
    ExFreePoolWithTag(pszDest, 0);
    pszDest = 0LL;
    v8 = 2LL * (unsigned int)v27;
    if ( v8 > 0xFFFFFFFF )
    {
      CommonClassRegKeyPath = -1073741675;
      goto LABEL_21;
    }
  }
  CommonClassRegKeyPath = -1073741801;
LABEL_5:
  if ( CommonClassRegKeyPath < 0 )
    goto LABEL_21;
  if ( (a3 & 0x100) != 0 )
  {
    v17 = (__int64)pszDest;
    CommonClassRegKeyPath = PnpCtxRegOpenCurrentUserKey(a1, v13, v15, &Handle);
    if ( CommonClassRegKeyPath < 0 )
      goto LABEL_21;
    v18 = Handle;
  }
  else
  {
    CommonClassRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, pszDest);
    if ( CommonClassRegKeyPath < 0 )
      goto LABEL_21;
    if ( DestinationString.Length >= (unsigned int)v8
      || DestinationString.Length <= 0x32u
      || !RtlPrefixUnicodeString(
            &`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::ObjectPathRootPrefix,
            &DestinationString,
            1u) )
    {
      CommonClassRegKeyPath = -1073741811;
      goto LABEL_21;
    }
    v17 = (__int64)(pszDest + 25);
    CommonClassRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, 4, &v25);
    if ( CommonClassRegKeyPath < 0 )
      goto LABEL_21;
    v18 = v25;
  }
  if ( a6 )
  {
    Tree = PnpCtxRegCreateTree(a1, (__int64)v18, v17, 0LL, a5, 0LL);
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
    CommonClassRegKeyPath = -1073741595;
  }
  else if ( Tree < 0 )
  {
    CommonClassRegKeyPath = Tree;
  }
LABEL_21:
  if ( Handle )
    ZwClose(Handle);
  if ( pszDest )
    ExFreePoolWithTag(pszDest, 0);
  return (unsigned int)CommonClassRegKeyPath;
}
