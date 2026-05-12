/*
 * XREFs of StorpInitializeAdapterTelemetry @ 0x1C0014224
 * Callers:
 *     RaidInitializeAdapter @ 0x1C0051794 (RaidInitializeAdapter.c)
 * Callees:
 *     StorpInitializeHierarchicalResetBuckets @ 0x1C00142A8 (StorpInitializeHierarchicalResetBuckets.c)
 */

__int64 __fastcall StorpInitializeAdapterTelemetry(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  StorpInitializeHierarchicalResetBuckets(a1, a2, a1);
  *(_QWORD *)(v2 + 5336) = MEMORY[0xFFFFF78000000008];
  result = 0LL;
  *(_QWORD *)(v2 + 5344) = 0LL;
  *(_QWORD *)(v2 + 5352) = 0LL;
  *(_QWORD *)(v2 + 5360) = 0LL;
  *(_QWORD *)(v2 + 5368) = 0LL;
  *(_QWORD *)(v2 + 5376) = 0LL;
  *(_QWORD *)(v2 + 5384) = 0LL;
  *(_QWORD *)(v2 + 5392) = 0LL;
  *(_QWORD *)(v2 + 5400) = 0LL;
  *(_QWORD *)(v2 + 5408) = 0LL;
  *(_QWORD *)(v2 + 5416) = 0LL;
  *(_DWORD *)(v2 + 5432) = 0;
  *(_BYTE *)(v2 + 5436) = 0;
  *(_QWORD *)(v2 + 5424) = 1LL;
  return result;
}
