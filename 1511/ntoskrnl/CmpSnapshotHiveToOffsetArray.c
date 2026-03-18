/*
 * XREFs of CmpSnapshotHiveToOffsetArray @ 0x1405E52D8
 * Callers:
 *     CmpFlushBackupHive @ 0x1405E4F58 (CmpFlushBackupHive.c)
 *     CmDumpKey @ 0x1405E943C (CmDumpKey.c)
 * Callees:
 *     HvpMapEntryGetFreeBin @ 0x14003B3B4 (HvpMapEntryGetFreeBin.c)
 *     HvpMapEntryGetBinAddress @ 0x14003B3D0 (HvpMapEntryGetBinAddress.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     HvpMapEntryReleaseBlockAddress @ 0x14014FEAC (HvpMapEntryReleaseBlockAddress.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     HvpHeaderCheckSum @ 0x1403D44F8 (HvpHeaderCheckSum.c)
 *     HvpGetCellMap @ 0x1403F7A80 (HvpGetCellMap.c)
 */

__int64 __fastcall CmpSnapshotHiveToOffsetArray(__int64 a1, _DWORD *a2, PVOID **a3, unsigned int *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // ebx
  PVOID **v6; // r12
  int v9; // eax
  unsigned int v10; // edi
  _OWORD *v11; // rsi
  struct _EX_RUNDOWN_REF *CellMap; // r12
  __int64 FreeBin; // rax
  __int64 v14; // rcx
  int v15; // r15d
  _DWORD *BinAddress; // rax
  __int64 v17; // rcx
  unsigned int v18; // edi
  __int64 v19; // rax
  size_t v20; // r15
  PVOID *PoolWithTag; // rax
  unsigned int v22; // r15d
  _OWORD *v23; // rax
  PVOID *v24; // r9
  __int64 v25; // rcx
  __int128 v26; // xmm1
  _DWORD *v27; // rcx
  int v28; // eax
  unsigned int v29; // r8d
  char *v30; // r10
  __int64 v31; // r9
  unsigned int v32; // eax
  BOOLEAN v33; // r12
  int v34; // edx
  unsigned int v35; // esi
  _DWORD *v36; // rdi
  unsigned int v37; // eax
  PVOID v38; // rax
  PVOID **v39; // rcx
  __int64 v40; // r9
  PVOID *v41; // r8
  PVOID *v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rax
  struct _EX_RUNDOWN_REF *v45; // rcx
  SIZE_T v46; // rsi
  _DWORD *v47; // rax
  _DWORD *v48; // rax
  unsigned int v49; // r15d
  __int64 v50; // rcx
  PVOID *v51; // rcx
  BOOLEAN v53; // [rsp+20h] [rbp-30h] BYREF
  char v54; // [rsp+21h] [rbp-2Fh]
  int v55; // [rsp+24h] [rbp-2Ch]
  unsigned int v56; // [rsp+28h] [rbp-28h]
  unsigned int v57; // [rsp+2Ch] [rbp-24h]
  void *Src; // [rsp+30h] [rbp-20h]
  int v59; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v60; // [rsp+3Ch] [rbp-14h]
  struct _EX_RUNDOWN_REF *v61; // [rsp+40h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v6 = a3;
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    v9 = *(_DWORD *)(a1 + 1400);
    v10 = 0;
    *v6 = 0LL;
    *a2 = 0;
    v59 = -1;
    v11 = *(_OWORD **)(a1 + 64);
    v53 = 0;
    v55 = v9;
    if ( v9 )
    {
      do
      {
        CellMap = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(a1, v10);
        FreeBin = HvpMapEntryGetFreeBin();
        if ( !FreeBin || (v14 = *(unsigned int *)(FreeBin + 24), (v14 & 1) != 0) )
        {
          BinAddress = (_DWORD *)HvpMapEntryGetBinAddress(v14, CellMap, &v53, &v59);
          v15 = BinAddress[2];
          if ( *BinAddress != 1852400232
            || BinAddress[1] != v10
            || v15 + v10 > *(_DWORD *)(a1 + 1400)
            || (v15 & 0xFFF) != 0 )
          {
            if ( v53 )
              HvpMapEntryReleaseBlockAddress(v17, CellMap);
            v5 = -1073741492;
LABEL_66:
            v6 = a3;
LABEL_67:
            if ( *v6 )
            {
              while ( 1 )
              {
                v51 = *v6;
                if ( !*a2 )
                  break;
                ExFreePoolWithTag(v51[3 * (unsigned int)--*a2 + 1], 0);
              }
              ExFreePoolWithTag(v51, 0);
              *a2 = 0;
            }
            goto LABEL_72;
          }
          if ( v53 )
            HvpMapEntryReleaseBlockAddress(v17, CellMap);
        }
        else
        {
          v15 = *(_DWORD *)(FreeBin + 16);
        }
        v10 += v15;
      }
      while ( v10 < *(_DWORD *)(a1 + 1400) );
      v6 = a3;
      v9 = v55;
    }
    v18 = v9 + 4096;
    v19 = (unsigned int)(v9 + 4096) >> 20;
    if ( (v18 & 0xFFFFF) != 0 )
      v19 = (unsigned int)(v19 + 1);
    v20 = 24 * v19;
    PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 24 * v19, 0x20204D43u);
    *v6 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_18;
    memset(PoolWithTag, 0, v20);
    *a4 = v18;
    v22 = 0x100000;
    if ( v18 < 0x100000 )
      v22 = v18;
    v60 = v22;
    v23 = ExAllocatePoolWithTag(PagedPool, v22, 0x20204D43u);
    v24 = *v6;
    (*v6)[1] = v23;
    if ( !v23 )
    {
LABEL_18:
      v5 = -1073741801;
      goto LABEL_67;
    }
    *(_DWORD *)v24 = 0;
    v25 = 32LL;
    *((_DWORD *)v24 + 4) = v22;
    do
    {
      *v23 = *v11;
      v23[1] = v11[1];
      v23[2] = v11[2];
      v23[3] = v11[3];
      v23[4] = v11[4];
      v23[5] = v11[5];
      v23[6] = v11[6];
      v23 += 8;
      v26 = v11[7];
      v11 += 8;
      *(v23 - 1) = v26;
      --v25;
    }
    while ( v25 );
    v27 = v24[1];
    v27[10] = v55;
    v27[2] = v27[1];
    v28 = HvpHeaderCheckSum(v27);
    v61 = 0LL;
    v29 = 0;
    v30 = 0LL;
    *(_DWORD *)(v31 + 508) = v28;
    v32 = *(_DWORD *)(a1 + 1400);
    v33 = 0;
    v34 = 4096;
    v57 = 0;
    v35 = 0;
    v56 = 4096;
    v36 = 0LL;
    v55 = 4096;
    *a2 = 1;
    v54 = 0;
    Src = 0LL;
    v53 = 0;
    if ( !v32 )
    {
LABEL_72:
      ExReleaseRundownProtection_0(&CmpShutdownRundown);
      goto LABEL_73;
    }
    while ( 1 )
    {
      if ( v34 == v22 )
      {
        v37 = v32 - v29;
        v22 = 0x100000;
        if ( v37 < 0x100000 )
          v22 = v37;
        v60 = v22;
        v38 = ExAllocatePoolWithTag(PagedPool, v22, 0x20204D43u);
        v39 = a3;
        v40 = (unsigned int)*a2;
        v41 = *a3;
        (*a3)[3 * v40 + 1] = v38;
        if ( !v38 )
        {
LABEL_64:
          v5 = -1073741801;
          goto LABEL_66;
        }
        v56 = 0;
        v30 = (char *)Src;
        LODWORD(v41[3 * v40]) = v55;
        LODWORD(v41[3 * v40 + 2]) = v22;
        v29 = v57;
        *a2 = v40 + 1;
      }
      else
      {
        v39 = a3;
      }
      if ( v35 )
      {
        v42 = *v39;
        if ( v35 <= v60 )
          v22 = v35;
        memmove(v42[3 * (unsigned int)(*a2 - 1) + 1], v30, v22);
        v35 -= v22;
        if ( !v35 )
        {
          if ( v54 )
          {
            ExFreePoolWithTag(v36, 0);
            v54 = 0;
          }
          else if ( v33 )
          {
            HvpMapEntryReleaseBlockAddress(v43, v61);
            v33 = 0;
            v53 = 0;
          }
        }
        v34 = v22 + v56;
        v29 = v22 + v57;
        v56 += v22;
        v55 += v22;
        v57 += v22;
        goto LABEL_61;
      }
      v61 = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(a1, v29);
      if ( !v61 )
      {
        v5 = -1073741275;
        goto LABEL_66;
      }
      v44 = HvpMapEntryGetFreeBin();
      if ( !v44 )
        break;
      v46 = *(unsigned int *)(v44 + 16);
      if ( (*(_DWORD *)(v44 + 24) & 1) != 0 )
      {
        v47 = (_DWORD *)HvpMapEntryGetBinAddress((__int64)v45, v45, &v53, &v59);
LABEL_50:
        v33 = v53;
        v36 = v47;
        Src = v47;
        goto LABEL_51;
      }
      v48 = ExAllocatePoolWithTag(PagedPool, v46, 0x62484D43u);
      v36 = v48;
      if ( !v48 )
        goto LABEL_64;
      v33 = 0;
      v54 = 1;
      v53 = 0;
      memset(v48, 0, v46);
      v36[1] = v57;
      v36[8] = v46 - 32;
      *v36 = 1852400232;
      v36[2] = v46;
      Src = v36;
LABEL_51:
      v49 = v22 - v56;
      if ( (unsigned int)v46 > v49 )
      {
        v35 = v46 - v49;
      }
      else
      {
        v49 = v46;
        v35 = 0;
      }
      memmove((char *)(*a3)[3 * (unsigned int)(*a2 - 1) + 1] + v56, v36, v49);
      v34 = v49 + v56;
      v55 += v49;
      v29 = v49 + v57;
      v56 += v49;
      v57 += v49;
      if ( v35 )
      {
        v30 = (char *)v36 + v49;
        Src = v30;
        goto LABEL_62;
      }
      if ( v54 )
      {
        ExFreePoolWithTag(v36, 0);
        v54 = 0;
LABEL_60:
        v29 = v57;
        v34 = v56;
        goto LABEL_61;
      }
      if ( v33 )
      {
        HvpMapEntryReleaseBlockAddress(v50, v61);
        v33 = 0;
        v53 = 0;
        goto LABEL_60;
      }
LABEL_61:
      v30 = (char *)Src;
LABEL_62:
      v32 = *(_DWORD *)(a1 + 1400);
      if ( v29 >= v32 )
        goto LABEL_72;
      v22 = v60;
    }
    v47 = (_DWORD *)HvpMapEntryGetBinAddress((__int64)v45, v45, &v53, &v59);
    LODWORD(v46) = v47[2];
    goto LABEL_50;
  }
  v5 = -1073741431;
LABEL_73:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v5;
}
