/*
 * XREFs of RtlpHpVsFreeChunkRemove @ 0x18006E714
 * Callers:
 *     RtlpHpVsChunkCoalesce @ 0x18001BE30 (RtlpHpVsChunkCoalesce.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x18001C030 (RtlRbRemoveNode.c)
 *     RtlpHpVsChunkComputeCost @ 0x18006E780 (RtlpHpVsChunkComputeCost.c)
 */

__int64 __fastcall RtlpHpVsFreeChunkRemove(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  __int64 result; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF
  char v9; // [rsp+40h] [rbp+18h] BYREF

  RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 8), (PRTL_BALANCED_NODE)(a3 + 8));
  v6 = RtlpHpVsChunkComputeCost(a3, a2, &v8, &v9);
  result = v8 - (unsigned int)(unsigned __int16)(a3 ^ RtlpLFHKey ^ *(_DWORD *)a3) + v6;
  *(_QWORD *)(a1 + 48) -= result;
  return result;
}
