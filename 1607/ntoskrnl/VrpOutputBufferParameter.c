/*
 * XREFs of VrpOutputBufferParameter @ 0x140612FE4
 * Callers:
 *     VrpPostEnumerateKey @ 0x140614D90 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x140615828 (VrpPostQueryKey.c)
 * Callees:
 *     memmove @ 0x140171280 (memmove.c)
 */

__int64 __fastcall VrpOutputBufferParameter(char a1, void *a2, unsigned int a3, const void **a4)
{
  if ( a1 == 1 )
    memmove(a2, *a4, a3);
  return 0LL;
}
