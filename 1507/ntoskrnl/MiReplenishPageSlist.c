/*
 * XREFs of MiReplenishPageSlist @ 0x1401009F0
 * Callers:
 *     MiRemoveAnyPage @ 0x140100180 (MiRemoveAnyPage.c)
 * Callees:
 *     MiSetPfnBlink @ 0x140100DBC (MiSetPfnBlink.c)
 *     MiNodeFreeZeroPages @ 0x140100E30 (MiNodeFreeZeroPages.c)
 *     MiUpdateAvailableEvents @ 0x14015FA18 (MiUpdateAvailableEvents.c)
 *     InterlockedPushListSList @ 0x14018B4F0 (InterlockedPushListSList.c)
 *     MiObtainFreePages @ 0x14021AB2C (MiObtainFreePages.c)
 */

__int64 __fastcall MiReplenishPageSlist(__int64 a1, int a2, unsigned int a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r13
  __int64 v7; // r15
  unsigned int v8; // ecx
  __int64 v9; // rbx
  unsigned __int64 v10; // rdx
  __int64 v11; // r9
  __int16 i; // r8
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // r9
  _SLIST_ENTRY *v17; // rsi
  char v18; // al
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  unsigned __int64 v24; // rsi
  __int64 v25; // rdx
  unsigned __int64 v26; // rbp
  unsigned __int64 v27; // r11
  volatile signed __int32 *v28; // r10
  __int64 v29; // r8
  unsigned int v30; // eax
  int v31; // r11d
  unsigned __int64 v32; // rcx
  __int64 v33; // rax
  volatile signed __int64 *v34; // [rsp+20h] [rbp-78h]
  __int64 v35; // [rsp+28h] [rbp-70h]
  _QWORD *v36; // [rsp+30h] [rbp-68h]
  _SLIST_ENTRY *List; // [rsp+40h] [rbp-58h]
  unsigned int v40; // [rsp+B0h] [rbp+18h]

  v5 = a4;
  v6 = *(_QWORD *)(a1 + 40) + 1336 * ((unsigned __int64)a3 >> byte_14034EB89);
  v7 = a3;
  v8 = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (a3 >> byte_14034EB98));
  v35 = a3;
  v40 = v8;
  if ( !a2 )
  {
    v9 = *(_QWORD *)(a1 + 1472);
    v10 = 0LL;
    v34 = (volatile signed __int64 *)(a1 + 1536);
    v11 = 0LL;
    for ( i = 1026; ; i |= 2u )
    {
      if ( (unsigned int)MmNumberOfChannels > 1 )
        v10 += *(_QWORD *)(v6 + 8 * (v11 + 2LL * v8) + 1232);
      else
        v10 += *(_QWORD *)(v6 + 8 * v11 + 1168);
      if ( (i & 0x400) != 0 )
        v10 += (*(_QWORD *)(v6 + 8 * (v8 + 4 * v11) + 272) + *(_QWORD *)(v6 + 8 * (v8 + 4 * v11) + 336)) << 9;
      if ( (i & 2) != 0 )
        break;
      v11 = 1LL;
    }
    v5 = a4;
    if ( byte_14034F140 != 1 && v10 >= a4 + 64 )
      goto LABEL_10;
    return 0LL;
  }
  v9 = *(_QWORD *)(a1 + 1480);
  v34 = (volatile signed __int64 *)(a1 + 1600);
  if ( MiNodeFreeZeroPages(v6, v8, 1024LL) < a4 + 64 )
    return 0LL;
LABEL_10:
  v13 = *(_QWORD *)(v9 + 40 * v7);
  v36 = (_QWORD *)(v9 + 40 * v7);
  if ( v5 > v13 )
  {
    v5 = *(_QWORD *)(v9 + 40 * v7);
    if ( !v13 )
      return 0LL;
  }
  if ( *(_QWORD *)(a1 + 5504) - v5 < 0x400 )
    return 0LL;
  v14 = *(_QWORD *)(v9 + 40 * v7 + 16);
  v15 = 0LL;
  v16 = 48 * v14 - 0x58000000000LL;
  v17 = 0LL;
  List = (_SLIST_ENTRY *)v16;
  while ( !_interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
  {
    v17 = (_SLIST_ENTRY *)v16;
    if ( dword_14034F150 == 1 )
    {
      v25 = (unsigned __int128)((v16 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
      LOBYTE(v26) = 1;
      v27 = (v16 + 0x58000000000LL) / 48;
      v28 = (volatile signed __int32 *)qword_14034F160->Buffer + (v27 >> 5);
      v29 = ((v25 < 0) + (unsigned __int8)(v25 >> 3)) & 0x1F;
      if ( (unsigned __int64)(v29 + 1) > 0x20 )
      {
        if ( (((v25 < 0) + (unsigned __int8)(v25 >> 3)) & 0x1F) != 0 )
        {
          v31 = v27 & 0x1F;
          _InterlockedOr(v28++, ((1 << (32 - v31)) - 1) << v29);
          v26 = 1LL - (unsigned int)(32 - v31);
          if ( v26 >= 0x20 )
          {
            v32 = v26 >> 5;
            v26 += -32LL * (v26 >> 5);
            do
            {
              *v28++ = -1;
              --v32;
            }
            while ( v32 );
          }
          if ( !v26 )
            goto LABEL_16;
        }
        v30 = (1 << v26) - 1;
      }
      else
      {
        v30 = 1 << v29;
      }
      _InterlockedOr(v28, v30);
    }
LABEL_16:
    v18 = *(_BYTE *)(v16 + 34) & 0xF8 | 5;
    *(_QWORD *)(v16 + 24) &= 0xFFFFFFF000000000uLL;
    *(_BYTE *)(v16 + 34) = v18;
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v14 = *(_QWORD *)v16 & 0xFFFFFFFFFLL;
    if ( v14 == 0xFFFFFFFFFLL )
      v16 = 0LL;
    else
      v16 = 48 * v14 - 0x58000000000LL;
    ++v15;
    v17->Next = (_SLIST_ENTRY *)v16;
    if ( !--v5 )
      break;
  }
  if ( !v15 )
    return 0LL;
  v36[2] = v14;
  if ( v14 == 0xFFFFFFFFFLL )
    v36[3] = 0xFFFFFFFFFLL;
  else
    MiSetPfnBlink(v16, 0xFFFFFFFFFLL, 0LL);
  InterlockedPushListSList((PSLIST_HEADER)(*(_QWORD *)(a1 + 8LL * a2 + 1488) + 16 * v35), List, v17, v15);
  *v36 -= v15;
  v19 = -v15;
  _InterlockedExchangeAdd64(v34, -v15);
  if ( v15 == 1 )
  {
    v24 = _InterlockedDecrement64((volatile signed __int64 *)(a1 + 5504));
    if ( v24 == *(_QWORD *)(a1 + 4104) || v24 == *(_QWORD *)(a1 + 4112) )
      MiUpdateAvailableEvents(a1);
    if ( v24 <= 0x400 )
    {
      v33 = *(_QWORD *)(a1 + 5256);
      if ( !v33 || !*(_BYTE *)(v33 + 52) )
        MiObtainFreePages(a1);
    }
  }
  else
  {
    v20 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5504), v19);
    v21 = *(_QWORD *)(a1 + 4112);
    if ( v20 > v21 && v20 - v15 <= v21 || (v22 = *(_QWORD *)(a1 + 4104), v20 - v15 <= v22) && v20 > v22 )
      MiUpdateAvailableEvents(a1);
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 8LL * a2 + 1168), v19);
  if ( (unsigned int)MmNumberOfChannels > 1 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 8 * (a2 + 2LL * v40) + 1232), v19);
  return v15;
}
