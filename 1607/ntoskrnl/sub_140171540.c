/*
 * XREFs of sub_140171540 @ 0x140171540
 * Callers:
 *     sub_140171500 @ 0x140171500 (sub_140171500.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140171540(int a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  LODWORD(result) = 7;
  do
    result = (unsigned int)(result - 1);
  while ( (_DWORD)result );
  v2 = (unsigned int)(a1 - 1);
  if ( (_DWORD)v2 )
    return sub_140171500(v2);
  return result;
}
