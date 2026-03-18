/*
 * XREFs of MiInsertNumaStandbyPage @ 0x14022D9D4
 * Callers:
 *     MiReplaceNumaStandbyPage @ 0x14005B3C0 (MiReplaceNumaStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x14022E2D8 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 */

__int64 __fastcall MiInsertNumaStandbyPage(__int64 a1)
{
  __int16 *v1; // rax
  __int64 v2; // r9
  __int64 v3; // r10
  unsigned int v4; // r11d
  unsigned __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // r11
  unsigned __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // r8

  v1 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
  v6 = 1336 * (v5 >> 58);
  v7 = *((_QWORD *)v1 + 5) + 24 * (v4 + 8 * ((v5 >> 36) & 3));
  ++*(_QWORD *)(v7 + v6 + 400);
  v8 = *(_QWORD *)(v7 + v6 + 416);
  if ( v8 == 0xFFFFFFFFFLL )
  {
    *(_QWORD *)(v7 + v6 + 408) = v3;
  }
  else
  {
    v9 = 48 * v8 - 0x58000000000LL;
    v10 = (*(_QWORD *)v9 ^ (v3 << 28)) & 0xFFFFFFFFFLL;
    *(_BYTE *)(v9 + 39) = v3;
    *(_QWORD *)v9 = (v3 << 28) ^ v10;
  }
  *(_WORD *)(v2 + 36) = v8;
  *(_QWORD *)v2 |= 0xFFFFFFF000000000uLL;
  result = 0xFFFFF000000000LL;
  v12 = (*(_QWORD *)(v2 + 24) ^ (v8 >> 16 << 36)) & 0xFFFFF000000000LL;
  *(_BYTE *)(v2 + 39) = -1;
  *(_QWORD *)(v2 + 24) ^= v12;
  *(_QWORD *)(v7 + v6 + 416) = v3;
  return result;
}
