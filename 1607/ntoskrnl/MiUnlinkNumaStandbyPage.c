/*
 * XREFs of MiUnlinkNumaStandbyPage @ 0x1401213C4
 * Callers:
 *     MiReplaceNumaStandbyPage @ 0x1401059EC (MiReplaceNumaStandbyPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140120F60 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x1401F38F8 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiGetPfnPriority @ 0x1400E4644 (MiGetPfnPriority.c)
 *     MiSetPfnNodeBlinkHigh @ 0x140105BBC (MiSetPfnNodeBlinkHigh.c)
 */

__int64 __fastcall MiUnlinkNumaStandbyPage(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rdi
  __int64 v3; // rbp
  __int64 v4; // r10
  __int64 result; // rax
  unsigned __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax

  v1 = *(unsigned __int8 *)(a1 + 39) | (*(_QWORD *)a1 >> 28) & 0xFFFFFFF00LL;
  v2 = *(unsigned __int16 *)(a1 + 36) | (*(_QWORD *)(a1 + 24) >> 20) & 0xFFFFF0000LL;
  v3 = *((_QWORD *)MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF) + 6);
  result = MiGetPfnPriority(v4);
  v7 = 91 * (v6 >> 58) + (unsigned int)result + 8 * ((v6 >> 36) & 3);
  v8 = 3 * v7;
  if ( v1 == 0xFFFFFFFFFLL )
  {
    *(_QWORD *)(v3 + 24 * v7 + 1256) = v2;
  }
  else
  {
    v9 = 48 * v1 - 0x58000000000LL;
    *(_WORD *)(v9 + 36) = v2;
    result = MiSetPfnNodeBlinkHigh(v9, v2 >> 16, 0);
  }
  if ( v2 == 0xFFFFFFFFFLL )
  {
    *(_QWORD *)(v3 + 8 * v8 + 1248) = v1;
  }
  else
  {
    v10 = 48 * v2 - 0x58000000000LL;
    v11 = *(_QWORD *)v10 ^ (v1 << 28);
    *(_BYTE *)(v10 + 39) = v1;
    result = (v1 << 28) ^ v11 & 0xFFFFFFFFFLL;
    *(_QWORD *)v10 = result;
  }
  --*(_QWORD *)(v3 + 8 * v8 + 1240);
  return result;
}
