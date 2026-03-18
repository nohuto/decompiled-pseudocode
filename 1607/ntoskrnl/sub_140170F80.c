/*
 * XREFs of sub_140170F80 @ 0x140170F80
 * Callers:
 *     sub_140170F40 @ 0x140170F40 (sub_140170F40.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140170F80(int a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  LODWORD(result) = 5;
  do
    result = (unsigned int)(result - 1);
  while ( (_DWORD)result );
  v2 = (unsigned int)(a1 - 1);
  if ( (_DWORD)v2 )
    return sub_140170F40(v2);
  return result;
}
