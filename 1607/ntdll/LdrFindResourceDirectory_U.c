/*
 * XREFs of LdrFindResourceDirectory_U @ 0x1800DBF00
 * Callers:
 *     <none>
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x1800303A8 (LdrpSearchResourceSection_U.c)
 */

__int64 __fastcall LdrFindResourceDirectory_U(__int64 a1, __int64 a2, unsigned int a3, unsigned int **a4)
{
  return LdrpSearchResourceSection_U(a1, a2, a3, 2u, a4);
}
