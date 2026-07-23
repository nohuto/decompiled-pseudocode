/*
 * XREFs of MiPfnsWorthTrying @ 0x1401029B0
 * Callers:
 *     MiFindContiguousPages @ 0x140102220 (MiFindContiguousPages.c)
 *     MiFindRebuildCandidate @ 0x1401FD040 (MiFindRebuildCandidate.c)
 *     MiScrubNode @ 0x1401FE48C (MiScrubNode.c)
 *     MmRelocatePfnList @ 0x1406647DC (MmRelocatePfnList.c)
 * Callees:
 *     MiFreeZeroPageSizeIndex @ 0x14001B6C0 (MiFreeZeroPageSizeIndex.c)
 *     MiPfnLargeBitSet @ 0x140102E64 (MiPfnLargeBitSet.c)
 *     MiActivePageClaimCandidate @ 0x1401037E0 (MiActivePageClaimCandidate.c)
 *     MiClusterVadFull @ 0x1401F6060 (MiClusterVadFull.c)
 */

__int64 __fastcall MiPfnsWorthTrying(__int16 *a1, unsigned __int64 a2, __int64 a3, int a4, _DWORD *a5)
{
  __int16 v6; // dx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r13
  char v11; // dl
  unsigned __int8 v12; // al
  int v13; // eax
  __int64 v14; // r9
  __int64 v15; // r10
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdx
  bool v18; // zf
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  PVOID *v22; // rax
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  _QWORD *v25; // rax
  __int64 v26; // r8
  int v27; // ebp
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rsi
  int v31; // eax
  __int64 active; // rax
  int v34; // eax
  __int16 v35; // [rsp+50h] [rbp+8h]

  v6 = *a1;
  v7 = a2 + 48 * a3;
  v8 = -1LL;
  v35 = *a1;
  *a5 = 0;
  if ( a2 >= v7 )
    return 0LL;
  while ( (((unsigned int)HIDWORD(*(_QWORD *)(a2 + 40)) >> 8) & 0x3FF) == v6 )
  {
    v11 = *(_BYTE *)(a2 + 34);
    v12 = v11 & 7;
    if ( (v11 & 7u) > 1 )
    {
      if ( v12 == 5 )
      {
        if ( (*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL )
          goto LABEL_25;
        if ( !*(_QWORD *)a2 )
        {
          v21 = (__int64)(a2 + 0x58000000000LL) / 48;
          v22 = &qword_140327728;
          v23 = 0;
          while ( (PVOID)v21 != *v22 )
          {
            ++v23;
            ++v22;
            if ( v23 >= 4 )
            {
              v24 = 0;
              v25 = &unk_140327708;
              while ( v21 != *v25 )
              {
                ++v24;
                ++v25;
                if ( v24 >= 4 )
                  goto LABEL_57;
              }
              break;
            }
          }
LABEL_25:
          v28 = v7 - a2;
          v29 = 0x2AAAAAAAAAAAAAABLL;
          return ((__int64)((unsigned __int128)(v28 * (__int128)v29) >> 64) >> 3)
               + ((unsigned __int64)((unsigned __int128)(v28 * (__int128)v29) >> 64) >> 63);
        }
      }
      else
      {
        v26 = *(unsigned __int8 *)(a2 + 35);
        v27 = 0;
        if ( (v26 & 0x80u) == 0LL )
        {
          if ( v12 <= 4u )
          {
            if ( *(_WORD *)(a2 + 32) || (a4 & 0x4000000) == 0 && (*(_QWORD *)(a2 + 8) & 0x8000000000000000uLL) == 0 )
              goto LABEL_25;
            goto LABEL_57;
          }
          v30 = (__int64)(a2 + 0x58000000000LL) / 48;
          if ( (v30 & 0xFFFFFFFFFFFFFE00uLL) != v8 )
          {
            v8 = ((__int64)(a2 + 0x58000000000LL) / 48) & 0xFFFFFFFFFFFFFE00uLL;
            v31 = MiPfnLargeBitSet(a1, (__int64)(a2 + 0x58000000000LL) / 48, v26);
            if ( v31 != -1 )
            {
              v28 = v7 - 48 * (v30 & ~(MiLargePageSizes[v31] - 1)) + 0x58000000000LL;
              goto LABEL_65;
            }
          }
          if ( (*(_BYTE *)(a2 + 34) & 7) != 6 )
            goto LABEL_25;
          if ( ((*(_QWORD *)(a2 + 40) >> 54) & 7) == 2 )
          {
            if ( (a4 & 8) != 0 || *(_QWORD *)a2 == -5LL )
              goto LABEL_25;
            if ( (*(_QWORD *)a2 & 1) == 0 )
              *a5 = 1;
            goto LABEL_57;
          }
          if ( (a4 & 0x800000) != 0 )
          {
            if ( (*(_QWORD *)(a2 + 40) & 0x200000000000000LL) != 0 )
            {
              if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 )
                goto LABEL_25;
            }
            else if ( v30 == (v30 & 0xFFFFFFFFFFFFFFF0uLL) && (__int64)(v7 - a2) / 48 >= 16 )
            {
              v27 = 1;
            }
          }
        }
        else
        {
          if ( v12 == 2 )
          {
            if ( *(_WORD *)(a2 + 32) )
              goto LABEL_25;
            goto LABEL_57;
          }
          if ( v12 != 6
            || (v11 & 0x10) != 0
            || *(_WORD *)(a2 + 32) != 1
            || ((*(_QWORD *)(a2 + 40) >> 54) & 7) == 2
            || (v26 & 8) != 0
            || !*(_QWORD *)a2 )
          {
            goto LABEL_25;
          }
        }
        active = MiActivePageClaimCandidate(a1, a2, 0LL, 0x2AAAAAAAAAAAAAABLL);
        if ( active )
          return (__int64)(48 * active - a2 + v7 - 48) / 48;
        if ( (a4 & 8) != 0 || v27 == 1 && (unsigned int)MiClusterVadFull(a2, 0LL) == 1 )
          goto LABEL_64;
      }
    }
    else
    {
      v13 = MiFreeZeroPageSizeIndex(a2);
      if ( v13 != -1 )
      {
        v16 = MiLargePageSizes[v13];
        v17 = ((unsigned __int64)((unsigned __int128)((__int64)(a2 - v15) * (__int128)v14) >> 64) >> 63)
            + ((__int64)((unsigned __int128)((__int64)(a2 - v15) * (__int128)v14) >> 64) >> 3);
        if ( v16 < 0x200 )
          v18 = (a4 & 0x1000000) == 0;
        else
          v18 = (a4 & 0x2000000) == 0;
        if ( !v18 )
        {
          v28 = v7 - 48 * (v17 & ~(v16 - 1)) - v15;
          v29 = v14;
          return ((__int64)((unsigned __int128)(v28 * (__int128)v29) >> 64) >> 3)
               + ((unsigned __int64)((unsigned __int128)(v28 * (__int128)v29) >> 64) >> 63);
        }
        v19 = v16 - (v17 & (v16 - 1));
        v20 = (unsigned __int64)((unsigned __int128)((__int64)(v7 - a2) * (__int128)v14) >> 64) >> 63;
        if ( v19 > v20 + ((__int64)((unsigned __int128)((__int64)(v7 - a2) * (__int128)v14) >> 64) >> 3) )
          v19 = v20 + ((__int64)((unsigned __int128)((__int64)(v7 - a2) * (__int128)v14) >> 64) >> 3);
        a2 += 48 * v19 - 48;
      }
    }
LABEL_57:
    a2 += 48LL;
    if ( a2 >= v7 )
      return 0LL;
    v6 = v35;
  }
  v34 = MiPfnLargeBitSet(MiSystemPartition, (__int64)(a2 + 0x58000000000LL) / 48, 1023LL);
  if ( v34 != -1 )
    a2 = 48 * (((__int64)(a2 + 0x58000000000LL) / 48) & ~(MiLargePageSizes[v34] - 1)) - 0x58000000000LL;
LABEL_64:
  v28 = v7 - a2;
LABEL_65:
  v29 = 0x2AAAAAAAAAAAAAABLL;
  return ((__int64)((unsigned __int128)(v28 * (__int128)v29) >> 64) >> 3)
       + ((unsigned __int64)((unsigned __int128)(v28 * (__int128)v29) >> 64) >> 63);
}
