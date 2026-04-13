/*
 * XREFs of sub_18000B4CC @ 0x18000B4CC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000B4CC(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  exception::exception((exception *)a1, (const struct exception *)a2);
  *(_QWORD *)a1 = &off_18002D630;
  result = a1;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
  return result;
}
