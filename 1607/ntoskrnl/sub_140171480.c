/*
 * XREFs of sub_140171480 @ 0x140171480
 * Callers:
 *     sub_140171440 @ 0x140171440 (sub_140171440.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140171480(int a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  LODWORD(result) = 5;
  do
    result = (unsigned int)(result - 1);
  while ( (_DWORD)result );
  v2 = (unsigned int)(a1 - 1);
  if ( (_DWORD)v2 )
    return sub_140171440(v2);
  return result;
}
