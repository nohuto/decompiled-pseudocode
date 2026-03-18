/*
 * XREFs of _CmOpenCommonClassRegKeyWorker @ 0x140440170
 * Callers:
 *     _CmOpenCommonClassRegKey @ 0x14044034C (_CmOpenCommonClassRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     _SysCtxRegOpenKey @ 0x140435B90 (_SysCtxRegOpenKey.c)
 *     RtlPrefixUnicodeString @ 0x1404369B0 (RtlPrefixUnicodeString.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14043D1B0 (_PnpCtxGetCachedContextBaseKey.c)
 *     _CmGetCommonClassRegKeyPath @ 0x140440044 (_CmGetCommonClassRegKeyPath.c)
 *     _PnpCtxRegCreateTree @ 0x1404DE538 (_PnpCtxRegCreateTree.c)
 *     _PnpCtxRegOpenCurrentUserKey @ 0x140712414 (_PnpCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmOpenCommonClassRegKeyWorker(
        __int64 *a1,
        __int64 a2,
        __int16 a3,
        int a4,
        ACCESS_MASK a5,
        char a6,
        HANDLE *a7,
        _DWORD *a8)
{
  unsigned __int64 v8; // rsi
  __int64 v13; // rdx
  wchar_t *pszDest; // rdi
  __int64 v15; // r8
  int CommonClassRegKeyPath; // ebx
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
    CommonClassRegKeyPath = CmGetCommonClassRegKeyPath((unsigned int)v8 >> 1, a2, a3, a4, v22, pszDest, cchDest, &v27);
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
    v17 = pszDest;
    CommonClassRegKeyPath = PnpCtxRegOpenCurrentUserKey(a1, v13, v15, &Handle);
    if ( CommonClassRegKeyPath < 0 )
      goto LABEL_21;
    v18 = (char *)Handle;
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
    v17 = pszDest + 25;
    CommonClassRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, 4, &v25);
    if ( CommonClassRegKeyPath < 0 )
      goto LABEL_21;
    v18 = v25;
  }
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
