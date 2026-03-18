/*
 * XREFs of ObpDeleteSymbolicLink @ 0x1404C1AC4
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall ObpDeleteSymbolicLink(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 16);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  *(_QWORD *)(a1 + 16) = 0LL;
}
