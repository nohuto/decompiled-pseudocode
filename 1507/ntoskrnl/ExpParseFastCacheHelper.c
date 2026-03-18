/*
 * XREFs of ExpParseFastCacheHelper @ 0x1405A9894
 * Callers:
 *     sub_1406EC140 @ 0x1406EC140 (sub_1406EC140.c)
 *     sub_1407DB064 @ 0x1407DB064 (sub_1407DB064.c)
 * Callees:
 *     qsort @ 0x140172BB0 (qsort.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ExpParseFastCache @ 0x1405A9954 (ExpParseFastCache.c)
 */

__int64 __fastcall ExpParseFastCacheHelper(__int64 a1, unsigned int *a2, _QWORD *a3)
{
  void *v6; // rbx
  int v7; // eax
  unsigned int v8; // esi
  int v9; // edi
  PVOID PoolWithTag; // rax
  size_t NumOfElements; // [rsp+68h] [rbp+20h] BYREF

  v6 = 0LL;
  v7 = ExpParseFastCache(a1, 0LL, 0LL, &NumOfElements);
  v8 = NumOfElements;
  v9 = v7;
  if ( v7 != -1073741789 )
  {
LABEL_5:
    if ( v9 >= 0 )
    {
      *a3 = v6;
      v6 = 0LL;
      *a2 = v8;
    }
    goto LABEL_7;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * (unsigned int)NumOfElements, 0x20534C53u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  v9 = ExpParseFastCache(a1, PoolWithTag, v8, 0LL);
  if ( v9 >= 0 )
  {
    qsort(v6, v8, 0x10uLL, ExpFastCacheDescriptorCompare);
    goto LABEL_5;
  }
LABEL_7:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v9;
}
