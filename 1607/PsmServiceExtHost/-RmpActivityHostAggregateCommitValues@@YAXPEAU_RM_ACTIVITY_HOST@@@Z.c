/*
 * XREFs of ?RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180008220
 * Callers:
 *     RmpActivityHostComputeEnforcementSettings @ 0x180007140 (RmpActivityHostComputeEnforcementSettings.c)
 *     RmpActivityHostComputeAndApplyEnforcementSettings @ 0x180007AA0 (RmpActivityHostComputeAndApplyEnforcementSettings.c)
 * Callees:
 *     RmpResourceSetIsValidPredecessor @ 0x1800030B8 (RmpResourceSetIsValidPredecessor.c)
 *     RmpCommitValuesAdd @ 0x180007008 (RmpCommitValuesAdd.c)
 *     RmpCommitValuesSubtract @ 0x180007034 (RmpCommitValuesSubtract.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x1800073E0 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     ?RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180007418 (-RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4.c)
 *     ?GetPredecessor@ResourceSet@ExecutionModel@@QEBAPEAV12@XZ @ 0x180011E7C (-GetPredecessor@ResourceSet@ExecutionModel@@QEBAPEAV12@XZ.c)
 *     ?RmpActivityHostGetNextResourceSetInList@@YAPEAVResourceSet@ExecutionModel@@PEAV12@@Z @ 0x180014C80 (-RmpActivityHostGetNextResourceSetInList@@YAPEAVResourceSet@ExecutionModel@@PEAV12@@Z.c)
 *     RmpActivityHostEnumerateResourceSetGetNext @ 0x180017280 (RmpActivityHostEnumerateResourceSetGetNext.c)
 */

void __fastcall RmpActivityHostAggregateCommitValues(struct _RM_ACTIVITY_HOST *a1)
{
  unsigned __int64 v1; // rbx
  struct _RM_ACTIVITY_HOST *v2; // rsi
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // r12
  __int64 **v6; // rdi
  unsigned __int64 v7; // r13
  int v8; // r10d
  _QWORD *v9; // rdx
  int v10; // ecx
  _QWORD *v11; // rax
  __int64 **v12; // rdx
  int v13; // ecx
  __int64 *v14; // rax
  int v15; // ecx
  __int64 v16; // rbx
  __int64 v17; // r11
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // edx
  struct ExecutionModel::ResourceSet *FirstResourceSet; // r9
  unsigned __int64 v23; // rdi
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  struct ExecutionModel::ResourceSet *v30; // rax
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r9
  struct ExecutionModel::ResourceSet *NextResourceSetInList; // rax
  __int64 v36; // r9
  int v37; // r10d
  int v38; // eax
  struct ExecutionModel::ResourceSet *Predecessor; // rax
  struct ExecutionModel::ResourceSet *First; // rax
  int v41; // r10d
  __int64 v42; // r11
  int v43; // eax
  __int64 v44; // r11
  __int64 v45; // r11
  __int64 v46; // r11
  __int64 v47; // r11
  int v48; // eax
  ExecutionModel::ResourceSet *v49; // r9
  ExecutionModel::ResourceSet *v50; // r11
  unsigned __int64 v51; // rsi
  ExecutionModel::ResourceSet *Next; // r9
  int v53; // ebx
  int v54; // r10d
  ExecutionModel::ResourceSet *v55; // r11
  struct ExecutionModel::ResourceSet *v56; // rax
  __int64 v57; // r9
  struct ExecutionModel::ResourceSet *v58; // r8
  ExecutionModel::ResourceSet *v59; // r9
  int v60; // r10d
  bool v61; // zf
  __int64 v62; // r10
  __int64 v63; // r10
  __int64 v64; // r10
  __int64 v65; // r10
  unsigned __int64 v66; // rcx
  __int64 v67; // rax
  unsigned __int64 v68; // rcx
  __int64 v69; // rax
  unsigned __int64 v70; // rcx
  __int64 v71; // rax
  unsigned __int64 v72; // rcx
  __int64 v73; // rax
  __int128 v74; // [rsp+20h] [rbp-49h] BYREF
  unsigned __int64 v75; // [rsp+30h] [rbp-39h] BYREF
  unsigned __int64 v76; // [rsp+38h] [rbp-31h] BYREF
  unsigned __int64 v77; // [rsp+40h] [rbp-29h] BYREF
  unsigned __int64 v78; // [rsp+48h] [rbp-21h] BYREF
  __int128 v79; // [rsp+50h] [rbp-19h] BYREF
  unsigned __int64 v80; // [rsp+60h] [rbp-9h] BYREF
  unsigned __int64 v81; // [rsp+68h] [rbp-1h] BYREF
  unsigned __int64 v82; // [rsp+70h] [rbp+7h] BYREF
  __int64 **v83; // [rsp+78h] [rbp+Fh]
  unsigned __int64 v85; // [rsp+D8h] [rbp+6Fh]
  __int64 v86; // [rsp+E0h] [rbp+77h]
  ExecutionModel::ResourceSet *v87; // [rsp+E0h] [rbp+77h]
  unsigned __int64 v88; // [rsp+E8h] [rbp+7Fh] BYREF

  v1 = 0LL;
  v2 = a1;
  v3 = 0LL;
  v85 = 0LL;
  v4 = 0LL;
  v88 = 0LL;
  v5 = 0LL;
  v75 = 0LL;
  v6 = (__int64 **)((char *)a1 + 616);
  v76 = 0LL;
  v7 = 0LL;
  v83 = (__int64 **)((char *)a1 + 616);
  v8 = 1;
  v77 = 0LL;
  v9 = (_QWORD *)((char *)a1 + 616);
  v78 = 0LL;
  *(_QWORD *)&v74 = 0LL;
  v10 = 0;
  *((_QWORD *)&v74 + 1) = 1LL;
  while ( 1 )
  {
    if ( ((1 << v10) & 1) != 0 )
    {
      v11 = (_QWORD *)*v9;
      if ( (_QWORD *)*v9 != v9 )
      {
        v86 = (__int64)(v11 - 172);
        if ( v11 != (_QWORD *)1376 )
          break;
      }
    }
    ++v10;
    v9 += 3;
    if ( v10 >= 2 )
      goto LABEL_5;
  }
  NextResourceSetInList = RmpActivityHostGetNextResourceSetInList((struct ExecutionModel::ResourceSet *)(v11 - 172));
  if ( !NextResourceSetInList )
  {
    NextResourceSetInList = (struct ExecutionModel::ResourceSet *)RmpActivityHostEnumerateResourceSetGetFirst(
                                                                    *(_QWORD *)(v36 + 1400),
                                                                    v37,
                                                                    *(_DWORD *)(v36 + 1408) + 1);
    v36 = v86;
  }
  *(_QWORD *)&v74 = NextResourceSetInList;
  do
  {
    v38 = *(_DWORD *)(v36 + 1412);
    if ( (v38 & 0x20) == 0 )
    {
      if ( *(_DWORD *)(v36 + 1352) == 1 )
      {
        *(_DWORD *)(v36 + 1412) = v38 | 0x20;
      }
      else
      {
        Predecessor = ExecutionModel::ResourceSet::GetPredecessor((ExecutionModel::ResourceSet *)v36);
        *(_QWORD *)&v79 = Predecessor;
        if ( Predecessor )
        {
          if ( RmpResourceSetIsValidPredecessor((__int64)Predecessor) )
          {
            RmpCommitValuesSubtract(*(_QWORD *)(v86 + 1488), *(_QWORD *)(v86 + 1848), &v80);
            RmpCommitValuesSubtract(*(_QWORD *)(v79 + 1488), *(_QWORD *)(v79 + 1848), &v81);
            v51 = v81;
            if ( v80 <= v81 )
            {
              v87 = v49;
            }
            else
            {
              v87 = v50;
              v51 = v80;
            }
            *((_DWORD *)v50 + 353) |= 0x20u;
            *((_DWORD *)v49 + 353) |= 0x20u;
            Next = v50;
            v53 = (*((_DWORD *)v50 + 353) >> 6) & 1;
            v79 = v74;
            do
            {
              v54 = *((_DWORD *)Next + 353);
              if ( (v54 & 0x40) != 0 )
                v53 = 1;
              if ( (v54 & 0x20) == 0 && *((_DWORD *)Next + 338) != 1 )
              {
                ExecutionModel::ResourceSet::GetPredecessor(Next);
                v56 = ExecutionModel::ResourceSet::GetPredecessor(v55);
                if ( v58 == v56 )
                {
                  RmpCommitValuesSubtract(*(_QWORD *)(v57 + 1488), *(_QWORD *)(v57 + 1848), &v82);
                  if ( v82 > v51 )
                  {
                    v51 = v82;
                    v87 = v59;
                  }
                  *((_DWORD *)v59 + 353) = v60 | 0x20;
                }
              }
              Next = (ExecutionModel::ResourceSet *)RmpActivityHostEnumerateResourceSetGetNext(&v79);
            }
            while ( Next );
            v61 = v53 == 0;
            v1 = v85;
            if ( v61 )
            {
              RmpCommitValuesAdd(v3, *((_QWORD *)v87 + 231), &v88);
              RmpCommitValuesAdd(v4, *(_QWORD *)(v62 + 1488), &v75);
              RmpCommitValuesAdd(v5, *(_QWORD *)(v63 + 1440), &v76);
              RmpCommitValuesAdd(v85, *(_QWORD *)(v64 + 1776), &v77);
              RmpCommitValuesAdd(v7, *(_QWORD *)(v65 + 1480), &v78);
              v1 = v77;
              v3 = v88;
              v4 = v75;
              v5 = v76;
              v7 = v78;
              v85 = v77;
            }
          }
          else
          {
            v48 = *(_DWORD *)(v86 + 1412);
            if ( (v48 & 0x40) == 0 )
              *(_DWORD *)(v86 + 1412) = v48 | 0x20;
          }
        }
      }
    }
    v86 = RmpActivityHostEnumerateResourceSetGetNext(&v74);
    v36 = v86;
  }
  while ( v86 );
  v6 = v83;
  v8 = 1;
  v2 = a1;
LABEL_5:
  v12 = v6;
  v13 = 0;
  *((_QWORD *)&v74 + 1) = 1LL;
  *(_QWORD *)&v74 = 0LL;
  while ( 1 )
  {
    if ( ((1 << v13) & 1) != 0 )
    {
      v14 = *v12;
      if ( *v12 != (__int64 *)v12 && v14 != (__int64 *)1376 )
        break;
    }
    ++v13;
    v12 += 3;
    if ( v13 >= 2 )
      goto LABEL_9;
  }
  First = RmpActivityHostGetNextResourceSetInList((struct ExecutionModel::ResourceSet *)(v14 - 172));
  if ( !First )
    First = (struct ExecutionModel::ResourceSet *)RmpActivityHostEnumerateResourceSetGetFirst(
                                                    *(_QWORD *)(v42 + 1400),
                                                    v41,
                                                    *(_DWORD *)(v42 + 1408) + 1);
  *(_QWORD *)&v74 = First;
  do
  {
    v43 = *(_DWORD *)(v42 + 1412);
    if ( (v43 & 0x20) != 0 )
    {
      *(_DWORD *)(v42 + 1412) = v43 & 0xFFFFFFDF;
    }
    else if ( (v43 & 0x40) == 0 || ExecutionModel::ResourceSet::GetPredecessor((ExecutionModel::ResourceSet *)v42) )
    {
      RmpCommitValuesAdd(v3, *(_QWORD *)(v42 + 1848), &v88);
      RmpCommitValuesAdd(v4, *(_QWORD *)(v44 + 1488), &v75);
      RmpCommitValuesAdd(v5, *(_QWORD *)(v45 + 1440), &v76);
      RmpCommitValuesAdd(v1, *(_QWORD *)(v46 + 1776), &v77);
      RmpCommitValuesAdd(v7, *(_QWORD *)(v47 + 1480), &v78);
      v3 = v88;
      v4 = v75;
      v5 = v76;
      v1 = v77;
      v7 = v78;
    }
    v42 = RmpActivityHostEnumerateResourceSetGetNext(&v74);
  }
  while ( v42 );
  v85 = v1;
  v8 = 1;
LABEL_9:
  v15 = 0;
  while ( 1 )
  {
    v16 = -1LL;
    if ( ((1 << v15) & 2) != 0 && *v6 != (__int64 *)v6 )
    {
      v17 = (__int64)(*v6 - 172);
      if ( *v6 != (__int64 *)1376 )
        break;
    }
    ++v15;
    v6 += 3;
    if ( v15 >= 2 )
    {
      v23 = v85;
      goto LABEL_33;
    }
  }
  v18 = *(int *)(v17 + 1408);
  v19 = *(_QWORD *)(v17 + 1400);
  v20 = **v6;
  if ( v20 == v19 + 8 * (v18 + 2 * v18 + 77)
    || (FirstResourceSet = (struct ExecutionModel::ResourceSet *)(v20 - 1376)) == 0LL )
  {
    v21 = v18 + 1;
    if ( v21 < 2 )
    {
      while ( 1 )
      {
        if ( ((v8 << v21) & 2) != 0 )
        {
          FirstResourceSet = (struct ExecutionModel::ResourceSet *)RmpActivityHostGetFirstResourceSet(v19, v21);
          if ( FirstResourceSet )
            break;
        }
        if ( ++v21 >= 2 )
          goto LABEL_15;
      }
    }
    else
    {
LABEL_15:
      FirstResourceSet = 0LL;
    }
  }
  v23 = v85;
  do
  {
    v24 = *(_DWORD *)(v17 + 1412);
    if ( (v24 & 0x20) != 0 )
    {
      *(_DWORD *)(v17 + 1412) = v24 & 0xFFFFFFDF;
    }
    else
    {
      v25 = *(_QWORD *)(v17 + 1848);
      if ( v3 == -1LL || v25 == -1 || v25 + v3 < v3 )
        v3 = -1LL;
      else
        v3 += v25;
      v26 = *(_QWORD *)(v17 + 1488);
      if ( v26 == -1 || v4 == -1LL )
      {
        v4 = -1LL;
      }
      else
      {
        v66 = v26 + v4;
        v67 = -1LL;
        if ( v66 >= v4 )
          v67 = v66;
        v4 = v67;
      }
      v27 = *(_QWORD *)(v17 + 1440);
      if ( v27 == -1 || v5 == -1LL )
      {
        v5 = -1LL;
      }
      else
      {
        v68 = v27 + v5;
        v69 = -1LL;
        if ( v68 >= v5 )
          v69 = v68;
        v5 = v69;
      }
      v28 = *(_QWORD *)(v17 + 1776);
      if ( v28 == -1 || v23 == -1LL )
      {
        v23 = -1LL;
      }
      else
      {
        v70 = v28 + v23;
        v71 = -1LL;
        if ( v70 >= v23 )
          v71 = v70;
        v23 = v71;
      }
      v29 = *(_QWORD *)(v17 + 1480);
      if ( v29 == -1 || v7 == -1LL )
      {
        v7 = -1LL;
      }
      else
      {
        v72 = v29 + v7;
        v73 = -1LL;
        if ( v72 >= v7 )
          v73 = v72;
        v7 = v73;
      }
    }
    v17 = (__int64)FirstResourceSet;
    if ( FirstResourceSet )
    {
      v30 = RmpActivityHostGetNextResourceSetInList(FirstResourceSet);
      if ( !v30 )
        v30 = (struct ExecutionModel::ResourceSet *)RmpActivityHostEnumerateResourceSetGetFirst(
                                                      *(_QWORD *)(v34 + 1400),
                                                      2,
                                                      *(_DWORD *)(v34 + 1408) + 1);
    }
    else
    {
      v30 = 0LL;
    }
    FirstResourceSet = v30;
  }
  while ( v17 );
LABEL_33:
  if ( v4 == -1LL )
  {
    v31 = -1LL;
  }
  else
  {
    v31 = 0LL;
    if ( v4 >= v3 )
      v31 = v4 - v3;
  }
  if ( v5 == -1LL )
  {
    v32 = -1LL;
  }
  else
  {
    v32 = 0LL;
    if ( v5 >= v3 )
      v32 = v5 - v3;
  }
  if ( v7 == -1LL )
  {
    v33 = -1LL;
  }
  else
  {
    v33 = 0LL;
    if ( v7 >= v3 )
      v33 = v7 - v3;
  }
  if ( v23 != -1LL )
  {
    v16 = 0LL;
    if ( v23 >= v3 )
      v16 = v23 - v3;
  }
  *((_QWORD *)v2 + 116) = v3;
  *((_QWORD *)v2 + 121) = v31;
  *((_QWORD *)v2 + 117) = v32;
  *((_QWORD *)v2 + 120) = v33;
  *((_QWORD *)v2 + 119) = v16;
}
