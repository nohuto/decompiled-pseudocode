/*
 * XREFs of ?AlternateHeapReAlloc@@YAJPEAX_K1PEAPEAX@Z @ 0x1800280F0
 * Callers:
 *     ?SetCapacity@StringBuffer@Common@@QEAAJK@Z @ 0x180027EF0 (-SetCapacity@StringBuffer@Common@@QEAAJK@Z.c)
 *     ?SetCapacity@ByteBuffer@Common@@QEAAJK@Z @ 0x1800546E8 (-SetCapacity@ByteBuffer@Common@@QEAAJK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlternateHeapReAlloc(void *a1, __int64 a2, size_t a3, void **a4)
{
  void *v5; // rax

  v5 = realloc(a1, a3);
  if ( !v5 )
    return 2147942414LL;
  *a4 = v5;
  return 0LL;
}
