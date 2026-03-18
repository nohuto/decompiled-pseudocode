/*
 * XREFs of MiPfnsWorthTrying @ 0x1400BF370
 * Callers:
 *     MiFindContiguousPages @ 0x1400BE4E0 (MiFindContiguousPages.c)
 *     MiFindRebuildCandidate @ 0x1400BEA60 (MiFindRebuildCandidate.c)
 *     MiScrubNode @ 0x1401E5DEC (MiScrubNode.c)
 *     MmRelocatePfnList @ 0x14062AA8C (MmRelocatePfnList.c)
 * Callees:
 *     MiActivePageClaimCandidate @ 0x1400BF620 (MiActivePageClaimCandidate.c)
 */

__int64 __fastcall MiPfnsWorthTrying(__int16 a1, unsigned __int64 a2, __int64 a3, int a4, _DWORD *a5, _QWORD *a6)
{
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  unsigned __int64 v10; // rdx
  char v11; // r8
  unsigned __int8 v12; // al
  char v13; // cl
  __int64 active; // rax
  __int64 v16; // rdx
  __int64 *v17; // rax
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  _QWORD *v20; // rax

  v7 = a2;
  v8 = a2 + 48 * a3;
  *a6 = 0LL;
  *a5 = 0;
  if ( a2 >= v8 )
    return 0LL;
  while ( 1 )
  {
    v10 = *(_QWORD *)(v7 + 40);
    if ( ((HIDWORD(v10) >> 8) & 0x3FF) != a1 )
      return (__int64)(v8 - v7) / 48;
    v11 = *(_BYTE *)(v7 + 34);
    v12 = v11 & 7;
    if ( (v11 & 7u) <= 1 )
    {
      if ( (v10 & 0xFFFFFFFFFLL) == 0xFFFFFFFFELL && (a4 & 0x2000000) != 0 )
        return (__int64)(v8 - v7) / 48;
      ++*a6;
      goto LABEL_10;
    }
    if ( v12 == 5 )
    {
      if ( (*(_QWORD *)(v7 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL )
        return (__int64)(v8 - v7) / 48;
      if ( !*(_QWORD *)v7 )
      {
        v16 = (__int64)(v7 + 0x58000000000LL) / 48;
        v17 = qword_1402FF288;
        v18 = 0;
        while ( v16 != *v17 )
        {
          ++v18;
          ++v17;
          if ( v18 >= 4 )
          {
            v19 = 0;
            v20 = &unk_1402FF268;
            while ( v16 != *v20 )
            {
              ++v19;
              ++v20;
              if ( v19 >= 4 )
                goto LABEL_10;
            }
            return (__int64)(v8 - v7) / 48;
          }
        }
        return (__int64)(v8 - v7) / 48;
      }
      goto LABEL_10;
    }
    v13 = *(_BYTE *)(v7 + 35);
    if ( v13 < 0 )
      break;
    if ( v12 > 4u )
    {
      if ( v12 != 6 )
        return (__int64)(v8 - v7) / 48;
      if ( ((v10 >> 54) & 7) != 2 )
      {
        if ( (v10 & 0x200000000000000LL) != 0
          && (a4 & 0x1000000) != 0
          && (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 )
        {
          return (__int64)(v8 - v7) / 48;
        }
        goto LABEL_16;
      }
      if ( (a4 & 8) != 0 || *(_QWORD *)v7 == -5LL )
        return (__int64)(v8 - v7) / 48;
      if ( (*(_QWORD *)v7 & 1) == 0 )
        *a5 = 1;
    }
    else if ( *(_WORD *)(v7 + 32) || (a4 & 0x4000000) == 0 && (*(_QWORD *)(v7 + 8) & 0x8000000000000000uLL) == 0 )
    {
      return (__int64)(v8 - v7) / 48;
    }
LABEL_10:
    v7 += 48LL;
    if ( v7 >= v8 )
      return 0LL;
  }
  if ( v12 == 2 )
  {
    if ( *(_WORD *)(v7 + 32) )
      return (__int64)(v8 - v7) / 48;
    goto LABEL_10;
  }
  if ( v12 != 6
    || (v11 & 0x10) != 0
    || *(_WORD *)(v7 + 32) != 1
    || ((v10 >> 54) & 7) == 2
    || (v13 & 8) != 0
    || !*(_QWORD *)v7 )
  {
    return (__int64)(v8 - v7) / 48;
  }
LABEL_16:
  active = MiActivePageClaimCandidate(v7, 0LL);
  if ( !active )
  {
    if ( (a4 & 8) != 0 )
      return (__int64)(v8 - v7) / 48;
    goto LABEL_10;
  }
  return (__int64)(48 * active - v7 + v8 - 48) / 48;
}
