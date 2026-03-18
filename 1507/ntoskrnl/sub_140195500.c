/*
 * XREFs of sub_140195500 @ 0x140195500
 * Callers:
 *     sub_1401954C0 @ 0x1401954C0 (sub_1401954C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140195500(int a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  LODWORD(result) = 7;
  do
    result = (unsigned int)(result - 1);
  while ( (_DWORD)result );
  v2 = (unsigned int)(a1 - 1);
  if ( (_DWORD)v2 )
    return sub_1401954C0(v2);
  return result;
}
