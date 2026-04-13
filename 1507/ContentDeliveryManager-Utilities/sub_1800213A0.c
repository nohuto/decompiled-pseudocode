/*
 * XREFs of sub_1800213A0 @ 0x1800213A0
 * Callers:
 *     sub_180021550 @ 0x180021550 (sub_180021550.c)
 *     sub_1800216C4 @ 0x1800216C4 (sub_1800216C4.c)
 *     sub_180021764 @ 0x180021764 (sub_180021764.c)
 * Callees:
 *     memcpy @ 0x180026528 (memcpy.c)
 */

void **__fastcall sub_1800213A0(void **a1, _BYTE *a2)
{
  _BYTE *v4; // rcx
  _BYTE *i; // rbx
  __int64 v6; // rbx
  void *v7; // rax

  v4 = *a1;
  if ( v4 != a2 )
  {
    if ( v4 )
      free(v4);
    *a1 = 0LL;
    if ( a2 )
    {
      for ( i = a2; *i; ++i )
        ;
      v6 = i - a2;
      v7 = malloc(v6 + 1);
      *a1 = v7;
      if ( v7 )
        memcpy(v7, a2, v6 + 1);
    }
  }
  return a1;
}
