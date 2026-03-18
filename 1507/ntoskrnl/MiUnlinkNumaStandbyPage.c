/*
 * XREFs of MiUnlinkNumaStandbyPage @ 0x140145774
 * Callers:
 *     MiReplaceNumaStandbyPage @ 0x14005B3C0 (MiReplaceNumaStandbyPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140145090 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x14022E2D8 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiSetPfnNodeBlinkHigh @ 0x140145898 (MiSetPfnNodeBlinkHigh.c)
 */

__int64 __fastcall MiUnlinkNumaStandbyPage(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rdi
  unsigned int v3; // r9d
  __int64 result; // rax
  unsigned __int64 v5; // r8
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax

  v1 = *(unsigned __int8 *)(a1 + 39) | (*(_QWORD *)a1 >> 28) & 0xFFFFFFF00LL;
  v2 = *(unsigned __int16 *)(a1 + 36) | (*(_QWORD *)(a1 + 24) >> 20) & 0xFFFFF0000LL;
  result = *((_QWORD *)MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF) + 5);
  v6 = 1336 * (v5 >> 58);
  v7 = result + 24 * (v3 + 8 * ((v5 >> 36) & 3));
  if ( v1 == 0xFFFFFFFFFLL )
  {
    *(_QWORD *)(v7 + v6 + 416) = v2;
  }
  else
  {
    v8 = 48 * v1 - 0x58000000000LL;
    *(_WORD *)(v8 + 36) = v2;
    result = MiSetPfnNodeBlinkHigh(v8, v2 >> 16, 0LL);
  }
  if ( v2 == 0xFFFFFFFFFLL )
  {
    *(_QWORD *)(v7 + v6 + 408) = v1;
  }
  else
  {
    v9 = 48 * v2 - 0x58000000000LL;
    v10 = *(_QWORD *)v9 ^ (v1 << 28);
    *(_BYTE *)(v9 + 39) = v1;
    result = (v1 << 28) ^ v10 & 0xFFFFFFFFFLL;
    *(_QWORD *)v9 = result;
  }
  --*(_QWORD *)(v7 + v6 + 400);
  return result;
}
