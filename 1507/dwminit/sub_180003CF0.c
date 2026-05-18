/*
 * XREFs of sub_180003CF0 @ 0x180003CF0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x180007606 (memset.c)
 */

void *__fastcall sub_180003CF0(__int64 a1, size_t a2)
{
  SIZE_T v2; // r8
  void *v4; // rax
  void *v5; // rbx

  v2 = a2;
  if ( !a2 )
    v2 = 1LL;
  v4 = HeapAlloc(hHeap, 0, v2);
  v5 = v4;
  if ( v4 )
    memset(v4, 0, a2);
  return v5;
}
