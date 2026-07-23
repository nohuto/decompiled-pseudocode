/*
 * XREFs of MiReplaceNumaStandbyPage @ 0x1401059EC
 * Callers:
 *     MiReplaceTransitionPage @ 0x140105244 (MiReplaceTransitionPage.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiGetPfnPriority @ 0x1400E4644 (MiGetPfnPriority.c)
 *     MiSetPfnNodeBlinkHigh @ 0x140105BBC (MiSetPfnNodeBlinkHigh.c)
 *     MiUnlinkNumaStandbyPage @ 0x1401213C4 (MiUnlinkNumaStandbyPage.c)
 *     MiInsertNumaStandbyPage @ 0x1401F3084 (MiInsertNumaStandbyPage.c)
 */

__int64 __fastcall MiReplaceNumaStandbyPage(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  __int64 v7; // r14
  unsigned int PfnPriority; // eax
  __int64 v9; // r10
  unsigned int v10; // r11d
  __int64 v11; // r8
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rax

  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 >> 58 == (unsigned __int8)HIBYTE(*(_QWORD *)(a2 + 40)) >> 2
    && ((v2 >> 36) & 3) == ((*(_QWORD *)(a2 + 40) >> 36) & 3) )
  {
    v5 = (unsigned __int128)((a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
    v6 = ((unsigned __int64)v5 >> 63) + (v5 >> 3);
    v7 = *((_QWORD *)MiPartitionIdToPointer((HIDWORD(v2) >> 8) & 0x3FF) + 6);
    PfnPriority = MiGetPfnPriority(a1);
    v11 = 91LL * v10 + PfnPriority;
    v12 = 3 * (v11 + 8 * v9);
    v13 = *(unsigned __int8 *)(a1 + 39) | (*(_QWORD *)a1 >> 28) & 0xFFFFFFF00LL;
    *(_BYTE *)(a2 + 39) = *(_BYTE *)(a1 + 39);
    *(_QWORD *)a2 = (v13 << 28) ^ (*(_QWORD *)a2 ^ (v13 << 28)) & 0xFFFFFFFFFLL;
    if ( v13 == 0xFFFFFFFFFLL )
    {
      *(_QWORD *)(v7 + 24 * (v11 + 8 * v9) + 1256) = v6;
    }
    else
    {
      v14 = 48 * v13 - 0x58000000000LL;
      *(_WORD *)(v14 + 36) = v6;
      MiSetPfnNodeBlinkHigh(v14, v6 >> 16, 0LL);
    }
    v15 = *(unsigned __int16 *)(a1 + 36) | (*(_QWORD *)(a1 + 24) >> 20) & 0xFFFFF0000LL;
    *(_WORD *)(a2 + 36) = *(_WORD *)(a1 + 36);
    result = (*(_QWORD *)(a2 + 24) ^ (v15 << 20)) & 0xFFFFF000000000LL;
    *(_QWORD *)(a2 + 24) ^= result;
    if ( v15 == 0xFFFFFFFFFLL )
    {
      *(_QWORD *)(v7 + 8 * v12 + 1248) = v6;
    }
    else
    {
      v17 = 48 * v15 - 0x58000000000LL;
      v18 = *(_QWORD *)v17 ^ (v6 << 28);
      *(_BYTE *)(v17 + 39) = v6;
      result = (v6 << 28) ^ v18 & 0xFFFFFFFFFLL;
      *(_QWORD *)v17 = result;
    }
  }
  else
  {
    MiUnlinkNumaStandbyPage(a1);
    return MiInsertNumaStandbyPage(a2);
  }
  return result;
}
