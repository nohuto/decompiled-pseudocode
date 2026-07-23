/*
 * XREFs of IopResourceRequirementsListToReqList @ 0x140556FA0
 * Callers:
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x1401CDF28 (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x14050D06C (PnpGetResourceRequirementsForAssignTable.c)
 *     IopAllocateBootResourcesInternal @ 0x140556700 (IopAllocateBootResourcesInternal.c)
 *     PnpRestoreResourcesInternal @ 0x14064BF2C (PnpRestoreResourcesInternal.c)
 *     IopQueryConflictListInternal @ 0x14064E6DC (IopQueryConflictListInternal.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IopFreeReqList @ 0x14055684C (IopFreeReqList.c)
 *     IopFreeReqAlternative @ 0x14055689C (IopFreeReqAlternative.c)
 *     IopSetupArbiterAndTranslators @ 0x1405574E8 (IopSetupArbiterAndTranslators.c)
 */

__int64 __fastcall IopResourceRequirementsListToReqList(__int64 a1, _QWORD *a2)
{
  unsigned int *v2; // r15
  unsigned int v3; // r10d
  unsigned int *v4; // rbp
  int v5; // r8d
  unsigned int *v6; // rdi
  int v7; // esi
  unsigned int *v8; // rdx
  int v9; // r10d
  unsigned int *v10; // rcx
  unsigned int *v11; // r14
  char v12; // bl
  char v13; // r9
  __int64 v14; // r13
  unsigned int v15; // r8d
  unsigned __int64 v16; // r15
  int v17; // edx
  unsigned __int64 v18; // rcx
  int v19; // eax
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rcx
  __int64 v22; // rsi
  unsigned int v23; // eax
  unsigned int v24; // r14d
  _QWORD *PoolWithTag; // rax
  _QWORD *v26; // rdi
  unsigned int *v27; // rsi
  int v28; // r14d
  int v29; // eax
  int v30; // r13d
  unsigned int v31; // r15d
  unsigned int *v32; // rbx
  __int64 v33; // rbp
  int **v34; // r12
  unsigned int v35; // eax
  int **v36; // rax
  int v37; // edx
  int *v38; // rcx
  char v39; // al
  bool v40; // zf
  char v41; // al
  int v42; // eax
  _BYTE *v43; // r8
  __int64 v44; // r8
  int v45; // r14d
  unsigned int v46; // esi
  int v48; // eax
  int v49; // [rsp+20h] [rbp-88h]
  int v50; // [rsp+24h] [rbp-84h]
  int v51; // [rsp+28h] [rbp-80h]
  unsigned int **v52; // [rsp+30h] [rbp-78h]
  int **v53; // [rsp+38h] [rbp-70h]
  int *v54; // [rsp+48h] [rbp-60h]
  _DWORD *v55; // [rsp+50h] [rbp-58h]
  int **v56; // [rsp+58h] [rbp-50h]
  int v59; // [rsp+C0h] [rbp+18h]
  int v60; // [rsp+C8h] [rbp+20h]

  *a2 = 0LL;
  v2 = *(unsigned int **)(a1 + 24);
  v59 = 0;
  v55 = v2;
  v3 = v2[7];
  if ( !v3 )
    return 0LL;
  v4 = v2 + 8;
  v5 = 0;
  v6 = (unsigned int *)((char *)v2 + *v2);
  v7 = 0;
  v8 = v2 + 8;
  v9 = v3 - 1;
  if ( v9 >= 0 )
  {
    do
    {
      v10 = v8 + 2;
      v8 += 8 * v8[1] + 2;
      if ( v10 == v8 )
        return 0LL;
      if ( v10 > v8 || v10 > v6 || v8 > v6 )
        return 3221225485LL;
      if ( *((_BYTE *)v10 + 1) == 0x80 )
        v10 += 8;
      v11 = v10;
LABEL_13:
      v12 = 1;
      while ( v10 < v8 )
      {
        v13 = *((_BYTE *)v10 + 1);
        if ( (unsigned __int8)v13 == 128 )
          return 3221225485LL;
        if ( *((unsigned __int8 *)v10 + 1) == 129 )
        {
          while ( v10 < v8 && *((_BYTE *)v10 + 1) == 0x81 )
          {
            if ( v10 == v11 )
              return 3221225485LL;
            ++v5;
            v10 += 8;
          }
          goto LABEL_13;
        }
        ++v5;
        if ( v13 <= 0 )
        {
          if ( v13 == -16 )
            --v5;
          *(_BYTE *)v10 = 1;
          v10 += 8;
          goto LABEL_13;
        }
        if ( (*(_BYTE *)v10 & 8) != 0 )
        {
          if ( v12 )
            return 3221225485LL;
          ++v7;
        }
        else
        {
          v12 = 0;
        }
        v10 += 8;
      }
    }
    while ( --v9 >= 0 );
  }
  v14 = v2[7];
  v15 = v5 - v7;
  v16 = 296LL * v15;
  v51 = -1073741823;
  if ( v16 > 0xFFFFFFFF )
    return 2147483653LL;
  v17 = -1073741675;
  if ( v15 <= 1 )
  {
    LODWORD(v18) = 0;
  }
  else
  {
    v18 = 8LL * (v15 - 1);
    if ( v18 > 0xFFFFFFFF )
    {
      LODWORD(v18) = -1;
      v19 = -1073741675;
      goto LABEL_30;
    }
  }
  v19 = 0;
LABEL_30:
  if ( v19 < 0 )
    return 2147483653LL;
  if ( (int)v18 + 32 < (unsigned int)v18 )
    return 2147483653LL;
  v20 = v14 * (unsigned int)(v18 + 32);
  if ( v20 > 0xFFFFFFFF )
    return 2147483653LL;
  if ( (unsigned int)v14 > 1 )
  {
    v21 = 8LL * (unsigned int)(v14 - 1);
    if ( v21 > 0xFFFFFFFF )
    {
      LODWORD(v21) = -1;
      goto LABEL_36;
    }
  }
  else
  {
    LODWORD(v21) = 0;
  }
  v17 = 0;
LABEL_36:
  if ( v17 < 0 )
    return 2147483653LL;
  v22 = (unsigned int)(v21 + 48);
  if ( (unsigned int)v22 < (unsigned int)v21 )
    return 2147483653LL;
  v23 = v20 + v22;
  if ( (int)v20 + (int)v22 < (unsigned int)v22 || (unsigned int)v16 + v23 < v23 )
    return 2147483653LL;
  v24 = v16 + v23;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v16 + v23, 0x20207050u);
  v26 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v24);
    v27 = (unsigned int *)((char *)v26 + v22);
    v53 = (int **)v27;
    memset(v27, 0, (unsigned int)v20);
    v54 = (int *)((char *)v27 + (unsigned int)v20);
    memset(v54, 0, (unsigned int)v16);
    v28 = v55[1];
    v29 = v55[2];
    if ( v28 == -1 )
      v28 = PnpDefaultInterfaceType;
    v26[2] = 0LL;
    v49 = v29;
    *((_DWORD *)v26 + 1) = v29;
    v26[1] = a1;
    v60 = v28;
    *(_DWORD *)v26 = v28;
    *((_DWORD *)v26 + 8) = v14;
    v52 = (unsigned int **)(v26 + 5);
    memset(v26 + 5, 0, 8 * v14);
    v30 = v14 - 1;
    v31 = 0;
    if ( v30 < 0 )
      goto LABEL_89;
    do
    {
      v32 = v4 + 2;
      v33 = 8LL * v4[1];
      v34 = v53 + 3;
      *v52 = v27;
      v4 = &v32[v33];
      v27[4] = v31++;
      *((_QWORD *)v27 + 1) = v26;
      v27[5] = 0;
      v53 += 3;
      ++v52;
      if ( *((_BYTE *)v32 + 1) == 0x80 )
      {
        v35 = v32[2];
        v32 += 8;
        *v27 = v35;
      }
      else
      {
        *v27 = 12288;
      }
      v36 = v34;
      v37 = 0;
      v56 = v34;
      if ( v32 < v4 )
      {
        while ( *((_BYTE *)v32 + 1) != 0xF0 )
        {
          ++v27[5];
          v38 = v54;
          *v36 = v54;
          v56 = v36 + 1;
          v54[6] = v37;
          v54[1] = v49;
          *((_QWORD *)v54 + 2) = v27;
          *((_QWORD *)v54 + 4) = v54;
          v54[69] = 0;
          *((_QWORD *)v54 + 35) = 0LL;
          *v54 = v28;
          v39 = *((_BYTE *)v32 + 1);
          v54 += 74;
          v50 = v37 + 1;
          v40 = v39 == 0;
          if ( v39 < 0 || (v41 = 1, v40) )
            v41 = 0;
          *((_BYTE *)v38 + 8) = v41;
          ++v34;
          *((_QWORD *)v38 + 6) = v38 + 10;
          *((_QWORD *)v38 + 5) = v38 + 10;
          v38[14] = 0;
          *((_QWORD *)v38 + 8) = v32;
          *((_QWORD *)v38 + 9) = *(_QWORD *)a1;
          v38[20] = *(_DWORD *)(a1 + 12);
          *((_QWORD *)v38 + 11) = 0LL;
          v38[24] = v28;
          v38[25] = v55[3];
          v42 = v55[2];
          v43 = v38 + 34;
          v38[32] = -1;
          *((_QWORD *)v38 + 14) = v38 + 34;
          v38[26] = v42;
          v38[21] = 0;
          v53 = v34;
          if ( !*((_BYTE *)v38 + 8) )
          {
            ++v37;
            *v43 = *((_BYTE *)v32 + 1);
            *((_BYTE *)v38 + 137) = *((_BYTE *)v32 + 2);
            *((_WORD *)v38 + 69) = *((_WORD *)v32 + 2);
            v38[35] = v32[2];
            v38[36] = v32[3];
            v38[37] = v32[4];
            v48 = v59;
            if ( *((_BYTE *)v32 + 1) == 0x84 )
              v48 = 1;
            v59 = v48;
LABEL_77:
            v32 += 8;
            goto LABEL_57;
          }
          *v43 = 8;
          v44 = (unsigned int)++v38[14];
          v59 = 1;
          while ( 1 )
          {
            v32 += 8;
            if ( v32 >= v4 )
              break;
            if ( *((_BYTE *)v32 + 1) == 0x81 )
            {
              *((_QWORD *)v38 + 35) = v32;
              while ( v32 < v4 && *((_BYTE *)v32 + 1) == 0x81 )
              {
                ++v38[69];
                v32 += 8;
              }
              break;
            }
            if ( (*(_BYTE *)v32 & 8) == 0 )
              break;
            v44 = (unsigned int)(v44 + 1);
            v38[14] = v44;
          }
          v45 = IopSetupArbiterAndTranslators(v38, v38 + 10, v44);
          if ( v45 < 0 )
          {
            --v52;
            --*((_DWORD *)v26 + 8);
            --v31;
            IopFreeReqAlternative((__int64)v27);
            v51 = v45;
            goto LABEL_63;
          }
          v28 = v60;
          v37 = v50;
LABEL_57:
          if ( v32 >= v4 )
            goto LABEL_63;
          v36 = v56;
        }
        v28 = v32[2];
        if ( v28 == -1 )
          v28 = PnpDefaultInterfaceType;
        v60 = v28;
        v49 = v32[3];
        goto LABEL_77;
      }
LABEL_63:
      --v30;
      v28 = v60;
      v27 = (unsigned int *)v53;
    }
    while ( v30 >= 0 );
    if ( v31 )
    {
      v46 = 0;
      if ( v59 )
        *a2 = v26;
      else
        IopFreeReqList(v26);
    }
    else
    {
LABEL_89:
      v46 = v51;
      IopFreeReqList(v26);
    }
    return v46;
  }
  return 3221225626LL;
}
