/*
 * XREFs of ExpParseFastCacheHelper @ 0x1406AF734
 * Callers:
 *     sub_1406AE54C @ 0x1406AE54C (sub_1406AE54C.c)
 *     sub_1407D22C0 @ 0x1407D22C0 (sub_1407D22C0.c)
 * Callees:
 *     qsort @ 0x14014E520 (qsort.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ExpParseFastCache @ 0x1406AF6A4 (ExpParseFastCache.c)
 */

__int64 __fastcall ExpParseFastCacheHelper(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  void *v6; // rbx
  int v7; // eax
  size_t v8; // rsi
  int v9; // edi
  PVOID PoolWithTag; // rax
  size_t NumOfElements; // [rsp+68h] [rbp+20h] BYREF

  v6 = 0LL;
  v7 = ExpParseFastCache(a1, 0LL, 0, (unsigned int *)&NumOfElements);
  v8 = (unsigned int)NumOfElements;
  v9 = v7;
  if ( v7 != -1073741789 )
  {
LABEL_6:
    if ( v9 >= 0 )
    {
      *a3 = v6;
      v6 = 0LL;
      *a2 = v8;
    }
    goto LABEL_8;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * (unsigned int)NumOfElements, 0x20534C53u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  v9 = ExpParseFastCache(a1, (__int64)PoolWithTag, v8, 0LL);
  if ( v9 >= 0 )
  {
    qsort(v6, v8, 0x10uLL, (int (__cdecl *)(const void *, const void *))ExpFastCacheDescriptorCompare);
    goto LABEL_6;
  }
LABEL_8:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v9;
}
