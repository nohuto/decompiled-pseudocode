/*
 * XREFs of RtlpHpVsFreeChunkRemove @ 0x1800762F8
 * Callers:
 *     RtlpHpVsChunkCoalesce @ 0x18001EE20 (RtlpHpVsChunkCoalesce.c)
 *     RtlpHpVsChunkSplit @ 0x18002A520 (RtlpHpVsChunkSplit.c)
 * Callees:
 *     RtlpHpVsChunkComputeCost @ 0x18001DC8C (RtlpHpVsChunkComputeCost.c)
 *     RtlRbRemoveNode @ 0x18002DBF0 (RtlRbRemoveNode.c)
 */

__int64 __fastcall RtlpHpVsFreeChunkRemove(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  __int64 result; // rax
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 8), (PRTL_BALANCED_NODE)(a3 + 8));
  v6 = RtlpHpVsChunkComputeCost(a3, a2, &v8, &v9);
  result = v8 - (unsigned __int16)(a3 ^ RtlpLFHKey ^ *(_DWORD *)a3) + v6;
  *(_QWORD *)(a1 + 48) -= result;
  return result;
}
