/*
 * XREFs of MmQuerySystemMemoryInformation @ 0x1400B30EC
 * Callers:
 *     EtwpLogMemInfoTimerCallback @ 0x140226878 (EtwpLogMemInfoTimerCallback.c)
 *     PfpPrivSourceEnum @ 0x140508A08 (PfpPrivSourceEnum.c)
 *     EtwpLogMemInfoRundown @ 0x1406A6F80 (EtwpLogMemInfoRundown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmQuerySystemMemoryInformation(_OWORD *a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+0h] [rbp-28h]
  __int128 v3; // [rsp+10h] [rbp-18h]

  *(_QWORD *)&v2 = qword_140327858;
  *((_QWORD *)&v2 + 1) = qword_140326458;
  *(_QWORD *)&v3 = qword_1403278E8;
  *((_QWORD *)&v3 + 1) = qword_140325168;
  result = 0LL;
  *a1 = v2;
  a1[1] = v3;
  return result;
}
