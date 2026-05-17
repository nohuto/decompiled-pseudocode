/*
 * XREFs of RtlCopyString @ 0x180077A60
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180098200 (memmove.c)
 */

void *__fastcall RtlCopyString(__int64 a1, const void **a2)
{
  void *result; // rax
  size_t v3; // r8

  result = 0LL;
  *(_WORD *)a1 = 0;
  if ( a2 )
  {
    v3 = *(unsigned __int16 *)a2;
    if ( v3 > *(unsigned __int16 *)(a1 + 2) )
      v3 = *(unsigned __int16 *)(a1 + 2);
    *(_WORD *)a1 = v3;
    return memmove(*(void **)(a1 + 8), a2[1], v3);
  }
  return result;
}
