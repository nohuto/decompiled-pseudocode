/*
 * XREFs of CmpSnapshotHiveToOffsetArray @ 0x14065C1F0
 * Callers:
 *     CmpFlushBackupHive @ 0x14065BE6C (CmpFlushBackupHive.c)
 *     CmDumpKey @ 0x140660AB4 (CmDumpKey.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     HvpMapEntryGetFreeBin @ 0x14006215C (HvpMapEntryGetFreeBin.c)
 *     HvpMapEntryGetBinAddress @ 0x1400CAB30 (HvpMapEntryGetBinAddress.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     HvpMapEntryReleaseBlockAddress @ 0x14017DF88 (HvpMapEntryReleaseBlockAddress.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     HvpGetCellMap @ 0x14049FB30 (HvpGetCellMap.c)
 *     HvpHeaderCheckSum @ 0x1404AFFCC (HvpHeaderCheckSum.c)
 */

__int64 __fastcall CmpSnapshotHiveToOffsetArray(__int64 a1, _DWORD *a2, PVOID *a3, unsigned int *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v5; // r12
  unsigned int v8; // ebx
  unsigned __int64 v9; // rtt
  struct _KTHREAD *v10; // rcx
  __int16 v11; // ax
  int v13; // eax
  unsigned int v14; // edi
  _OWORD *v15; // rsi
  struct _EX_RUNDOWN_REF *CellMap; // r12
  __int64 FreeBin; // rax
  int v18; // r15d
  _DWORD *BinAddress; // rax
  __int64 v20; // rcx
  unsigned int v21; // edi
  __int64 v22; // rax
  size_t v23; // r15
  PVOID PoolWithTag; // rax
  PVOID v25; // r11
  unsigned int v26; // r15d
  _OWORD *v27; // rax
  _DWORD *v28; // r9
  __int64 v29; // rcx
  __int128 v30; // xmm1
  _DWORD *v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // r9
  unsigned int v35; // eax
  struct _EX_RUNDOWN_REF *v36; // r11
  unsigned int v37; // edx
  unsigned int v38; // esi
  struct _EX_RUNDOWN_REF *v39; // rdi
  char *v40; // r10
  BOOLEAN v41; // r12
  unsigned int v42; // eax
  PVOID v43; // rax
  PVOID *v44; // rcx
  __int64 v45; // r9
  _DWORD *v46; // r8
  void **v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rax
  struct _EX_RUNDOWN_REF *v50; // rcx
  SIZE_T v51; // rsi
  struct _EX_RUNDOWN_REF *v52; // rax
  struct _EX_RUNDOWN_REF *v53; // rax
  unsigned int v54; // r15d
  unsigned __int64 v55; // rtt
  struct _KTHREAD *v56; // rdx
  __int16 v57; // ax
  BOOLEAN v58; // [rsp+20h] [rbp-30h] BYREF
  char v59; // [rsp+21h] [rbp-2Fh]
  int v60; // [rsp+24h] [rbp-2Ch]
  unsigned int v61; // [rsp+28h] [rbp-28h]
  unsigned int v62; // [rsp+2Ch] [rbp-24h]
  void *Src; // [rsp+30h] [rbp-20h]
  int v64; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v65; // [rsp+3Ch] [rbp-14h]
  struct _EX_RUNDOWN_REF *v66; // [rsp+40h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  v5 = a3;
  v8 = 0;
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v9 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v9 != _InterlockedCompareExchange64(
               (volatile signed __int64 *)&CmpShutdownRundown,
               (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
               CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL)
    && !ExfAcquireRundownProtection(&CmpShutdownRundown) )
  {
    v10 = KeGetCurrentThread();
    v11 = v10->KernelApcDisable + 1;
    v10->KernelApcDisable = v11;
    if ( !v11
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v10->ApcState.ApcListHead[0].Flink != &v10->152
      && !v10->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return 3221225865LL;
  }
  v13 = *(_DWORD *)(a1 + 1400);
  v14 = 0;
  v64 = -1;
  v15 = *(_OWORD **)(a1 + 64);
  *v5 = 0LL;
  *a2 = 0;
  v58 = 0;
  v60 = v13;
  if ( v13 )
  {
    do
    {
      CellMap = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(a1, v14);
      FreeBin = HvpMapEntryGetFreeBin();
      if ( !FreeBin || (*(_DWORD *)(FreeBin + 24) & 1) != 0 )
      {
        BinAddress = (_DWORD *)HvpMapEntryGetBinAddress(FreeBin, CellMap, &v58, &v64);
        v18 = BinAddress[2];
        if ( *BinAddress != 1852400232
          || BinAddress[1] != v14
          || v18 + v14 > *(_DWORD *)(a1 + 1400)
          || (v18 & 0xFFF) != 0 )
        {
          if ( v58 )
            HvpMapEntryReleaseBlockAddress(v20, CellMap);
          v8 = -1073741492;
          v25 = 0LL;
LABEL_71:
          v5 = a3;
LABEL_72:
          if ( *v5 == v25 )
          {
LABEL_76:
            LOWORD(v39) = 0;
          }
          else
          {
            LOWORD(v39) = 0;
            if ( *a2 > (unsigned int)v25 )
            {
              do
                ExFreePoolWithTag(*((PVOID *)*v5 + 3 * (unsigned int)--*a2 + 1), 0);
              while ( *a2 );
            }
            ExFreePoolWithTag(*v5, 0);
            *a2 = 0;
          }
          goto LABEL_77;
        }
        if ( v58 )
          HvpMapEntryReleaseBlockAddress(v20, CellMap);
      }
      else
      {
        v18 = *(_DWORD *)(FreeBin + 16);
      }
      v14 += v18;
    }
    while ( v14 < *(_DWORD *)(a1 + 1400) );
    v5 = a3;
    v13 = v60;
  }
  v21 = v13 + 4096;
  v22 = (unsigned int)(v13 + 4096) >> 20;
  if ( (v21 & 0xFFFFF) != 0 )
    v22 = (unsigned int)(v22 + 1);
  v23 = 24 * v22;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 24 * v22, 0x20204D43u);
  v25 = 0LL;
  *v5 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_23;
  memset(PoolWithTag, 0, v23);
  *a4 = v21;
  v26 = 0x100000;
  if ( v21 < 0x100000 )
    v26 = v21;
  v65 = v26;
  v27 = ExAllocatePoolWithTag(PagedPool, v26, 0x20204D43u);
  v28 = *v5;
  v25 = 0LL;
  *((_QWORD *)*v5 + 1) = v27;
  if ( !v27 )
  {
LABEL_23:
    v8 = -1073741801;
    goto LABEL_72;
  }
  v29 = 32LL;
  *v28 = 0;
  v28[4] = v26;
  do
  {
    *v27 = *v15;
    v27[1] = v15[1];
    v27[2] = v15[2];
    v27[3] = v15[3];
    v27[4] = v15[4];
    v27[5] = v15[5];
    v27[6] = v15[6];
    v27 += 8;
    v30 = v15[7];
    v15 += 8;
    *(v27 - 1) = v30;
    --v29;
  }
  while ( v29 );
  v31 = (_DWORD *)*((_QWORD *)v28 + 1);
  v31[10] = v60;
  v31[2] = v31[1];
  v32 = HvpHeaderCheckSum(v31);
  LODWORD(v33) = 4096;
  *(_DWORD *)(v34 + 508) = v32;
  v35 = *(_DWORD *)(a1 + 1400);
  v37 = (unsigned int)v36;
  v62 = (unsigned int)v36;
  v38 = (unsigned int)v36;
  v61 = 4096;
  v39 = v36;
  v60 = 4096;
  v40 = (char *)v36;
  *a2 = 1;
  v41 = (unsigned __int8)v36;
  v59 = (char)v36;
  Src = v36;
  v66 = v36;
  v58 = (unsigned __int8)v36;
  if ( v35 )
  {
    while ( 1 )
    {
      if ( (_DWORD)v33 == v26 )
      {
        v42 = v35 - v37;
        v26 = 0x100000;
        if ( v42 < 0x100000 )
          v26 = v42;
        v65 = v26;
        v43 = ExAllocatePoolWithTag(PagedPool, v26, 0x20204D43u);
        v44 = a3;
        v25 = 0LL;
        v45 = (unsigned int)*a2;
        v46 = *a3;
        *((_QWORD *)*a3 + 3 * v45 + 1) = v43;
        if ( !v43 )
        {
LABEL_69:
          v8 = -1073741801;
          goto LABEL_71;
        }
        v40 = (char *)Src;
        v46[6 * v45] = v60;
        v46[6 * v45 + 4] = v26;
        v37 = v62;
        *a2 = v45 + 1;
        v61 = 0;
      }
      else
      {
        v44 = a3;
      }
      if ( v38 )
      {
        v47 = (void **)*v44;
        if ( v38 <= v65 )
          v26 = v38;
        memmove(v47[3 * (unsigned int)(*a2 - 1) + 1], v40, v26);
        v38 -= v26;
        if ( !v38 )
        {
          if ( v59 )
          {
            ExFreePoolWithTag(v39, 0);
            v59 = 0;
          }
          else if ( v41 )
          {
            HvpMapEntryReleaseBlockAddress(v48, v66);
            v41 = 0;
            v58 = 0;
          }
        }
        LODWORD(v33) = v26 + v61;
        v60 += v26;
        v37 = v26 + v62;
        v61 += v26;
        v62 += v26;
        goto LABEL_66;
      }
      v66 = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(a1, v37);
      if ( !v66 )
      {
        v8 = -1073741275;
        goto LABEL_71;
      }
      v49 = HvpMapEntryGetFreeBin();
      if ( !v49 )
        break;
      v51 = *(unsigned int *)(v49 + 16);
      if ( (*(_DWORD *)(v49 + 24) & 1) != 0 )
      {
        v52 = (struct _EX_RUNDOWN_REF *)HvpMapEntryGetBinAddress((__int64)v50, v50, &v58, &v64);
LABEL_55:
        v41 = v58;
        v39 = v52;
        Src = v52;
        goto LABEL_56;
      }
      v53 = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(PagedPool, v51, 0x62484D43u);
      v25 = 0LL;
      v39 = v53;
      if ( !v53 )
        goto LABEL_69;
      v59 = 1;
      v58 = 0;
      v41 = 0;
      memset(v53, 0, v51);
      HIDWORD(v39->Ptr) = v62;
      LODWORD(v39[4].Count) = v51 - 32;
      LODWORD(v39->Count) = 1852400232;
      LODWORD(v39[1].Count) = v51;
      Src = v39;
LABEL_56:
      v54 = v26 - v61;
      if ( (unsigned int)v51 > v54 )
      {
        v38 = v51 - v54;
      }
      else
      {
        v54 = v51;
        v38 = 0;
      }
      memmove((void *)(*((_QWORD *)*a3 + 3 * (unsigned int)(*a2 - 1) + 1) + v61), v39, v54);
      v33 = v54 + v61;
      v60 += v54;
      v37 = v54 + v62;
      v61 += v54;
      v62 += v54;
      if ( v38 )
      {
        v40 = (char *)v39 + v54;
        Src = v40;
        goto LABEL_67;
      }
      if ( v59 )
      {
        ExFreePoolWithTag(v39, 0);
        v59 = 0;
LABEL_65:
        v37 = v62;
        LODWORD(v33) = v61;
        goto LABEL_66;
      }
      if ( v41 )
      {
        HvpMapEntryReleaseBlockAddress(v33, v66);
        v41 = 0;
        v58 = 0;
        goto LABEL_65;
      }
LABEL_66:
      v40 = (char *)Src;
LABEL_67:
      v35 = *(_DWORD *)(a1 + 1400);
      if ( v37 >= v35 )
        goto LABEL_76;
      v26 = v65;
    }
    v52 = (struct _EX_RUNDOWN_REF *)HvpMapEntryGetBinAddress((__int64)v50, v50, &v58, &v64);
    LODWORD(v51) = v52[1].Count;
    goto LABEL_55;
  }
LABEL_77:
  _m_prefetchw(&CmpShutdownRundown);
  v55 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v55 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpShutdownRundown,
                (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
    ExfReleaseRundownProtection(&CmpShutdownRundown);
  v56 = KeGetCurrentThread();
  v57 = v56->KernelApcDisable + 1;
  v56->KernelApcDisable = v57;
  if ( !v57
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v56->ApcState.ApcListHead[0].Flink != &v56->152
    && v56->SpecialApcDisable == (_WORD)v39 )
  {
    KiCheckForKernelApcDelivery();
  }
  return v8;
}
