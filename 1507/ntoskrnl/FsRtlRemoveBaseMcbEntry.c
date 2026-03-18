/*
 * XREFs of FsRtlRemoveBaseMcbEntry @ 0x14010693C
 * Callers:
 *     FsRtlRemoveLargeMcbEntry @ 0x1401E2554 (FsRtlRemoveLargeMcbEntry.c)
 * Callees:
 *     FsRtlAddEntry @ 0x140107328 (FsRtlAddEntry.c)
 *     FsRtlFindLargeIndex @ 0x140107430 (FsRtlFindLargeIndex.c)
 *     FsRtlRemoveLargeEntry @ 0x1401074B8 (FsRtlRemoveLargeEntry.c)
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
  _DWORD *v20; // r8
  __int64 v21; // rbp
  int v22; // edx
  unsigned int v23; // r15d
  ULONG v24; // eax
  __int64 v25; // rax
  int v26; // r8d
  int v27; // r8d
  __int64 v28; // rax
  int v29; // r8d
  _DWORD *v30; // rdx
  __int64 v31; // rax
  int v32; // r9d
  __int64 v33; // r8
  __int64 v34; // rdx
  int v35; // r8d
  int v36; // edx
  int v37; // eax
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rbx
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
        v19 = *((unsigned int *)Mcb->Mapping + 2 * v41 - 2);
      else
        v19 = 0LL;
      if ( v19 == v4 )
      {
        v30 = Mcb->Mapping;
        if ( v30[2 * v41 + 1] == -1 )
          return 1;
        if ( v41 )
        {
          v31 = v41 - 1;
          v32 = v30[2 * v31 + 1];
          v33 = v31;
          if ( v32 == -1 )
            goto LABEL_45;
          if ( (_DWORD)v31 )
            LODWORD(v31) = v30[2 * v41 - 4];
          if ( v32 - (_DWORD)v31 + v30[2 * v33] - 1 == -1 )
          {
LABEL_45:
            v30[2 * v33] += v3;
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
      v20 = Mcb->Mapping;
      v21 = v41;
      v22 = v20[2 * v41];
      if ( (unsigned int)(v22 - 1) >= v4 + v3 )
      {
        if ( v20[2 * v41 + 1] != -1 )
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
        v23 = v22 - v4;
        if ( v20[2 * v41 + 1] != -1 )
        {
          v24 = Mcb->PairCount - 1;
          if ( v41 == v24 )
          {
            v20[2 * v41] = v4;
          }
          else if ( v41 >= v24 || (v39 = v41 + 1, v40 = v39, v20[2 * v39 + 1] == -1) )
          {
            v20[2 * v41] = v4;
          }
          else
          {
            if ( !(unsigned __int8)FsRtlAddEntry(Mcb, (unsigned int)v39, 1LL) )
              return 0;
            *((_DWORD *)Mcb->Mapping + 2 * v40 + 1) = -1;
            *((_DWORD *)Mcb->Mapping + 2 * v40) = *((_DWORD *)Mcb->Mapping + 2 * v21);
            *((_DWORD *)Mcb->Mapping + 2 * v21) -= v23;
          }
        }
        v4 += v23;
        v3 -= v23;
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
        goto LABEL_64;
      v13 = v41 - 1;
      v14 = Mapping[2 * v13 + 1];
      if ( v14 != -1 )
      {
        v37 = v41 == 1 ? 0 : Mapping[2 * v41 - 4];
        if ( v14 - v37 + Mapping[2 * v13] - 1 != -1 )
          goto LABEL_64;
      }
      v15 = (unsigned int)v13;
    }
    else
    {
      if ( !v41 )
        goto LABEL_69;
      v25 = v41 - 1;
      v26 = Mapping[2 * v25 + 1];
      if ( v26 != -1 )
      {
        if ( v41 != 1 )
          LODWORD(v25) = Mapping[2 * v41 - 4];
        if ( v26 - (_DWORD)v25 + Mapping[2 * v41 - 2] - 1 != -1 )
        {
LABEL_69:
          if ( v41 < v12 && Mapping[2 * v41 + 3] != -1 )
          {
            Mapping[2 * v41 + 1] = -1;
            goto LABEL_17;
          }
          if ( !v41 )
            goto LABEL_86;
        }
      }
      v27 = Mapping[2 * v41 - 1];
      if ( v27 != -1 )
      {
        v38 = v41 == 1 ? 0 : Mapping[2 * v41 - 4];
        if ( v27 - v38 + Mapping[2 * v41 - 2] - 1 != -1 )
        {
LABEL_86:
          if ( v41 >= v12 || Mapping[2 * v41 + 3] == -1 )
          {
LABEL_64:
            v16 = 1LL;
            v15 = v41;
            goto LABEL_16;
          }
          if ( !v41 )
            goto LABEL_40;
        }
      }
      v28 = v41 - 1;
      v29 = Mapping[2 * v28 + 1];
      if ( v29 == -1 )
        goto LABEL_40;
      if ( v41 != 1 )
        LODWORD(v28) = Mapping[2 * v41 - 4];
      if ( v29 - (_DWORD)v28 + Mapping[2 * v41 - 2] - 1 == -1 )
      {
LABEL_40:
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
