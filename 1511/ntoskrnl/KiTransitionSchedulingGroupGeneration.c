/*
 * XREFs of KiTransitionSchedulingGroupGeneration @ 0x14007B7B0
 * Callers:
 *     KiGroupSchedulingGenerationEnd @ 0x14007BB00 (KiGroupSchedulingGenerationEnd.c)
 * Callees:
 *     KiQueryEffectivePriorityThread @ 0x140014D6C (KiQueryEffectivePriorityThread.c)
 *     KiInsertNonMaxOverQuotaScb @ 0x1400C398C (KiInsertNonMaxOverQuotaScb.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x1401CB44C (KiChargeSchedulingGroupCycleTime.c)
 */

__int64 __fastcall KiTransitionSchedulingGroupGeneration(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v4; // rcx
  unsigned int v5; // ebp
  __int64 v6; // r13
  _QWORD *v7; // r12
  _QWORD *v8; // r14
  _QWORD *v9; // rsi
  char i; // al
  _QWORD *v11; // rbx
  __int64 v12; // rdx
  __int64 *v13; // rcx
  unsigned int v14; // ecx
  __int64 result; // rax
  unsigned int v16; // ecx
  bool v17; // zf
  char v18; // r11
  unsigned int v19; // ecx
  __int64 v20; // rax
  char v21; // cl
  unsigned int v22; // eax
  __int64 v23; // r9
  _QWORD *v24; // r8
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  _QWORD *v27; // rax
  _QWORD *v28; // r9
  _QWORD *v29; // r10
  char v30; // [rsp+70h] [rbp+8h]
  char v31; // [rsp+80h] [rbp+18h]

  v31 = a3;
  v4 = *(_QWORD *)(a1 + 23384);
  v5 = 1;
  if ( a2 > v4 )
    v5 = (a2 + (unsigned int)KiGenerationTicks - v4 - 1) / (unsigned int)KiGenerationTicks + 1;
  *(_QWORD *)(a1 + 23384) = KiGenerationEndTick;
  *(_QWORD *)(a1 + 22768) = 0LL;
  *(_QWORD *)(a1 + 22776) = 0LL;
  v6 = *(_QWORD *)(a1 + 16);
  v30 = 0;
  if ( !v6 )
    v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_QWORD **)(v6 + 104);
  if ( v7 )
    v7 = (_QWORD *)((char *)v7 + *(unsigned int *)(a1 + 1624));
  v8 = (_QWORD *)(a1 + 24272);
  v9 = *(_QWORD **)(a1 + 24272);
  if ( (_QWORD *)*v8 == v8 )
  {
LABEL_26:
    v20 = *(unsigned int *)(a1 + 36);
    *(_BYTE *)(a1 + 23321) = 0;
    v21 = KiProcessorIndexToNumberMappingTable[v20];
    result = (unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v20] >> 6;
    _InterlockedAnd64(&qword_1402CF8C8[result], ~(1LL << (v21 & 0x3F)));
    return result;
  }
  for ( i = v5; ; i = v5 )
  {
    v11 = v9 - 9;
    if ( v5 >= 0x40 )
      v12 = 0LL;
    else
      v12 = v11[6] << i;
    if ( (v11[14] & 4) != 0 )
      v12 |= 1uLL;
    v11[6] = v12;
    v13 = (_QWORD *)((char *)v11 - *(unsigned int *)(a1 + 1624));
    if ( v13[4] > 0 )
    {
      KiChargeSchedulingGroupCycleTime(v13, v9 - 9);
      a3 = v31;
    }
    if ( v11[1] != v11[2] )
    {
      v19 = KiGroupSchedulingNumerator;
      *v11 >>= 10;
      a3 = v31;
      v11[4] = *v11 * v19 + ((v11[4] * (unsigned __int64)(1024 - v19)) >> 10);
    }
    v14 = *((unsigned __int8 *)v11 + 112);
    *v11 = 0LL;
    v11[5] = 0LL;
    v11[3] = 0LL;
    *((_BYTE *)v11 + 112) = v14 & 0xFC;
    *((_DWORD *)v11 + 29) = (v14 >> 3) & 1;
    result = 0LL;
    v11[11] = 0LL;
    v11[12] = 0LL;
    v11[13] = 0LL;
    v11[47] = 0LL;
    v11[48] = 0LL;
    if ( !*((_DWORD *)v11 + 29) || a3 )
    {
      v16 = *((unsigned __int16 *)v11 + 57);
      for ( *(_DWORD *)(a1 + 22680) |= v16; v16; *v24 = v24 )
      {
        _BitScanReverse(&v22, v16);
        v16 ^= 1 << v22;
        v23 = 2LL * v22;
        v24 = &v11[v23 + 15];
        v25 = (_QWORD *)*v24;
        do
        {
          *((_DWORD *)v25 - 25) &= ~0x2000u;
          v25[159] = 0LL;
          v25 = (_QWORD *)*v25;
        }
        while ( v25 != v24 );
        v26 = (_QWORD *)*v24;
        v27 = (_QWORD *)v24[1];
        if ( *(_QWORD **)(*v24 + 8LL) != v24 || (_QWORD *)*v27 != v24 )
          __fastfail(3u);
        *v27 = v26;
        v28 = (_QWORD *)(a1 + v23 * 8 + 22784);
        v26[1] = v27;
        v29 = (_QWORD *)v28[1];
        if ( *(_QWORD **)(*v28 + 8LL) != v28 || (_QWORD *)*v29 != v28 )
          __fastfail(3u);
        if ( *(_QWORD **)(*v26 + 8LL) != v26 || *(_QWORD **)v26[1] != v26 )
          __fastfail(3u);
        *v29 = v26;
        v28[1] = v26[1];
        result = v26[1];
        *(_QWORD *)result = v28;
        v26[1] = v29;
        v24[1] = v24;
      }
      v17 = *((_DWORD *)v11 + 29) == 0;
      *((_WORD *)v11 + 57) = 0;
      if ( v17 )
      {
        *((_BYTE *)v11 + 112) &= ~4u;
        if ( v11 == v7 )
        {
          if ( (*(_BYTE *)(v6 + 2) & 4) != 0 )
            result = KiQueryEffectivePriorityThread(v6, a1);
          else
            result = *(unsigned __int8 *)(v6 + 195);
          **(_BYTE **)(a1 + 56) = result;
        }
      }
      v18 = v30;
      goto LABEL_22;
    }
    if ( *((_WORD *)v11 + 57) )
    {
      result = KiInsertNonMaxOverQuotaScb(v9 - 9, a1, 0LL);
      v18 = 1;
      v30 = 1;
LABEL_22:
      a3 = v31;
      goto LABEL_23;
    }
    v18 = v30;
LABEL_23:
    v9 = (_QWORD *)*v9;
    if ( v9 == v8 )
      break;
  }
  if ( !v18 )
    goto LABEL_26;
  return result;
}
