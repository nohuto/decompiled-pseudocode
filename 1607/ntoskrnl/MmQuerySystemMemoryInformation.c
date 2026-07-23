/*
 * XREFs of MmQuerySystemMemoryInformation @ 0x1400B0F6C
 * Callers:
 *     EtwpLogMemInfoTimerCallback @ 0x1402266A4 (EtwpLogMemInfoTimerCallback.c)
 *     PfpPrivSourceEnum @ 0x1404EB998 (PfpPrivSourceEnum.c)
 *     EtwpLogMemInfoRundown @ 0x1406A70B8 (EtwpLogMemInfoRundown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmQuerySystemMemoryInformation(_OWORD *a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+0h] [rbp-28h]
  __int128 v3; // [rsp+10h] [rbp-18h]

  *(_QWORD *)&v2 = qword_140327898;
  *((_QWORD *)&v2 + 1) = qword_140326498;
  *(_QWORD *)&v3 = qword_140327928;
  *((_QWORD *)&v3 + 1) = qword_1403251A8;
  result = 0LL;
  *a1 = v2;
  a1[1] = v3;
  return result;
}
