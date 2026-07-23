/*
 * XREFs of KiTransitionSchedulingGroupGeneration @ 0x1400ECD50
 * Callers:
 *     KiGroupSchedulingGenerationEnd @ 0x1400EC860 (KiGroupSchedulingGenerationEnd.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x1400EC740 (KiGetThreadEffectiveRankNonZero.c)
 *     KiInsertSchedulingGroupQueue @ 0x1400EDDBC (KiInsertSchedulingGroupQueue.c)
 *     RtlRbRemoveNode @ 0x1400F6290 (RtlRbRemoveNode.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x14020A34C (KiChargeSchedulingGroupCycleTime.c)
 */

unsigned __int64 __fastcall KiTransitionSchedulingGroupGeneration(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3; // r10
  unsigned int v5; // r13d
  __int64 v6; // r9
  char v7; // bl
  __int64 v8; // r14
  _QWORD *v9; // r11
  _QWORD *v10; // r15
  char i; // al
  _QWORD *v12; // rdi
  __int64 v13; // rdx
  __int64 *v14; // rcx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  char v17; // al
  unsigned __int64 k; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 j; // rcx
  int v21; // ecx
  unsigned __int16 v22; // cx
  unsigned __int16 v23; // dx
  int v24; // r8d
  int v25; // ecx
  _QWORD *v26; // rcx
  _QWORD *v27; // rbx
  __int64 v28; // rax
  _RTL_RB_TREE *v29; // rax
  unsigned int v30; // r10d
  unsigned int v31; // eax
  __int64 v32; // r8
  _QWORD *v33; // rcx
  _QWORD *v34; // rax
  _QWORD *v35; // rdx
  _QWORD *v36; // rax
  _QWORD *v37; // r8
  _QWORD *v38; // r9
  bool v39; // zf
  char v40; // cl
  __int64 v41; // rdx
  __int64 v42; // rdx
  int ThreadEffectiveRankNonZero; // eax
  unsigned __int64 result; // rax
  __int64 v45; // rax
  char v46; // cl
  _QWORD *v47; // [rsp+20h] [rbp-58h]

  v3 = *(_QWORD *)(a1 + 23384);
  v5 = 1;
  if ( a2 > v3 )
    v5 = (a2 + (unsigned int)KiGenerationTicks - v3 - 1) / (unsigned int)KiGenerationTicks + 1;
  v6 = 0LL;
  *(_QWORD *)(a1 + 23384) = KiGenerationEndTick;
  v7 = 0;
  *(_QWORD *)(a1 + 22768) = 0LL;
  *(_QWORD *)(a1 + 22776) = 0LL;
  v8 = *(_QWORD *)(a1 + 16);
  if ( !v8 )
    v8 = *(_QWORD *)(a1 + 8);
  v9 = *(_QWORD **)(v8 + 104);
  v47 = v9;
  if ( v9 )
  {
    v9 = (_QWORD *)((char *)v9 + *(unsigned int *)(a1 + 1624));
    v47 = v9;
  }
  v10 = *(_QWORD **)(a1 + 24272);
  if ( v10 == (_QWORD *)(a1 + 24272) )
  {
LABEL_78:
    v45 = *(unsigned int *)(a1 + 36);
    *(_BYTE *)(a1 + 23321) = 0;
    v46 = KiProcessorIndexToNumberMappingTable[v45];
    result = (unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v45] >> 6;
    _InterlockedAnd64(&qword_14031E928[result], ~(1LL << (v46 & 0x3F)));
    return result;
  }
  for ( i = v5; ; i = v5 )
  {
    v12 = v10 - 9;
    if ( v5 >= 0x40 )
      v13 = v6;
    else
      v13 = v12[6] << i;
    if ( (v12[14] & 4) != 0 )
      v13 |= 1uLL;
    v12[6] = v13;
    v14 = (_QWORD *)((char *)v12 - *(unsigned int *)(a1 + 1624));
    if ( v14[4] > 0 )
    {
      KiChargeSchedulingGroupCycleTime(v14, v10 - 9);
      v9 = v47;
      v6 = 0LL;
    }
    if ( v12[1] != v12[2] )
    {
      v15 = KiGroupSchedulingNumerator;
      *v12 >>= 10;
      v12[4] = *v12 * v15 + ((v12[4] * (unsigned __int64)(1024 - v15)) >> 10);
    }
    v16 = *((unsigned __int8 *)v12 + 112);
    *v12 = v6;
    v12[5] = v6;
    v12[3] = v6;
    *((_BYTE *)v12 + 112) = v16 & 0xFC;
    *((_DWORD *)v12 + 29) = (v16 >> 3) & 1;
    v12[11] = 0LL;
    v12[12] = 0LL;
    v12[13] = 0LL;
    v12[47] = v6;
    v12[48] = v6;
    if ( *((_DWORD *)v12 + 29) && !a3 )
    {
      if ( !*((_WORD *)v12 + 57) )
        goto LABEL_72;
      while ( 1 )
      {
        v17 = *((_BYTE *)v12 + 112);
        if ( (v17 & 2) != 0 )
        {
LABEL_50:
          v7 = 1;
          goto LABEL_72;
        }
        if ( (v17 & 1) == 0 )
          goto LABEL_48;
        k = v12[11];
        v19 = (unsigned __int64)(v12 + 11);
        if ( k )
        {
          for ( j = *(_QWORD *)(k + 8); j; j = *(_QWORD *)(j + 8) )
            k = j;
        }
        else
        {
          for ( k = v12[13] & 0xFFFFFFFFFFFFFFFCuLL; k; k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL )
          {
            if ( *(_QWORD *)(k + 8) == v19 )
              break;
            v19 = k;
          }
        }
        if ( !k )
          goto LABEL_49;
        v21 = *((_DWORD *)v12 + 29) - *(_DWORD *)(k + 28);
        if ( !v21 )
        {
          v22 = *((_WORD *)v12 + 57);
          if ( !v22 )
          {
            if ( *((_DWORD *)v12 + 29) || *v12 > *(_QWORD *)(k - 88) )
              goto LABEL_49;
LABEL_40:
            v26 = v12;
            do
            {
              v27 = v26 + 49;
              v28 = v26[49];
              if ( v28 )
                v29 = (_RTL_RB_TREE *)(v28 + 376);
              else
                v29 = (_RTL_RB_TREE *)(a1 + 22768);
              *((_BYTE *)v26 + 112) &= ~1u;
              RtlRbRemoveNode(v29, (PRTL_BALANCED_NODE)(v26 + 11));
              v26 = (_QWORD *)*v27;
            }
            while ( *v27 && (v26[14] & 1) != 0 && !v26[47] && !*((_WORD *)v26 + 57) );
LABEL_48:
            KiInsertSchedulingGroupQueue(a1, v12, 0LL);
            v6 = 0LL;
            goto LABEL_49;
          }
          v23 = *(_WORD *)(k + 26);
          _BitScanReverse((unsigned int *)&v24, v22);
          v25 = v6;
          if ( v23 )
            _BitScanReverse((unsigned int *)&v25, v23);
          v21 = v25 - v24;
        }
        if ( v21 < 0 )
          goto LABEL_40;
LABEL_49:
        v12 = (_QWORD *)v12[49];
        if ( !v12 )
          goto LABEL_50;
      }
    }
    v30 = *((unsigned __int16 *)v12 + 57);
    for ( *(_DWORD *)(a1 + 22680) |= v30; v30; *v33 = v33 )
    {
      _BitScanReverse(&v31, v30);
      v30 ^= 1 << v31;
      v32 = 2LL * v31;
      v33 = &v12[v32 + 15];
      v34 = (_QWORD *)*v33;
      do
      {
        *((_DWORD *)v34 - 25) &= ~0x2000u;
        v34[159] = v6;
        v34 = (_QWORD *)*v34;
      }
      while ( v34 != v33 );
      v35 = (_QWORD *)*v33;
      v36 = (_QWORD *)v33[1];
      if ( *(_QWORD **)(*v33 + 8LL) != v33 || (_QWORD *)*v36 != v33 )
        __fastfail(3u);
      *v36 = v35;
      v37 = (_QWORD *)(a1 + v32 * 8 + 22784);
      v35[1] = v36;
      v38 = (_QWORD *)v37[1];
      if ( *(_QWORD **)(*v37 + 8LL) != v37 || (_QWORD *)*v38 != v37 )
        __fastfail(3u);
      if ( *(_QWORD **)(*v35 + 8LL) != v35 || *(_QWORD **)v35[1] != v35 )
        __fastfail(3u);
      *v38 = v35;
      v37[1] = v35[1];
      *(_QWORD *)v35[1] = v37;
      v35[1] = v38;
      v6 = 0LL;
      v33[1] = v33;
    }
    v39 = *((_DWORD *)v12 + 29) == 0;
    *((_WORD *)v12 + 57) = v6;
    if ( v39 )
    {
      *((_BYTE *)v12 + 112) &= ~4u;
      if ( v12 == v9 )
      {
        if ( (*(_BYTE *)(v8 + 2) & 4) != 0 )
        {
          if ( *(char *)(v8 + 195) >= 16
            || !*(_QWORD *)(v8 + 104)
            || (v41 = *(_QWORD *)(v8 + 104)) == 0
            || (v42 = *(unsigned int *)(a1 + 1624) + v41) == 0
            || (ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v8, v42, 0),
                v40 = 1,
                !ThreadEffectiveRankNonZero) )
          {
            v40 = *(_BYTE *)(v8 + 195);
          }
        }
        else
        {
          v40 = *(_BYTE *)(v8 + 195);
        }
        **(_BYTE **)(a1 + 56) = v40;
      }
    }
LABEL_72:
    v10 = (_QWORD *)*v10;
    result = a1 + 24272;
    if ( v10 == (_QWORD *)(a1 + 24272) )
      break;
    v9 = v47;
  }
  if ( !v7 )
    goto LABEL_78;
  return result;
}
