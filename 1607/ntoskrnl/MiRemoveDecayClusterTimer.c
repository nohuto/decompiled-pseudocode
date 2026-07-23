/*
 * XREFs of MiRemoveDecayClusterTimer @ 0x1400963B8
 * Callers:
 *     MiDecayPfnFullyInitialized @ 0x140096210 (MiDecayPfnFullyInitialized.c)
 *     MiDeleteParentDecayNode @ 0x140096330 (MiDeleteParentDecayNode.c)
 *     MiEmptyDecayClusterTimers @ 0x1400BC1A0 (MiEmptyDecayClusterTimers.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140120F60 (MiRemoveLowestPriorityStandbyPage.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 */

__int64 __fastcall MiRemoveDecayClusterTimer(__int64 a1)
{
  __int64 v1; // r8
  unsigned __int64 v2; // rcx
  int *v3; // r9
  __int64 v4; // r10
  __int64 v5; // rax
  unsigned __int64 v6; // r8
  __int64 result; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdx

  v3 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
  v2 = *(_QWORD *)(v1 + 8);
  v5 = (unsigned int)v2 >> 1;
  v6 = v2 >> 33;
  if ( v5 == 0x7FFFFFFF )
  {
    result = v2 ^ (*(_QWORD *)&v3[2 * v4 + 1058] ^ v2) & 0x1FFFFFFFFLL;
    *(_QWORD *)&v3[2 * v4 + 1058] = result;
    v8 = qword_1403273A0;
  }
  else
  {
    v8 = qword_1403273A0;
    v10 = 48 * (qword_1403273A0 + v5) - 0x58000000000LL;
    result = v2 ^ (v2 ^ *(_QWORD *)(v10 + 8)) & 0x1FFFFFFFFLL;
    *(_QWORD *)(v10 + 8) = result;
  }
  if ( v6 == 0x7FFFFFFF )
  {
    *(_QWORD *)&v3[2 * v4 + 1058] ^= (v3[2 * v4 + 1058] ^ (unsigned int)v2) & 0xFFFFFFFE;
  }
  else
  {
    v9 = 48 * (v8 + v6) - 0x58000000000LL;
    result = (v2 ^ *(_QWORD *)(v9 + 8)) & 0xFFFFFFFE;
    *(_QWORD *)(v9 + 8) ^= result;
  }
  return result;
}
