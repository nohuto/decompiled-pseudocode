/*
 * XREFs of _CmDeleteCommonClassRegKeyWorker @ 0x140692BDC
 * Callers:
 *     _CmDeleteCommonClassRegKey @ 0x140692A9C (_CmDeleteCommonClassRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14043BFA8 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlPrefixUnicodeString @ 0x14043C2B0 (RtlPrefixUnicodeString.c)
 *     _CmGetCommonClassRegKeyPath @ 0x1404DE404 (_CmGetCommonClassRegKeyPath.c)
 *     _PnpCtxRegDeleteTree @ 0x140522444 (_PnpCtxRegDeleteTree.c)
 *     _PnpCtxRegDeleteKey @ 0x140692804 (_PnpCtxRegDeleteKey.c)
 *     _PnpCtxRegOpenCurrentUserKey @ 0x140692874 (_PnpCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmDeleteCommonClassRegKeyWorker(__int64 *a1, const WCHAR *a2, __int16 a3, int a4, char a5)
{
  unsigned __int64 v5; // rsi
  int CommonClassRegKeyPath; // ebx
  wchar_t *pszDest; // rdi
  const WCHAR *v12; // rsi
  char *v13; // rdx
  int v14; // eax
  int v16; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  char *v18; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+40h] BYREF

  v18 = 0LL;
  LODWORD(v5) = 200;
  if ( (a3 & 0x200) != 0 )
    LODWORD(v5) = 320;
  while ( 1 )
  {
    pszDest = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v5, 0x52504E50u);
    if ( !pszDest )
      break;
    LODWORD(cchDest) = (unsigned int)v5 >> 1;
    CommonClassRegKeyPath = CmGetCommonClassRegKeyPath((unsigned int)v5 >> 1, a2, a3, a4, v16, pszDest, cchDest, &v20);
    if ( CommonClassRegKeyPath != -1073741789 )
      goto LABEL_8;
    ExFreePoolWithTag(pszDest, 0);
    pszDest = 0LL;
    v5 = 2LL * (unsigned int)v20;
    if ( v5 > 0xFFFFFFFF )
    {
      CommonClassRegKeyPath = -1073741675;
      goto LABEL_26;
    }
  }
  CommonClassRegKeyPath = -1073741801;
LABEL_8:
  if ( CommonClassRegKeyPath < 0 )
    goto LABEL_26;
  if ( (a3 & 0x100) != 0 )
  {
    v12 = pszDest;
    CommonClassRegKeyPath = PnpCtxRegOpenCurrentUserKey(a1);
    if ( CommonClassRegKeyPath < 0 )
      goto LABEL_26;
    v13 = 0LL;
  }
  else
  {
    CommonClassRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, pszDest);
    if ( CommonClassRegKeyPath < 0 )
      goto LABEL_26;
    if ( DestinationString.Length >= (unsigned int)v5
      || DestinationString.Length <= 0x32u
      || !RtlPrefixUnicodeString(
            &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
            &DestinationString,
            1u) )
    {
      CommonClassRegKeyPath = -1073741811;
      goto LABEL_26;
    }
    v12 = pszDest + 25;
    CommonClassRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, 4, &v18);
    if ( CommonClassRegKeyPath < 0 )
      goto LABEL_26;
    v13 = v18;
  }
  if ( a5 )
    v14 = PnpCtxRegDeleteTree((__int64)a1, (__int64)v13, (__int64)v12);
  else
    v14 = PnpCtxRegDeleteKey((__int64)a1, v13, v12);
  if ( (int)(v14 + 0x80000000) >= 0 && v14 != -1073741444 )
    CommonClassRegKeyPath = v14;
LABEL_26:
  if ( pszDest )
    ExFreePoolWithTag(pszDest, 0);
  return (unsigned int)CommonClassRegKeyPath;
}
