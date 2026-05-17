/*
 * XREFs of RtlULongAdd @ 0x18004F08C
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x18001778C (LdrpSearchResourceSection_U.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlULongAdd(unsigned int a1, int a2, _DWORD *a3)
{
  if ( a1 + a2 < a1 )
  {
    *a3 = -1;
    return 3221225621LL;
  }
  else
  {
    *a3 = a1 + a2;
    return 0LL;
  }
}
