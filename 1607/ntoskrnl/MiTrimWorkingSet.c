/*
 * XREFs of MiTrimWorkingSet @ 0x140015D90
 * Callers:
 *     MiReduceWs @ 0x1400AFD20 (MiReduceWs.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400CBB40 (MiTrimOrAgeWorkingSet.c)
 *     MiForcedTrim @ 0x1401E95FC (MiForcedTrim.c)
 * Callees:
 *     MiTrimThisWsle @ 0x1400164E0 (MiTrimThisWsle.c)
 *     MiIsNextVaTrimCandidate @ 0x140016740 (MiIsNextVaTrimCandidate.c)
 *     MiRotateHeadWsle @ 0x140016970 (MiRotateHeadWsle.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1400169DC (MI_WSLE_LOG_ACCESS.c)
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     KeShouldYieldProcessor @ 0x140094EC0 (KeShouldYieldProcessor.c)
 *     MiWorkingSetIsContended @ 0x1400B8870 (MiWorkingSetIsContended.c)
 *     MiFreeWsleList @ 0x1400E1970 (MiFreeWsleList.c)
 *     MiRemoveWorkingSetPages @ 0x1400FC4D0 (MiRemoveWorkingSetPages.c)
 *     MiLogTrimWs @ 0x14010C344 (MiLogTrimWs.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiRelockWorkingSetExclusive @ 0x1401F2918 (MiRelockWorkingSetExclusive.c)
 */

__int64 __fastcall MiTrimWorkingSet(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v6; // edi
  unsigned int v7; // r12d
  __int64 v8; // r14
  unsigned int v9; // ebp
  __int64 v10; // rbx
  __int64 SharedWorkingSetList; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 *v13; // r11
  __int64 v14; // rsi
  __int64 v15; // rcx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r10
  unsigned int v18; // r9d
  unsigned int v19; // edi
  int v20; // eax
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // rax
  unsigned __int64 IsNextVaTrimCandidate; // r14
  __int64 v25; // r15
  __int64 v26; // r12
  __int64 *v27; // rsi
  __int64 v28; // rbx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned __int64 v32; // r8
  char v33; // al
  __int64 v34; // rax
  __int64 v35; // r8
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // r12
  __int64 v40; // rax
  bool v41; // zf
  int v42; // edx
  __int64 v43; // r14
  char v45; // [rsp+30h] [rbp-188h]
  char v46; // [rsp+31h] [rbp-187h]
  unsigned __int8 v47; // [rsp+32h] [rbp-186h]
  int v48; // [rsp+34h] [rbp-184h]
  unsigned int v49; // [rsp+38h] [rbp-180h]
  unsigned int v50; // [rsp+3Ch] [rbp-17Ch]
  __int64 v51; // [rsp+40h] [rbp-178h]
  unsigned __int64 v52; // [rsp+48h] [rbp-170h]
  unsigned int v53; // [rsp+50h] [rbp-168h]
  __int64 v54; // [rsp+58h] [rbp-160h]
  unsigned __int64 *v55; // [rsp+60h] [rbp-158h]
  unsigned __int64 v56; // [rsp+68h] [rbp-150h]
  unsigned __int64 v57; // [rsp+70h] [rbp-148h]
  unsigned int v58; // [rsp+78h] [rbp-140h]
  __int64 v59; // [rsp+80h] [rbp-138h]
  unsigned __int64 v60; // [rsp+88h] [rbp-130h]
  __int64 v61; // [rsp+90h] [rbp-128h]
  unsigned __int64 v62; // [rsp+98h] [rbp-120h]
  __int64 v63; // [rsp+A0h] [rbp-118h]
  __int64 v65; // [rsp+B0h] [rbp-108h] BYREF
  _QWORD v66[20]; // [rsp+C0h] [rbp-F8h] BYREF

  v53 = a4;
  v6 = a4 & 0xF;
  v47 = a3;
  v7 = a4;
  v8 = a2;
  v61 = a2;
  v63 = *(_QWORD *)(MiPartitionIdToPointer(*(unsigned __int16 *)(a1 + 164), a2, a3, a4) + 6248);
  if ( (a5 & 2) != 0 )
    v6 |= 0x20u;
  if ( (a5 & 4) != 0 )
    v6 |= 0x40u;
  v9 = 0;
  LODWORD(v66[0]) = 0;
  v58 = ((unsigned __int8)a5 >> 3) & 1;
  if ( dword_1403271C8 )
    v6 |= 0x10u;
  v10 = v8;
  v54 = v8;
  v55 = *(unsigned __int64 **)(a1 + 16);
  SharedWorkingSetList = MiGetSharedWorkingSetList(a1);
  v51 = SharedWorkingSetList;
  LODWORD(v14) = v6 & 0xF;
  v57 = v12;
  v15 = SharedWorkingSetList;
  v52 = v12;
  v16 = v12;
  v17 = v12;
  v49 = v14;
  v50 = v18;
  if ( *(_DWORD *)(SharedWorkingSetList + 32) == 16 )
  {
    v7 *= 2;
    v19 = v6 & 0xFFFFFFF0 | 7;
    v50 = v7;
    v20 = v19 & 0xF;
    v6 = v19 | 0x100;
    v14 = (unsigned int)(2 * v20 + 1);
    v21 = v13[v14 + 4];
    v49 = 2 * v20 + 1;
  }
  else
  {
    v22 = *(_QWORD *)(a1 + 128);
    v23 = *(_QWORD *)(SharedWorkingSetList + 8);
    if ( v22 <= v23 )
    {
      v42 = a5;
      goto LABEL_99;
    }
    v21 = v22 - v23;
  }
  IsNextVaTrimCandidate = *v13;
  v56 = v21;
  v62 = *(_QWORD *)(v15 + 16);
  if ( *v13 > v62 || IsNextVaTrimCandidate < *(_QWORD *)(v15 + 8) )
    IsNextVaTrimCandidate = *(_QWORD *)(v15 + 8);
  v60 = IsNextVaTrimCandidate;
  v59 = 0xFFFFFFFFFLL;
  v48 = v12;
LABEL_15:
  v6 |= 0x80u;
  v45 = 0;
  v46 = 0;
  v25 = 0xFFFFFFFFFLL;
  if ( v10 )
  {
    while ( 1 )
    {
      if ( (v6 & 0x100) == 0 )
      {
        v57 = v16 + 1;
        v59 = IsNextVaTrimCandidate + 1;
        goto LABEL_27;
      }
      if ( v16 >= v21 )
      {
        IsNextVaTrimCandidate = 0xFFFFFFFFFLL;
      }
      else
      {
        v57 = v16 + 1;
        IsNextVaTrimCandidate = MiRotateHeadWsle(a1, (unsigned int)v14);
        if ( IsNextVaTrimCandidate != 0xFFFFFFFFFLL )
        {
          v15 = v51;
          LODWORD(v12) = v48;
          v17 = v52;
LABEL_27:
          v26 = 19LL;
LABEL_28:
          while ( 2 )
          {
            v52 = v17 + 1;
            v27 = (__int64 *)(*(_QWORD *)(v15 + 80) + IsNextVaTrimCandidate * *(unsigned int *)(v15 + 32));
            v28 = *v27;
            if ( v47 != 17 )
            {
              if ( (v48 = v12 + 1, (((_BYTE)v12 + 1) & 0x3F) == 0) && (unsigned int)MiWorkingSetIsContended(a1)
                || KeShouldYieldProcessor() )
              {
                v46 = 1;
              }
            }
            if ( (v28 & 1) != 0 )
            {
              if ( (unsigned int)MiTrimThisWsle(a1, IsNextVaTrimCandidate, v6) != 1 )
                goto LABEL_56;
              v29 = *v27;
              v65 = *v27;
              v30 = 0LL;
              v31 = v9;
              if ( v9 )
              {
                while ( v66[v30 + 1] != IsNextVaTrimCandidate )
                {
                  if ( ++v30 >= (unsigned __int64)v9 )
                    goto LABEL_38;
                }
LABEL_56:
                v10 = v54;
LABEL_57:
                v33 = v45;
              }
              else
              {
LABEL_38:
                if ( v25 == 0xFFFFFFFFFLL )
                  v25 = v9;
                if ( (v6 & 0x80u) == 0 )
                {
                  do
                  {
                    v66[v31 + 1] = v66[v31];
                    --v31;
                  }
                  while ( v31 != v25 );
                }
                v66[v31 + 1] = IsNextVaTrimCandidate;
                v9 = ++LODWORD(v66[0]);
                if ( (v6 & 0x10) != 0 )
                {
                  if ( (v29 & 0x800000000000LL) != 0 )
                    v32 = v29 | 0xFFFF000000000000uLL;
                  else
                    v32 = v29 & 0xFFFFFFFFFFFFLL;
                  MI_WSLE_LOG_ACCESS(a1, &v65, ((v32 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                }
                --v26;
                v10 = --v54;
                if ( v9 != 19 && v26 && v10 )
                {
                  IsNextVaTrimCandidate = MiIsNextVaTrimCandidate(a1, v66, v9 - 1, v6);
                  if ( IsNextVaTrimCandidate != 0xFFFFFFFFFLL && !v46 )
                  {
                    v9 = v66[0];
                    v15 = v51;
                    LODWORD(v12) = v48;
                    v17 = v52;
                    continue;
                  }
                  v9 = v66[0];
                  goto LABEL_57;
                }
                v33 = 1;
                v45 = 1;
              }
            }
            else
            {
              v10 = v54;
              v33 = v45;
            }
            break;
          }
          if ( v46 == 1 || v33 )
          {
            v45 = 0;
            if ( v9 )
            {
              v10 += MiFreeWsleList(a1, v66, v58);
              LODWORD(v66[0]) = 0;
              v54 = v10;
              v9 = 0;
            }
LABEL_66:
            if ( v46 == 1 )
            {
              v46 = 0;
              *v55 = IsNextVaTrimCandidate;
              if ( (a5 & 1) != 0 )
              {
                *(_QWORD *)(v63 + 8LL * v53 + 2584) += v61 - v10;
                *(_QWORD *)(a1 + 8) += v61 - v10;
              }
              v61 = v10;
              MiRelockWorkingSetExclusive(a1, v47);
              v35 = v51;
              if ( (v6 & 0x100) != 0 )
              {
                v36 = v55[v49 + 4];
              }
              else
              {
                v36 = *(_QWORD *)(a1 + 128) - *(_QWORD *)(v51 + 8);
                if ( *(_QWORD *)(a1 + 128) <= *(_QWORD *)(v51 + 8) )
                  v36 = 0LL;
              }
              v21 = v56;
              v37 = *(_QWORD *)(v51 + 16);
              IsNextVaTrimCandidate = *v55;
              if ( v36 < v56 )
                v21 = v36;
              v62 = *(_QWORD *)(v51 + 16);
              v56 = v21;
              if ( IsNextVaTrimCandidate > v37 || (v38 = *(_QWORD *)(v51 + 8), IsNextVaTrimCandidate < v38) )
              {
                v38 = *(_QWORD *)(v51 + 8);
                IsNextVaTrimCandidate = v38;
              }
              if ( v60 > v37 || v60 < v38 )
                v60 = v38;
              v39 = IsNextVaTrimCandidate;
              v59 = IsNextVaTrimCandidate;
            }
            else
            {
              v35 = v51;
              v21 = v56;
              v39 = v59;
              v37 = v62;
            }
            if ( ((v6 >> 8) & 1) == 0 )
            {
              IsNextVaTrimCandidate = v39;
              if ( v39 > v37 )
                IsNextVaTrimCandidate = *(_QWORD *)(v35 + 8);
            }
            v16 = v57;
            if ( ((v6 >> 8) & 1) != 0 || v57 < v21 )
            {
              LODWORD(v14) = v49;
              v13 = v55;
              v25 = 0xFFFFFFFFFLL;
              v7 = v50;
              v6 |= 0x80u;
              goto LABEL_89;
            }
LABEL_90:
            if ( !v9 || (v40 = MiFreeWsleList(a1, v66, v58), v41 = v40 + v10 == 0, v10 += v40, v54 = v10, v41) )
            {
              v13 = v55;
            }
            else
            {
              v13 = v55;
              if ( IsNextVaTrimCandidate != v60 )
              {
                v15 = v51;
                v21 = v56;
                v9 = 0;
                LODWORD(v12) = v48;
                LODWORD(v14) = v49;
                v16 = v57;
                v17 = v52;
                v7 = v50;
                LODWORD(v66[0]) = 0;
                goto LABEL_15;
              }
            }
            break;
          }
          if ( (v6 & 0x80u) == 0 )
            goto LABEL_66;
          if ( v25 == 0xFFFFFFFFFLL )
            goto LABEL_66;
          v6 &= ~0x80u;
          v34 = MiIsNextVaTrimCandidate(a1, v66, v25, v6);
          v9 = v66[0];
          IsNextVaTrimCandidate = v34;
          if ( v34 == 0xFFFFFFFFFLL )
            goto LABEL_66;
          v15 = v51;
          LODWORD(v12) = v48;
          v17 = v52;
          goto LABEL_28;
        }
        v13 = v55;
      }
      if ( (unsigned int)v14 > v7 )
      {
        if ( (v14 & 1) == 0 )
          v6 ^= ((unsigned __int8)v6 ^ (unsigned __int8)(v6 - 1)) & 0xF;
        v14 = (unsigned int)(v14 - 1);
        v49 = v14;
        v16 = 0LL;
        v57 = 0LL;
        v21 = v13[v14 + 4];
        v56 = v21;
LABEL_89:
        v15 = v51;
        LODWORD(v12) = v48;
        v17 = v52;
        if ( v10 )
          continue;
      }
      goto LABEL_90;
    }
  }
  *v13 = IsNextVaTrimCandidate;
  MiRemoveWorkingSetPages(a1);
  v42 = a5;
  LODWORD(v17) = v52;
  v8 = a2;
  v7 = v53;
  if ( (a5 & 1) != 0 )
  {
    *(_QWORD *)(v63 + 8LL * v53 + 2584) += v61 - v10;
    *(_QWORD *)(a1 + 8) += v61 - v10;
  }
LABEL_99:
  v43 = v8 - v10;
  MiLogTrimWs(a1, v17, v43, v7, v42);
  return v43;
}
