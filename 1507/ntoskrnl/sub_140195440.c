/*
 * XREFs of sub_140195440 @ 0x140195440
 * Callers:
 *     sub_140195400 @ 0x140195400 (sub_140195400.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140195440(int a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  LODWORD(result) = 5;
  do
    result = (unsigned int)(result - 1);
  while ( (_DWORD)result );
  v2 = (unsigned int)(a1 - 1);
  if ( (_DWORD)v2 )
    return sub_140195400(v2);
  return result;
}
