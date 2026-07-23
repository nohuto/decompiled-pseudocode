/*
 * XREFs of CmpSnapshotHiveToOffsetArray @ 0x1406048E8
 * Callers:
 *     CmpFlushBackupHive @ 0x140604564 (CmpFlushBackupHive.c)
 *     CmDumpKey @ 0x14060C16C (CmDumpKey.c)
 * Callees:
 *     HvpMapEntryReleaseBinAddress @ 0x14002CF80 (HvpMapEntryReleaseBinAddress.c)
 *     HvpMapEntryGetBinAddress @ 0x14002D1E0 (HvpMapEntryGetBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x14002D300 (HvpGetBinContextInitialize.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     HvpMapEntryGetFreeBin @ 0x1400EDF80 (HvpMapEntryGetFreeBin.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     HvpHeaderCheckSum @ 0x140480C14 (HvpHeaderCheckSum.c)
 *     HvpGetCellMap @ 0x1404F6FB0 (HvpGetCellMap.c)
 */

__int64 __fastcall CmpSnapshotHiveToOffsetArray(__int64 a1, _DWORD *a2, PVOID **a3, unsigned int *a4)
{
  PVOID **v5; // r12
  _DWORD *BinAddress; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *CellMap; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  unsigned int v14; // ebx
  int v15; // r15d
  unsigned int v16; // ebx
  _OWORD *v17; // rbp
  __int64 FreeBin; // rax
  int v19; // eax
  unsigned int v20; // ebx
  __int64 v21; // rax
  size_t v22; // r15
  PVOID *PoolWithTag; // rax
  unsigned int v24; // r15d
  _OWORD *v25; // rax
  PVOID *v26; // r9
  __int64 v27; // rcx
  __int128 v28; // xmm1
  _DWORD *v29; // rcx
  int v30; // eax
  char *v31; // rdx
  __int64 v32; // r9
  unsigned int v33; // eax
  unsigned int v34; // ebx
  unsigned int v35; // r12d
  unsigned int v36; // r15d
  unsigned int v37; // ebp
  unsigned int v38; // eax
  PVOID v39; // rax
  PVOID **v40; // r10
  __int64 v41; // r8
  PVOID *v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rax
  struct _EX_RUNDOWN_REF *v45; // rcx
  SIZE_T v46; // rbx
  unsigned __int64 v47; // rax
  _DWORD *v48; // rax
  unsigned int v49; // ebp
  PVOID *v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  char v55; // [rsp+20h] [rbp-58h]
  BOOLEAN v56; // [rsp+21h] [rbp-57h]
  _WORD v57[2]; // [rsp+24h] [rbp-54h] BYREF
  int v58; // [rsp+28h] [rbp-50h]
  unsigned int v59; // [rsp+2Ch] [rbp-4Ch]
  char *v60; // [rsp+30h] [rbp-48h]

  v5 = a3;
  BinAddress = 0LL;
  HvpGetBinContextInitialize(v57);
  CurrentThread = KeGetCurrentThread();
  CellMap = 0LL;
  v55 = 0;
  --CurrentThread->KernelApcDisable;
  v56 = ExAcquireRundownProtection(&CmpShutdownRundown);
  if ( !v56 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
    v14 = -1073741431;
    goto LABEL_65;
  }
  v15 = *(_DWORD *)(a1 + 1400);
  v16 = 0;
  *v5 = 0LL;
  *a2 = 0;
  v17 = *(_OWORD **)(a1 + 64);
  v58 = v15;
  if ( v15 )
  {
    do
    {
      CellMap = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(a1, v16);
      FreeBin = HvpMapEntryGetFreeBin((__int64)CellMap);
      if ( FreeBin && (*(_DWORD *)(FreeBin + 24) & 1) != 0 )
      {
        v16 += *(_DWORD *)(FreeBin + 16);
      }
      else
      {
        BinAddress = (_DWORD *)HvpMapEntryGetBinAddress(FreeBin, CellMap, v57);
        v19 = BinAddress[2];
        if ( *BinAddress != 1852400232
          || BinAddress[1] != v16
          || (v16 += v19, v16 > *(_DWORD *)(a1 + 1400))
          || (v19 & 0xFFF) != 0 )
        {
          v14 = -1073741492;
          goto LABEL_65;
        }
        HvpMapEntryReleaseBinAddress(v13, CellMap, v57);
        BinAddress = 0LL;
      }
    }
    while ( v16 < *(_DWORD *)(a1 + 1400) );
  }
  v20 = v15 + 4096;
  v21 = (unsigned int)(v15 + 4096) >> 20;
  if ( ((v15 + 4096) & 0xFFFFF) != 0 )
    v21 = (unsigned int)(v21 + 1);
  v22 = 24 * v21;
  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 24 * v21, 0x20204D43u);
  *v5 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_16;
  memset(PoolWithTag, 0, v22);
  *a4 = v20;
  v24 = 0x100000;
  if ( v20 < 0x100000 )
    v24 = v20;
  v59 = v24;
  v25 = ExAllocatePoolWithTag(PagedPool, v24, 0x20204D43u);
  v26 = *v5;
  (*v5)[1] = v25;
  if ( !v25 )
  {
LABEL_16:
    v14 = -1073741801;
    goto LABEL_65;
  }
  *(_DWORD *)v26 = 0;
  v27 = 32LL;
  *((_DWORD *)v26 + 4) = v24;
  do
  {
    *v25 = *v17;
    v25[1] = v17[1];
    v25[2] = v17[2];
    v25[3] = v17[3];
    v25[4] = v17[4];
    v25[5] = v17[5];
    v25[6] = v17[6];
    v25 += 8;
    v28 = v17[7];
    v17 += 8;
    *(v25 - 1) = v28;
    --v27;
  }
  while ( v27 );
  v29 = v26[1];
  v29[10] = v58;
  v29[2] = v29[1];
  v30 = HvpHeaderCheckSum(v29);
  v31 = 0LL;
  *(_DWORD *)(v32 + 508) = v30;
  v33 = *(_DWORD *)(a1 + 1400);
  v34 = 0;
  v35 = 0;
  *a2 = 1;
  CellMap = 0LL;
  v55 = 0;
  v60 = 0LL;
  v36 = 4096;
  v58 = 4096;
  if ( !v33 )
  {
LABEL_58:
    v14 = 0;
    goto LABEL_59;
  }
  while ( 1 )
  {
    v37 = v59;
    if ( v36 == v59 )
    {
      v38 = v33 - v35;
      v37 = 0x100000;
      if ( v38 < 0x100000 )
        v37 = v38;
      v59 = v37;
      v39 = ExAllocatePoolWithTag(PagedPool, v37, 0x20204D43u);
      v40 = a3;
      v41 = (unsigned int)*a2;
      v42 = *a3;
      v13 = 3 * v41;
      (*a3)[3 * v41 + 1] = v39;
      if ( !v39 )
      {
LABEL_62:
        v14 = -1073741801;
        goto LABEL_64;
      }
      v36 = 0;
      LODWORD(v42[3 * v41]) = v58;
      LODWORD(v42[3 * v41 + 2]) = v37;
      v31 = v60;
      *a2 = v41 + 1;
    }
    else
    {
      v40 = a3;
    }
    if ( v34 )
    {
      if ( v34 <= v59 )
        v37 = v34;
      memmove((*v40)[3 * (unsigned int)(*a2 - 1) + 1], v31, v37);
      v34 -= v37;
      if ( !v34 )
      {
        if ( v55 )
        {
          ExFreePoolWithTag(BinAddress, 0);
          v55 = 0;
        }
        else
        {
          HvpMapEntryReleaseBinAddress(v13, CellMap, v57);
        }
        BinAddress = 0LL;
      }
      v36 += v37;
      v35 += v37;
      v58 += v37;
      goto LABEL_56;
    }
    v43 = HvpGetCellMap(a1, v35);
    CellMap = (struct _EX_RUNDOWN_REF *)v43;
    if ( !v43 )
      break;
    v44 = HvpMapEntryGetFreeBin(v43);
    if ( !v44 )
    {
      v47 = HvpMapEntryGetBinAddress((__int64)v45, CellMap, v57);
      LODWORD(v46) = *(_DWORD *)(v47 + 8);
      goto LABEL_46;
    }
    v46 = *(unsigned int *)(v44 + 16);
    if ( (*(_DWORD *)(v44 + 24) & 1) != 0 )
    {
      v47 = HvpMapEntryGetBinAddress((__int64)v45, v45, v57);
LABEL_46:
      v60 = (char *)v47;
      BinAddress = (_DWORD *)v47;
      goto LABEL_47;
    }
    v48 = ExAllocatePoolWithTag(PagedPool, v46, 0x62484D43u);
    BinAddress = v48;
    if ( !v48 )
      goto LABEL_62;
    v55 = 1;
    memset(v48, 0, v46);
    *BinAddress = 1852400232;
    BinAddress[8] = v46 - 32;
    BinAddress[1] = v35;
    BinAddress[2] = v46;
    v60 = (char *)BinAddress;
LABEL_47:
    v49 = v37 - v36;
    if ( (unsigned int)v46 > v49 )
    {
      v34 = v46 - v49;
    }
    else
    {
      v49 = v46;
      v34 = 0;
    }
    memmove((char *)(*a3)[3 * (unsigned int)(*a2 - 1) + 1] + v36, BinAddress, v49);
    v58 += v49;
    v36 += v49;
    v35 += v49;
    if ( !v34 )
    {
      if ( v55 )
      {
        ExFreePoolWithTag(BinAddress, 0);
        v55 = 0;
      }
      else
      {
        HvpMapEntryReleaseBinAddress(v13, CellMap, v57);
      }
      BinAddress = 0LL;
LABEL_56:
      v31 = v60;
      goto LABEL_57;
    }
    v31 = (char *)BinAddress + v49;
    v60 = v31;
LABEL_57:
    v33 = *(_DWORD *)(a1 + 1400);
    if ( v35 >= v33 )
      goto LABEL_58;
  }
  v14 = -1073741275;
LABEL_64:
  v5 = a3;
LABEL_65:
  if ( *v5 )
  {
    while ( 1 )
    {
      v50 = *v5;
      if ( !*a2 )
        break;
      ExFreePoolWithTag(v50[3 * (unsigned int)--*a2 + 1], 0);
    }
    ExFreePoolWithTag(v50, 0);
    *a2 = 0;
  }
LABEL_59:
  if ( BinAddress )
  {
    if ( v55 )
      ExFreePoolWithTag(BinAddress, 0);
    else
      HvpMapEntryReleaseBinAddress(v13, CellMap, v57);
  }
  if ( v56 )
  {
    ExReleaseRundownProtection(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v51, v52, v53);
  }
  return v14;
}
