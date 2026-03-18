/*
 * XREFs of MmQuerySystemMemoryInformation @ 0x14012FF18
 * Callers:
 *     EtwpLogMemInfoDpc @ 0x14025DCE0 (EtwpLogMemInfoDpc.c)
 *     PfpPrivSourceEnum @ 0x14050CF74 (PfpPrivSourceEnum.c)
 *     EtwpLogMemInfoRundown @ 0x1406E8680 (EtwpLogMemInfoRundown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmQuerySystemMemoryInformation(_OWORD *a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+0h] [rbp-28h]
  __int128 v3; // [rsp+10h] [rbp-18h]

  *(_QWORD *)&v2 = qword_14034FC58;
  *((_QWORD *)&v2 + 1) = qword_14034E658;
  *(_QWORD *)&v3 = qword_14034FCE0;
  *((_QWORD *)&v3 + 1) = qword_1403552C8;
  result = 0LL;
  *a1 = v2;
  a1[1] = v3;
  return result;
}
