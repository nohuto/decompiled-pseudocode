/*
 * XREFs of IopResourceRequirementsListToReqList @ 0x14059D140
 * Callers:
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x140164074 (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x14045C80C (PnpGetResourceRequirementsForAssignTable.c)
 *     IopAllocateBootResourcesInternal @ 0x14059C8BC (IopAllocateBootResourcesInternal.c)
 *     PnpRestoreResourcesInternal @ 0x140695F48 (PnpRestoreResourcesInternal.c)
 *     IopQueryConflictListInternal @ 0x140697A64 (IopQueryConflictListInternal.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IopFreeReqList @ 0x14059C9E8 (IopFreeReqList.c)
 *     IopFreeReqAlternative @ 0x14059CA38 (IopFreeReqAlternative.c)
 *     IopSetupArbiterAndTranslators @ 0x14059D6A4 (IopSetupArbiterAndTranslators.c)
 */

__int64 __fastcall IopResourceRequirementsListToReqList(__int64 a1, _QWORD *a2)
{
  unsigned int *v2; // r15
  unsigned int v3; // r10d
  unsigned int *v5; // rbp
  int v6; // r8d
  unsigned int *v7; // rdi
  int v8; // esi
  unsigned int *v9; // rdx
  int v10; // r10d
  unsigned int *v11; // rcx
  unsigned int *v12; // r14
  char v13; // r9
  char v14; // bl
  __int64 v15; // r13
  unsigned int v16; // r8d
  unsigned __int64 v17; // r15
  int v18; // edx
  unsigned __int64 v19; // rcx
  int v20; // eax
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rcx
  __int64 v23; // rsi
  unsigned int v24; // eax
  unsigned int v25; // ecx
  size_t v26; // r14
  _QWORD *PoolWithTag; // rax
  _QWORD *v28; // rdi
  unsigned int *v29; // rsi
  int v30; // r14d
  int v31; // eax
  int v32; // r13d
  unsigned int v33; // r15d
  unsigned int *v34; // rbx
  __int64 v35; // rbp
  int **v36; // r12
  unsigned int v37; // eax
  int **v38; // rax
  int v39; // edx
  int *v40; // rcx
  char v41; // al
  bool v42; // zf
  char v43; // al
  int v44; // eax
  _BYTE *v45; // r8
  __int64 v46; // r8
  int v47; // r14d
  int v48; // eax
  unsigned int v49; // esi
  int v50; // [rsp+20h] [rbp-88h]
  int v51; // [rsp+24h] [rbp-84h]
  int v52; // [rsp+28h] [rbp-80h]
  unsigned int **v53; // [rsp+30h] [rbp-78h]
  int **v54; // [rsp+38h] [rbp-70h]
  int *v55; // [rsp+48h] [rbp-60h]
  _DWORD *v56; // [rsp+50h] [rbp-58h]
  int **v57; // [rsp+58h] [rbp-50h]
  int v60; // [rsp+C0h] [rbp+18h]
  int v61; // [rsp+C8h] [rbp+20h]

  *a2 = 0LL;
  v2 = *(unsigned int **)(a1 + 24);
  v60 = 0;
  v56 = v2;
  v3 = v2[7];
  if ( !v3 )
    return 0LL;
  v5 = v2 + 8;
  v6 = 0;
  v7 = (unsigned int *)((char *)v2 + *v2);
  v8 = 0;
  v9 = v2 + 8;
  v10 = v3 - 1;
  if ( v10 >= 0 )
  {
    do
    {
      v11 = v9 + 2;
      v9 += 8 * v9[1] + 2;
      if ( v11 == v9 )
        return 0LL;
      if ( v11 > v9 || v11 > v7 || v9 > v7 )
        return 3221225485LL;
      if ( *((_BYTE *)v11 + 1) == 0x80 )
        v11 += 8;
      v12 = v11;
LABEL_26:
      v14 = 1;
      while ( v11 < v9 )
      {
        v13 = *((_BYTE *)v11 + 1);
        if ( (unsigned __int8)v13 == 128 )
          return 3221225485LL;
        if ( *((unsigned __int8 *)v11 + 1) == 129 )
        {
          while ( v11 < v9 && *((_BYTE *)v11 + 1) == 0x81 )
          {
            if ( v11 == v12 )
              return 3221225485LL;
            ++v6;
            v11 += 8;
          }
          goto LABEL_26;
        }
        ++v6;
        if ( v13 <= 0 )
        {
          if ( v13 == -16 )
            --v6;
          *(_BYTE *)v11 = 1;
          v11 += 8;
          goto LABEL_26;
        }
        if ( (*(_BYTE *)v11 & 8) != 0 )
        {
          if ( v14 )
            return 3221225485LL;
          ++v8;
        }
        else
        {
          v14 = 0;
        }
        v11 += 8;
      }
    }
    while ( --v10 >= 0 );
  }
  v15 = v2[7];
  v16 = v6 - v8;
  v17 = 296LL * v16;
  v52 = -1073741823;
  if ( v17 > 0xFFFFFFFF )
    return 2147483653LL;
  v18 = -1073741675;
  if ( v16 <= 1 )
  {
    LODWORD(v19) = 0;
    goto LABEL_35;
  }
  v19 = 8LL * (v16 - 1);
  if ( v19 <= 0xFFFFFFFF )
  {
LABEL_35:
    v20 = 0;
    goto LABEL_36;
  }
  LODWORD(v19) = -1;
  v20 = -1073741675;
LABEL_36:
  if ( v20 < 0 )
    return 2147483653LL;
  if ( (int)v19 + 32 < (unsigned int)v19 )
    return 2147483653LL;
  v21 = v15 * (unsigned int)(v19 + 32);
  if ( v21 > 0xFFFFFFFF )
    return 2147483653LL;
  if ( (unsigned int)v15 <= 1 )
  {
    LODWORD(v22) = 0;
    goto LABEL_43;
  }
  v22 = 8LL * (unsigned int)(v15 - 1);
  if ( v22 <= 0xFFFFFFFF )
  {
LABEL_43:
    v18 = 0;
    goto LABEL_44;
  }
  LODWORD(v22) = -1;
LABEL_44:
  if ( v18 < 0 )
    return 2147483653LL;
  v23 = (unsigned int)(v22 + 48);
  if ( (unsigned int)v23 < (unsigned int)v22 )
    return 2147483653LL;
  v24 = v21 + v23;
  if ( (int)v21 + (int)v23 < (unsigned int)v23 )
    return 2147483653LL;
  v25 = v17 + v24;
  if ( (unsigned int)v17 + v24 < v24 )
    return 2147483653LL;
  v26 = v25;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)257, v25, 0x20207050u);
  v28 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, v26);
  v29 = (unsigned int *)((char *)v28 + v23);
  v54 = (int **)v29;
  memset(v29, 0, (unsigned int)v21);
  v55 = (int *)((char *)v29 + (unsigned int)v21);
  memset(v55, 0, (unsigned int)v17);
  v30 = v56[1];
  v31 = v56[2];
  if ( v30 == -1 )
    v30 = PnpDefaultInterfaceType;
  v28[2] = 0LL;
  v51 = v31;
  *((_DWORD *)v28 + 1) = v31;
  v28[1] = a1;
  v61 = v30;
  *(_DWORD *)v28 = v30;
  *((_DWORD *)v28 + 8) = v15;
  v53 = (unsigned int **)(v28 + 5);
  memset(v28 + 5, 0, 8 * v15);
  v32 = v15 - 1;
  v33 = 0;
  if ( v32 < 0 )
    goto LABEL_86;
  do
  {
    v34 = v5 + 2;
    v35 = 8LL * v5[1];
    v36 = v54 + 3;
    *v53 = v29;
    v5 = &v34[v35];
    v29[4] = v33++;
    *((_QWORD *)v29 + 1) = v28;
    v29[5] = 0;
    v54 += 3;
    ++v53;
    if ( *((_BYTE *)v34 + 1) == 0x80 )
    {
      v37 = v34[2];
      v34 += 8;
      *v29 = v37;
    }
    else
    {
      *v29 = 12288;
    }
    v38 = v36;
    v39 = 0;
    v57 = v36;
    if ( v34 < v5 )
    {
      while ( *((_BYTE *)v34 + 1) != 0xF0 )
      {
        ++v29[5];
        v40 = v55;
        *v38 = v55;
        v57 = v38 + 1;
        v55[6] = v39;
        v55[1] = v51;
        *((_QWORD *)v55 + 2) = v29;
        *((_QWORD *)v55 + 4) = v55;
        v55[69] = 0;
        *((_QWORD *)v55 + 35) = 0LL;
        *v55 = v30;
        v41 = *((_BYTE *)v34 + 1);
        v55 += 74;
        v50 = v39 + 1;
        v42 = v41 == 0;
        if ( v41 < 0 || (v43 = 1, v42) )
          v43 = 0;
        *((_BYTE *)v40 + 8) = v43;
        ++v36;
        *((_QWORD *)v40 + 6) = v40 + 10;
        *((_QWORD *)v40 + 5) = v40 + 10;
        v40[14] = 0;
        *((_QWORD *)v40 + 8) = v34;
        *((_QWORD *)v40 + 9) = *(_QWORD *)a1;
        v40[20] = *(_DWORD *)(a1 + 12);
        *((_QWORD *)v40 + 11) = 0LL;
        v40[24] = v30;
        v40[25] = v56[3];
        v44 = v56[2];
        v45 = v40 + 34;
        v40[32] = -1;
        *((_QWORD *)v40 + 14) = v40 + 34;
        v40[26] = v44;
        v40[21] = 0;
        v54 = v36;
        if ( !*((_BYTE *)v40 + 8) )
        {
          ++v39;
          *v45 = *((_BYTE *)v34 + 1);
          *((_BYTE *)v40 + 137) = *((_BYTE *)v34 + 2);
          *((_WORD *)v40 + 69) = *((_WORD *)v34 + 2);
          v40[35] = v34[2];
          v40[36] = v34[3];
          v40[37] = v34[4];
          v48 = v60;
          if ( *((_BYTE *)v34 + 1) == 0x84 )
            v48 = 1;
          v60 = v48;
          goto LABEL_80;
        }
        *v45 = 8;
        v46 = (unsigned int)++v40[14];
        v60 = 1;
        while ( 1 )
        {
          v34 += 8;
          if ( v34 >= v5 )
            break;
          if ( *((_BYTE *)v34 + 1) == 0x81 )
          {
            *((_QWORD *)v40 + 35) = v34;
            while ( v34 < v5 && *((_BYTE *)v34 + 1) == 0x81 )
            {
              ++v40[69];
              v34 += 8;
            }
            break;
          }
          if ( (*(_BYTE *)v34 & 8) == 0 )
            break;
          v46 = (unsigned int)(v46 + 1);
          v40[14] = v46;
        }
        v47 = IopSetupArbiterAndTranslators(v40, v40 + 10, v46);
        if ( v47 < 0 )
        {
          --v53;
          --*((_DWORD *)v28 + 8);
          --v33;
          IopFreeReqAlternative((__int64)v29);
          v52 = v47;
          goto LABEL_84;
        }
        v30 = v61;
        v39 = v50;
LABEL_81:
        if ( v34 >= v5 )
          goto LABEL_84;
        v38 = v57;
      }
      v30 = v34[2];
      if ( v30 == -1 )
        v30 = PnpDefaultInterfaceType;
      v61 = v30;
      v51 = v34[3];
LABEL_80:
      v34 += 8;
      goto LABEL_81;
    }
LABEL_84:
    --v32;
    v30 = v61;
    v29 = (unsigned int *)v54;
  }
  while ( v32 >= 0 );
  if ( v33 )
  {
    v49 = 0;
    if ( v60 )
      *a2 = v28;
    else
      IopFreeReqList(v28);
  }
  else
  {
LABEL_86:
    v49 = v52;
    IopFreeReqList(v28);
  }
  return v49;
}
