/*
 * XREFs of ?RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180006300
 * Callers:
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180005B60 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     RmpHandlePsmRetrieveHostMemoryLimit @ 0x180015204 (RmpHandlePsmRetrieveHostMemoryLimit.c)
 * Callees:
 *     ?RmpCommitThresholdsAdd@@YAXPEAU_RM_COMMIT_THRESHOLDS@@00@Z @ 0x1800044AC (-RmpCommitThresholdsAdd@@YAXPEAU_RM_COMMIT_THRESHOLDS@@00@Z.c)
 *     ?RmpCommitValuesAdd@@YAJ_K0PEA_K@Z @ 0x18000450C (-RmpCommitValuesAdd@@YAJ_K0PEA_K@Z.c)
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180004834 (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180004FC0 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     ?GetEnforcedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ @ 0x18001003C (-GetEnforcedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ.c)
 *     ?RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x18001287C (-RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4.c)
 *     ?RmpResourceSetGetEnforcedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x180017760 (-RmpResourceSetGetEnforcedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@.c)
 *     ?RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x180017778 (-RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@.c)
 *     ?RmpResourceSetIsValidPredecessor@@YAKPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001B13C (-RmpResourceSetIsValidPredecessor@@YAKPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 */

void __fastcall RmpActivityHostAggregateCommitValues(struct _RM_ACTIVITY_HOST *a1)
{
  struct _RM_ACTIVITY_HOST *v1; // r12
  struct _RM_COMMIT_THRESHOLDS *v2; // rdi
  struct _RM_COMMIT_THRESHOLDS *v3; // rbx
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // r14
  __int64 **v6; // rsi
  int v7; // ecx
  _QWORD **v8; // rdx
  _QWORD *v9; // rax
  __int64 **v10; // rdx
  int v11; // ecx
  __int64 *v12; // rax
  int i; // ecx
  __int64 v14; // r11
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rsi
  __int64 FirstResourceSet; // r10
  __int64 j; // rdx
  int v20; // eax
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned __int128 *v25; // rcx
  _QWORD *v26; // rax
  unsigned __int128 v27; // kr00_16
  unsigned __int128 v28; // kr10_16
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  _OWORD *v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r11
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rcx
  __int64 v53; // r9
  __int64 v54; // rsi
  __int64 v55; // rcx
  struct ExecutionModel::ResourceSet *v56; // r11
  __int64 v57; // r10
  __int64 v58; // rcx
  struct _RM_ACTIVITY_HOST *First; // rdx
  int v60; // r10d
  _QWORD *v61; // r13
  ExecutionModel::ResourceSet *v62; // r12
  struct ExecutionModel::ResourceSet *v63; // r13
  __int64 v64; // r10
  __int64 v65; // rcx
  __int64 v66; // rdx
  int v67; // eax
  __int64 v68; // r11
  struct _RM_RESOURCE_SET *v69; // r11
  int v70; // r10d
  ExecutionModel::ResourceSet *v71; // r11
  unsigned __int64 EnforcedMemoryCap; // rax
  int v73; // r10d
  struct ExecutionModel::ResourceSet *Next; // r11
  unsigned __int64 v75; // rsi
  __int128 v76; // xmm0
  int v77; // r12d
  int v78; // r10d
  struct ExecutionModel::ResourceSet *v79; // rsi
  __int64 v80; // r11
  struct _RM_RESOURCE_SET *v81; // r11
  unsigned __int64 v82; // rax
  int v83; // r10d
  struct ExecutionModel::ResourceSet *v84; // r11
  unsigned __int128 v85; // xmm0
  unsigned __int128 v86; // xmm1
  __int64 v87; // rax
  __int128 v88; // xmm1
  unsigned __int64 v89; // rcx
  __int64 v90; // rax
  __int128 v91; // [rsp+28h] [rbp-59h] BYREF
  unsigned __int64 v92; // [rsp+38h] [rbp-49h] BYREF
  unsigned __int64 v93; // [rsp+40h] [rbp-41h] BYREF
  struct ExecutionModel::ResourceSet *v94; // [rsp+48h] [rbp-39h]
  struct _RM_ACTIVITY_HOST *v95; // [rsp+50h] [rbp-31h]
  __int128 v96; // [rsp+58h] [rbp-29h] BYREF
  __int64 **v97; // [rsp+68h] [rbp-19h]
  _OWORD v98[2]; // [rsp+70h] [rbp-11h] BYREF
  _OWORD v99[2]; // [rsp+90h] [rbp+Fh] BYREF

  v1 = a1;
  v2 = (struct _RM_ACTIVITY_HOST *)((char *)a1 + 952);
  v95 = a1;
  memset_0((char *)a1 + 952, 0, 0x20uLL);
  v3 = (struct _RM_ACTIVITY_HOST *)((char *)v1 + 984);
  memset_0((char *)v1 + 984, 0, 0x20uLL);
  v4 = 0LL;
  v5 = 0LL;
  *((_QWORD *)&v91 + 1) = 1LL;
  v6 = (__int64 **)((char *)v1 + 616);
  v92 = 0LL;
  v93 = 0LL;
  v7 = 0;
  *(_QWORD *)&v91 = 0LL;
  v8 = (_QWORD **)((char *)v1 + 616);
  v97 = (__int64 **)((char *)v1 + 616);
  while ( 1 )
  {
    if ( ((1 << v7) & 1) != 0 )
    {
      v9 = *v8;
      if ( *v8 != v8 )
      {
        v56 = (struct ExecutionModel::ResourceSet *)(v9 - 171);
        if ( v9 != (_QWORD *)1368 )
          break;
      }
    }
    ++v7;
    v8 += 3;
    if ( v7 >= 2 )
      goto LABEL_5;
  }
  v57 = *((int *)v56 + 350);
  v58 = *((_QWORD *)v56 + 174);
  First = 0LL;
  if ( *v9 != v58 + 8 * (v57 + 2 * v57 + 77) )
    First = (struct _RM_ACTIVITY_HOST *)(*v9 - 1368LL);
  if ( !First )
    First = (struct _RM_ACTIVITY_HOST *)RmpActivityHostEnumerateResourceSetGetFirst(v58, 1, (int)v57 + 1);
  *(_QWORD *)&v91 = First;
  do
  {
    v60 = *((_DWORD *)v56 + 351);
    if ( (v60 & 0x20) == 0 )
    {
      if ( *((_DWORD *)v56 + 338) == 1 )
      {
        *((_DWORD *)v56 + 351) = v60 | 0x20;
      }
      else
      {
        v61 = (_QWORD *)((char *)v56 + 1824);
        v62 = (ExecutionModel::ResourceSet *)*((_QWORD *)v56 + 228);
        if ( v62 )
        {
          if ( RmpResourceSetIsValidPredecessor(*((struct ExecutionModel::ResourceSet **)v56 + 228), First) )
          {
            *(_QWORD *)&v96 = ExecutionModel::ResourceSet::GetEnforcedMemoryCap(v71);
            EnforcedMemoryCap = ExecutionModel::ResourceSet::GetEnforcedMemoryCap(v62);
            v75 = v96;
            if ( (unsigned __int64)v96 > EnforcedMemoryCap )
            {
              v94 = Next;
            }
            else
            {
              v94 = v62;
              v75 = EnforcedMemoryCap;
            }
            v76 = v91;
            *((_DWORD *)Next + 351) = v73 | 0x20;
            *((_DWORD *)v62 + 351) |= 0x20u;
            v77 = (*((_DWORD *)Next + 351) >> 6) & 1;
            v96 = v76;
            do
            {
              v78 = *((_DWORD *)Next + 351);
              if ( (v78 & 0x40) != 0 )
                v77 = 1;
              if ( (v78 & 0x20) == 0 && *((_DWORD *)Next + 338) != 1 && *((_QWORD *)Next + 228) == *v61 )
              {
                v82 = ExecutionModel::ResourceSet::GetEnforcedMemoryCap(Next);
                if ( v82 > v75 )
                {
                  v75 = v82;
                  v94 = v84;
                }
                *((_DWORD *)v84 + 351) = v83 | 0x20;
              }
              Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)&v96);
            }
            while ( Next );
            if ( !v77 )
            {
              v79 = v94;
              RmpCommitValuesAdd(v4, *(_QWORD *)(*((_QWORD *)v94 + 173) + 56LL), &v92);
              RmpCommitValuesAdd(v5, *(_QWORD *)(v80 + 64), &v93);
              RmpResourceSetGetEnforcedCommitThresholds(v81, (struct _RM_COMMIT_THRESHOLDS *)v98);
              RmpCommitThresholdsAdd(v2, (struct _RM_COMMIT_THRESHOLDS *)v98, v2);
              RmpResourceSetGetReportedCommitThresholds(
                *((struct _RM_RESOURCE_SET **)v79 + 173),
                (struct _RM_COMMIT_THRESHOLDS *)v99);
              RmpCommitThresholdsAdd(v3, (struct _RM_COMMIT_THRESHOLDS *)v99, v3);
              v4 = v92;
              v5 = v93;
            }
          }
          else if ( (v70 & 0x40) == 0 )
          {
            *((_DWORD *)v71 + 351) = v70 | 0x20;
          }
        }
      }
    }
    v56 = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)&v91);
  }
  while ( v56 );
  v6 = v97;
  v1 = v95;
LABEL_5:
  v10 = v6;
  v11 = 0;
  *((_QWORD *)&v91 + 1) = 1LL;
  *(_QWORD *)&v91 = 0LL;
  while ( 1 )
  {
    if ( ((1 << v11) & 1) != 0 )
    {
      v12 = *v10;
      if ( *v10 != (__int64 *)v10 )
      {
        v63 = (struct ExecutionModel::ResourceSet *)(v12 - 171);
        if ( v12 != (__int64 *)1368 )
          break;
      }
    }
    ++v11;
    v10 += 3;
    if ( v11 >= 2 )
      goto LABEL_9;
  }
  v64 = *((int *)v63 + 350);
  v65 = *((_QWORD *)v63 + 174);
  v66 = 0LL;
  if ( *v12 != v65 + 8 * (v64 + 2 * v64 + 77) )
    v66 = *v12 - 1368;
  if ( !v66 )
    v66 = RmpActivityHostEnumerateResourceSetGetFirst(v65, 1, (int)v64 + 1);
  *(_QWORD *)&v91 = v66;
  do
  {
    v67 = *((_DWORD *)v63 + 351);
    if ( (v67 & 0x20) != 0 )
    {
      *((_DWORD *)v63 + 351) = v67 & 0xFFFFFFDF;
    }
    else if ( (v67 & 0x40) == 0 || *((_QWORD *)v63 + 228) )
    {
      RmpCommitValuesAdd(v4, *(_QWORD *)(*((_QWORD *)v63 + 173) + 56LL), &v92);
      RmpCommitValuesAdd(v5, *(_QWORD *)(v68 + 64), &v93);
      RmpResourceSetGetEnforcedCommitThresholds(v69, (struct _RM_COMMIT_THRESHOLDS *)v98);
      RmpCommitThresholdsAdd(v2, (struct _RM_COMMIT_THRESHOLDS *)v98, v2);
      RmpResourceSetGetReportedCommitThresholds(
        *((struct _RM_RESOURCE_SET **)v63 + 173),
        (struct _RM_COMMIT_THRESHOLDS *)v99);
      RmpCommitThresholdsAdd(v3, (struct _RM_COMMIT_THRESHOLDS *)v99, v3);
      v4 = v92;
      v5 = v93;
    }
    v63 = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)&v91);
  }
  while ( v63 );
LABEL_9:
  for ( i = 0; i < 2; ++i )
  {
    if ( ((1 << i) & 2) != 0 && *v6 != (__int64 *)v6 )
    {
      v14 = (__int64)(*v6 - 171);
      if ( *v6 != (__int64 *)1368 )
      {
        v15 = **v6;
        v16 = *(int *)(v14 + 1400);
        v17 = *(_QWORD *)(v14 + 1392);
        FirstResourceSet = 0LL;
        if ( v15 != v17 + 8 * (v16 + 2 * v16 + 77) )
          FirstResourceSet = v15 - 1368;
        if ( !FirstResourceSet )
        {
          for ( j = (unsigned int)(v16 + 1); (int)j < 2; j = (unsigned int)(j + 1) )
          {
            if ( ((1 << j) & 2) != 0 )
            {
              FirstResourceSet = RmpActivityHostGetFirstResourceSet(v17, j);
              if ( FirstResourceSet )
                goto LABEL_20;
            }
          }
          FirstResourceSet = 0LL;
        }
LABEL_20:
        while ( 1 )
        {
          v20 = *(_DWORD *)(v14 + 1404);
          if ( (v20 & 0x20) == 0 )
            break;
          *(_DWORD *)(v14 + 1404) = v20 & 0xFFFFFFDF;
LABEL_50:
          v14 = FirstResourceSet;
          if ( FirstResourceSet )
          {
            v53 = *(_QWORD *)(FirstResourceSet + 1368);
            v54 = *(int *)(FirstResourceSet + 1400);
            v55 = *(_QWORD *)(FirstResourceSet + 1392);
            FirstResourceSet = 0LL;
            if ( v53 != v55 + 8 * (v54 + 2 * v54 + 77) )
              FirstResourceSet = v53 - 1368;
            if ( !FirstResourceSet )
              FirstResourceSet = RmpActivityHostEnumerateResourceSetGetFirst(v55, 2, (int)v54 + 1);
          }
          if ( !v14 )
            goto LABEL_52;
        }
        v21 = *(_QWORD **)(v14 + 1384);
        v22 = v21[7];
        if ( v22 == -1 || v4 == -1LL || v22 + v4 < v4 )
          v4 = -1LL;
        else
          v4 += v22;
        v23 = v21[8];
        if ( v5 == -1LL || v23 == -1 || v23 + v5 < v5 )
          v5 = -1LL;
        else
          v5 += v23;
        v24 = v21[18];
        if ( v24 )
        {
          v85 = *(_OWORD *)(v24 + 8);
          v86 = *(_OWORD *)(v24 + 24);
        }
        else
        {
          v25 = (unsigned __int128 *)v21[19];
          if ( !v25 )
          {
            v26 = (_QWORD *)v21[5];
            v27 = __PAIR128__(v26[184], v26[221]);
            v28 = __PAIR128__(v26[185], v26[179]);
            goto LABEL_32;
          }
          v85 = *v25;
          v86 = v25[1];
        }
        v98[0] = v85;
        v27 = v85;
        v98[1] = v86;
        v28 = v86;
LABEL_32:
        v29 = *((_QWORD *)v2 + 3);
        if ( *((_QWORD *)&v28 + 1) == -1LL || v29 == -1LL )
        {
          *((_QWORD *)v2 + 3) = -1LL;
        }
        else
        {
          v87 = -1LL;
          if ( v29 + *((_QWORD *)&v28 + 1) >= v29 )
            v87 = v29 + *((_QWORD *)&v28 + 1);
          *((_QWORD *)v2 + 3) = v87;
        }
        v30 = *((_QWORD *)v2 + 2);
        if ( (_QWORD)v28 == -1LL || v30 == -1LL || (unsigned __int64)v28 + v30 < v30 )
          *((_QWORD *)v2 + 2) = -1LL;
        else
          *((_QWORD *)v2 + 2) = v28 + v30;
        v31 = *((_QWORD *)v2 + 1);
        if ( *((_QWORD *)&v27 + 1) == -1LL || v31 == -1LL || *((_QWORD *)&v27 + 1) + v31 < v31 )
          *((_QWORD *)v2 + 1) = -1LL;
        else
          *((_QWORD *)v2 + 1) = *((_QWORD *)&v27 + 1) + v31;
        v32 = *(_QWORD *)v2;
        if ( (_QWORD)v27 == -1LL || v32 == -1LL || (unsigned __int64)v27 + v32 < v32 )
          *(_QWORD *)v2 = -1LL;
        else
          *(_QWORD *)v2 = v27 + v32;
        v33 = *(_QWORD *)(v14 + 1384);
        v34 = *(_OWORD **)(v33 + 152);
        if ( v34 )
        {
          v88 = v34[1];
          v99[0] = *v34;
          v38 = *((_QWORD *)&v99[0] + 1);
          v39 = *(_QWORD *)&v99[0];
          v99[1] = v88;
          v36 = *((_QWORD *)&v88 + 1);
          v37 = v88;
        }
        else
        {
          v35 = *(_QWORD **)(v33 + 40);
          v36 = v35[185];
          v37 = v35[179];
          v38 = v35[184];
          v39 = v35[221];
        }
        v40 = *((_QWORD *)v3 + 3);
        if ( v36 == -1 || v40 == -1LL )
        {
          *((_QWORD *)v3 + 3) = -1LL;
        }
        else
        {
          v89 = v40 + v36;
          v90 = -1LL;
          if ( v89 >= v40 )
            v90 = v89;
          *((_QWORD *)v3 + 3) = v90;
        }
        v41 = *((_QWORD *)v3 + 2);
        if ( v37 == -1 || v41 == -1LL || v37 + v41 < v41 )
          *((_QWORD *)v3 + 2) = -1LL;
        else
          *((_QWORD *)v3 + 2) = v37 + v41;
        v42 = *((_QWORD *)v3 + 1);
        if ( v38 == -1 || v42 == -1LL || v38 + v42 < v42 )
          *((_QWORD *)v3 + 1) = -1LL;
        else
          *((_QWORD *)v3 + 1) = v38 + v42;
        v43 = *(_QWORD *)v3;
        if ( v39 == -1 || v43 == -1LL || v39 + v43 < v43 )
          *(_QWORD *)v3 = -1LL;
        else
          *(_QWORD *)v3 = v39 + v43;
        goto LABEL_50;
      }
    }
    v6 += 3;
  }
LABEL_52:
  if ( v4 == -1LL || v5 == -1LL || (v44 = v5 + v4, v5 + v4 < v5) )
    v44 = -1LL;
  v45 = *((_QWORD *)v2 + 3);
  if ( v45 == -1LL )
  {
    *((_QWORD *)v2 + 3) = -1LL;
  }
  else if ( v45 < v44 )
  {
    *((_QWORD *)v2 + 3) = 0LL;
  }
  else
  {
    *((_QWORD *)v2 + 3) = v45 - v44;
  }
  v46 = *((_QWORD *)v2 + 2);
  if ( v46 == -1LL )
  {
    *((_QWORD *)v2 + 2) = -1LL;
  }
  else if ( v46 < v44 )
  {
    *((_QWORD *)v2 + 2) = 0LL;
  }
  else
  {
    *((_QWORD *)v2 + 2) = v46 - v44;
  }
  v47 = *((_QWORD *)v2 + 1);
  if ( v47 == -1LL )
  {
    *((_QWORD *)v2 + 1) = -1LL;
  }
  else if ( v47 < v44 )
  {
    *((_QWORD *)v2 + 1) = 0LL;
  }
  else
  {
    *((_QWORD *)v2 + 1) = v47 - v44;
  }
  v48 = *(_QWORD *)v2;
  if ( *(_QWORD *)v2 == -1LL )
  {
    *(_QWORD *)v2 = -1LL;
  }
  else if ( v48 < v44 )
  {
    *(_QWORD *)v2 = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = v48 - v44;
  }
  v49 = *((_QWORD *)v3 + 3);
  if ( v49 == -1LL )
  {
    *((_QWORD *)v3 + 3) = -1LL;
  }
  else if ( v49 < v44 )
  {
    *((_QWORD *)v3 + 3) = 0LL;
  }
  else
  {
    *((_QWORD *)v3 + 3) = v49 - v44;
  }
  v50 = *((_QWORD *)v3 + 2);
  if ( v50 == -1LL )
  {
    *((_QWORD *)v3 + 2) = -1LL;
  }
  else if ( v50 < v44 )
  {
    *((_QWORD *)v3 + 2) = 0LL;
  }
  else
  {
    *((_QWORD *)v3 + 2) = v50 - v44;
  }
  v51 = *((_QWORD *)v3 + 1);
  if ( v51 == -1LL )
  {
    *((_QWORD *)v3 + 1) = -1LL;
  }
  else if ( v51 < v44 )
  {
    *((_QWORD *)v3 + 1) = 0LL;
  }
  else
  {
    *((_QWORD *)v3 + 1) = v51 - v44;
  }
  v52 = *(_QWORD *)v3;
  if ( *(_QWORD *)v3 == -1LL )
  {
    *(_QWORD *)v3 = -1LL;
  }
  else if ( v52 < v44 )
  {
    *(_QWORD *)v3 = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = v52 - v44;
  }
  *((_QWORD *)v1 + 117) = v5;
  *((_QWORD *)v1 + 116) = v4;
}
