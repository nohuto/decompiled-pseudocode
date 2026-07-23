/*
 * XREFs of MiReplenishPageSlist @ 0x140012870
 * Callers:
 *     MiRemoveAnyPage @ 0x1400124B0 (MiRemoveAnyPage.c)
 * Callees:
 *     MiSetPfnBlink @ 0x140012C74 (MiSetPfnBlink.c)
 *     MiNodeFreeZeroPages @ 0x140012CF0 (MiNodeFreeZeroPages.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     MiIncreaseAvailablePages @ 0x1400C0448 (MiIncreaseAvailablePages.c)
 *     MiUpdateAvailableEvents @ 0x140133178 (MiUpdateAvailableEvents.c)
 *     InterlockedPushListSList @ 0x14015BA10 (InterlockedPushListSList.c)
 *     MiObtainFreePages @ 0x1401D7D4C (MiObtainFreePages.c)
 */

__int64 __fastcall MiReplenishPageSlist(__int64 a1, int a2, unsigned int a3, unsigned __int64 a4)
{
  __int64 v4; // r14
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r13
  __int64 v7; // r15
  unsigned int v8; // ecx
  __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // r8
  unsigned __int64 *v13; // r12
  __int64 v14; // rdi
  __int64 v15; // rcx
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r9
  _SLIST_ENTRY *v22; // rsi
  char v23; // al
  __int64 v25; // rdx
  unsigned __int64 v26; // rbp
  unsigned __int64 v27; // r11
  __int64 v28; // r10
  volatile signed __int32 *v29; // r8
  unsigned int v30; // eax
  __int64 v31; // rax
  int v32; // r11d
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // [rsp+20h] [rbp-78h]
  __int64 v35; // [rsp+20h] [rbp-78h]
  volatile signed __int64 *v36; // [rsp+28h] [rbp-70h]
  __int64 v37; // [rsp+30h] [rbp-68h]
  _SLIST_ENTRY *List; // [rsp+48h] [rbp-50h]
  unsigned int v41; // [rsp+B0h] [rbp+18h]

  v4 = a1;
  v5 = a4;
  v6 = *(_QWORD *)(a1 + 40) + 1336 * ((unsigned __int64)a3 >> byte_1402FE6D9);
  v7 = a3;
  v8 = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (a3 >> byte_1402FE6E8));
  v37 = a3;
  v41 = v8;
  if ( a2 )
  {
    v9 = *(_QWORD *)(v4 + 1608);
    v36 = (volatile signed __int64 *)(v4 + 1728);
    if ( MiNodeFreeZeroPages(v6, v8, 1024LL) >= a4 + 64 )
      goto LABEL_10;
    return 0LL;
  }
  v9 = *(_QWORD *)(v4 + 1600);
  v10 = 0LL;
  v36 = (volatile signed __int64 *)(v4 + 1664);
  v11 = 0LL;
  v12 = 1026LL;
  while ( 1 )
  {
    if ( (unsigned int)MmNumberOfChannels > 1 )
      v10 += *(_QWORD *)(v6 + 8 * (v11 + 2LL * v8) + 1232);
    else
      v10 += *(_QWORD *)(v6 + 8 * v11 + 1168);
    if ( (v12 & 0x400) != 0 )
      v10 += (*(_QWORD *)(v6 + 8 * (v8 + 4 * v11) + 272) + *(_QWORD *)(v6 + 8 * (v8 + 4 * v11) + 336)) << 9;
    if ( (v12 & 2) != 0 )
      break;
    v12 = (unsigned int)v12 | 2;
    v11 = 1LL;
  }
  v5 = a4;
  if ( v10 < a4 + 64 || *(_BYTE *)(v4 + 4364) == 1 )
    return 0LL;
LABEL_10:
  v13 = (unsigned __int64 *)(v9 + 40 * v7);
  if ( v5 > *v13 )
  {
    v5 = *(_QWORD *)(v9 + 40 * v7);
    if ( !*v13 )
      return 0LL;
  }
  if ( *(_QWORD *)(v4 + 5888) - v5 < 0x420 )
    return 0LL;
  v14 = 0LL;
  v34 = v5;
  v15 = v5;
  if ( v5 == 1 )
  {
    v18 = _InterlockedDecrement64((volatile signed __int64 *)(v4 + 5888));
    if ( v18 == *(_QWORD *)(v4 + 4328) || v18 == *(_QWORD *)(v4 + 4336) )
    {
      MiUpdateAvailableEvents(v4, v10, v12);
      v15 = 1LL;
    }
    v16 = v18 + 1;
  }
  else
  {
    v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 5888), -(__int64)v5);
    v17 = *(_QWORD *)(v4 + 4336);
    v18 = v16 - v5;
    if ( v16 - v5 <= v17 && v16 > v17 || (v19 = *(_QWORD *)(v4 + 4328), v18 <= v19) && v16 > v19 )
    {
      MiUpdateAvailableEvents(v4, v10, v12);
      v15 = v5;
    }
  }
  if ( v18 > 0x420 )
    goto LABEL_17;
  v31 = *(_QWORD *)(v4 + 5616);
  if ( !v31 || !*(_BYTE *)(v31 + 52) )
  {
    MiObtainFreePages(v4);
    v15 = v5;
  }
  if ( v18 < 0xA0 && v16 >= 0xA0 && *(_DWORD *)(v4 + 1080) )
  {
    KeSetEvent((PRKEVENT)(v4 + 928), 0, 0);
    v15 = v5;
  }
  if ( v18 >= 0x420 )
  {
LABEL_17:
    v20 = v13[2];
    v21 = 48 * v20 - 0x58000000000LL;
    v22 = 0LL;
    List = (_SLIST_ENTRY *)v21;
    while ( 1 )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
      {
LABEL_23:
        v4 = a1;
        v15 = v34 - v14;
        v35 = v34 - v14;
        if ( v14 )
        {
          v13[2] = v20;
          if ( v20 == 0xFFFFFFFFFLL )
            v13[3] = 0xFFFFFFFFFLL;
          else
            MiSetPfnBlink(v21, 0xFFFFFFFFFLL, 0LL);
          InterlockedPushListSList((PSLIST_HEADER)(*(_QWORD *)(a1 + 8LL * a2 + 1616) + 16 * v37), List, v22, v14);
          *v13 -= v14;
          _InterlockedExchangeAdd64(v36, -v14);
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 8LL * a2 + 1168), -v14);
          if ( (unsigned int)MmNumberOfChannels > 1 )
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 8 * (a2 + 2LL * v41) + 1232), -v14);
          v15 = v35;
        }
        break;
      }
      v22 = (_SLIST_ENTRY *)v21;
      if ( dword_1402FEC90 == 1 )
      {
        v25 = (unsigned __int128)((v21 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
        LOBYTE(v26) = 1;
        v27 = (v21 + 0x58000000000LL) / 48;
        v28 = ((v25 < 0) + (unsigned __int8)(v25 >> 3)) & 0x1F;
        v29 = (volatile signed __int32 *)stru_1402FECA8.Buffer + (v27 >> 5);
        if ( (unsigned __int64)(v28 + 1) > 0x20 )
        {
          if ( (((v25 < 0) + (unsigned __int8)(v25 >> 3)) & 0x1F) != 0 )
          {
            v32 = v27 & 0x1F;
            _InterlockedOr(v29++, ((1 << (32 - v32)) - 1) << v28);
            v26 = 1LL - (unsigned int)(32 - v32);
            if ( v26 >= 0x20 )
            {
              v33 = v26 >> 5;
              v26 += -32LL * (v26 >> 5);
              do
              {
                *v29++ = -1;
                --v33;
              }
              while ( v33 );
            }
            if ( !v26 )
              goto LABEL_20;
          }
          v30 = (1 << v26) - 1;
        }
        else
        {
          v30 = 1 << v28;
        }
        _InterlockedOr(v29, v30);
      }
LABEL_20:
      v23 = *(_BYTE *)(v21 + 34) & 0xF8 | 5;
      *(_QWORD *)(v21 + 24) &= 0xFFFFFFF000000000uLL;
      *(_BYTE *)(v21 + 34) = v23;
      _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v20 = *(_QWORD *)v21 & 0xFFFFFFFFFLL;
      if ( v20 == 0xFFFFFFFFFLL )
        v21 = 0LL;
      else
        v21 = 48 * v20 - 0x58000000000LL;
      ++v14;
      v22->Next = (_SLIST_ENTRY *)v21;
      if ( !--v5 )
        goto LABEL_23;
    }
  }
  if ( v15 )
    MiIncreaseAvailablePages(v4, v15);
  return v14;
}
