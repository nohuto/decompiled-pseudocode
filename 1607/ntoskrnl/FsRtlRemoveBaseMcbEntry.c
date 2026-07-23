/*
 * XREFs of FsRtlRemoveBaseMcbEntry @ 0x14008BF7C
 * Callers:
 *     FsRtlRemoveLargeMcbEntry @ 0x1401B8594 (FsRtlRemoveLargeMcbEntry.c)
 * Callees:
 *     FsRtlAddEntry @ 0x14008CA14 (FsRtlAddEntry.c)
 *     FsRtlFindLargeIndex @ 0x14008CB18 (FsRtlFindLargeIndex.c)
 *     FsRtlRemoveLargeEntry @ 0x14008CB9C (FsRtlRemoveLargeEntry.c)
 */

BOOLEAN __stdcall FsRtlRemoveBaseMcbEntry(PBASE_MCB Mcb, LONGLONG Vbn, LONGLONG SectorCount)
{
  LONGLONG v3; // rsi
  LONGLONG v4; // r14
  __int64 v6; // rbx
  __int64 v7; // rax
  _DWORD *Mapping; // rdx
  int v9; // r8d
  int v10; // eax
  __int64 v11; // rax
  ULONG v12; // r9d
  __int64 v13; // r9
  int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // r8
  ULONG PairCount; // eax
  __int64 v19; // rax
  int v20; // r8d
  int v21; // r8d
  __int64 v22; // rax
  int v23; // r8d
  __int64 v24; // rax
  _DWORD *v25; // rdx
  __int64 v26; // rax
  int v27; // r9d
  __int64 v28; // r8
  _DWORD *v29; // r8
  __int64 v30; // rbp
  int v31; // edx
  unsigned int v32; // r15d
  ULONG v33; // eax
  __int64 v34; // rdx
  int v35; // r8d
  int v36; // edx
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rbx
  int v40; // eax
  ULONG v41; // [rsp+50h] [rbp+8h] BYREF

  v3 = SectorCount;
  v4 = Vbn;
  if ( !Vbn )
  {
    PairCount = Mcb->PairCount;
    if ( PairCount )
    {
      if ( SectorCount >= *((unsigned int *)Mcb->Mapping + 2 * PairCount - 2) )
      {
        Mcb->PairCount = 0;
        return 1;
      }
    }
  }
  if ( SectorCount > 0 )
  {
    while ( 1 )
    {
      if ( !(unsigned __int8)FsRtlFindLargeIndex(Mcb, (unsigned int)v4, &v41) )
        return 1;
      v6 = v41;
      v7 = v41 ? *((unsigned int *)Mcb->Mapping + 2 * v41 - 2) : 0LL;
      if ( v7 == v4 )
      {
        Mapping = Mcb->Mapping;
        v9 = Mapping[2 * v41];
        if ( (unsigned int)(v9 - 1) < v4 + v3 )
          break;
      }
      if ( v41 )
        v24 = *((unsigned int *)Mcb->Mapping + 2 * v41 - 2);
      else
        v24 = 0LL;
      if ( v24 == v4 )
      {
        v25 = Mcb->Mapping;
        if ( v25[2 * v41 + 1] == -1 )
          return 1;
        if ( v41 )
        {
          v26 = v41 - 1;
          v27 = v25[2 * v26 + 1];
          v28 = v26;
          if ( v27 == -1 )
            goto LABEL_35;
          if ( (_DWORD)v26 )
            LODWORD(v26) = v25[2 * v41 - 4];
          if ( v27 - (_DWORD)v26 + v25[2 * v28] - 1 == -1 )
          {
LABEL_35:
            v25[2 * v28] += v3;
            *((_DWORD *)Mcb->Mapping + 2 * v6 + 1) += v3;
            return 1;
          }
        }
        if ( (unsigned __int8)FsRtlAddEntry(Mcb, v41, 1LL) )
        {
          *((_DWORD *)Mcb->Mapping + 2 * v6 + 1) = -1;
          *((_DWORD *)Mcb->Mapping + 2 * v6) = v3 + v4;
          *((_DWORD *)Mcb->Mapping + 2 * (unsigned int)(v6 + 1) + 1) += v3;
          return 1;
        }
        return 0;
      }
      v29 = Mcb->Mapping;
      v30 = v41;
      v31 = v29[2 * v41];
      if ( (unsigned int)(v31 - 1) >= v4 + v3 )
      {
        if ( v29[2 * v41 + 1] != -1 )
        {
          if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v41, 2LL) )
            return 0;
          v34 = (unsigned int)(v6 + 1);
          *((_DWORD *)Mcb->Mapping + 2 * v6 + 1) = *((_DWORD *)Mcb->Mapping + 2 * (unsigned int)(v6 + 2) + 1);
          *((_DWORD *)Mcb->Mapping + 2 * v6) = v4;
          *((_DWORD *)Mcb->Mapping + 2 * v34 + 1) = -1;
          *((_DWORD *)Mcb->Mapping + 2 * v34) = v3 + v4;
          if ( (_DWORD)v6 )
            v35 = *((_DWORD *)Mcb->Mapping + 2 * (unsigned int)(v6 - 1));
          else
            v35 = 0;
          if ( (_DWORD)v6 == -1 )
            v36 = 0;
          else
            v36 = *((_DWORD *)Mcb->Mapping + 2 * v6);
          *((_DWORD *)Mcb->Mapping + 2 * (unsigned int)(v6 + 2) + 1) += *((_DWORD *)Mcb->Mapping
                                                                        + 2 * (unsigned int)(v6 + 1))
                                                                      + *((_DWORD *)Mcb->Mapping + 2 * v6)
                                                                      - v36
                                                                      - v35;
        }
        v4 += v3;
        v3 = 0LL;
      }
      else
      {
        v32 = v31 - v4;
        if ( v29[2 * v41 + 1] != -1 )
        {
          v33 = Mcb->PairCount - 1;
          if ( v41 == v33 )
          {
            v29[2 * v41] = v4;
          }
          else if ( v41 >= v33 || (v38 = v41 + 1, v39 = v38, v29[2 * v38 + 1] == -1) )
          {
            v29[2 * v41] = v4;
          }
          else
          {
            if ( !(unsigned __int8)FsRtlAddEntry(Mcb, (unsigned int)v38, 1LL) )
              return 0;
            *((_DWORD *)Mcb->Mapping + 2 * v39 + 1) = -1;
            *((_DWORD *)Mcb->Mapping + 2 * v39) = *((_DWORD *)Mcb->Mapping + 2 * v30);
            *((_DWORD *)Mcb->Mapping + 2 * v30) -= v32;
          }
        }
        v4 += v32;
        v3 -= v32;
      }
LABEL_17:
      if ( v3 <= 0 )
        return 1;
    }
    if ( v41 )
      v10 = Mapping[2 * v41 - 2];
    else
      v10 = 0;
    v11 = (unsigned int)(v9 - v10);
    v4 += v11;
    v3 -= v11;
    if ( Mapping[2 * v41 + 1] == -1 )
      goto LABEL_17;
    v12 = Mcb->PairCount - 1;
    if ( v41 == v12 )
    {
      if ( !v41 )
        goto LABEL_67;
      v13 = v41 - 1;
      v14 = Mapping[2 * v13 + 1];
      if ( v14 != -1 )
      {
        v37 = v41 == 1 ? 0 : Mapping[2 * v41 - 4];
        if ( v14 - v37 + Mapping[2 * v13] - 1 != -1 )
          goto LABEL_67;
      }
      v15 = (unsigned int)v13;
    }
    else
    {
      if ( !v41 )
        goto LABEL_72;
      v19 = v41 - 1;
      v20 = Mapping[2 * v19 + 1];
      if ( v20 != -1 )
      {
        if ( v41 != 1 )
          LODWORD(v19) = Mapping[2 * v41 - 4];
        if ( v20 - (_DWORD)v19 + Mapping[2 * v41 - 2] - 1 != -1 )
        {
LABEL_72:
          if ( v41 < v12 && Mapping[2 * v41 + 3] != -1 )
          {
            Mapping[2 * v41 + 1] = -1;
            goto LABEL_17;
          }
          if ( !v41 )
            goto LABEL_84;
        }
      }
      v21 = Mapping[2 * v41 - 1];
      if ( v21 != -1 )
      {
        v40 = v41 == 1 ? 0 : Mapping[2 * v41 - 4];
        if ( v21 - v40 + Mapping[2 * v41 - 2] - 1 != -1 )
        {
LABEL_84:
          if ( v41 >= v12 || Mapping[2 * v41 + 3] == -1 )
          {
LABEL_67:
            v16 = 1LL;
            v15 = v41;
            goto LABEL_16;
          }
          if ( !v41 )
            goto LABEL_27;
        }
      }
      v22 = v41 - 1;
      v23 = Mapping[2 * v22 + 1];
      if ( v23 == -1 )
        goto LABEL_27;
      if ( v41 != 1 )
        LODWORD(v22) = Mapping[2 * v41 - 4];
      if ( v23 - (_DWORD)v22 + Mapping[2 * v41 - 2] - 1 == -1 )
      {
LABEL_27:
        if ( v41 < v12 && Mapping[2 * v41 + 3] != -1 )
        {
          Mapping[2 * v41 + 1] = -1;
          v16 = 1LL;
          v15 = (unsigned int)(v6 - 1);
          goto LABEL_16;
        }
      }
      v15 = v41 - 1;
    }
    v16 = 2LL;
LABEL_16:
    FsRtlRemoveLargeEntry(Mcb, v15, v16);
    goto LABEL_17;
  }
  return 1;
}
