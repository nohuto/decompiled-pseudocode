/*
 * XREFs of MiTrimWorkingSet @ 0x1400B5BA0
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1400A59F0 (MiTrimOrAgeWorkingSet.c)
 *     MiJumpStackTarget @ 0x1400D82EC (MiJumpStackTarget.c)
 *     MmStealTopLevelPage @ 0x1400D95E8 (MmStealTopLevelPage.c)
 *     MiReduceWs @ 0x1400F12BC (MiReduceWs.c)
 *     MiForcedTrim @ 0x1401D7A98 (MiForcedTrim.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiFreeWsleList @ 0x14006C330 (MiFreeWsleList.c)
 *     MiGetVmPartition @ 0x1400A8E60 (MiGetVmPartition.c)
 *     MiTrimThisWsle @ 0x1400B6290 (MiTrimThisWsle.c)
 *     MiIsNextVaTrimCandidate @ 0x1400B64B0 (MiIsNextVaTrimCandidate.c)
 *     MiRotateHeadWsle @ 0x1400B6674 (MiRotateHeadWsle.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1400B82C4 (MI_WSLE_LOG_ACCESS.c)
 *     MiRemoveWorkingSetPages @ 0x1400B94A0 (MiRemoveWorkingSetPages.c)
 *     KeShouldYieldProcessor @ 0x1400D54D0 (KeShouldYieldProcessor.c)
 *     MiLogTrimWs @ 0x1400F15D4 (MiLogTrimWs.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall MiTrimWorkingSet(__int64 a1, ULONG_PTR a2, KIRQL a3, unsigned int a4, int a5)
{
  __int64 v5; // rsi
  unsigned int v6; // ebx
  ULONG_PTR v7; // r9
  KIRQL v8; // r10
  unsigned int v9; // r11d
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // r15
  unsigned __int64 v13; // r13
  __int64 v14; // rdi
  unsigned int v15; // ebx
  int v16; // eax
  unsigned __int64 v17; // r8
  unsigned __int64 IsNextVaTrimCandidate; // rsi
  int v19; // edx
  char v20; // r12
  __int64 v21; // r14
  __int64 v22; // rbp
  unsigned __int64 *v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // r8
  ULONG_PTR v27; // rdi
  __int64 v28; // r14
  ULONG_PTR v29; // r10
  unsigned __int64 v30; // r9
  __int64 v31; // rax
  unsigned __int64 v32; // r8
  int v33; // ecx
  __int64 v34; // rsi
  __int64 v36; // rax
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // r8
  unsigned __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  char v46; // [rsp+31h] [rbp-177h]
  int v48; // [rsp+40h] [rbp-168h]
  unsigned int v49; // [rsp+44h] [rbp-164h]
  __int64 v50; // [rsp+48h] [rbp-160h]
  unsigned __int64 v51; // [rsp+50h] [rbp-158h]
  unsigned int v53; // [rsp+5Ch] [rbp-14Ch]
  unsigned int v54; // [rsp+60h] [rbp-148h]
  __int64 v55; // [rsp+68h] [rbp-140h]
  unsigned __int64 v56; // [rsp+70h] [rbp-138h]
  unsigned __int64 v57; // [rsp+78h] [rbp-130h]
  unsigned __int64 v58; // [rsp+80h] [rbp-128h] BYREF
  __int64 v59; // [rsp+88h] [rbp-120h]
  unsigned __int64 v60; // [rsp+90h] [rbp-118h]
  __int64 v61; // [rsp+98h] [rbp-110h]
  __int64 v62; // [rsp+A0h] [rbp-108h]
  _QWORD v63[20]; // [rsp+B0h] [rbp-F8h] BYREF

  v61 = a1;
  v5 = a1;
  v6 = a4 & 0xF;
  v59 = a1;
  v62 = *((_QWORD *)MiGetVmPartition(a2) + 702);
  if ( (a5 & 2) != 0 )
    v6 |= 0x20u;
  if ( (a5 & 4) != 0 )
    v6 |= 0x40u;
  LODWORD(v63[0]) = 0;
  v54 = (a5 & 8) != 0;
  if ( dword_1402FED88 )
    v6 |= 0x10u;
  v10 = *(_QWORD *)(v7 + 184);
  LODWORD(v11) = v6 & 0xF;
  v50 = v10;
  v12 = v5;
  v49 = v11;
  v13 = 0LL;
  v53 = v9;
  v14 = 0LL;
  if ( *(_DWORD *)(v10 + 64) == 16 )
  {
    v15 = v6 & 0xFFFFFFF0 | 7;
    v16 = v15 & 0xF;
    v6 = v15 | 0x100;
    v11 = (unsigned int)(2 * v16 + 1);
    v17 = *(_QWORD *)(v10 + 8 * v11 + 112);
    v53 = 2 * v9;
    v49 = 2 * v16 + 1;
  }
  else
  {
    v41 = *(_QWORD *)(v7 + 120);
    v42 = *(_QWORD *)(v10 + 8);
    if ( v41 <= v42 )
    {
      v33 = a5;
      LODWORD(v29) = v7;
      goto LABEL_58;
    }
    v17 = v41 - v42;
  }
  IsNextVaTrimCandidate = *(_QWORD *)(v10 + 24);
  v51 = v17;
  v60 = *(_QWORD *)(v10 + 16);
  if ( IsNextVaTrimCandidate > v60 || IsNextVaTrimCandidate < *(_QWORD *)(v10 + 8) )
    IsNextVaTrimCandidate = *(_QWORD *)(v10 + 8);
  v57 = IsNextVaTrimCandidate;
  v19 = 0;
  v56 = 0xFFFFFFFFFLL;
  v48 = 0;
  while ( 2 )
  {
    v20 = 0;
    v6 |= 0x80u;
    v46 = 0;
    v21 = 0xFFFFFFFFFLL;
    if ( v12 )
    {
LABEL_15:
      if ( (v6 & 0x100) == 0 )
      {
        ++v13;
        v56 = IsNextVaTrimCandidate + 1;
LABEL_19:
        v22 = 19LL;
        while ( 1 )
        {
          v55 = v14 + 1;
          v23 = (unsigned __int64 *)(*(_QWORD *)(v10 + 496) + IsNextVaTrimCandidate * *(unsigned int *)(v10 + 64));
          v58 = *v23;
          if ( v8 != 17 )
          {
            if ( (v48 = v19 + 1, (((_BYTE)v19 + 1) & 0xF) == 0) && (*(_DWORD *)v7 & 0x40000000) != 0
              || KeShouldYieldProcessor() )
            {
              v20 = 1;
            }
          }
          if ( (v58 & 1) == 0 || (unsigned int)MiTrimThisWsle(a2, IsNextVaTrimCandidate, v6, v7) != 1 )
            goto LABEL_42;
          v17 = *v23;
          v24 = LODWORD(v63[0]);
          v25 = 0LL;
          v58 = *v23;
          if ( LODWORD(v63[0]) )
            break;
LABEL_28:
          if ( v21 == 0xFFFFFFFFFLL )
            v21 = LODWORD(v63[0]);
          if ( (v6 & 0x80u) == 0 )
          {
            do
            {
              v63[v24 + 1] = v63[v24];
              --v24;
            }
            while ( v24 != v21 );
          }
          v63[v24 + 1] = IsNextVaTrimCandidate;
          ++LODWORD(v63[0]);
          if ( (v6 & 0x10) != 0 )
          {
            if ( (v17 & 0x800000000000LL) != 0 )
              v26 = v17 | 0xFFFF000000000000uLL;
            else
              v26 = v17 & 0xFFFFFFFFFFFFLL;
            v27 = a2;
            MI_WSLE_LOG_ACCESS(a2, &v58, ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          }
          else
          {
            v27 = a2;
          }
          --v12;
          --v22;
          if ( LODWORD(v63[0]) == 19 || !v22 || !v12 )
          {
            v46 = 1;
            goto LABEL_42;
          }
          IsNextVaTrimCandidate = MiIsNextVaTrimCandidate(v27, v63, (unsigned int)(LODWORD(v63[0]) - 1), v6);
          if ( IsNextVaTrimCandidate != 0xFFFFFFFFFLL )
          {
            v10 = v50;
            v7 = a2;
            v19 = v48;
            v14 = v55;
            v8 = a3;
            if ( !v20 )
              continue;
          }
LABEL_42:
          if ( v20 == 1 || v46 )
          {
            v46 = 0;
            if ( !LODWORD(v63[0]) )
            {
LABEL_46:
              v28 = a2;
              goto LABEL_47;
            }
            v28 = a2;
            v12 += MiFreeWsleList(a2, (unsigned int *)v63, v54);
            LODWORD(v63[0]) = 0;
LABEL_47:
            if ( v20 == 1 )
            {
              v20 = 0;
              *(_QWORD *)(v50 + 24) = IsNextVaTrimCandidate;
              if ( (a5 & 1) != 0 )
              {
                v43 = v59 - v12;
                *(_QWORD *)(v62 + 8LL * a4 + 2584) += v59 - v12;
                *(_QWORD *)(v28 + 200) += v43;
              }
              MiUnlockWorkingSetExclusive(v28, a3, v17);
              v59 = v12;
              a3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v28);
              if ( (v6 & 0x100) != 0 )
              {
                LODWORD(v11) = v49;
                v10 = v50;
                v37 = *(_QWORD *)(v50 + 8LL * v49 + 112);
              }
              else
              {
                LODWORD(v11) = v49;
                v37 = *(_QWORD *)(v28 + 120) - *(_QWORD *)(v50 + 8);
                v10 = v50;
                if ( *(_QWORD *)(v28 + 120) <= *(_QWORD *)(v50 + 8) )
                  v37 = 0LL;
              }
              if ( v37 < v51 )
                v51 = v37;
              v38 = *(_QWORD *)(v10 + 16);
              IsNextVaTrimCandidate = *(_QWORD *)(v10 + 24);
              v60 = v38;
              if ( IsNextVaTrimCandidate > v38 || (v39 = *(_QWORD *)(v10 + 8), IsNextVaTrimCandidate < v39) )
              {
                v39 = *(_QWORD *)(v10 + 8);
                IsNextVaTrimCandidate = v39;
              }
              if ( v57 > v38 || v57 < v39 )
                v57 = v39;
              v56 = IsNextVaTrimCandidate;
            }
            else
            {
              v10 = v50;
              LODWORD(v11) = v49;
            }
            if ( ((v6 >> 8) & 1) == 0 )
            {
              IsNextVaTrimCandidate = v56;
              if ( v56 > v60 )
                IsNextVaTrimCandidate = *(_QWORD *)(v10 + 8);
            }
            v17 = v51;
            if ( ((v6 >> 8) & 1) == 0 && v13 >= v51 )
            {
              v14 = v55;
              goto LABEL_53;
            }
            v14 = v55;
            v21 = 0xFFFFFFFFFLL;
            v6 |= 0x80u;
LABEL_52:
            v19 = v48;
            v8 = a3;
            if ( !v12 )
              goto LABEL_53;
            v7 = a2;
            goto LABEL_15;
          }
          if ( (v6 & 0x80u) == 0 )
            goto LABEL_46;
          if ( v21 == 0xFFFFFFFFFLL )
            goto LABEL_46;
          v6 &= ~0x80u;
          v36 = MiIsNextVaTrimCandidate(a2, v63, v21, v6);
          v10 = v50;
          IsNextVaTrimCandidate = v36;
          v19 = v48;
          v14 = v55;
          v8 = a3;
          if ( v36 == 0xFFFFFFFFFLL )
            goto LABEL_46;
          v7 = a2;
        }
        while ( v63[v25 + 1] != IsNextVaTrimCandidate )
        {
          if ( ++v25 >= (unsigned __int64)LODWORD(v63[0]) )
            goto LABEL_28;
        }
        goto LABEL_42;
      }
      if ( v13 < v17 )
      {
        ++v13;
        IsNextVaTrimCandidate = MiRotateHeadWsle(v10, (unsigned int)v11, v17, v7);
        if ( IsNextVaTrimCandidate == 0xFFFFFFFFFLL )
          goto LABEL_81;
        v7 = a2;
        v19 = v48;
        v8 = a3;
        goto LABEL_19;
      }
      IsNextVaTrimCandidate = 0xFFFFFFFFFLL;
LABEL_81:
      if ( (unsigned int)v11 > v53 )
      {
        if ( (v11 & 1) == 0 )
          v6 ^= ((unsigned __int8)v6 ^ (unsigned __int8)(v6 - 1)) & 0xF;
        v11 = (unsigned int)(v11 - 1);
        v49 = v11;
        v13 = 0LL;
        v17 = *(_QWORD *)(v10 + 8 * v11 + 112);
        v51 = v17;
        goto LABEL_52;
      }
LABEL_53:
      if ( LODWORD(v63[0]) )
      {
        v40 = MiFreeWsleList(a2, (unsigned int *)v63, v54);
        v10 = v50;
        v12 += v40;
        if ( v12 )
        {
          if ( IsNextVaTrimCandidate != v57 )
          {
            v7 = a2;
            v19 = v48;
            v17 = v51;
            v8 = a3;
            LODWORD(v63[0]) = 0;
            continue;
          }
        }
      }
    }
    break;
  }
  v29 = a2;
  v30 = *(_QWORD *)(v10 + 32);
  *(_QWORD *)(v10 + 24) = IsNextVaTrimCandidate;
  v31 = *(_QWORD *)(a2 + 120);
  v32 = v30 - v31 + 1;
  if ( *(_QWORD *)(v10 + 8) == v31 || v32 >= 0x4000uLL / *(unsigned int *)(v10 + 64) && v32 >= v30 >> 3 )
  {
    MiRemoveWorkingSetPages(a2);
    v29 = a2;
  }
  v33 = a5;
  v5 = v61;
  v9 = a4;
  if ( (a5 & 1) != 0 )
  {
    v44 = v59 - v12;
    *(_QWORD *)(v62 + 8LL * a4 + 2584) += v59 - v12;
    *(_QWORD *)(v29 + 200) += v44;
  }
LABEL_58:
  v34 = v5 - v12;
  MiLogTrimWs(v29, v14, v34, v9, v33);
  return v34;
}
