/*
 * XREFs of _CmOpenCommonClassRegKeyWorker @ 0x1404DAB74
 * Callers:
 *     _CmOpenCommonClassRegKey @ 0x1404DAA2C (_CmOpenCommonClassRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _CmGetCommonClassRegKeyPath @ 0x1404DAD18 (_CmGetCommonClassRegKeyPath.c)
 *     _PnpCtxRegCreateTree @ 0x1404DD744 (_PnpCtxRegCreateTree.c)
 *     _SysCtxRegOpenKey @ 0x1404E0B1C (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404E0C54 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlPrefixUnicodeString @ 0x1404E0F60 (RtlPrefixUnicodeString.c)
 *     _PnpCtxRegOpenCurrentUserKey @ 0x1406D7244 (_PnpCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmOpenCommonClassRegKeyWorker(
        __int64 *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  unsigned __int64 v8; // rsi
  __int64 v13; // rdx
  wchar_t *pszDest; // rdi
  __int64 v15; // r8
  NTSTATUS CommonClassRegKeyPath; // ebx
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
    v17 = (int)pszDest;
    CommonClassRegKeyPath = PnpCtxRegOpenCurrentUserKey(a1, v13, v15, &Handle);
    if ( CommonClassRegKeyPath < 0 )
      goto LABEL_21;
    v18 = (int)Handle;
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
    v17 = (_DWORD)pszDest + 50;
    CommonClassRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, 4LL, &v25);
    if ( CommonClassRegKeyPath < 0 )
      goto LABEL_21;
    v18 = v25;
  }
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
