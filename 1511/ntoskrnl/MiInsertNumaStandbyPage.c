/*
 * XREFs of MiInsertNumaStandbyPage @ 0x1401E3C90
 * Callers:
 *     MiReplaceNumaStandbyPage @ 0x140071E90 (MiReplaceNumaStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x1401E4470 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MI_GET_PFN_PRIORITY @ 0x1400B8498 (MI_GET_PFN_PRIORITY.c)
 */

__int64 __fastcall MiInsertNumaStandbyPage(__int64 a1)
{
  __int64 v1; // r10
  unsigned int v2; // eax
  __int64 v3; // r10
  __int64 v4; // r11
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  unsigned __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // r8

  MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
  v2 = MI_GET_PFN_PRIORITY(v1);
  v6 = v5;
  v8 = 1336 * (v5 >> 58);
  v9 = *(_QWORD *)(v7 + 40) + 24 * (v2 + 8 * ((v6 >> 36) & 3));
  ++*(_QWORD *)(v9 + v8 + 400);
  v10 = *(_QWORD *)(v9 + v8 + 416);
  if ( v10 == 0xFFFFFFFFFLL )
  {
    *(_QWORD *)(v9 + v8 + 408) = v4;
  }
  else
  {
    v11 = 48 * v10 - 0x58000000000LL;
    v12 = (*(_QWORD *)v11 ^ (v4 << 28)) & 0xFFFFFFFFFLL;
    *(_BYTE *)(v11 + 39) = v4;
    *(_QWORD *)v11 = (v4 << 28) ^ v12;
  }
  *(_WORD *)(v3 + 36) = v10;
  *(_QWORD *)v3 |= 0xFFFFFFF000000000uLL;
  result = 0xFFFFF000000000LL;
  v14 = (*(_QWORD *)(v3 + 24) ^ (v10 >> 16 << 36)) & 0xFFFFF000000000LL;
  *(_BYTE *)(v3 + 39) = -1;
  *(_QWORD *)(v3 + 24) ^= v14;
  *(_QWORD *)(v9 + v8 + 416) = v4;
  return result;
}
