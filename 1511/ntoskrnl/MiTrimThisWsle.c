/*
 * XREFs of MiTrimThisWsle @ 0x1400B6290
 * Callers:
 *     MiTrimWorkingSet @ 0x1400B5BA0 (MiTrimWorkingSet.c)
 * Callees:
 *     MiLocateCloneAddress @ 0x14001EDA8 (MiLocateCloneAddress.c)
 *     MI_GET_PFN_PRIORITY @ 0x1400B8498 (MI_GET_PFN_PRIORITY.c)
 *     MiUpdateWorkingSetAgeDistribution @ 0x1400BAC08 (MiUpdateWorkingSetAgeDistribution.c)
 *     MiSetWsleAge @ 0x1400BACAC (MiSetWsleAge.c)
 *     MiDemoteCombinedPte @ 0x14012836C (MiDemoteCombinedPte.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiTrimThisWsle(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r12
  unsigned int v4; // edi
  unsigned __int64 *v7; // r14
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rsi
  _BYTE *v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // r8
  unsigned __int64 *v18; // rdx

  v3 = *(_QWORD *)(a1 + 184);
  v4 = a3;
  v7 = (unsigned __int64 *)(*(_QWORD *)(v3 + 496) + a2 * *(unsigned int *)(v3 + 64));
  v8 = *v7;
  v9 = *v7;
  if ( (*v7 & 0x800000000000LL) != 0 )
    v10 = v9 | 0xFFFF000000000000uLL;
  else
    v10 = v9 & 0xFFFFFFFFFFFFLL;
  v11 = (_BYTE *)(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v12 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(v11) - 0x58000000000LL;
  v13 = *(_QWORD *)(v12 + 8);
  if ( v13 >= 0 )
  {
    MiDemoteCombinedPte(v11, v13 | 0x8000000000000000uLL);
    v8 = *v7;
    v4 = a3;
  }
  if ( ((v4 >> 5) & 1) != 0 || (v4 & 0x40) != 0 )
  {
    if ( (*(_QWORD *)(v12 + 40) & 0x200000000000000LL) != 0 )
    {
      if ( ((v4 >> 5) & 1) != 0 && (*(_DWORD *)(v12 + 16) & 0x400LL) == 0 )
      {
        v15 = *(_QWORD *)(v12 + 8);
        if ( (v15 & 0x8000000000000000uLL) == 0 || MiLocateCloneAddress(a1 - 1280, v15 | 0x8000000000000000uLL) )
          return 1LL;
      }
      if ( (v4 & 0x40) != 0 && (*(_DWORD *)(v12 + 16) & 0x400LL) != 0 )
        return 1LL;
    }
  }
  else if ( (v4 & 0xF) == 0
         || (*v11 & 0x20) == 0 && (unsigned __int8)((v8 >> 9) & 7) >= (unsigned __int8)(v4 & 0xF)
         || (unsigned int)MI_GET_PFN_PRIORITY(v12) < 5 )
  {
    return 1LL;
  }
  v16 = (v8 >> 9) & 7;
  if ( (*v11 & 0x20) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 216) & 7) != 0 && *(_WORD *)(v12 + 32) != 1
      || (unsigned int)v16 >= 6
      || (unsigned int)MI_GET_PFN_PRIORITY(v12) >= 5 )
    {
      return 0LL;
    }
    MiUpdateWorkingSetAgeDistribution(a1, (unsigned int)v16, -1LL);
    MiUpdateWorkingSetAgeDistribution(a1, 6LL, 1LL);
    v17 = 6LL;
    v18 = (unsigned __int64 *)(*(_QWORD *)(v3 + 496) + a2 * *(unsigned int *)(v3 + 64));
    goto LABEL_28;
  }
  if ( (unsigned int)(v16 - 1) <= 5 )
  {
    MiUpdateWorkingSetAgeDistribution(a1, (unsigned int)v16, -1LL);
    v17 = 0LL;
    v18 = v7;
LABEL_28:
    MiSetWsleAge(v3, v18, v17);
  }
  return 0LL;
}
