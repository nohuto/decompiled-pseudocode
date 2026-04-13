/*
 * XREFs of sub_18000B484 @ 0x18000B484
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000B484(__int64 a1, __int64 a2)
{
  __int128 v4; // xmm0
  __int64 result; // rax

  exception::exception((exception *)a1, (const struct exception *)a2);
  *(_QWORD *)a1 = &off_18002D630;
  v4 = *(_OWORD *)(a2 + 24);
  *(_QWORD *)a1 = &off_18002D630;
  result = a1;
  *(_OWORD *)(a1 + 24) = v4;
  return result;
}
