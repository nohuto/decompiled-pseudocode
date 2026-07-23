/*
 * XREFs of VrpOutputBufferParameter @ 0x140613098
 * Callers:
 *     VrpPostEnumerateKey @ 0x140614E44 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x1406158DC (VrpPostQueryKey.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 */

__int64 __fastcall VrpOutputBufferParameter(char a1, void *a2, unsigned int a3, const void **a4)
{
  if ( a1 == 1 )
    memmove(a2, *a4, a3);
  return 0LL;
}
