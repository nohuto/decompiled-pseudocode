/*
 * XREFs of FsRtlAddBaseMcbEntryEx @ 0x14008C410
 * Callers:
 *     FsRtlAddBaseMcbEntry @ 0x14008C3F4 (FsRtlAddBaseMcbEntry.c)
 * Callees:
 *     FsRtlAddEntry @ 0x14008CA14 (FsRtlAddEntry.c)
 *     FsRtlFindLargeIndex @ 0x14008CB18 (FsRtlFindLargeIndex.c)
 *     FsRtlRemoveLargeEntry @ 0x14008CB9C (FsRtlRemoveLargeEntry.c)
 */

NTSTATUS __stdcall FsRtlAddBaseMcbEntryEx(PBASE_MCB Mcb, LONGLONG Vbn, LONGLONG Lbn, LONGLONG SectorCount)
{
  unsigned int v4; // r13d
  unsigned int v5; // ebp
  unsigned int v6; // esi
  int v8; // r12d
  signed int v9; // r9d
  signed int v10; // r8d
  int v11; // r15d
  unsigned int v12; // eax
  __int64 v13; // rbx
  unsigned int v14; // eax
  _DWORD *Mapping; // rax
  int v16; // r9d
  __int64 v17; // rdx
  _DWORD *v18; // r14
  int v19; // ecx
  int v20; // r8d
  ULONG v21; // r10d
  int v22; // eax
  __int64 v23; // r8
  int v24; // ecx
  int v25; // eax
  unsigned int v26; // ebx
  _DWORD *v27; // r14
  unsigned int v28; // ebx
  unsigned int v29; // r8d
  __int64 v30; // r13
  unsigned int *v31; // r9
  unsigned int v32; // edx
  unsigned int v33; // eax
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  int v37; // edx
  int v38; // edx
  unsigned int v39; // eax
  int v40; // ecx
  int v41; // eax
  __int64 v42; // rcx
  int v43; // edx
  int v44; // eax
  int v45; // ecx
  int v46; // edx
  int v47; // ecx
  __int64 v48; // rcx
  int v49; // edx
  unsigned int *v50; // r8
  __int64 v52; // r8
  int v53; // r9d
  int v54; // edx
  int v55; // eax
  int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rdx
  unsigned int v60; // [rsp+20h] [rbp-48h]
  ULONG PairCount; // [rsp+70h] [rbp+8h]
  unsigned int v62; // [rsp+78h] [rbp+10h] BYREF
  LONGLONG v63; // [rsp+88h] [rbp+20h]

  v63 = SectorCount;
  v4 = SectorCount;
  v5 = Lbn;
  v6 = Vbn;
  if ( Vbn < 0 || Lbn < 0 || SectorCount <= 0 )
    return -1073741811;
  v8 = 0;
  v9 = 0;
  PairCount = Mcb->PairCount;
  v10 = PairCount - 1;
  v11 = -1;
  if ( (int)(PairCount - 1) < 0 )
    goto LABEL_34;
  while ( 1 )
  {
    v12 = (v10 + v9) / 2;
    v13 = v12;
    if ( !v12 )
      break;
    v14 = v12 - 1;
    if ( (unsigned int)Vbn >= *((_DWORD *)Mcb->Mapping + 2 * (int)v14) )
      break;
    v10 = v14;
LABEL_10:
    if ( v9 > v10 )
      goto LABEL_34;
  }
  Mapping = Mcb->Mapping;
  if ( (unsigned int)Vbn > Mapping[2 * (int)v13] - 1 )
  {
    v9 = v13 + 1;
    goto LABEL_10;
  }
  v16 = Mapping[2 * v13 + 1];
  v17 = v4 + (_DWORD)Vbn - 1;
  v18 = Mcb->Mapping;
  if ( v16 == -1 )
  {
    if ( (unsigned __int8)FsRtlFindLargeIndex(Mcb, v17, &v62) )
    {
      v23 = v62 - 1;
      if ( (_DWORD)v13 == (_DWORD)v23 )
      {
        v24 = 0;
        if ( v62 )
          v24 = v18[2 * v23];
        if ( v18[2 * v62 + 1] != v5 + v24 - v6 )
          return -1073741823;
        v25 = 0;
        if ( v62 )
          v25 = v18[2 * v23];
        v4 = v25 - v6;
        v63 = v25 - v6;
      }
    }
LABEL_34:
    v21 = PairCount;
    goto LABEL_35;
  }
  if ( (_DWORD)v13 )
    v19 = v18[2 * (unsigned int)(v13 - 1)];
  else
    v19 = 0;
  if ( v5 != v6 + v16 - v19 )
    return -1073741823;
  v20 = Mapping[2 * v13];
  if ( (unsigned int)v17 <= v20 - 1 )
    return 0;
  v21 = PairCount;
  if ( (unsigned int)v13 < PairCount )
  {
    v6 = Mapping[2 * v13];
    if ( (_DWORD)v13 == -1 )
      v6 = 0;
  }
  else
  {
    v6 = 0;
  }
  if ( (_DWORD)v13 )
    v22 = v18[2 * (unsigned int)(v13 - 1)];
  else
    v22 = 0;
  v5 = v20 - v22 + v16;
  v4 = v17 - v6 + 1;
  v63 = v4;
LABEL_35:
  v26 = v21;
  v62 = v21;
  if ( !v21 )
  {
LABEL_120:
    if ( !v6 || (v26 ? (v56 = *((_DWORD *)Mcb->Mapping + 2 * v26 - 2) - 1) : (v56 = -1), v56 + 1 == v6) )
    {
      if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v26, 1LL) )
        return -1073741670;
      v58 = v26;
    }
    else
    {
      if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v26, 2LL) )
        return -1073741670;
      v57 = 8LL * v26;
      *(_DWORD *)((char *)Mcb->Mapping + v57 + 4) = -1;
      *(_DWORD *)((char *)Mcb->Mapping + v57) = v6;
      v58 = v26 + 1;
    }
    v59 = 8 * v58;
    *(_DWORD *)((char *)Mcb->Mapping + v59 + 4) = v5;
    *(_DWORD *)((char *)Mcb->Mapping + v59) = v6 + v4;
    return 0;
  }
  v27 = Mcb->Mapping;
  if ( v27[2 * v21 - 2] <= v6 )
  {
LABEL_111:
    if ( v26 )
    {
      v52 = v26 - 1;
      v53 = v27[2 * v52];
      if ( v53 == v6 )
      {
        v54 = v27[2 * v52 + 1];
        if ( v54 == -1 )
        {
          v55 = -1;
        }
        else
        {
          if ( v26 != 1 )
            v8 = v27[2 * v26 - 4];
          v55 = v54 - v8 + v53 - 1;
        }
        if ( v55 + 1 == v5 )
        {
          v27[2 * PairCount - 2] += v4;
          return 0;
        }
      }
    }
    goto LABEL_120;
  }
  if ( !(unsigned __int8)FsRtlFindLargeIndex(Mcb, v6, &v62) )
  {
    v26 = v62;
    goto LABEL_111;
  }
  v28 = v62;
  v60 = v6 + v4;
  v29 = v6 + v4 - 1;
  v30 = 8LL * v62;
  v31 = &v27[(unsigned __int64)v30 / 4];
  if ( v27[(unsigned __int64)v30 / 4 + 1] != -1 || v62 && v27[2 * v62 - 2] > v6 )
    return -1073741823;
  v32 = *v31 - 1;
  if ( v29 > v32 )
    return -1073741823;
  if ( v62 )
    v33 = v27[2 * v62 - 2];
  else
    v33 = 0;
  if ( v33 >= v6 || v29 >= v32 )
  {
    if ( v62 )
      v35 = v27[2 * v62 - 2];
    else
      v35 = 0;
    if ( v35 == v6 && v29 < v32 )
    {
      if ( v62 )
      {
        v36 = v62 - 1;
        v37 = v27[2 * v36 + 1];
        if ( v37 != -1 )
        {
          if ( v62 != 1 )
            v8 = v27[2 * v62 - 4];
          v11 = v37 - v8 + v27[2 * v36] - 1;
        }
      }
      if ( v11 + 1 == v5 )
      {
        if ( v62 )
        {
          v27[2 * v62 - 2] += v63;
        }
        else
        {
          if ( !(unsigned __int8)FsRtlAddEntry(Mcb, 0LL, 1LL) )
            return -1073741670;
          v38 = v63;
          *((_DWORD *)Mcb->Mapping + 1) = v5;
          *(_DWORD *)Mcb->Mapping = v38;
        }
      }
      else
      {
        if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v62, 1LL) )
          return -1073741670;
        *(_DWORD *)((char *)Mcb->Mapping + v30 + 4) = v5;
        *(_DWORD *)((char *)Mcb->Mapping + v30) = v60;
      }
      return 0;
    }
    if ( v62 )
      v39 = v27[2 * v62 - 2];
    else
      v39 = 0;
    if ( v39 < v6 && v29 == v32 )
    {
      if ( v62 < PairCount - 1 )
        v40 = v27[2 * v62 + 3];
      else
        v40 = -1;
      if ( v40 == v5 + (_DWORD)v63 )
      {
        *v31 = v6;
        *((_DWORD *)Mcb->Mapping + 2 * v28 + 3) = v5;
      }
      else
      {
        if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v62, 1LL) )
          return -1073741670;
        *(_DWORD *)((char *)Mcb->Mapping + v30 + 4) = -1;
        *(_DWORD *)((char *)Mcb->Mapping + v30) = v6;
        *((_DWORD *)Mcb->Mapping + 2 * v28 + 3) = v5;
      }
      return 0;
    }
    if ( v62 )
    {
      v42 = v62 - 1;
      v43 = v27[2 * v42 + 1];
      if ( v43 == -1 )
      {
        v41 = -1;
      }
      else
      {
        if ( v62 == 1 )
          v44 = 0;
        else
          v44 = v27[2 * v62 - 4];
        v41 = v43 - v44 + v27[2 * v42] - 1;
      }
    }
    else
    {
      v41 = -1;
    }
    if ( v41 + 1 == v5 )
    {
      if ( v62 < PairCount - 1 )
        v45 = v27[2 * v62 + 3];
      else
        v45 = -1;
      v46 = v63;
      if ( v45 == (_DWORD)v63 + v5 )
      {
        if ( v62 )
        {
          v27[2 * v62 - 2] = v27[2 * v62 + 2];
          FsRtlRemoveLargeEntry(Mcb, v28, 2LL);
        }
        else
        {
          v27[3] = v5;
          FsRtlRemoveLargeEntry(Mcb, 0LL, 1LL);
        }
        return 0;
      }
    }
    else
    {
      v46 = v63;
    }
    if ( v62 < PairCount - 1 )
      v47 = v27[2 * v62 + 3];
    else
      v47 = -1;
    if ( v47 == v46 + v5 )
    {
      v27[2 * v62 + 3] = v5;
    }
    else
    {
      if ( !v62 )
        goto LABEL_108;
      v48 = v62 - 1;
      v49 = v27[2 * v48 + 1];
      v50 = &v27[2 * v48];
      if ( v49 != -1 )
      {
        if ( v62 != 1 )
          v8 = v27[2 * v62 - 4];
        v11 = v49 - v8 + *v50 - 1;
      }
      if ( v11 + 1 != v5 )
      {
LABEL_108:
        v31[1] = v5;
        return 0;
      }
      *v50 = *v31;
    }
    FsRtlRemoveLargeEntry(Mcb, v28, 1LL);
    return 0;
  }
  if ( (unsigned __int8)FsRtlAddEntry(Mcb, v62, 2LL) )
  {
    v34 = v28 + 1;
    *(_DWORD *)((char *)Mcb->Mapping + v30 + 4) = -1;
    *(_DWORD *)((char *)Mcb->Mapping + v30) = v6;
    *((_DWORD *)Mcb->Mapping + 2 * v34 + 1) = v5;
    *((_DWORD *)Mcb->Mapping + 2 * v34) = v60;
    return 0;
  }
  return -1073741670;
}
