/*
 * XREFs of SdbpFreePackageAttributes @ 0x1406C3340
 * Callers:
 *     SdbpReleaseSearchDBContext @ 0x14051463C (SdbpReleaseSearchDBContext.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ULongLongMult @ 0x1401B7468 (ULongLongMult.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     AslFree @ 0x140514714 (AslFree.c)
 */

void __fastcall SdbpFreePackageAttributes(_QWORD *a1)
{
  ULONGLONG v1; // rax
  ULONGLONG i; // rdi
  ULONGLONG v4; // rdx
  void *v5; // rcx
  ULONGLONG pullResult; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v1 = a1[2];
    for ( i = 0LL; i < v1; ++i )
    {
      v4 = 0LL;
      if ( i < v1 )
      {
        if ( ULongLongMult(a1[1], i, &pullResult) < 0 || (v4 = a1[5] + pullResult, v4 < a1[5]) )
          v4 = 0LL;
      }
      if ( (unsigned __int16)(*(_WORD *)v4 - 24617) <= 2u )
        AslFree(24617LL, *(void **)(v4 + 8));
      v1 = a1[2];
    }
    v5 = (void *)a1[5];
    if ( v5 )
      ExFreePoolWithTag(v5, 0x72615452u);
    memset(a1, 0, 0x30uLL);
  }
}
