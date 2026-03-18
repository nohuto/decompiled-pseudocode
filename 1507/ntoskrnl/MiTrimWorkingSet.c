/*
 * XREFs of MiTrimWorkingSet @ 0x140080FFC
 * Callers:
 *     MiMakeSystemCacheRangeValid @ 0x1400543B0 (MiMakeSystemCacheRangeValid.c)
 *     MiFinishVadDeletion @ 0x14008C870 (MiFinishVadDeletion.c)
 *     MiGetVadWakeList @ 0x14008CFD0 (MiGetVadWakeList.c)
 *     MiTrimOrAgeWorkingSet @ 0x140099740 (MiTrimOrAgeWorkingSet.c)
 *     MiReduceWs @ 0x14012F17C (MiReduceWs.c)
 *     MiForcedTrim @ 0x14021A838 (MiForcedTrim.c)
 * Callees:
 *     MiGetVmPartition @ 0x14003C15C (MiGetVmPartition.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiTrimThisWsle @ 0x140081700 (MiTrimThisWsle.c)
 *     MiIsNextVaTrimCandidate @ 0x140081960 (MiIsNextVaTrimCandidate.c)
 *     MiRotateHeadWsle @ 0x140081B34 (MiRotateHeadWsle.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiLogPageAccess @ 0x140096F70 (MiLogPageAccess.c)
 *     MiFreeWsleList @ 0x1400AE6D0 (MiFreeWsleList.c)
 *     MiRemoveWorkingSetPages @ 0x1401089A0 (MiRemoveWorkingSetPages.c)
 *     KeShouldYieldProcessor @ 0x14010B540 (KeShouldYieldProcessor.c)
 *     MiLogTrimWs @ 0x14012F884 (MiLogTrimWs.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiTrimWorkingSet(__int64 a1, __int64 a2, char a3, unsigned int a4, unsigned __int8 a5)
{
  __int64 v5; // r10
  unsigned int v7; // ebx
  __int16 *VmPartition; // rax
  __int64 v9; // r8
  unsigned int v10; // r9d
  char v11; // r10
  __int64 v12; // r12
  __int64 v13; // r15
  unsigned __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // r13
  __int64 v17; // r8
  unsigned int v18; // ebx
  int v19; // eax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r14
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 *v24; // r12
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdi
  unsigned __int64 v30; // r8
  _QWORD *v31; // r8
  __int64 v32; // rcx
  char v33; // r12
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // r9
  __int64 v37; // rax
  unsigned __int64 v38; // r8
  __int64 IsNextVaTrimCandidate; // rax
  __int64 v41; // rax
  unsigned int v42; // edi
  signed __int32 v43; // eax
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // rax
  __int64 v50; // r12
  char v51; // [rsp+20h] [rbp-E0h]
  unsigned int v52; // [rsp+24h] [rbp-DCh]
  char v53; // [rsp+28h] [rbp-D8h]
  unsigned int v54; // [rsp+2Ch] [rbp-D4h]
  __int64 CurrentIrql; // [rsp+30h] [rbp-D0h]
  __int64 v56; // [rsp+38h] [rbp-C8h]
  __int64 v57; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v58; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v59; // [rsp+50h] [rbp-B0h]
  unsigned int v61; // [rsp+5Ch] [rbp-A4h]
  unsigned int v62; // [rsp+60h] [rbp-A0h]
  __int64 v63; // [rsp+68h] [rbp-98h]
  __int64 v64; // [rsp+70h] [rbp-90h]
  unsigned __int64 v65; // [rsp+78h] [rbp-88h]
  unsigned __int64 v66; // [rsp+80h] [rbp-80h]
  __int64 v67; // [rsp+88h] [rbp-78h]
  __int64 v68; // [rsp+90h] [rbp-70h]
  _QWORD v70[20]; // [rsp+A0h] [rbp-60h] BYREF

  LOBYTE(v5) = a3;
  CurrentIrql = v5;
  v7 = a4 & 0xF;
  VmPartition = MiGetVmPartition(a2);
  v64 = v9;
  v12 = v9;
  v67 = *((_QWORD *)VmPartition + 657);
  if ( (a5 & 2) != 0 )
    v7 |= 0x20u;
  if ( (a5 & 4) != 0 )
    v7 |= 0x40u;
  LODWORD(v70[0]) = 0;
  v61 = (a5 >> 3) & 1;
  if ( dword_14034F248 )
    v7 |= 0x10u;
  v13 = *(_QWORD *)(a2 + 184);
  v14 = 0LL;
  v58 = 0LL;
  LODWORD(v15) = v7 & 0xF;
  v62 = v10;
  v16 = v9;
  v54 = v15;
  v17 = 0LL;
  v56 = 0LL;
  if ( *(_DWORD *)(v13 + 64) == 16 )
  {
    v18 = v7 & 0xFFFFFFF0 | 7;
    v19 = v18 & 0xF;
    v7 = v18 | 0x100;
    v15 = (unsigned int)(2 * v19 + 1);
    v20 = *(_QWORD *)(v13 + 8 * v15 + 112);
    v62 = 2 * v10;
    v54 = 2 * v19 + 1;
  }
  else
  {
    v46 = *(_QWORD *)(a2 + 120);
    v47 = *(_QWORD *)(v13 + 8);
    if ( v46 <= v47 )
      return 0LL;
    v20 = v46 - v47;
  }
  v21 = *(_QWORD *)(v13 + 24);
  v59 = v20;
  v66 = *(_QWORD *)(v13 + 16);
  if ( v21 > v66 || v21 < *(_QWORD *)(v13 + 8) )
    v21 = *(_QWORD *)(v13 + 8);
  v65 = v21;
  v22 = 0LL;
  v63 = 0xFFFFFFFFFLL;
  v52 = 0;
LABEL_12:
  v7 |= 0x80u;
  v53 = 0;
  v51 = 0;
  v57 = 0xFFFFFFFFFLL;
  if ( v16 )
  {
    while ( (v7 & 0x100) != 0 )
    {
      if ( v14 >= v20 )
      {
        v21 = 0xFFFFFFFFFLL;
      }
      else
      {
        v58 = v14 + 1;
        v23 = MiRotateHeadWsle(v13, (unsigned int)v15, v17);
        v17 = v56;
        v21 = v23;
        v22 = v52;
        v11 = CurrentIrql;
      }
      if ( v21 != 0xFFFFFFFFFLL )
        goto LABEL_17;
      if ( (unsigned int)v15 > v62 )
      {
        if ( (v15 & 1) == 0 )
          v7 ^= ((unsigned __int8)v7 ^ (unsigned __int8)(v7 - 1)) & 0xF;
        v15 = (unsigned int)(v15 - 1);
        v14 = 0LL;
        v54 = v15;
        v58 = 0LL;
        v20 = *(_QWORD *)(v13 + 8 * v15 + 112);
        v59 = v20;
LABEL_52:
        v17 = v56;
        v22 = v52;
        v11 = CurrentIrql;
        if ( v16 )
          continue;
      }
LABEL_53:
      if ( LODWORD(v70[0]) )
      {
        v16 += MiFreeWsleList(a2, v70, v61);
        if ( v16 )
        {
          if ( v21 != v65 )
          {
            LODWORD(v70[0]) = 0;
            v20 = v59;
            LODWORD(v15) = v54;
            v14 = v58;
            v17 = v56;
            v22 = v52;
            v11 = CurrentIrql;
            goto LABEL_12;
          }
        }
      }
      goto LABEL_54;
    }
    v58 = v14 + 1;
    v63 = v21 + 1;
LABEL_17:
    v68 = 19LL;
    while ( 1 )
    {
      while ( 1 )
      {
        v56 = v17 + 1;
        v24 = (__int64 *)(*(_QWORD *)(v13 + 496) + v21 * *(unsigned int *)(v13 + 64));
        v25 = *v24;
        if ( v11 != 17 )
        {
          if ( (v22 = (unsigned int)(v22 + 1), v52 = v22, (v22 & 0xF) == 0) && (*(_DWORD *)a2 & 0x40000000) != 0
            || KeShouldYieldProcessor() )
          {
            v51 = 1;
          }
        }
        if ( (v25 & 1) != 0 )
          break;
        v29 = v57;
        v33 = v53;
LABEL_42:
        if ( v51 == 1 )
          v33 = 1;
        v53 = v33;
        if ( !v33 )
        {
          if ( (v7 & 0x80u) == 0 || v29 == 0xFFFFFFFFFLL )
            goto LABEL_47;
          v7 &= ~0x80u;
          IsNextVaTrimCandidate = MiIsNextVaTrimCandidate(a2, v70, v29, v7);
          v17 = v56;
          v21 = IsNextVaTrimCandidate;
          v22 = v52;
          v11 = CurrentIrql;
          if ( IsNextVaTrimCandidate != 0xFFFFFFFFFLL )
            continue;
        }
        if ( v33 == 1 )
        {
          v53 = 0;
          if ( LODWORD(v70[0]) )
          {
            v41 = MiFreeWsleList(a2, v70, v61);
            LODWORD(v70[0]) = 0;
            v16 += v41;
          }
        }
LABEL_47:
        if ( v51 == 1 )
        {
          v51 = 0;
          *(_QWORD *)(v13 + 24) = v21;
          if ( (a5 & 1) != 0 )
          {
            *(_QWORD *)(v67 + 8LL * a4 + 2568) += v64 - v16;
            *(_QWORD *)(a2 + 200) += v64 - v16;
          }
          MiUnlockWorkingSetExclusive(a2, CurrentIrql);
          v12 = v16;
          v64 = v16;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a2);
          }
          else
          {
            v42 = 0;
            if ( _interlockedbittestandset((volatile signed __int32 *)a2, 0x1Fu) )
              v42 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)a2);
            while ( 1 )
            {
              v43 = *(_DWORD *)a2;
              if ( (*(_DWORD *)a2 & 0xBFFFFFFF) == 0x80000000 )
                break;
              if ( (v43 & 0x40000000) == 0 )
                _InterlockedCompareExchange((volatile signed __int32 *)a2, v43 | 0x40000000, v43);
              if ( (++v42 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v42);
            }
          }
          if ( (v7 & 0x100) != 0 )
          {
            v44 = *(_QWORD *)(v13 + 8LL * v54 + 112);
          }
          else
          {
            v48 = *(_QWORD *)(a2 + 120);
            v49 = *(_QWORD *)(v13 + 8);
            if ( v48 > v49 )
              v44 = v48 - v49;
            else
              v44 = 0LL;
          }
          v20 = v59;
          v35 = *(_QWORD *)(v13 + 16);
          v21 = *(_QWORD *)(v13 + 24);
          if ( v44 < v59 )
            v20 = v44;
          v66 = *(_QWORD *)(v13 + 16);
          v59 = v20;
          if ( v21 > v35 || (v45 = *(_QWORD *)(v13 + 8), v21 < v45) )
          {
            v45 = *(_QWORD *)(v13 + 8);
            v21 = v45;
          }
          if ( v65 > v35 || v65 < v45 )
            v65 = v45;
          v34 = v21;
          v63 = v21;
        }
        else
        {
          v20 = v59;
          v12 = v64;
          v34 = v63;
          v35 = v66;
        }
        if ( ((v7 >> 8) & 1) == 0 )
        {
          v21 = v34;
          if ( v34 > v35 )
            v21 = *(_QWORD *)(v13 + 8);
        }
        v14 = v58;
        if ( ((v7 >> 8) & 1) != 0 || v58 < v20 )
        {
          LODWORD(v15) = v54;
          v57 = 0xFFFFFFFFFLL;
          v7 |= 0x80u;
          goto LABEL_52;
        }
        goto LABEL_53;
      }
      if ( (unsigned int)MiTrimThisWsle(a2, v21, v7, v22) != 1 )
        goto LABEL_40;
      v26 = LODWORD(v70[0]);
      v27 = 0LL;
      v28 = *v24;
      if ( LODWORD(v70[0]) )
      {
        while ( v70[v27 + 1] != v21 )
        {
          if ( ++v27 >= (unsigned __int64)LODWORD(v70[0]) )
            goto LABEL_26;
        }
LABEL_40:
        v29 = v57;
LABEL_41:
        v33 = v53;
        goto LABEL_42;
      }
LABEL_26:
      v29 = v57;
      if ( v57 == 0xFFFFFFFFFLL )
        v29 = LODWORD(v70[0]);
      v57 = v29;
      if ( (v7 & 0x80u) == 0 )
      {
        do
        {
          v70[v26 + 1] = v70[v26];
          --v26;
        }
        while ( v26 != v29 );
      }
      v70[v26 + 1] = v21;
      ++LODWORD(v70[0]);
      if ( (v7 & 0x10) != 0 )
      {
        v30 = (v28 & 0x800000000000LL) != 0 ? v28 | 0xFFFF000000000000uLL : v28 & 0xFFFFFFFFFFFFLL;
        v31 = (_QWORD *)(((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        if ( (v28 & 0xE00) != 3584 && (*v31 & 0x20) != 0 )
          MiLogPageAccess(a2, v31);
      }
      --v16;
      v32 = --v68;
      if ( LODWORD(v70[0]) == 19 || !v32 || !v16 )
      {
        v33 = 1;
        goto LABEL_42;
      }
      v21 = MiIsNextVaTrimCandidate(a2, v70, (unsigned int)(LODWORD(v70[0]) - 1), v7);
      if ( v21 != 0xFFFFFFFFFLL )
      {
        v17 = v56;
        v22 = v52;
        v11 = CurrentIrql;
        if ( !v51 )
          continue;
      }
      goto LABEL_41;
    }
  }
LABEL_54:
  v36 = *(_QWORD *)(v13 + 32);
  *(_QWORD *)(v13 + 24) = v21;
  v37 = *(_QWORD *)(a2 + 120);
  v38 = v36 - v37 + 1;
  if ( *(_QWORD *)(v13 + 8) == v37
    || (v20 = 0x4000uLL % *(unsigned int *)(v13 + 64), v38 >= 0x4000uLL / *(unsigned int *)(v13 + 64))
    && v38 >= v36 >> 3 )
  {
    MiRemoveWorkingSetPages(a2, v20);
  }
  if ( (a5 & 1) != 0 )
  {
    v50 = v12 - v16;
    *(_QWORD *)(v67 + 8LL * a4 + 2568) += v50;
    *(_QWORD *)(a2 + 200) += v50;
  }
  MiLogTrimWs(a2, v56, a1 - v16);
  return a1 - v16;
}
