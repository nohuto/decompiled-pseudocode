/*
 * XREFs of sub_140171040 @ 0x140171040
 * Callers:
 *     sub_140171000 @ 0x140171000 (sub_140171000.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140171040(int a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  LODWORD(result) = 7;
  do
    result = (unsigned int)(result - 1);
  while ( (_DWORD)result );
  v2 = (unsigned int)(a1 - 1);
  if ( (_DWORD)v2 )
    return sub_140171000(v2);
  return result;
}
