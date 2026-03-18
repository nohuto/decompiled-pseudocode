/*
 * XREFs of MiTrimThisWsle @ 0x140081700
 * Callers:
 *     MiTrimWorkingSet @ 0x140080FFC (MiTrimWorkingSet.c)
 * Callees:
 *     MiLocateCloneAddress @ 0x140059A90 (MiLocateCloneAddress.c)
 *     MiUpdateWorkingSetAgeDistribution @ 0x1400808F0 (MiUpdateWorkingSetAgeDistribution.c)
 *     MiSetWsleAge @ 0x14008090C (MiSetWsleAge.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiDemoteCombinedPte @ 0x14022A174 (MiDemoteCombinedPte.c)
 */

__int64 __fastcall MiTrimThisWsle(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r12
  unsigned int v4; // edi
  unsigned __int64 *v7; // r14
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rsi
  unsigned __int64 *v11; // rsi
  unsigned __int64 PteShadow; // rax
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v17; // rbx
  int v18; // r8d
  unsigned __int64 *v19; // rdx

  v3 = *(_QWORD *)(a1 + 184);
  v4 = a3;
  v7 = (unsigned __int64 *)(*(_QWORD *)(v3 + 496) + a2 * *(unsigned int *)(v3 + 64));
  v8 = *v7;
  v9 = *v7;
  if ( (*v7 & 0x800000000000LL) != 0 )
    v10 = v9 | 0xFFFF000000000000uLL;
  else
    v10 = v9 & 0xFFFFFFFFFFFFLL;
  v11 = (unsigned __int64 *)(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  PteShadow = *v11;
  if ( (unsigned __int64)(v11 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(v11, *v11);
  v13 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v14 = *(_QWORD *)(v13 + 8);
  if ( v14 >= 0 )
  {
    MiDemoteCombinedPte(v11, v14 | 0x8000000000000000uLL);
    v8 = *v7;
    v4 = a3;
  }
  if ( ((v4 >> 5) & 1) != 0 || (v4 & 0x40) != 0 )
  {
    if ( (*(_QWORD *)(v13 + 40) & 0x200000000000000LL) != 0 )
    {
      if ( ((v4 >> 5) & 1) != 0 && (*(_DWORD *)(v13 + 16) & 0x400LL) == 0 )
      {
        v15 = *(_QWORD *)(v13 + 8);
        if ( (v15 & 0x8000000000000000uLL) == 0 || MiLocateCloneAddress(a1 - 1272, v15 | 0x8000000000000000uLL) )
          return 1LL;
      }
      if ( (v4 & 0x40) != 0 && (*(_DWORD *)(v13 + 16) & 0x400LL) != 0 )
        return 1LL;
    }
  }
  else if ( (v4 & 0xF) == 0
         || (*(_BYTE *)v11 & 0x20) == 0 && (unsigned __int8)((v8 >> 9) & 7) >= (unsigned __int8)(v4 & 0xF)
         || (*(_BYTE *)(v13 + 35) & 8) == 0 && (*(_BYTE *)(v13 + 35) & 7u) < 5 )
  {
    return 1LL;
  }
  v17 = (v8 >> 9) & 7;
  if ( (*(_BYTE *)v11 & 0x20) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 216) & 7) != 0 && *(_WORD *)(v13 + 32) != 1
      || (unsigned int)v17 >= 6
      || (*(_BYTE *)(v13 + 35) & 8) != 0
      || (*(_BYTE *)(v13 + 35) & 7u) >= 5 )
    {
      return 0LL;
    }
    MiUpdateWorkingSetAgeDistribution(a1, v17, -1LL);
    MiUpdateWorkingSetAgeDistribution(a1, 6, 1LL);
    v18 = 6;
    v19 = (unsigned __int64 *)(*(_QWORD *)(v3 + 496) + a2 * *(unsigned int *)(v3 + 64));
    goto LABEL_33;
  }
  if ( (unsigned int)(v17 - 1) <= 5 )
  {
    MiUpdateWorkingSetAgeDistribution(a1, v17, -1LL);
    v18 = 0;
    v19 = v7;
LABEL_33:
    MiSetWsleAge(v3, v19, v18);
  }
  return 0LL;
}
