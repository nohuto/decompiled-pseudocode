/*
 * XREFs of MiTrimThisWsle @ 0x1400164E0
 * Callers:
 *     MiTrimWorkingSet @ 0x140015D90 (MiTrimWorkingSet.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiUpdateWorkingSetAgeDistribution @ 0x1400BA3CC (MiUpdateWorkingSetAgeDistribution.c)
 *     MiLocateCloneAddress @ 0x1400BB990 (MiLocateCloneAddress.c)
 *     MiSetWsleAge @ 0x1400BBB24 (MiSetWsleAge.c)
 *     MiGetPfnPriority @ 0x1400E4644 (MiGetPfnPriority.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MiDemoteCombinedPte @ 0x1401F95DC (MiDemoteCombinedPte.c)
 */

__int64 __fastcall MiTrimThisWsle(__int64 a1, __int64 a2, unsigned int a3)
{
  ULONG_PTR *v5; // rbp
  unsigned __int64 *v6; // r14
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rbx
  _BYTE *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // r8
  unsigned __int64 v13; // r9
  unsigned int v14; // r10d
  char v15; // r11
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // r9
  __int64 v25; // r8
  unsigned __int64 *v26; // rdx
  unsigned int v27; // r9d

  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    v5 = &BugCheckParameter2;
  else
    v5 = (ULONG_PTR *)(*(_QWORD *)(a1 + 16) + 416LL);
  v6 = (unsigned __int64 *)(v5[10] + a2 * *((unsigned int *)v5 + 8));
  v7 = *v6;
  if ( (*v6 & 0x800000000000LL) != 0 )
    v8 = v7 | 0xFFFF000000000000uLL;
  else
    v8 = v7 & 0xFFFFFFFFFFFFLL;
  v9 = (_BYTE *)(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v11 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(v9) - 0x58000000000LL;
  if ( v15 == 2 )
  {
    v16 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v11 + 40)) >> 8) & 0x3FF, v10, v12, v13);
    v19 = MiPartitionIdToPointer(*(unsigned __int16 *)(a1 + 164), v17, v16, v18);
    if ( v19 != v20 )
      return 0LL;
  }
  v22 = *(_QWORD *)(v11 + 8);
  if ( v22 >= 0 )
  {
    MiDemoteCombinedPte(a1, v9, v22 | 0x8000000000000000uLL);
    v13 = *v6;
    v14 = a3;
  }
  if ( ((v14 >> 5) & 1) != 0 || (v14 & 0x40) != 0 )
  {
    if ( (*(_QWORD *)(v11 + 40) & 0x200000000000000LL) != 0 )
    {
      if ( ((v14 >> 5) & 1) != 0 && (*(_DWORD *)(v11 + 16) & 0x400LL) == 0 )
      {
        v23 = *(_QWORD *)(v11 + 8);
        if ( (v23 & 0x8000000000000000uLL) == 0 || MiLocateCloneAddress(a1 - 1280, v23 | 0x8000000000000000uLL) )
          return 1LL;
      }
      if ( (v14 & 0x40) != 0 && (*(_DWORD *)(v11 + 16) & 0x400LL) != 0 )
        return 1LL;
    }
  }
  else if ( (v14 & 0xF) == 0
         || (*v9 & 0x20) == 0 && (unsigned __int8)((v13 >> 9) & 7) >= (unsigned __int8)(v14 & 0xF)
         || (unsigned int)MiGetPfnPriority(v11) < 5 )
  {
    return 1LL;
  }
  v24 = (v13 >> 9) & 7;
  if ( (*v9 & 0x20) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 184) & 7) != 0 && *(_WORD *)(v11 + 32) != 1
      || (unsigned int)v24 >= 6
      || (unsigned int)MiGetPfnPriority(v11) >= 5 )
    {
      return 0LL;
    }
    MiUpdateWorkingSetAgeDistribution(a1, v27, -1LL);
    MiUpdateWorkingSetAgeDistribution(a1, 6LL, 1LL);
    v25 = 6LL;
    v26 = (unsigned __int64 *)(v5[10] + a2 * *((unsigned int *)v5 + 8));
    goto LABEL_34;
  }
  if ( (unsigned int)(v24 - 1) <= 5 )
  {
    MiUpdateWorkingSetAgeDistribution(a1, (unsigned int)v24, -1LL);
    v25 = 0LL;
    v26 = v6;
LABEL_34:
    MiSetWsleAge(a1, v26, v25);
  }
  return 0LL;
}
