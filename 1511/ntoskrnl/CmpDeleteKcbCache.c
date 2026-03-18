/*
 * XREFs of CmpDeleteKcbCache @ 0x1403BA36C
 * Callers:
 *     CmpDeleteHive @ 0x140002C90 (CmpDeleteHive.c)
 *     CmpInitializeKcbCache @ 0x1403BDA28 (CmpInitializeKcbCache.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall CmpDeleteKcbCache(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rdi

  v2 = *(void **)(a1 + 2800);
  v3 = *(void **)(a1 + 2816);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 2800) = 0LL;
    *(_DWORD *)(a1 + 2808) = 0;
    ExFreePoolWithTag(v2, 0x61434D43u);
  }
  if ( v3 )
  {
    *(_QWORD *)(a1 + 2816) = 0LL;
    *(_DWORD *)(a1 + 2824) = 0;
    ExFreePoolWithTag(v3, 0x61434D43u);
  }
}
