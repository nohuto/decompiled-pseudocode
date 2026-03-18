/*
 * XREFs of FsRtlAddBaseMcbEntryEx @ 0x14008CCB0
 * Callers:
 *     FsRtlAddBaseMcbEntry @ 0x14008CC94 (FsRtlAddBaseMcbEntry.c)
 * Callees:
 *     FsRtlAddEntry @ 0x14008D2B0 (FsRtlAddEntry.c)
 *     FsRtlFindLargeIndex @ 0x14008D3B4 (FsRtlFindLargeIndex.c)
 *     FsRtlRemoveLargeEntry @ 0x14008D438 (FsRtlRemoveLargeEntry.c)
 *     EvaluateCurrentState @ 0x1401B8354 (EvaluateCurrentState.c)
 */

NTSTATUS __stdcall FsRtlAddBaseMcbEntryEx(PBASE_MCB Mcb, LONGLONG Vbn, LONGLONG Lbn, LONGLONG SectorCount)
{
  LONGLONG v5; // r13
  int v9; // r12d
  signed int v10; // r9d
  signed int v11; // r8d
  int v12; // r15d
  unsigned int v13; // eax
  __int64 v14; // rbx
  unsigned int v15; // eax
  _DWORD *Mapping; // rax
  int v17; // r9d
  __int64 v18; // rdx
  _DWORD *v19; // r14
  int v20; // ecx
  int v21; // r8d
  ULONG v22; // r10d
  int v23; // eax
  __int64 v24; // r8
  int v25; // ecx
  int v26; // eax
  ULONG v27; // ebx
  _DWORD *v28; // r14
  unsigned int v29; // ebx
  unsigned int v30; // r8d
  __int64 v31; // r13
  _DWORD *v32; // r9
  unsigned int v33; // edx
  unsigned int v34; // eax
  __int64 v35; // rcx
  int v36; // edx
  int v37; // eax
  __int64 v38; // rcx
  int v39; // edx
  int v40; // edx
  unsigned int v41; // eax
  int v42; // ecx
  int v43; // eax
  __int64 v44; // rcx
  int v45; // edx
  int v46; // eax
  int v47; // ecx
  int v48; // edx
  int v49; // ecx
  __int64 v50; // rcx
  int v51; // edx
  _DWORD *v52; // r8
  __int64 v53; // r8
  int v54; // r9d
  int v55; // edx
  int v56; // eax
  int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rdx
  unsigned int v61; // [rsp+20h] [rbp-48h] BYREF
  int v62[3]; // [rsp+24h] [rbp-44h] BYREF
  ULONG PairCount; // [rsp+70h] [rbp+8h]
  int v64; // [rsp+88h] [rbp+20h]

  v64 = SectorCount;
  v5 = SectorCount;
  if ( (unsigned int)EvaluateCurrentState(&g_Feature_1915950393_60412418_FeatureDescriptorDetails)
    && (Vbn < 0 || Lbn < 0 || v5 <= 0) )
  {
    return -1073741811;
  }
  v9 = 0;
  v10 = 0;
  PairCount = Mcb->PairCount;
  v11 = PairCount - 1;
  v12 = -1;
  if ( (int)(PairCount - 1) < 0 )
    goto LABEL_36;
  while ( 1 )
  {
    v13 = (v11 + v10) / 2;
    v14 = v13;
    if ( !v13 )
      break;
    v15 = v13 - 1;
    if ( (unsigned int)Vbn >= *((_DWORD *)Mcb->Mapping + 2 * (int)v15) )
      break;
    v11 = v15;
LABEL_12:
    if ( v10 > v11 )
      goto LABEL_36;
  }
  Mapping = Mcb->Mapping;
  if ( (unsigned int)Vbn > Mapping[2 * (int)v14] - 1 )
  {
    v10 = v14 + 1;
    goto LABEL_12;
  }
  v17 = Mapping[2 * v14 + 1];
  v18 = (unsigned int)(v5 + Vbn - 1);
  v19 = Mcb->Mapping;
  if ( v17 == -1 )
  {
    if ( (unsigned __int8)FsRtlFindLargeIndex(Mcb, v18, v62) )
    {
      v24 = (unsigned int)(v62[0] - 1);
      if ( (_DWORD)v14 == (_DWORD)v24 )
      {
        v25 = 0;
        if ( v62[0] )
          v25 = v19[2 * v24];
        if ( v19[2 * v62[0] + 1] != (_DWORD)Lbn + v25 - (_DWORD)Vbn )
          return -1073741823;
        v26 = 0;
        if ( v62[0] )
          v26 = v19[2 * v24];
        LODWORD(v5) = v26 - Vbn;
        v64 = v26 - Vbn;
      }
    }
LABEL_36:
    v22 = PairCount;
    goto LABEL_37;
  }
  if ( (_DWORD)v14 )
    v20 = v19[2 * (unsigned int)(v14 - 1)];
  else
    v20 = 0;
  if ( (_DWORD)Lbn != (_DWORD)Vbn + v17 - v20 )
    return -1073741823;
  v21 = Mapping[2 * v14];
  if ( (unsigned int)v18 <= v21 - 1 )
    return 0;
  v22 = Mcb->PairCount;
  if ( (unsigned int)v14 < PairCount )
  {
    LODWORD(Vbn) = Mapping[2 * v14];
    if ( (_DWORD)v14 == -1 )
      LODWORD(Vbn) = 0;
  }
  else
  {
    LODWORD(Vbn) = 0;
  }
  if ( (_DWORD)v14 )
    v23 = v19[2 * (unsigned int)(v14 - 1)];
  else
    v23 = 0;
  LODWORD(Lbn) = v21 - v23 + v17;
  LODWORD(v5) = v18 - Vbn + 1;
  v64 = v5;
LABEL_37:
  v27 = v22;
  v61 = v22;
  if ( !v22 )
  {
LABEL_122:
    if ( !(_DWORD)Vbn
      || (v27 ? (v57 = *((_DWORD *)Mcb->Mapping + 2 * v27 - 2) - 1) : (v57 = -1), v57 + 1 == (_DWORD)Vbn) )
    {
      if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v27, 1LL) )
        return -1073741670;
      v59 = v27;
    }
    else
    {
      if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v27, 2LL) )
        return -1073741670;
      v58 = 8LL * v27;
      *(_DWORD *)((char *)Mcb->Mapping + v58 + 4) = -1;
      *(_DWORD *)((char *)Mcb->Mapping + v58) = Vbn;
      v59 = v27 + 1;
    }
    v60 = 8 * v59;
    *(_DWORD *)((char *)Mcb->Mapping + v60 + 4) = Lbn;
    *(_DWORD *)((char *)Mcb->Mapping + v60) = Vbn + v5;
    return 0;
  }
  v28 = Mcb->Mapping;
  if ( v28[2 * v22 - 2] <= (unsigned int)Vbn )
  {
LABEL_113:
    if ( v27 )
    {
      v53 = v27 - 1;
      v54 = v28[2 * v53];
      if ( v54 == (_DWORD)Vbn )
      {
        v55 = v28[2 * v53 + 1];
        if ( v55 == -1 )
        {
          v56 = -1;
        }
        else
        {
          if ( v27 != 1 )
            v9 = v28[2 * v27 - 4];
          v56 = v55 - v9 + v54 - 1;
        }
        if ( v56 + 1 == (_DWORD)Lbn )
        {
          v28[2 * PairCount - 2] += v5;
          return 0;
        }
      }
    }
    goto LABEL_122;
  }
  if ( !(unsigned __int8)FsRtlFindLargeIndex(Mcb, (unsigned int)Vbn, &v61) )
  {
    v27 = v61;
    goto LABEL_113;
  }
  v29 = v61;
  v62[0] = Vbn + v5;
  v30 = Vbn + v5 - 1;
  v31 = 8LL * v61;
  v32 = &v28[(unsigned __int64)v31 / 4];
  if ( v28[(unsigned __int64)v31 / 4 + 1] != -1 || v61 && v28[2 * v61 - 2] > (unsigned int)Vbn )
    return -1073741823;
  v33 = *v32 - 1;
  if ( v30 > v33 )
    return -1073741823;
  if ( v61 )
    v34 = v28[2 * v61 - 2];
  else
    v34 = 0;
  if ( v34 >= (unsigned int)Vbn || v30 >= v33 )
  {
    if ( v61 )
      v37 = v28[2 * v61 - 2];
    else
      v37 = 0;
    if ( v37 == (_DWORD)Vbn && v30 < v33 )
    {
      if ( v61 )
      {
        v38 = v61 - 1;
        v39 = v28[2 * v38 + 1];
        if ( v39 != -1 )
        {
          if ( v61 != 1 )
            v9 = v28[2 * v61 - 4];
          v12 = v39 - v9 + v28[2 * v38] - 1;
        }
      }
      if ( v12 + 1 == (_DWORD)Lbn )
      {
        if ( v61 )
        {
          v28[2 * v61 - 2] += v64;
        }
        else
        {
          if ( !(unsigned __int8)FsRtlAddEntry(Mcb, 0LL, 1LL) )
            return -1073741670;
          *((_DWORD *)Mcb->Mapping + 1) = Lbn;
          *(_DWORD *)Mcb->Mapping = v64;
        }
      }
      else
      {
        if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v61, 1LL) )
          return -1073741670;
        v40 = v62[0];
        *(_DWORD *)((char *)Mcb->Mapping + v31 + 4) = Lbn;
        *(_DWORD *)((char *)Mcb->Mapping + v31) = v40;
      }
      return 0;
    }
    if ( v61 )
      v41 = v28[2 * v61 - 2];
    else
      v41 = 0;
    if ( v41 < (unsigned int)Vbn && v30 == v33 )
    {
      if ( v61 < PairCount - 1 )
        v42 = v28[2 * v61 + 3];
      else
        v42 = -1;
      if ( v42 == (_DWORD)Lbn + v64 )
      {
        *v32 = Vbn;
        *((_DWORD *)Mcb->Mapping + 2 * v29 + 3) = Lbn;
      }
      else
      {
        if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v61, 1LL) )
          return -1073741670;
        *(_DWORD *)((char *)Mcb->Mapping + v31 + 4) = -1;
        *(_DWORD *)((char *)Mcb->Mapping + v31) = Vbn;
        *((_DWORD *)Mcb->Mapping + 2 * v29 + 3) = Lbn;
      }
      return 0;
    }
    if ( v61 )
    {
      v44 = v61 - 1;
      v45 = v28[2 * v44 + 1];
      if ( v45 == -1 )
      {
        v43 = -1;
      }
      else
      {
        if ( v61 == 1 )
          v46 = 0;
        else
          v46 = v28[2 * v61 - 4];
        v43 = v45 - v46 + v28[2 * v44] - 1;
      }
    }
    else
    {
      v43 = -1;
    }
    if ( v43 + 1 == (_DWORD)Lbn )
    {
      if ( v61 < PairCount - 1 )
        v47 = v28[2 * v61 + 3];
      else
        v47 = -1;
      v48 = v64;
      if ( v47 == v64 + (_DWORD)Lbn )
      {
        if ( v61 )
        {
          v28[2 * v61 - 2] = v28[2 * v61 + 2];
          FsRtlRemoveLargeEntry(Mcb, v29, 2LL);
        }
        else
        {
          v28[3] = Lbn;
          FsRtlRemoveLargeEntry(Mcb, 0LL, 1LL);
        }
        return 0;
      }
    }
    else
    {
      v48 = v64;
    }
    if ( v61 < PairCount - 1 )
      v49 = v28[2 * v61 + 3];
    else
      v49 = -1;
    if ( v49 == v48 + (_DWORD)Lbn )
    {
      v28[2 * v61 + 3] = Lbn;
    }
    else
    {
      if ( !v61 )
        goto LABEL_110;
      v50 = v61 - 1;
      v51 = v28[2 * v50 + 1];
      v52 = &v28[2 * v50];
      if ( v51 != -1 )
      {
        if ( v61 != 1 )
          v9 = v28[2 * v61 - 4];
        v12 = v51 - v9 + *v52 - 1;
      }
      if ( v12 + 1 != (_DWORD)Lbn )
      {
LABEL_110:
        v32[1] = Lbn;
        return 0;
      }
      *v52 = *v32;
    }
    FsRtlRemoveLargeEntry(Mcb, v29, 1LL);
    return 0;
  }
  if ( (unsigned __int8)FsRtlAddEntry(Mcb, v61, 2LL) )
  {
    v35 = v29 + 1;
    v36 = v62[0];
    *(_DWORD *)((char *)Mcb->Mapping + v31 + 4) = -1;
    *(_DWORD *)((char *)Mcb->Mapping + v31) = Vbn;
    *((_DWORD *)Mcb->Mapping + 2 * v35 + 1) = Lbn;
    *((_DWORD *)Mcb->Mapping + 2 * v35) = v36;
    return 0;
  }
  return -1073741670;
}
