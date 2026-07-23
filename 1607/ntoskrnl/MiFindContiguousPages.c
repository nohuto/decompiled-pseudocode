/*
 * XREFs of MiFindContiguousPages @ 0x140102220
 * Callers:
 *     MiWaitForInPageComplete @ 0x140024D30 (MiWaitForInPageComplete.c)
 *     MiAllocateContiguousMemory @ 0x14009A740 (MiAllocateContiguousMemory.c)
 *     MiFindPagesForMdl @ 0x140101DCC (MiFindPagesForMdl.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1401E2170 (MmMarkPhysicalMemoryAsBad.c)
 *     MiIdealClusterPage @ 0x1401F6574 (MiIdealClusterPage.c)
 *     MiRebuildLargePage @ 0x1401FD6F8 (MiRebuildLargePage.c)
 *     MiUseLargeDriverPage @ 0x1404CFA5C (MiUseLargeDriverPage.c)
 *     MiAllocateDriverPage @ 0x1405097F0 (MiAllocateDriverPage.c)
 *     MmRemovePhysicalMemory @ 0x1406585EC (MmRemovePhysicalMemory.c)
 *     MiFindLargePageMemory @ 0x1406627C8 (MiFindLargePageMemory.c)
 * Callees:
 *     MiEmptyKernelStackCache @ 0x14000196C (MiEmptyKernelStackCache.c)
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     MiSetPfnOwnedAndActive @ 0x14001B1C0 (MiSetPfnOwnedAndActive.c)
 *     MiPageToNode @ 0x14001B5D4 (MiPageToNode.c)
 *     MiUpdateLargePageBitMap @ 0x140022760 (MiUpdateLargePageBitMap.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x1401011D0 (MiChargeResident.c)
 *     MiCollapseRunTopDown @ 0x14010294C (MiCollapseRunTopDown.c)
 *     MiPfnsWorthTrying @ 0x1401029B0 (MiPfnsWorthTrying.c)
 *     MiClaimPhysicalRun @ 0x14010415C (MiClaimPhysicalRun.c)
 *     MiConvertContiguousPages @ 0x140104754 (MiConvertContiguousPages.c)
 *     MiReleasePteCopyList @ 0x140104DB4 (MiReleasePteCopyList.c)
 *     MiDereferencePageRuns @ 0x140104DD8 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x140104E70 (MiReferencePageRuns.c)
 *     MiCreatePteCopyList @ 0x140104EF8 (MiCreatePteCopyList.c)
 *     MiQueueWorkingSetRequest @ 0x1401318CC (MiQueueWorkingSetRequest.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiFindLargeNodePage @ 0x1401E314C (MiFindLargeNodePage.c)
 */

__int64 __fastcall MiFindContiguousPages(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        int a9,
        __int64 *a10)
{
  signed int v11; // r12d
  int v13; // edi
  unsigned __int8 CurrentIrql; // bl
  unsigned int v17; // ebx
  __int64 LargeNodePage; // rax
  unsigned int v19; // r8d
  int *v20; // r9
  __int64 v21; // rdx
  unsigned int *v22; // rdx
  __int64 v23; // r15
  unsigned __int8 *v24; // r13
  unsigned int v25; // ebx
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned int i; // ecx
  unsigned __int8 *v30; // rcx
  int v31; // eax
  __int64 v32; // rax
  unsigned __int8 *v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // r12
  __int64 v38; // r15
  __int64 v39; // rbx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rdx
  __int64 v42; // r8
  unsigned __int8 v43; // al
  __int64 v44; // r12
  BOOL v45; // eax
  unsigned __int16 *v46; // r9
  void *KernelStack; // rcx
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // r8
  __int64 v50; // rsi
  int v51; // edi
  BOOL v52; // [rsp+40h] [rbp-C0h]
  unsigned int v53; // [rsp+44h] [rbp-BCh]
  unsigned int v54; // [rsp+48h] [rbp-B8h]
  unsigned int *v55; // [rsp+50h] [rbp-B0h]
  int v56; // [rsp+58h] [rbp-A8h] BYREF
  int v57; // [rsp+5Ch] [rbp-A4h] BYREF
  int v58; // [rsp+60h] [rbp-A0h]
  unsigned int *v59; // [rsp+68h] [rbp-98h]
  int v60; // [rsp+70h] [rbp-90h]
  int v61; // [rsp+74h] [rbp-8Ch]
  int v62; // [rsp+78h] [rbp-88h]
  unsigned __int8 *v63; // [rsp+80h] [rbp-80h]
  unsigned __int16 *v64; // [rsp+88h] [rbp-78h]
  __int64 *v65; // [rsp+90h] [rbp-70h]
  unsigned __int64 v66; // [rsp+98h] [rbp-68h]
  unsigned __int16 *v67; // [rsp+A0h] [rbp-60h]
  __int64 v68; // [rsp+A8h] [rbp-58h]
  int v69; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v70; // [rsp+B4h] [rbp-4Ch]
  __int64 v71; // [rsp+BCh] [rbp-44h]
  int v72; // [rsp+C4h] [rbp-3Ch]
  __int64 v73; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v74; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v75; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v76; // [rsp+E0h] [rbp-20h]
  __int64 v77; // [rsp+E8h] [rbp-18h]
  __int64 v78; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v79; // [rsp+F8h] [rbp-8h]
  __int64 v80; // [rsp+100h] [rbp+0h]
  void *v81; // [rsp+108h] [rbp+8h] BYREF
  __int64 v82; // [rsp+110h] [rbp+10h]
  _QWORD v83[2]; // [rsp+118h] [rbp+18h] BYREF

  v11 = a7;
  v13 = a9;
  v65 = a10;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0;
  v66 = a3;
  v53 = a7;
  v69 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    return 3221225659LL;
  if ( CurrentIrql == 2 )
    v13 = a9 | 8;
  v62 = v13 & 0x20000000;
  if ( (v13 & 0x20000000) == 0 )
  {
    if ( !(unsigned int)MiChargeCommit(a1, a5, 1) )
      return 3221225773LL;
    if ( !(unsigned int)MiChargeResident((int *)a1, a5, 0LL) )
    {
      MiReturnCommit(a1, a5);
      return 3221225626LL;
    }
  }
  if ( (v13 & 0x40) != 0 )
  {
    if ( a6 == 1 )
    {
      if ( a5 == 0x40000 )
      {
        v56 = 0;
        v13 |= 0x4000u;
      }
      else
      {
        v56 = 1;
      }
      LargeNodePage = MiFindLargeNodePage(a1, a7, (unsigned int)&v56, v13, 0);
      if ( LargeNodePage )
      {
        *v65 = (LargeNodePage + 0x58000000000LL) / 48;
        return 0LL;
      }
      v17 = -1073741801;
    }
    else
    {
      v17 = -1073741811;
    }
    goto LABEL_95;
  }
  if ( a5 > *(_QWORD *)(a1 + 6464) - 160LL
    || (v60 = v13 & 0x10000000, (v13 & 0x10000000) == 0) && (MiCreatePteCopyList(a5, 64LL, &v69), !(_DWORD)v70) )
  {
    v17 = -1073741670;
    goto LABEL_95;
  }
  v52 = 0;
  if ( (v13 & 0xB000008) == 0x8000000 && (_DWORD)InitializationPhase )
    v52 = CurrentIrql != 2;
  if ( a7 >= (unsigned __int16)KeNumberNodes )
  {
    v11 = a7 | 0x80000000;
    v53 = a7 | 0x80000000;
  }
  v58 = 0;
  v55 = (unsigned int *)MiReferencePageRuns(a1, 1LL);
  v67 = 0LL;
  v19 = -1;
  v64 = 0LL;
  v20 = (int *)v55;
  v21 = *v55 + 1LL;
  v75 = a2;
  v22 = &v55[4 * v21];
  v78 = a5;
  v59 = v22;
  if ( ((a4 - 1) & a4) != 0 )
    a4 = 0LL;
  v77 = a4;
  v23 = *(_QWORD *)(a1 + 48);
  v68 = v23;
LABEL_32:
  v54 = v19;
  v24 = 0LL;
  v25 = MmNumberOfChannels;
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    if ( v11 >= 0 )
    {
      v27 = (unsigned int)v11;
    }
    else
    {
      if ( v19 == -1 )
      {
        v26 = *(_QWORD *)(a1 + 6280);
        if ( v66 <= v26 )
          v26 = v66;
        v19 = MiPageToNode(v26, 0);
        v20 = (int *)v55;
        v54 = v19;
        v64 = (unsigned __int16 *)((char *)qword_1403269E8 + 2 * v19 * (unsigned __int16)KeNumberNodes);
        v22 = v59;
        v67 = &v64[(unsigned __int16)KeNumberNodes];
      }
      v27 = v19;
    }
    v28 = v23 + 2184 * v27;
    if ( (*(_DWORD *)(v28 + 2136) & 1) != 0 )
    {
      v24 = (unsigned __int8 *)(v28 + 2165);
      if ( a8 >= 0 )
      {
        for ( i = 0; i < v25; ++i )
        {
          if ( *v24 == a8 )
            break;
          ++v24;
        }
        v25 = 1;
      }
    }
  }
  v30 = &v24[v25];
  v63 = v30;
  while ( 1 )
  {
    v76 = v66;
    v31 = *v20;
    if ( *v20 )
      break;
    v45 = v52;
LABEL_75:
    if ( !v24 )
      goto LABEL_80;
    v11 = v53;
    ++v24;
    v20 = (int *)v55;
    v22 = v59;
    if ( v24 >= v30 )
    {
      if ( v54 != -1 )
      {
        v46 = v64 + 1;
        v64 = v46;
        if ( v46 != v67 )
        {
          v19 = *v46;
          v20 = (int *)v55;
          v23 = v68;
          goto LABEL_32;
        }
      }
LABEL_80:
      if ( v58 == 1 && v45 )
      {
        if ( (DWORD1(PerfGlobalGroupMask) & 0x100000) != 0 )
        {
          v81 = 0LL;
          v82 = 0LL;
          v83[1] = 16LL;
          KernelStack = KeGetCurrentThread()[1].KernelStack;
          v82 = a5 << 12;
          v81 = KernelStack;
          v83[0] = &v81;
          EtwTraceKernelEvent((int)v83, 1, 0x20100000u, 625, 4200962);
        }
        if ( byte_1403277D8 )
          MiQueueWorkingSetRequest(a1, 32LL);
        v11 = v53;
        v19 = -1;
        v20 = (int *)v55;
        v22 = v59;
        v23 = v68;
        v52 = 0;
        goto LABEL_32;
      }
      v17 = -1073741801;
      MiDereferencePageRuns(v55);
LABEL_95:
      MiReleasePteCopyList(&v69);
      if ( !v62 )
      {
        if ( (int *)a1 == MiSystemPartition )
          MiReturnResidentAvailable(a5);
        else
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6528), a5);
        MiReturnCommit(a1, a5);
      }
      return v17;
    }
  }
  while ( 1 )
  {
    v32 = (unsigned int)(v31 - 1);
    v61 = v32;
    v33 = (unsigned __int8 *)v22 + 2 * v32;
    v32 *= 2LL;
    v34 = v33[1];
    v35 = *(_QWORD *)&v20[2 * v32 + 4];
    v36 = *(_QWORD *)&v20[2 * v32 + 6];
    v73 = v35;
    v74 = v36 + v35;
    if ( v75 >= v36 + v35 )
    {
LABEL_73:
      v45 = v52;
LABEL_74:
      v30 = v63;
      goto LABEL_75;
    }
    if ( (v11 < 0 || *v33 == v11) && (!v24 || (_DWORD)v34 == *v24) )
      break;
LABEL_69:
    v31 = v61;
    if ( !v61 )
      goto LABEL_73;
    v22 = v59;
  }
  if ( !(unsigned int)MiCollapseRunTopDown(&v73, v33, v34) )
  {
LABEL_68:
    v20 = (int *)v55;
    goto LABEL_69;
  }
  v58 = 1;
  while ( 1 )
  {
    v37 = v74;
    v57 = 0;
    v38 = v74 - v78;
    v80 = v74 - v78;
    v39 = 48 * (v74 - v78) - 0x58000000000LL;
    v40 = MiPfnsWorthTrying(a1, 48 * ((int)v74 - (int)v78), a5, v13, (__int64)&v57);
    if ( v40 )
      goto LABEL_63;
    if ( v57 == 1 )
      MiEmptyKernelStackCache();
    v40 = MiClaimPhysicalRun(a1, v38, a5, (unsigned int)&v69, v13, -1, 0LL);
    v79 = v40;
    if ( !v40 )
      break;
    if ( v60 )
    {
      v43 = MiLockPageInline(v39);
      v41 = 0x8000000000000000uLL;
      if ( (*(_QWORD *)(v39 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL && (*(_BYTE *)(v39 + 34) & 7) == 5 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v43);
        v45 = 0;
        v52 = 0;
        goto LABEL_74;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v43);
      v37 = v74;
      v40 = v79;
    }
LABEL_63:
    v44 = v37 - v40;
    if ( v40 > v38 - v73 )
    {
      v76 = v44 - 1;
LABEL_67:
      v11 = v53;
      goto LABEL_68;
    }
    v74 = v44;
    if ( !(unsigned int)MiCollapseRunTopDown(&v73, v41, v42) )
      goto LABEL_67;
  }
  MiDereferencePageRuns(v55);
  MiReleasePteCopyList(&v69);
  v48 = (v38 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  v49 = (a5 + v38) & 0xFFFFFFFFFFFFFE00uLL;
  if ( v48 < v49 )
    MiUpdateLargePageBitMap(a1, v48, v49 - v48, 1, 1);
  MiConvertContiguousPages(v39, a5, a6);
  if ( (v13 & 0x40000000) == 0 )
  {
    v50 = v39 + 48 * a5;
    v51 = ((v13 & 0x100000) != 0) + 1;
    do
    {
      *(_QWORD *)v39 = 0LL;
      *(_QWORD *)(v39 + 40) &= ~0x200000000000000uLL;
      MiSetPfnOwnedAndActive(v39, 0, -8LL, a6, v51);
      v39 += 48LL;
    }
    while ( v39 != v50 );
    v38 = v80;
  }
  *v65 = v38;
  return 0LL;
}
