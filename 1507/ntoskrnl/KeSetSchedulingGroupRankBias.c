/*
 * XREFs of KeSetSchedulingGroupRankBias @ 0x1401217F0
 * Callers:
 *     NtSetInformationJobObject @ 0x140417C04 (NtSetInformationJobObject.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x14009BE20 (KiProcessDeferredReadyList.c)
 *     KiInsertSchedulingGroupQueue @ 0x1400EDDBC (KiInsertSchedulingGroupQueue.c)
 *     RtlRbRemoveNode @ 0x1400F6290 (RtlRbRemoveNode.c)
 *     KiCheckForEffectivePriorityChange @ 0x140121E0C (KiCheckForEffectivePriorityChange.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x14020A398 (KiMoveScbThreadsToNewReadylist.c)
 */

void __fastcall KeSetSchedulingGroupRankBias(__int64 a1, char a2)
{
  __int64 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // r15
  unsigned int v6; // ebp
  unsigned int v7; // edi
  __int64 v8; // rsi
  __int64 v9; // rbx
  char v10; // cl
  int v11; // eax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  _QWORD *i; // rax
  __int64 j; // rcx
  int v16; // eax
  unsigned __int16 v17; // ax
  unsigned __int16 v18; // dx
  int v19; // r8d
  int v20; // eax
  __int64 v21; // rcx
  __int64 *v22; // rdi
  __int64 v23; // rax
  _RTL_RB_TREE *v24; // rax
  unsigned int v25; // eax
  char v26; // cl
  int v27; // eax
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  unsigned __int64 k; // rdx
  __int64 m; // rcx
  int v32; // eax
  unsigned __int16 v33; // ax
  unsigned __int16 v34; // dx
  int v35; // r8d
  int v36; // eax
  __int64 v37; // rcx
  __int64 *v38; // rdi
  __int64 v39; // rax
  _RTL_RB_TREE *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  _QWORD **v43; // r9
  __int64 v44; // rcx
  __int64 *v45; // rdi
  __int64 v46; // rax
  _RTL_RB_TREE *v47; // r8
  __int64 v48; // [rsp+20h] [rbp-58h]
  _QWORD *v49; // [rsp+28h] [rbp-50h] BYREF
  __int64 v50; // [rsp+30h] [rbp-48h]

  v49 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v50 = CurrentIrql;
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = (unsigned __int8)v49;
  if ( KeMaximumProcessors > (unsigned int)(unsigned __int8)v49 )
  {
    while ( 1 )
    {
      v7 = 0;
      v8 = KiProcessorBlock[v6];
      v9 = 408LL * v6 + a1 + 128;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 48), 0LL) )
      {
        do
        {
          if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v7);
        }
        while ( *(_QWORD *)(v8 + 48) );
      }
      if ( a2 )
      {
        v10 = *(_BYTE *)(v9 + 112) | 0xC;
        v11 = ((unsigned __int8)(*(_BYTE *)(v9 + 112) | 8) >> 3) & 1;
        *(_BYTE *)(v9 + 112) = v10;
        *(_DWORD *)(v9 + 116) += v11;
        if ( (v10 & 1) == 0 )
          goto LABEL_85;
        v12 = v9 + 88;
        v13 = *(_QWORD *)(v9 + 96);
        if ( v13 )
        {
          for ( i = *(_QWORD **)v13; i; i = (_QWORD *)*i )
            v13 = (unsigned __int64)i;
        }
        else
        {
          for ( j = *(_QWORD *)(v9 + 104); ; j = *(_QWORD *)(v13 + 16) )
          {
            v13 = j & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !v13 || *(_QWORD *)v13 == v12 )
              break;
            v12 = v13;
          }
        }
        if ( !v13 )
          goto LABEL_85;
        v16 = *(_DWORD *)(v9 + 116) - *(_DWORD *)(v13 + 28);
        if ( !v16 )
        {
          v17 = *(_WORD *)(v9 + 114);
          if ( v17 )
          {
            v18 = *(_WORD *)(v13 + 26);
            _BitScanReverse((unsigned int *)&v19, v17);
            v20 = 0;
            LODWORD(v48) = v19;
            if ( v18 )
              _BitScanReverse((unsigned int *)&v20, v18);
            v16 = v20 - v19;
          }
          else
          {
            if ( !*(_DWORD *)(v9 + 116) )
            {
              if ( *(_QWORD *)v9 <= *(_QWORD *)(v13 - 88) )
                goto LABEL_85;
LABEL_32:
              v21 = 408LL * v6 + a1 + 128;
              do
              {
                v22 = (__int64 *)(v21 + 392);
                v23 = *(_QWORD *)(v21 + 392);
                if ( v23 )
                  v24 = (_RTL_RB_TREE *)(v23 + 376);
                else
                  v24 = (_RTL_RB_TREE *)(v8 + 22768);
                *(_BYTE *)(v21 + 112) &= ~1u;
                RtlRbRemoveNode(v24, (PRTL_BALANCED_NODE)(v21 + 88));
                v21 = *v22;
              }
              while ( *v22 && (*(_BYTE *)(v21 + 112) & 1) != 0 && !*(_QWORD *)(v21 + 376) && !*(_WORD *)(v21 + 114) );
LABEL_68:
              KiInsertSchedulingGroupQueue((_RTL_RB_TREE *)v8, v9, 0);
              goto LABEL_85;
            }
            v16 = 1;
          }
        }
        if ( v16 > 0 )
          goto LABEL_32;
      }
      else
      {
        v25 = *(unsigned __int8 *)(v9 + 112);
        v26 = v25 & 0xF7;
        *(_BYTE *)(v9 + 112) = v25 & 0xF7;
        *(_DWORD *)(v9 + 116) -= (v25 >> 3) & 1;
        v27 = *(_DWORD *)(v9 + 116);
        if ( !v27 )
        {
          if ( (v26 & 1) != 0 )
          {
            v41 = 408LL * v6 + a1 + 128;
            do
            {
              v42 = *(_QWORD *)(v41 + 392);
              if ( !v42 )
                break;
              v41 = *(_QWORD *)(v41 + 392);
            }
            while ( !*(_DWORD *)(v42 + 116) );
            if ( *(_QWORD *)(v41 + 392) )
            {
              v43 = 0LL;
            }
            else
            {
              v43 = &v49;
              v41 = 0LL;
            }
            KiMoveScbThreadsToNewReadylist(v9, v41, 0LL, v43, v48);
            if ( !*(_QWORD *)(v9 + 376) )
            {
              v44 = 408LL * v6 + a1 + 128;
              do
              {
                v45 = (__int64 *)(v44 + 392);
                v46 = *(_QWORD *)(v44 + 392);
                v47 = (_RTL_RB_TREE *)(v46 + 376);
                if ( !v46 )
                  v47 = (_RTL_RB_TREE *)(v8 + 22768);
                *(_QWORD *)(v44 + 56) += MEMORY[0xFFFFF78000000008] - *(_QWORD *)(v44 + 64);
                *(_BYTE *)(v44 + 112) &= ~1u;
                RtlRbRemoveNode(v47, (PRTL_BALANCED_NODE)(v44 + 88));
                v44 = *v45;
              }
              while ( *v45 && (*(_BYTE *)(v44 + 112) & 1) != 0 && !*(_QWORD *)(v44 + 376) && !*(_WORD *)(v44 + 114) );
            }
          }
          *(_BYTE *)(v9 + 112) &= ~4u;
          goto LABEL_85;
        }
        if ( (v26 & 1) != 0 )
        {
          v28 = v9 + 88;
          v29 = *(_QWORD *)(v9 + 88);
          if ( v29 )
          {
            for ( k = *(_QWORD *)(v29 + 8); k; k = *(_QWORD *)(k + 8) )
              v29 = k;
          }
          else
          {
            for ( m = *(_QWORD *)(v9 + 104); ; m = *(_QWORD *)(v29 + 16) )
            {
              v29 = m & 0xFFFFFFFFFFFFFFFCuLL;
              if ( !v29 || *(_QWORD *)(v29 + 8) == v28 )
                break;
              v28 = v29;
            }
          }
          if ( v29 )
          {
            v32 = v27 - *(_DWORD *)(v29 + 28);
            if ( !v32 )
            {
              v33 = *(_WORD *)(v9 + 114);
              if ( v33 )
              {
                v34 = *(_WORD *)(v29 + 26);
                _BitScanReverse((unsigned int *)&v35, v33);
                v36 = 0;
                HIDWORD(v48) = v35;
                if ( v34 )
                  _BitScanReverse((unsigned int *)&v36, v34);
                v32 = v36 - v35;
              }
              else
              {
                v32 = 1;
              }
            }
            if ( v32 < 0 )
            {
              v37 = 408LL * v6 + a1 + 128;
              do
              {
                v38 = (__int64 *)(v37 + 392);
                v39 = *(_QWORD *)(v37 + 392);
                if ( v39 )
                  v40 = (_RTL_RB_TREE *)(v39 + 376);
                else
                  v40 = (_RTL_RB_TREE *)(v8 + 22768);
                *(_BYTE *)(v37 + 112) &= ~1u;
                RtlRbRemoveNode(v40, (PRTL_BALANCED_NODE)(v37 + 88));
                v37 = *v38;
              }
              while ( *v38 && (*(_BYTE *)(v37 + 112) & 1) != 0 && !*(_QWORD *)(v37 + 376) && !*(_WORD *)(v37 + 114) );
              goto LABEL_68;
            }
          }
        }
      }
LABEL_85:
      KiCheckForEffectivePriorityChange(v8, v9);
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 48), 0LL);
      if ( ++v6 >= KeMaximumProcessors )
      {
        LOBYTE(CurrentIrql) = v50;
        break;
      }
    }
  }
  KiProcessDeferredReadyList((__int64)CurrentPrcb, &v49, CurrentIrql);
}
