/*
 * XREFs of KiGroupSchedulingQuantumEnd @ 0x1400A3400
 * Callers:
 *     KiQuantumEnd @ 0x1400A25A0 (KiQuantumEnd.c)
 * Callees:
 *     KiInsertDeferredPreemptionApc @ 0x14000C7EC (KiInsertDeferredPreemptionApc.c)
 *     KiSelectReadyThread @ 0x1400A19C0 (KiSelectReadyThread.c)
 *     KiSelectNextThread @ 0x1400D5240 (KiSelectNextThread.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400EC740 (KiGetThreadEffectiveRankNonZero.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1400EC860 (KiGroupSchedulingGenerationEnd.c)
 *     KiChooseLowestRankedThread @ 0x1400ED5E4 (KiChooseLowestRankedThread.c)
 *     KiAddThreadToScbQueue @ 0x1400EDC94 (KiAddThreadToScbQueue.c)
 *     KiInsertSchedulingGroupQueue @ 0x1400EDDBC (KiInsertSchedulingGroupQueue.c)
 *     RtlRbRemoveNode @ 0x1400F6290 (RtlRbRemoveNode.c)
 *     KiComputeGroupSchedulingRank @ 0x140121494 (KiComputeGroupSchedulingRank.c)
 *     KiRecomputeGroupSchedulingRank @ 0x140128E58 (KiRecomputeGroupSchedulingRank.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x14020A34C (KiChargeSchedulingGroupCycleTime.c)
 */

void __fastcall KiGroupSchedulingQuantumEnd(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  char v4; // r12
  char v5; // r15
  unsigned int v6; // ebp
  unsigned int v9; // ebx
  unsigned __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rsi
  char v16; // r8
  char v17; // r9
  char v18; // r13
  char v19; // dl
  unsigned __int64 i; // rcx
  unsigned __int64 v21; // rax
  _QWORD *v22; // rax
  int v23; // eax
  unsigned __int16 v24; // ax
  unsigned __int16 v25; // dx
  int v26; // r8d
  int v27; // eax
  __int64 v28; // rcx
  __int64 *v29; // rbx
  __int64 v30; // rax
  _RTL_RB_TREE *v31; // rax
  __int64 v32; // rcx
  __int64 *v33; // rbx
  __int64 v34; // rax
  _RTL_RB_TREE *v35; // r8
  __int64 v36; // r9
  __int64 v37; // rsi
  __int64 v38; // r9
  __int64 ready; // rax
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // r9
  char v44; // cl
  __int64 v45; // rdx
  __int64 v46; // rdx
  int ThreadEffectiveRankNonZero; // eax
  __int64 v48; // r10
  __int64 v49; // r10
  __int64 v50; // r12
  __int64 v51; // rcx
  __int64 v52; // r14
  unsigned int v53; // ebx
  __int64 *v54; // r15
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // [rsp+28h] [rbp-60h]
  char v61; // [rsp+90h] [rbp+8h]

  v4 = 0;
  v5 = 0;
  v61 = 0;
  v6 = 0;
  v9 = 0;
  v10 = MEMORY[0xFFFFF78000000320];
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
  {
    do
    {
      if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v9);
    }
    while ( *(_QWORD *)(a1 + 48) );
  }
  v11 = *(_QWORD *)(a1 + 16);
  v12 = 0LL;
  v60 = v11;
  if ( v11 )
  {
    v12 = *(_QWORD *)(v11 + 104);
    if ( v12 )
      v12 += *(unsigned int *)(a1 + 1624);
  }
  if ( v10 > *(_QWORD *)(a1 + 23384) )
  {
    KiGroupSchedulingGenerationEnd(a1, v10, 0LL);
    return;
  }
  v13 = *(_QWORD *)(a2 + 104);
  v14 = v13;
  if ( v13 )
  {
    v15 = *(unsigned int *)(a1 + 1624) + v13;
    if ( v15 )
    {
      v16 = 0;
      v17 = a3;
      v18 = 1;
      while ( 1 )
      {
        v19 = *(_BYTE *)(v15 + 112);
        if ( (v19 & 4) == 0 )
        {
          if ( *(_QWORD *)v15 >= *(_QWORD *)(v15 + 8) )
          {
            KiComputeGroupSchedulingRank(v14, a1, v15);
            v17 = a3;
            v5 = 1;
            v4 = 1;
            if ( v12 == v15 )
            {
              v16 = 1;
              v61 = 1;
              goto LABEL_38;
            }
            goto LABEL_37;
          }
          if ( (v19 & 1) == 0 )
            goto LABEL_37;
          i = *(_QWORD *)(v15 + 96);
          v21 = v15 + 88;
          if ( i )
          {
            v22 = *(_QWORD **)i;
            if ( *(_QWORD *)i )
            {
              do
              {
                i = (unsigned __int64)v22;
                v22 = (_QWORD *)*v22;
              }
              while ( v22 );
            }
          }
          else
          {
            for ( i = *(_QWORD *)(v15 + 104) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
            {
              if ( *(_QWORD *)i == v21 )
                break;
              v21 = i;
            }
          }
          if ( !i )
            goto LABEL_37;
          v23 = *(_DWORD *)(v15 + 116) - *(_DWORD *)(i + 28);
          if ( v23 )
            goto LABEL_36;
          v24 = *(_WORD *)(v15 + 114);
          if ( v24 )
          {
            v25 = *(_WORD *)(i + 26);
            _BitScanReverse((unsigned int *)&v26, v24);
            v27 = 0;
            if ( v25 )
              _BitScanReverse((unsigned int *)&v27, v25);
            v23 = v27 - v26;
LABEL_36:
            if ( v23 <= 0 )
            {
LABEL_37:
              v16 = v61;
              goto LABEL_38;
            }
          }
          else if ( !*(_DWORD *)(v15 + 116) && *(_QWORD *)v15 <= *(_QWORD *)(i - 88) )
          {
            goto LABEL_37;
          }
          v28 = v15;
          do
          {
            v29 = (__int64 *)(v28 + 392);
            v30 = *(_QWORD *)(v28 + 392);
            if ( v30 )
              v31 = (_RTL_RB_TREE *)(v30 + 376);
            else
              v31 = (_RTL_RB_TREE *)(a1 + 22768);
            *(_BYTE *)(v28 + 112) &= ~1u;
            RtlRbRemoveNode(v31, (PRTL_BALANCED_NODE)(v28 + 88));
            v28 = *v29;
          }
          while ( *v29 && (*(_BYTE *)(v28 + 112) & 1) != 0 && !*(_QWORD *)(v28 + 376) && !*(_WORD *)(v28 + 114) );
          KiInsertSchedulingGroupQueue(a1, v15, 0LL);
          v17 = a3;
          goto LABEL_37;
        }
        if ( (v19 & 0x12) == 0 && *(_QWORD *)v15 > *(_QWORD *)(v15 + 16) )
          break;
        if ( *(_QWORD *)v15 > *(_QWORD *)(v15 + 24) )
        {
          KiRecomputeGroupSchedulingRank(v14, v15, a1);
          goto LABEL_68;
        }
        if ( v17 )
          v5 = 1;
LABEL_38:
        v15 = *(_QWORD *)(v15 + 392);
        if ( !v15 )
        {
          v36 = a2;
          v37 = *(_QWORD *)(a2 + 104);
          if ( v37 )
            v37 += *(unsigned int *)(a1 + 1624);
          if ( v5 && !v60 )
          {
            if ( (unsigned int)KiGetThreadEffectiveRankNonZero(a2, v37, 1LL) )
              ready = KiChooseLowestRankedThread(a1, v38, (unsigned int)*(char *)(v38 + 195));
            else
              ready = KiSelectReadyThread(*(char *)(v38 + 195), a1);
            v40 = ready;
            if ( ready )
            {
              if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
              {
                if ( *(char *)(ready + 195) >= 16
                  || !*(_QWORD *)(ready + 104)
                  || (v41 = *(_QWORD *)(ready + 104)) == 0
                  || (v42 = *(unsigned int *)(a1 + 1624) + v41) == 0
                  || !(unsigned int)KiGetThreadEffectiveRankNonZero(ready, v42, 0LL) )
                {
                  v18 = *(_BYTE *)(v40 + 195);
                }
              }
              else
              {
                v18 = *(_BYTE *)(ready + 195);
              }
              **(_BYTE **)(a1 + 56) = v18;
              *(_QWORD *)(a1 + 16) = v40;
              *(_BYTE *)(v40 + 388) = 3;
            }
            goto LABEL_128;
          }
          if ( v4 && v60 && v12 )
          {
            if ( v12 == v37 )
              goto LABEL_98;
            while ( v12 )
            {
              v12 = *(_QWORD *)(v12 + 392);
              if ( v12 == v37 )
                goto LABEL_98;
            }
            if ( !v37 || v16 )
            {
LABEL_98:
              v43 = KiChooseLowestRankedThread(a1, v60, (unsigned int)(*(char *)(v60 + 195) + 1));
              if ( v43 )
              {
                *(_BYTE *)(v60 + 388) = 1;
                *(_DWORD *)(v60 + 436) = MEMORY[0xFFFFF78000000320];
                if ( (*(_BYTE *)(v43 + 2) & 4) != 0 )
                {
                  if ( *(char *)(v43 + 195) >= 16
                    || !*(_QWORD *)(v43 + 104)
                    || (v45 = *(_QWORD *)(v43 + 104)) == 0
                    || (v46 = *(unsigned int *)(a1 + 1624) + v45) == 0
                    || (ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v43, v46, 0LL),
                        v44 = 1,
                        !ThreadEffectiveRankNonZero) )
                  {
                    v44 = *(_BYTE *)(v43 + 195);
                  }
                }
                else
                {
                  v44 = *(_BYTE *)(v43 + 195);
                }
                **(_BYTE **)(a1 + 56) = v44;
                *(_QWORD *)(a1 + 16) = v43;
                *(_BYTE *)(v43 + 388) = 3;
                v48 = *(_QWORD *)(v60 + 104);
                if ( v48 )
                  v48 += *(unsigned int *)(a1 + 1624);
                if ( (unsigned int)KiGetThreadEffectiveRankNonZero(v60, v48, 1LL) )
                {
                  KiAddThreadToScbQueue(a1, v49, v60, 1LL);
                }
                else
                {
                  v50 = *(char *)(v60 + 195);
                  v51 = *(_QWORD *)(a1 + 24768);
                  if ( (*(_DWORD *)(v60 + 120) & 0x1000) != 0 && v51 && (v51 & *(_QWORD *)(v60 + 576)) == v51 )
                  {
                    v52 = *(_QWORD *)(a1 + 24776);
                    v53 = 0;
                    v54 = (__int64 *)(v52 + 16 * (v50 + 1));
                    while ( _interlockedbittestandset64((volatile signed __int32 *)v52, 0LL) )
                    {
                      do
                      {
                        if ( (++v53 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                          _mm_pause();
                        else
                          HvlNotifyLongSpinWait(v53);
                      }
                      while ( *(_QWORD *)v52 );
                    }
                    v55 = *v54;
                    v56 = v60 + 216;
                    *(_QWORD *)(v60 + 216) = *v54;
                    *(_QWORD *)(v60 + 224) = v54;
                    if ( *(__int64 **)(v55 + 8) != v54 )
                      __fastfail(3u);
                    *(_QWORD *)(v55 + 8) = v56;
                    *v54 = v56;
                    _bittestandreset((signed __int32 *)(a1 + 22684), v50);
                    *(_DWORD *)(v52 + 8) |= 1 << v50;
                    *(_DWORD *)(v60 + 536) |= 0x80000000;
                    _InterlockedAnd64((volatile signed __int64 *)v52, 0LL);
                  }
                  else
                  {
                    v57 = v60 + 216;
                    v58 = (__int64 *)(a1 + 16 * (v50 + 1424));
                    v59 = *v58;
                    *(_QWORD *)(v60 + 216) = *v58;
                    *(_QWORD *)(v60 + 224) = v58;
                    if ( *(__int64 **)(v59 + 8) != v58 )
                      __fastfail(3u);
                    *(_QWORD *)(v59 + 8) = v57;
                    *v58 = v57;
                    _bittestandset((signed __int32 *)(a1 + 22684), v50);
                    *(_DWORD *)(a1 + 22680) |= 1 << v50;
                  }
                }
              }
LABEL_128:
              v36 = a2;
            }
          }
          if ( v37 )
          {
            if ( *(_DWORD *)(v36 + 484) || *(_BYTE *)(v36 + 390) == 1 )
            {
              if ( (*(_DWORD *)(v36 + 120) & 0x600) == 0 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
                KiInsertDeferredPreemptionApc(a1, v36, 0);
                while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
                {
                  do
                  {
                    if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                      _mm_pause();
                    else
                      HvlNotifyLongSpinWait(v6);
                  }
                  while ( *(_QWORD *)(a1 + 48) );
                }
              }
            }
            else
            {
              while ( (*(_BYTE *)(v37 + 112) & 2) == 0 )
              {
                v37 = *(_QWORD *)(v37 + 392);
                if ( !v37 )
                  return;
              }
              if ( !*(_QWORD *)(a1 + 16) )
                KiSelectNextThread(a1, a4);
            }
          }
          return;
        }
        v14 = v15 - *(unsigned int *)(a1 + 1624);
      }
      *(_BYTE *)(v15 + 112) = v19 | 2;
      if ( *(__int64 *)(v14 + 32) > 0 )
      {
        KiChargeSchedulingGroupCycleTime(v14, v15);
        v16 = v61;
      }
      if ( (*(_BYTE *)(v15 + 112) & 1) != 0 )
      {
        v32 = v15;
        do
        {
          v33 = (__int64 *)(v32 + 392);
          v34 = *(_QWORD *)(v32 + 392);
          v35 = (_RTL_RB_TREE *)(v34 + 376);
          if ( !v34 )
            v35 = (_RTL_RB_TREE *)(a1 + 22768);
          *(_QWORD *)(v32 + 56) += MEMORY[0xFFFFF78000000008] - *(_QWORD *)(v32 + 64);
          *(_BYTE *)(v32 + 112) &= ~1u;
          RtlRbRemoveNode(v35, (PRTL_BALANCED_NODE)(v32 + 88));
          v32 = *v33;
        }
        while ( *v33 && (*(_BYTE *)(v32 + 112) & 1) != 0 && !*(_QWORD *)(v32 + 376) && !*(_WORD *)(v32 + 114) );
LABEL_68:
        v16 = v61;
      }
      v17 = a3;
      v5 = 1;
      if ( v12 == v15 )
        v16 = 1;
      v4 = 1;
      v61 = v16;
      goto LABEL_38;
    }
  }
}
