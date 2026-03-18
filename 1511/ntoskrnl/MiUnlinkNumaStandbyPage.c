/*
 * XREFs of MiUnlinkNumaStandbyPage @ 0x1401126E0
 * Callers:
 *     MiReplaceNumaStandbyPage @ 0x140071E90 (MiReplaceNumaStandbyPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140112420 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x1401E4470 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MI_GET_PFN_PRIORITY @ 0x1400B8498 (MI_GET_PFN_PRIORITY.c)
 *     MiSetPfnNodeBlinkHigh @ 0x1401127F4 (MiSetPfnNodeBlinkHigh.c)
 */

__int64 __fastcall MiUnlinkNumaStandbyPage(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rdi
  __int64 v3; // r10
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 result; // rax
  unsigned __int64 v7; // r9
  __int64 v8; // rbp
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax

  v1 = *(unsigned __int8 *)(a1 + 39) | (*(_QWORD *)a1 >> 28) & 0xFFFFFFF00LL;
  v2 = *(unsigned __int16 *)(a1 + 36) | (*(_QWORD *)(a1 + 24) >> 20) & 0xFFFFF0000LL;
  MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
  v4 = (unsigned int)MI_GET_PFN_PRIORITY(v3);
  result = *(_QWORD *)(v5 + 40);
  v8 = 1336 * (v7 >> 58);
  v9 = result + 24 * (v4 + 8 * ((v7 >> 36) & 3));
  if ( v1 == 0xFFFFFFFFFLL )
  {
    *(_QWORD *)(v9 + v8 + 416) = v2;
  }
  else
  {
    v10 = 48 * v1 - 0x58000000000LL;
    *(_WORD *)(v10 + 36) = v2;
    result = MiSetPfnNodeBlinkHigh(v10, v2 >> 16, 0LL);
  }
  if ( v2 == 0xFFFFFFFFFLL )
  {
    *(_QWORD *)(v9 + v8 + 408) = v1;
  }
  else
  {
    v11 = 48 * v2 - 0x58000000000LL;
    v12 = *(_QWORD *)v11 ^ (v1 << 28);
    *(_BYTE *)(v11 + 39) = v1;
    result = (v1 << 28) ^ v12 & 0xFFFFFFFFFLL;
    *(_QWORD *)v11 = result;
  }
  --*(_QWORD *)(v9 + v8 + 400);
  return result;
}
