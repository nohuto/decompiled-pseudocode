/*
 * XREFs of MiReplenishPageSlist @ 0x140063EB0
 * Callers:
 *     MiRemoveAnyPage @ 0x1400642C0 (MiRemoveAnyPage.c)
 * Callees:
 *     MiIncreaseAvailablePages @ 0x14001B700 (MiIncreaseAvailablePages.c)
 *     MiNodeFreeZeroPages @ 0x140066170 (MiNodeFreeZeroPages.c)
 *     MiDecreaseAvailablePages @ 0x14008A420 (MiDecreaseAvailablePages.c)
 *     MiPageListCollision @ 0x14008A878 (MiPageListCollision.c)
 *     MiSetPfnBlink @ 0x14010584C (MiSetPfnBlink.c)
 *     InterlockedPushListSList @ 0x140167420 (InterlockedPushListSList.c)
 *     MiSetPfnSlist @ 0x1401F2E24 (MiSetPfnSlist.c)
 */

__int64 __fastcall MiReplenishPageSlist(__int64 a1, unsigned int a2, unsigned int a3, unsigned __int64 a4)
{
  __int64 v4; // r12
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // rbx
  __int64 v7; // r15
  unsigned int v8; // r8d
  __int64 v9; // rdi
  unsigned __int64 v10; // r15
  __int64 i; // r14
  unsigned __int64 v12; // r15
  __int64 v13; // r9
  __int64 *v14; // rdx
  unsigned __int64 v15; // r10
  __int64 v16; // r8
  __int64 *v17; // r11
  __int64 v18; // rsi
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rsi
  unsigned __int64 *v22; // r14
  unsigned __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rsi
  _SLIST_ENTRY *v27; // rbp
  __int64 v28; // rdx
  __int64 v29; // r9
  unsigned __int64 v30; // r11
  unsigned __int64 v31; // r10
  __int64 v32; // r9
  volatile signed __int32 *v33; // r8
  unsigned int v34; // eax
  int v35; // r10d
  unsigned __int64 v36; // rcx
  ULONG Count[2]; // [rsp+20h] [rbp-88h]
  __int64 v38; // [rsp+28h] [rbp-80h]
  volatile signed __int64 *v39; // [rsp+30h] [rbp-78h]
  unsigned __int64 v40; // [rsp+38h] [rbp-70h]
  _SLIST_ENTRY *List; // [rsp+50h] [rbp-58h]
  unsigned int v44; // [rsp+C0h] [rbp+18h]

  v4 = a1;
  v5 = a4;
  v6 = *(_QWORD *)(a1 + 48) + 2184 * ((unsigned __int64)a3 >> byte_140326A09);
  v7 = a3;
  v8 = a3 >> byte_140326A18;
  v9 = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & v8);
  v38 = v7;
  v44 = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & v8);
  if ( a2 )
  {
    v21 = *(_QWORD *)(a1 + 1736);
    v39 = (volatile signed __int64 *)(a1 + 1856);
    if ( MiNodeFreeZeroPages(v6, (unsigned __int8)(MiChannelMaximumPowerOf2Mask & v8), 1024LL) < a4 + 64 )
      return 0LL;
  }
  else
  {
    v39 = (volatile signed __int64 *)(a1 + 1792);
    v10 = 0LL;
    for ( i = 0LL; i <= 0; ++i )
    {
      if ( (unsigned int)MmNumberOfChannels > 1 )
        v12 = *(_QWORD *)(v6 + 8 * (i + 2 * v9) + 2072) + v10;
      else
        v12 = *(_QWORD *)(v6 + 8 * i + 2008) + v10;
      v13 = 0LL;
      v14 = MiLargePageSizes;
      v15 = v6;
      v16 = 4 * i;
      v17 = (__int64 *)(v6 + 8 * i);
      v18 = 3LL;
      do
      {
        v19 = *v14;
        if ( (_DWORD)v9 == 4 )
          v20 = *v17;
        else
          v20 = *(_QWORD *)(v6 + 8 * (v16 + (unsigned int)v9) + 816)
              + *(_QWORD *)(v6 + 8 * (v16 + (unsigned int)v9) + 880);
        ++v14;
        v15 += 16LL;
        v13 += v19 * v20;
        v17 += 2;
        v16 += 16LL;
        --v18;
      }
      while ( v18 );
      v10 = v13 + v12;
    }
    v5 = a4;
    if ( v10 < a4 + 64 || *(_BYTE *)(a1 + 4492) == 1 )
      return 0LL;
    v7 = v38;
    v21 = *(_QWORD *)(a1 + 1728);
  }
  v22 = (unsigned __int64 *)(v21 + 40 * v7);
  if ( v5 > *v22 )
  {
    v5 = *v22;
    if ( !*v22 )
      return 0LL;
  }
  if ( *(_QWORD *)(v4 + 6464) - v5 < 0x420 )
    return 0LL;
  *(_QWORD *)Count = 0LL;
  v40 = v5;
  if ( !(unsigned int)MiDecreaseAvailablePages(v4, v5, 1056LL, 0LL) )
  {
LABEL_49:
    v25 = *(_QWORD *)Count;
    goto LABEL_30;
  }
  v24 = v22[2];
  v25 = 0LL;
  v26 = 48 * v24 - 0x58000000000LL;
  v27 = 0LL;
  List = (_SLIST_ENTRY *)v26;
  v28 = 0x2AAAAAAAAAAAAAABLL;
  while ( !_interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
  {
    v27 = (_SLIST_ENTRY *)v26;
    if ( dword_1403270A0 == 1 )
    {
      LOBYTE(v30) = 1;
      v28 = (unsigned __int128)((v26 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
      v31 = (v26 + 0x58000000000LL) / 48;
      v32 = ((v28 < 0) + (unsigned __int8)(v28 >> 3)) & 0x1F;
      v33 = (volatile signed __int32 *)stru_1403270B8.Buffer + (v31 >> 5);
      if ( (unsigned __int64)(v32 + 1) > 0x20 )
      {
        if ( (((v28 < 0) + (unsigned __int8)(v28 >> 3)) & 0x1F) != 0 )
        {
          v35 = v31 & 0x1F;
          v28 = (unsigned int)(32 - v35);
          _InterlockedOr(v33++, ((1 << (32 - v35)) - 1) << v32);
          v30 = 1 - v28;
          if ( (unsigned __int64)(1 - v28) >= 0x20 )
          {
            v36 = v30 >> 5;
            v30 += -32LL * (v30 >> 5);
            do
            {
              *v33++ = -1;
              --v36;
            }
            while ( v36 );
          }
          if ( !v30 )
            goto LABEL_21;
        }
        v34 = (1 << v30) - 1;
      }
      else
      {
        v34 = 1 << v32;
      }
      _InterlockedOr(v33, v34);
    }
LABEL_21:
    *(_BYTE *)(v26 + 34) = *(_BYTE *)(v26 + 34) & 0xF8 | 5;
    if ( (*(_BYTE *)(v26 + 34) & 8) != 0 )
      MiPageListCollision(v26, v28);
    *(_QWORD *)(v26 + 24) &= 0xFFFFFFF000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v29 = *(_QWORD *)v26 & 0xFFFFFFFFFLL;
    if ( v29 == 0xFFFFFFFFFLL )
      v26 = 0LL;
    else
      v26 = 48 * v29 - 0x58000000000LL;
    MiSetPfnSlist(v27, a2);
    v28 = 0x2AAAAAAAAAAAAAABLL;
    v25 = *(_QWORD *)Count + 1LL;
    v27->Next = (_SLIST_ENTRY *)v26;
    ++*(_QWORD *)Count;
    if ( !--v5 )
      break;
  }
  v5 = v40 - v25;
  v4 = a1;
  if ( v25 )
  {
    v22[2] = v24;
    if ( v24 == 0xFFFFFFFFFLL )
    {
      v22[3] = 0xFFFFFFFFFLL;
    }
    else
    {
      MiSetPfnBlink(v26, 0xFFFFFFFFFLL, 0LL);
      LODWORD(v25) = Count[0];
    }
    InterlockedPushListSList((PSLIST_HEADER)(*(_QWORD *)(a1 + 8LL * (int)a2 + 1744) + 16 * v38), List, v27, v25);
    v25 = *(_QWORD *)Count;
    *v22 -= *(_QWORD *)Count;
    _InterlockedExchangeAdd64(v39, -*(_QWORD *)Count);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 8LL * (int)a2 + 2008), -*(_QWORD *)Count);
    if ( (unsigned int)MmNumberOfChannels > 1 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 8 * ((int)a2 + 2LL * v44) + 2072), -*(_QWORD *)Count);
      goto LABEL_49;
    }
  }
LABEL_30:
  if ( v5 )
  {
    MiIncreaseAvailablePages(v4, v5);
    return *(_QWORD *)Count;
  }
  return v25;
}
