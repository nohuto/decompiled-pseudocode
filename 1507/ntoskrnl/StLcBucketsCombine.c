/*
 * XREFs of StLcBucketsCombine @ 0x1400DA1D4
 * Callers:
 *     ?SmpStoreMgrCallback@@YAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x1400DA0AC (-SmpStoreMgrCallback@@YAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z.c)
 *     SmpCacheStatsCopy @ 0x1405B5C4C (SmpCacheStatsCopy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StLcBucketsCombine(_DWORD *a1, __int64 a2)
{
  _DWORD *v2; // r8
  __int64 v3; // rdx
  __int64 result; // rax

  v2 = a1 + 16;
  if ( a1 < a1 + 16 )
  {
    v3 = a2 - (_QWORD)a1;
    do
    {
      *a1 = *(_DWORD *)((char *)a1 + v3);
      result = *(unsigned int *)((char *)a1 + v3 + 4);
      a1[1] += result;
      a1 += 2;
    }
    while ( a1 < v2 );
  }
  return result;
}
