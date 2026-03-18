/*
 * XREFs of ObpDeleteSymbolicLink @ 0x140558BFC
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall ObpDeleteSymbolicLink(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 16);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  *(_QWORD *)(a1 + 16) = 0LL;
}
