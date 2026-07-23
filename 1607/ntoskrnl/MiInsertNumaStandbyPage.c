/*
 * XREFs of MiInsertNumaStandbyPage @ 0x1401F3084
 * Callers:
 *     MiReplaceNumaStandbyPage @ 0x1401059EC (MiReplaceNumaStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x1401F38F8 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiGetPfnPriority @ 0x1400E4644 (MiGetPfnPriority.c)
 */

__int64 __fastcall MiInsertNumaStandbyPage(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r10
  unsigned int PfnPriority; // eax
  __int64 v4; // r10
  __int64 v5; // r11
  unsigned __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // r9
  unsigned __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // r8

  v1 = *((_QWORD *)MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF) + 6);
  PfnPriority = MiGetPfnPriority(v2);
  v7 = 91 * (v6 >> 58) + PfnPriority + 8 * ((v6 >> 36) & 3);
  v8 = 3 * v7;
  ++*(_QWORD *)(v1 + 24 * v7 + 1240);
  v9 = *(_QWORD *)(v1 + 24 * v7 + 1256);
  if ( v9 == 0xFFFFFFFFFLL )
  {
    *(_QWORD *)(v1 + 24 * v7 + 1248) = v5;
  }
  else
  {
    v10 = 48 * v9 - 0x58000000000LL;
    v11 = (*(_QWORD *)v10 ^ (v5 << 28)) & 0xFFFFFFFFFLL;
    *(_BYTE *)(v10 + 39) = v5;
    *(_QWORD *)v10 = (v5 << 28) ^ v11;
  }
  *(_QWORD *)v4 |= 0xFFFFFFF000000000uLL;
  result = 0xFFFFF000000000LL;
  *(_WORD *)(v4 + 36) = v9;
  v13 = (*(_QWORD *)(v4 + 24) ^ (v9 >> 16 << 36)) & 0xFFFFF000000000LL;
  *(_BYTE *)(v4 + 39) = -1;
  *(_QWORD *)(v4 + 24) ^= v13;
  *(_QWORD *)(v1 + 8 * v8 + 1256) = v5;
  return result;
}
