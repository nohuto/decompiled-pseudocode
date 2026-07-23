/*
 * XREFs of _CmGetMatchingCommonClassListWorker @ 0x1405628B0
 * Callers:
 *     _CmGetMatchingCommonClassList @ 0x1405627A0 (_CmGetMatchingCommonClassList.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404E0C54 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x1405634B4 (_PnpCtxRegEnumKeyWithCallback.c)
 */

__int64 __fastcall CmGetMatchingCommonClassListWorker(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5,
        unsigned int a6,
        unsigned int *a7)
{
  _DWORD *v10; // rbx
  int v11; // edx
  int CachedContextBaseKey; // edi
  _DWORD *PoolWithTag; // rax
  __int64 v14; // rdx
  unsigned int v15; // eax
  unsigned int v16; // eax
  __int64 v18[7]; // [rsp+20h] [rbp-38h] BYREF

  v18[0] = 0LL;
  *a7 = 0;
  v10 = 0LL;
  if ( a6 )
    *a5 = 0;
  if ( a2 == 2 )
  {
    v11 = 7;
  }
  else
  {
    if ( a2 != 4 )
    {
      CachedContextBaseKey = -1073741811;
      goto LABEL_12;
    }
    v11 = 8;
  }
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, v11, v18);
  if ( CachedContextBaseKey < 0 )
    return (unsigned int)CachedContextBaseKey;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x52504E50u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  memset(PoolWithTag, 0, 0x28uLL);
  v14 = v18[0];
  v10[9] = 0;
  *((_QWORD *)v10 + 1) = a3;
  *v10 = a2;
  *((_QWORD *)v10 + 2) = a4;
  *((_QWORD *)v10 + 3) = a5;
  v10[8] = a6;
  CachedContextBaseKey = PnpCtxRegEnumKeyWithCallback(a1, v14, &CmClassSubkeyCallback, v10);
  if ( CachedContextBaseKey >= 0 )
  {
    v15 = v10[9];
    *a7 = v15;
    if ( v15 )
    {
      v16 = v15 + 1;
      *a7 = v16;
      if ( a5 && a6 >= v16 )
        a5[v16 - 1] = 0;
      else
        CachedContextBaseKey = -1073741789;
    }
  }
LABEL_12:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)CachedContextBaseKey;
}
