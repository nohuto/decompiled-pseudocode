/*
 * XREFs of FsRtlAddBaseMcbEntryEx @ 0x1400D7290
 * Callers:
 *     FsRtlAddBaseMcbEntry @ 0x1400D7278 (FsRtlAddBaseMcbEntry.c)
 * Callees:
 *     FsRtlAddEntry @ 0x1400D77E4 (FsRtlAddEntry.c)
 *     FsRtlFindLargeIndex @ 0x1400D78E8 (FsRtlFindLargeIndex.c)
 *     FsRtlRemoveLargeEntry @ 0x1400D7968 (FsRtlRemoveLargeEntry.c)
 */

NTSTATUS __stdcall FsRtlAddBaseMcbEntryEx(PBASE_MCB Mcb, LONGLONG Vbn, LONGLONG Lbn, LONGLONG SectorCount)
{
  ULONG PairCount; // r13d
  int v5; // r15d
  int v6; // r12d
  unsigned int v7; // ebp
  unsigned int v8; // edi
  signed int v10; // r11d
  signed int v11; // r10d
  unsigned int v12; // eax
  __int64 v13; // rbx
  _DWORD *Mapping; // rax
  __int64 v15; // rdx
  ULONG v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rdx
  int v20; // r8d
  unsigned int v21; // r9d
  _DWORD *v22; // r14
  int v23; // ecx
  int v24; // edx
  _DWORD *v25; // r14
  __int64 v26; // rdx
  int v27; // r8d
  int v28; // r9d
  int v29; // eax
  int v30; // eax
  __int64 v31; // rcx
  unsigned int v32; // ebx
  unsigned int v33; // ebp
  unsigned int v34; // r8d
  __int64 v35; // r15
  unsigned int *v36; // r9
  unsigned int v37; // edx
  int v38; // r11d
  unsigned int v39; // eax
  int v40; // eax
  int v41; // eax
  __int64 v42; // rcx
  int v43; // edx
  int v44; // r13d
  __int64 v45; // rcx
  int v46; // r13d
  unsigned int v47; // eax
  int v48; // edi
  __int64 v49; // rcx
  int v50; // edx
  int v51; // eax
  int v52; // eax
  int v53; // ecx
  int v54; // ecx
  __int64 v55; // rcx
  int v56; // edx
  unsigned int *v57; // r8
  int v58; // eax
  int v59; // ecx
  int v60; // r13d
  int v61; // eax
  int v62; // r8d
  int v63; // eax
  unsigned int v64; // [rsp+60h] [rbp+8h] BYREF
  LONGLONG v65; // [rsp+70h] [rbp+18h]

  v65 = Lbn;
  PairCount = Mcb->PairCount;
  v5 = 0;
  v6 = SectorCount;
  v7 = Lbn;
  v8 = Vbn;
  v10 = 0;
  v11 = PairCount - 1;
  if ( (int)(PairCount - 1) < 0 )
    goto LABEL_10;
  while ( 1 )
  {
    v12 = (v11 + v10) / 2;
    v13 = v12;
    if ( v12 && (unsigned int)Vbn < *((_DWORD *)Mcb->Mapping + 2 * (int)v12 - 2) )
    {
      v11 = v12 - 1;
      goto LABEL_6;
    }
    Mapping = Mcb->Mapping;
    if ( (unsigned int)Vbn <= Mapping[2 * (int)v13] - 1 )
      break;
    v10 = v13 + 1;
LABEL_6:
    if ( v10 > v11 )
      goto LABEL_10;
  }
  v20 = Mapping[2 * v13 + 1];
  v21 = SectorCount + Vbn - 1;
  v22 = Mcb->Mapping;
  if ( v20 == -1 )
  {
    if ( !(unsigned __int8)FsRtlFindLargeIndex(Mcb, v21, &v64) )
      goto LABEL_10;
    v15 = v64 - 1;
    if ( (_DWORD)v13 != (_DWORD)v15 )
      goto LABEL_10;
    v62 = 0;
    if ( v64 )
      v62 = v22[2 * v15];
    if ( v22[2 * v64 + 1] != v7 + v62 - v8 )
      return -1073741823;
    v63 = 0;
    if ( v64 )
      v63 = v22[2 * v15];
    v6 = v63 - v8;
LABEL_10:
    v16 = PairCount;
    v64 = PairCount;
    if ( PairCount )
    {
      v25 = Mcb->Mapping;
      if ( v25[2 * PairCount - 2] > v8 )
      {
        if ( (unsigned __int8)FsRtlFindLargeIndex(Mcb, v8, &v64) )
        {
          v32 = v64;
          v33 = v6 + v8;
          v34 = v6 + v8 - 1;
          v35 = 8LL * v64;
          v36 = &v25[(unsigned __int64)v35 / 4];
          if ( v25[(unsigned __int64)v35 / 4 + 1] != -1 || v64 && v25[2 * v64 - 2] > v8 )
            return -1073741823;
          v37 = *v36 - 1;
          if ( v34 > v37 )
            return -1073741823;
          v38 = 0;
          if ( v64 )
            v39 = v25[2 * v64 - 2];
          else
            v39 = 0;
          if ( v39 >= v8 || v34 >= v37 )
          {
            if ( v64 )
              v40 = v25[2 * v64 - 2];
            else
              v40 = 0;
            if ( v34 < v37 && v40 == v8 )
            {
              v41 = -1;
              if ( v64 )
              {
                v42 = v64 - 1;
                v43 = v25[2 * v42 + 1];
                if ( v43 != -1 )
                {
                  if ( v64 != 1 )
                    v38 = v25[2 * v64 - 4];
                  v41 = v43 - v38 + v25[2 * v42] - 1;
                }
              }
              v44 = v65;
              if ( v41 + 1 == (_DWORD)v65 )
              {
                if ( v64 )
                {
                  v25[2 * v64 - 2] += v6;
                  return 0;
                }
                if ( (unsigned __int8)FsRtlAddEntry(Mcb, 0LL, 1LL) )
                {
                  *((_DWORD *)Mcb->Mapping + 1) = v44;
                  *(_DWORD *)Mcb->Mapping = v6;
                  return 0;
                }
              }
              else if ( (unsigned __int8)FsRtlAddEntry(Mcb, v64, 1LL) )
              {
                *(_DWORD *)((char *)Mcb->Mapping + v35 + 4) = v44;
                *(_DWORD *)((char *)Mcb->Mapping + v35) = v33;
                return 0;
              }
            }
            else
            {
              if ( v64 )
                v47 = v25[2 * v64 - 2];
              else
                v47 = 0;
              if ( v47 >= v8 || v34 != v37 )
              {
                v48 = -1;
                if ( v64 )
                {
                  v49 = v64 - 1;
                  v50 = v25[2 * v49 + 1];
                  if ( v50 == -1 )
                  {
                    v52 = -1;
                  }
                  else
                  {
                    if ( v64 == 1 )
                      v51 = 0;
                    else
                      v51 = v25[2 * v64 - 4];
                    v52 = v50 - v51 + v25[2 * v49] - 1;
                  }
                }
                else
                {
                  v52 = -1;
                }
                if ( v52 + 1 != (_DWORD)v65
                  || (v64 >= PairCount - 1 ? (v53 = -1) : (v53 = v25[2 * v64 + 3]), v53 != v6 + (_DWORD)v65) )
                {
                  if ( v64 >= PairCount - 1 )
                    v54 = -1;
                  else
                    v54 = v25[2 * v64 + 3];
                  if ( v54 == v6 + (_DWORD)v65 )
                  {
                    v25[2 * v64 + 3] = v65;
                  }
                  else
                  {
                    if ( !v64 )
                      goto LABEL_93;
                    v55 = v64 - 1;
                    v56 = v25[2 * v55 + 1];
                    v57 = &v25[2 * v55];
                    if ( v56 != -1 )
                    {
                      if ( v64 == 1 )
                        v58 = 0;
                      else
                        v58 = v25[2 * v64 - 4];
                      v48 = v56 - v58 + *v57 - 1;
                    }
                    if ( v48 + 1 != (_DWORD)v65 )
                    {
LABEL_93:
                      v36[1] = v65;
                      return 0;
                    }
                    *v57 = *v36;
                  }
                  FsRtlRemoveLargeEntry(Mcb, v32, 1LL);
                  return 0;
                }
                if ( v64 )
                {
                  v25[2 * v64 - 2] = v25[2 * v64 + 2];
                  FsRtlRemoveLargeEntry(Mcb, v32, 2LL);
                }
                else
                {
                  v25[3] = v65;
                  FsRtlRemoveLargeEntry(Mcb, 0LL, 1LL);
                }
                return 0;
              }
              if ( v64 >= PairCount - 1 )
                v59 = -1;
              else
                v59 = v25[2 * v64 + 3];
              v60 = v65;
              if ( v59 == v6 + (_DWORD)v65 )
              {
                *v36 = v8;
                *((_DWORD *)Mcb->Mapping + 2 * v32 + 3) = v60;
                return 0;
              }
              if ( (unsigned __int8)FsRtlAddEntry(Mcb, v64, 1LL) )
              {
                *(_DWORD *)((char *)Mcb->Mapping + v35 + 4) = -1;
                *(_DWORD *)((char *)Mcb->Mapping + v35) = v8;
                *((_DWORD *)Mcb->Mapping + 2 * v32 + 3) = v60;
                return 0;
              }
            }
          }
          else if ( (unsigned __int8)FsRtlAddEntry(Mcb, v64, 2LL) )
          {
            v45 = v32 + 1;
            v46 = v65;
            *(_DWORD *)((char *)Mcb->Mapping + v35 + 4) = -1;
            *(_DWORD *)((char *)Mcb->Mapping + v35) = v8;
            *((_DWORD *)Mcb->Mapping + 2 * v45 + 1) = v46;
            *((_DWORD *)Mcb->Mapping + 2 * v45) = v33;
            return 0;
          }
          return -1073741670;
        }
        v16 = v64;
      }
      if ( v16 )
      {
        v26 = v16 - 1;
        v27 = v25[2 * v26];
        if ( v27 == v8 )
        {
          v28 = v25[2 * v26 + 1];
          if ( v28 == -1 )
          {
            v29 = -1;
          }
          else
          {
            if ( v16 != 1 )
              v5 = v25[2 * v16 - 4];
            v29 = v28 - v5 + v27 - 1;
          }
          if ( v29 + 1 == v7 )
          {
            v25[2 * PairCount - 2] += v6;
            return 0;
          }
        }
      }
    }
    if ( !v8 || (!v16 ? (v30 = -1) : (v30 = *((_DWORD *)Mcb->Mapping + 2 * v16 - 2) - 1), v30 + 1 == v8) )
    {
      if ( (unsigned __int8)FsRtlAddEntry(Mcb, v16, 1LL) )
      {
        v17 = v16;
LABEL_14:
        v18 = 8 * v17;
        *(_DWORD *)((char *)Mcb->Mapping + v18 + 4) = v7;
        *(_DWORD *)((char *)Mcb->Mapping + v18) = v6 + v8;
        return 0;
      }
    }
    else if ( (unsigned __int8)FsRtlAddEntry(Mcb, v16, 2LL) )
    {
      v31 = 8LL * v16;
      *(_DWORD *)((char *)Mcb->Mapping + v31 + 4) = -1;
      *(_DWORD *)((char *)Mcb->Mapping + v31) = v8;
      v17 = v16 + 1;
      goto LABEL_14;
    }
    return -1073741670;
  }
  if ( (_DWORD)v13 )
    v23 = v22[2 * (unsigned int)(v13 - 1)];
  else
    v23 = 0;
  if ( v7 == (_DWORD)Vbn + v20 - v23 )
  {
    v24 = Mapping[2 * v13];
    if ( v21 > v24 - 1 )
    {
      if ( (unsigned int)v13 < PairCount )
      {
        v8 = Mapping[2 * v13];
        if ( (_DWORD)v13 == -1 )
          v8 = 0;
      }
      else
      {
        v8 = 0;
      }
      if ( (_DWORD)v13 )
        v61 = v22[2 * (unsigned int)(v13 - 1)];
      else
        v61 = 0;
      v7 = v24 - v61 + v20;
      v65 = v7;
      v6 = v21 - v8 + 1;
      goto LABEL_10;
    }
    return 0;
  }
  return -1073741823;
}
