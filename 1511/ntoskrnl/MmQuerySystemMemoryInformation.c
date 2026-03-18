/*
 * XREFs of MmQuerySystemMemoryInformation @ 0x1400F26FC
 * Callers:
 *     EtwpLogMemInfoTimerCallback @ 0x14020E9B8 (EtwpLogMemInfoTimerCallback.c)
 *     PfpPrivSourceEnum @ 0x14044B238 (PfpPrivSourceEnum.c)
 *     EtwpLogMemInfoRundown @ 0x14066558C (EtwpLogMemInfoRundown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmQuerySystemMemoryInformation(_OWORD *a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+0h] [rbp-28h]
  __int128 v3; // [rsp+10h] [rbp-18h]

  *(_QWORD *)&v2 = qword_1402FF798;
  *((_QWORD *)&v2 + 1) = qword_1402FE198;
  *(_QWORD *)&v3 = qword_1402FF820;
  *((_QWORD *)&v3 + 1) = qword_140301488;
  result = 0LL;
  *a1 = v2;
  a1[1] = v3;
  return result;
}
