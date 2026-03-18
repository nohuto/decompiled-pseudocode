/*
 * XREFs of sub_1404DBACC @ 0x1404DBACC
 * Callers:
 *     sub_1404DB5DC @ 0x1404DB5DC (sub_1404DB5DC.c)
 *     sub_1404DBA8C @ 0x1404DBA8C (sub_1404DBA8C.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall sub_1404DBACC(__int64 a1)
{
  _WORD *result; // rax

  result = *(_WORD **)(a1 + 8);
  if ( result )
  {
    *(_DWORD *)(a1 + 4) = 0;
    *(_WORD *)a1 = 0;
    *result = 0;
  }
  return result;
}
