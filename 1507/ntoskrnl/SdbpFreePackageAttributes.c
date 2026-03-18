/*
 * XREFs of SdbpFreePackageAttributes @ 0x14070350C
 * Callers:
 *     SdbpReleaseSearchDBContext @ 0x1405AAA20 (SdbpReleaseSearchDBContext.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     AslFree @ 0x1405783C4 (AslFree.c)
 */

void __fastcall SdbpFreePackageAttributes(_QWORD *a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 i; // rdi
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  void *v7; // rcx

  if ( a1 )
  {
    v1 = a1[2];
    for ( i = 0LL; i < v1; ++i )
    {
      v4 = 0LL;
      if ( i < v1 )
      {
        v5 = a1[1] * i;
        if ( !is_mul_ok(a1[1], i) || (v6 = a1[5], v4 = v6 + v5, v6 + v5 < v6) )
          v4 = 0LL;
      }
      if ( (unsigned __int16)(*(_WORD *)v4 - 24617) <= 2u )
        AslFree(24617LL, *(void **)(v4 + 8));
      v1 = a1[2];
    }
    v7 = (void *)a1[5];
    if ( v7 )
      ExFreePoolWithTag(v7, 0x72615452u);
    memset(a1, 0, 0x30uLL);
  }
}
