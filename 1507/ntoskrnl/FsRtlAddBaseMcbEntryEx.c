/*
 * XREFs of FsRtlAddBaseMcbEntryEx @ 0x140106DC0
 * Callers:
 *     FsRtlAddBaseMcbEntry @ 0x140106DA4 (FsRtlAddBaseMcbEntry.c)
 * Callees:
 *     FsRtlAddEntry @ 0x140107328 (FsRtlAddEntry.c)
 *     FsRtlFindLargeIndex @ 0x140107430 (FsRtlFindLargeIndex.c)
 *     FsRtlRemoveLargeEntry @ 0x1401074B8 (FsRtlRemoveLargeEntry.c)
 */

NTSTATUS __stdcall FsRtlAddBaseMcbEntryEx(PBASE_MCB Mcb, LONGLONG Vbn, LONGLONG Lbn, LONGLONG SectorCount)
{
  ULONG PairCount; // r12d
  int v5; // r15d
  unsigned int v6; // r13d
  unsigned int v7; // esi
  signed int v9; // r11d
  signed int v10; // r10d
  unsigned int v11; // eax
  __int64 v12; // rbx
  _DWORD *Mapping; // rax
  int v14; // ebp
  ULONG v15; // ebx
  _DWORD *v16; // r14
  __int64 v17; // rdx
  int v18; // r8d
  int v19; // r15d
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // r8d
  unsigned int v24; // r9d
  _DWORD *v25; // r14
  int v26; // ecx
  int v27; // edx
  __int64 v29; // rdx
  __int64 v30; // rdx
  unsigned int v31; // ebx
  unsigned int v32; // r13d
  __int64 v33; // r15
  unsigned int *v34; // r9
  unsigned int v35; // r8d
  unsigned int v36; // edx
  int v37; // r11d
  unsigned int v38; // eax
  __int64 v39; // rcx
  int v40; // edx
  int v41; // r9d
  int v42; // eax
  int v43; // eax
  __int64 v44; // rcx
  int v45; // edx
  int v46; // esi
  unsigned int v47; // eax
  __int64 v48; // rcx
  int v49; // edx
  int v50; // eax
  int v51; // eax
  int v52; // ecx
  int v53; // edx
  int v54; // ecx
  __int64 v55; // rcx
  int v56; // edx
  unsigned int *v57; // r8
  int v58; // ecx
  int v59; // r14d
  int v60; // eax
  int v61; // r8d
  int v62; // eax
  int v63; // edx
  unsigned int v64; // [rsp+60h] [rbp+8h] BYREF
  LONGLONG v65; // [rsp+70h] [rbp+18h]
  LONGLONG v66; // [rsp+78h] [rbp+20h]

  v66 = SectorCount;
  v65 = Lbn;
  PairCount = Mcb->PairCount;
  v5 = 0;
  v6 = SectorCount;
  v7 = Vbn;
  v9 = 0;
  v10 = PairCount - 1;
  if ( (int)(PairCount - 1) < 0 )
  {
LABEL_7:
    v14 = -1;
    goto LABEL_8;
  }
  while ( 1 )
  {
    v11 = (v10 + v9) / 2;
    v12 = v11;
    if ( v11 && (unsigned int)Vbn < *((_DWORD *)Mcb->Mapping + 2 * (int)v11 - 2) )
    {
      v10 = v11 - 1;
      goto LABEL_6;
    }
    Mapping = Mcb->Mapping;
    if ( (unsigned int)Vbn <= Mapping[2 * (int)v12] - 1 )
      break;
    v9 = v12 + 1;
LABEL_6:
    if ( v9 > v10 )
      goto LABEL_7;
  }
  v23 = Mapping[2 * v12 + 1];
  v24 = SectorCount + Vbn - 1;
  v14 = -1;
  v25 = Mcb->Mapping;
  if ( v23 == -1 )
  {
    if ( !(unsigned __int8)FsRtlFindLargeIndex(Mcb, v24, &v64) )
      goto LABEL_8;
    v30 = v64 - 1;
    if ( (_DWORD)v12 != (_DWORD)v30 )
      goto LABEL_8;
    v61 = 0;
    if ( v64 )
      v61 = v25[2 * v30];
    if ( v25[2 * v64 + 1] == (_DWORD)v65 + v61 - v7 )
    {
      v62 = 0;
      if ( v64 )
        v62 = v25[2 * v30];
      v6 = v62 - v7;
      v66 = v62 - v7;
      goto LABEL_8;
    }
    return -1073741823;
  }
  if ( (_DWORD)v12 )
    v26 = v25[2 * (unsigned int)(v12 - 1)];
  else
    v26 = 0;
  if ( (_DWORD)v65 != (_DWORD)Vbn + v23 - v26 )
    return -1073741823;
  v27 = Mapping[2 * v12];
  if ( v24 <= v27 - 1 )
    return 0;
  if ( (unsigned int)v12 < PairCount )
  {
    v7 = Mapping[2 * v12];
    if ( (_DWORD)v12 == -1 )
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( (_DWORD)v12 )
    v60 = v25[2 * (unsigned int)(v12 - 1)];
  else
    v60 = 0;
  v6 = v24 - v7 + 1;
  v65 = (unsigned int)(v27 - v60 + v23);
  v66 = v6;
LABEL_8:
  v15 = PairCount;
  v64 = PairCount;
  if ( !PairCount )
  {
LABEL_12:
    v19 = v65;
    goto LABEL_13;
  }
  v16 = Mcb->Mapping;
  if ( v16[2 * PairCount - 2] > v7 )
  {
    if ( !(unsigned __int8)FsRtlFindLargeIndex(Mcb, v7, &v64) )
    {
      v15 = v64;
      goto LABEL_10;
    }
    v31 = v64;
    v32 = v7 + v6;
    v33 = 8LL * v64;
    v34 = &v16[(unsigned __int64)v33 / 4];
    v35 = v32 - 1;
    if ( v16[(unsigned __int64)v33 / 4 + 1] == -1 && (!v64 || v16[2 * v64 - 2] <= v7) )
    {
      v36 = *v34 - 1;
      if ( v35 <= v36 )
      {
        v37 = 0;
        if ( v64 )
          v38 = v16[2 * v64 - 2];
        else
          v38 = 0;
        if ( v38 < v7 && v35 < v36 )
        {
          if ( (unsigned __int8)FsRtlAddEntry(Mcb, v64, 2LL) )
          {
            v39 = v31 + 1;
            v40 = v65;
            *(_DWORD *)((char *)Mcb->Mapping + v33 + 4) = -1;
            *(_DWORD *)((char *)Mcb->Mapping + v33) = v7;
            *((_DWORD *)Mcb->Mapping + 2 * v39 + 1) = v40;
            *((_DWORD *)Mcb->Mapping + 2 * v39) = v32;
            return 0;
          }
          return -1073741670;
        }
        if ( v64 )
          v43 = v16[2 * v64 - 2];
        else
          v43 = 0;
        if ( v35 < v36 && v43 == v7 )
        {
          if ( v64 )
          {
            v44 = v64 - 1;
            v45 = v16[2 * v44 + 1];
            if ( v45 != -1 )
            {
              if ( v64 != 1 )
                v37 = v16[2 * v64 - 4];
              v14 = v45 - v37 + v16[2 * v44] - 1;
            }
          }
          v46 = v65;
          if ( v14 + 1 == (_DWORD)v65 )
          {
            if ( v64 )
            {
              v16[2 * v64 - 2] += v66;
            }
            else
            {
              if ( !(unsigned __int8)FsRtlAddEntry(Mcb, 0LL, 1LL) )
                return -1073741670;
              v63 = v66;
              *((_DWORD *)Mcb->Mapping + 1) = v46;
              *(_DWORD *)Mcb->Mapping = v63;
            }
          }
          else
          {
            if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v64, 1LL) )
              return -1073741670;
            *(_DWORD *)((char *)Mcb->Mapping + v33 + 4) = v46;
            *(_DWORD *)((char *)Mcb->Mapping + v33) = v32;
          }
          return 0;
        }
        if ( v64 )
          v47 = v16[2 * v64 - 2];
        else
          v47 = 0;
        if ( v47 < v7 && v35 == v36 )
        {
          if ( v64 >= PairCount - 1 )
            v58 = -1;
          else
            v58 = v16[2 * v64 + 3];
          v59 = v65;
          if ( v58 == (_DWORD)v65 + (_DWORD)v66 )
          {
            *v34 = v7;
            *((_DWORD *)Mcb->Mapping + 2 * v31 + 3) = v59;
          }
          else
          {
            if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v64, 1LL) )
              return -1073741670;
            *(_DWORD *)((char *)Mcb->Mapping + v33 + 4) = -1;
            *(_DWORD *)((char *)Mcb->Mapping + v33) = v7;
            *((_DWORD *)Mcb->Mapping + 2 * v31 + 3) = v59;
          }
          return 0;
        }
        if ( v64 )
        {
          v48 = v64 - 1;
          v49 = v16[2 * v48 + 1];
          if ( v49 == -1 )
          {
            v51 = -1;
          }
          else
          {
            if ( v64 == 1 )
              v50 = 0;
            else
              v50 = v16[2 * v64 - 4];
            v51 = v49 - v50 + v16[2 * v48] - 1;
          }
        }
        else
        {
          v51 = -1;
        }
        if ( v51 + 1 == (_DWORD)v65 )
        {
          if ( v64 >= PairCount - 1 )
            v52 = -1;
          else
            v52 = v16[2 * v64 + 3];
          v53 = v66;
          if ( v52 == (_DWORD)v66 + (_DWORD)v65 )
          {
            if ( v64 )
            {
              v16[2 * v64 - 2] = v16[2 * v64 + 2];
              FsRtlRemoveLargeEntry(Mcb, v31, 2LL);
            }
            else
            {
              v16[3] = v65;
              FsRtlRemoveLargeEntry(Mcb, 0LL, 1LL);
            }
            return 0;
          }
        }
        else
        {
          v53 = v66;
        }
        if ( v64 >= PairCount - 1 )
          v54 = -1;
        else
          v54 = v16[2 * v64 + 3];
        if ( v54 == v53 + (_DWORD)v65 )
        {
          v16[2 * v64 + 3] = v65;
        }
        else
        {
          if ( !v64 )
            goto LABEL_96;
          v55 = v64 - 1;
          v56 = v16[2 * v55 + 1];
          v57 = &v16[2 * v55];
          if ( v56 != -1 )
          {
            if ( v64 != 1 )
              v37 = v16[2 * v64 - 4];
            v14 = v56 - v37 + *v57 - 1;
          }
          if ( v14 + 1 != (_DWORD)v65 )
          {
LABEL_96:
            v34[1] = v65;
            return 0;
          }
          *v57 = *v34;
        }
        FsRtlRemoveLargeEntry(Mcb, v31, 1LL);
        return 0;
      }
    }
    return -1073741823;
  }
LABEL_10:
  if ( !v15 )
    goto LABEL_12;
  v17 = v15 - 1;
  v18 = v16[2 * v17];
  if ( v18 != v7 )
    goto LABEL_12;
  v41 = v16[2 * v17 + 1];
  if ( v41 == -1 )
  {
    v42 = -1;
  }
  else
  {
    if ( v15 != 1 )
      v5 = v16[2 * v15 - 4];
    v42 = v41 - v5 + v18 - 1;
  }
  v19 = v65;
  if ( v42 + 1 == (_DWORD)v65 )
  {
    v16[2 * PairCount - 2] += v6;
    return 0;
  }
LABEL_13:
  if ( !v7 || (!v15 ? (v20 = -1) : (v20 = *((_DWORD *)Mcb->Mapping + 2 * v15 - 2) - 1), v20 + 1 == v7) )
  {
    if ( (unsigned __int8)FsRtlAddEntry(Mcb, v15, 1LL) )
    {
      v22 = v15;
      goto LABEL_28;
    }
  }
  else if ( (unsigned __int8)FsRtlAddEntry(Mcb, v15, 2LL) )
  {
    v21 = 8LL * v15;
    *(_DWORD *)((char *)Mcb->Mapping + v21 + 4) = -1;
    *(_DWORD *)((char *)Mcb->Mapping + v21) = v7;
    v22 = v15 + 1;
LABEL_28:
    v29 = 8 * v22;
    *(_DWORD *)((char *)Mcb->Mapping + v29 + 4) = v19;
    *(_DWORD *)((char *)Mcb->Mapping + v29) = v7 + v6;
    return 0;
  }
  return -1073741670;
}
