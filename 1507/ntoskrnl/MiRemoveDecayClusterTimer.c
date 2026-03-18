/*
 * XREFs of MiRemoveDecayClusterTimer @ 0x140113D0C
 * Callers:
 *     MiEmptyDecayClusterTimers @ 0x140011F70 (MiEmptyDecayClusterTimers.c)
 *     MiDecayPfnFullyInitialized @ 0x1400E10AC (MiDecayPfnFullyInitialized.c)
 *     MiDeleteParentDecayNode @ 0x140113C84 (MiDeleteParentDecayNode.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140145090 (MiRemoveLowestPriorityStandbyPage.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 */

__int64 __fastcall MiRemoveDecayClusterTimer(__int64 a1)
{
  __int16 *v1; // rax
  __int64 v2; // r11
  __int64 v3; // r8
  unsigned __int64 v4; // rcx
  __int16 *v5; // r9
  __int64 v6; // rdx
  unsigned __int64 v7; // r10
  __int64 result; // rax
  __int64 v9; // r8
  __int64 v10; // r8

  v1 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
  v4 = *(_QWORD *)(v3 + 8);
  v5 = v1;
  v6 = (unsigned int)v4 >> 1;
  v7 = v4 >> 33;
  if ( v6 == 0x7FFFFFFF )
  {
    result = v4 ^ (*(_QWORD *)&v1[4 * v2 + 1956] ^ v4) & 0x1FFFFFFFFLL;
    *(_QWORD *)&v5[4 * v2 + 1956] = result;
  }
  else
  {
    v10 = 48 * (qword_14034F420 + v6) - 0x58000000000LL;
    result = v4 ^ (v4 ^ *(_QWORD *)(v10 + 8)) & 0x1FFFFFFFFLL;
    *(_QWORD *)(v10 + 8) = result;
  }
  if ( v7 == 0x7FFFFFFF )
  {
    *(_QWORD *)&v5[4 * v2 + 1956] ^= (*(_DWORD *)&v5[4 * v2 + 1956] ^ (unsigned int)v4) & 0xFFFFFFFE;
  }
  else
  {
    v9 = 48 * (v7 + qword_14034F420) - 0x58000000000LL;
    result = (v4 ^ *(_QWORD *)(v9 + 8)) & 0xFFFFFFFE;
    *(_QWORD *)(v9 + 8) ^= result;
  }
  return result;
}
