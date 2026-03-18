/*
 * XREFs of MiFindContiguousPages @ 0x14005BA20
 * Callers:
 *     MiFindPagesForMdl @ 0x1400778A4 (MiFindPagesForMdl.c)
 *     MiWaitForInPageComplete @ 0x140087120 (MiWaitForInPageComplete.c)
 *     MiRebuildLargePage @ 0x1400FFA70 (MiRebuildLargePage.c)
 *     MiAllocateContiguousMemory @ 0x140114E20 (MiAllocateContiguousMemory.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140213164 (MmMarkPhysicalMemoryAsBad.c)
 *     MiAllocateDriverPage @ 0x140452A88 (MiAllocateDriverPage.c)
 *     MiUseLargeDriverPage @ 0x140573B54 (MiUseLargeDriverPage.c)
 *     MmRemovePhysicalMemory @ 0x1406A228C (MmRemovePhysicalMemory.c)
 *     MiFindLargePageMemory @ 0x1406A9E00 (MiFindLargePageMemory.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x14003C6D0 (MiChargeResident.c)
 *     MiCreatePteCopyList @ 0x1400597DC (MiCreatePteCopyList.c)
 *     MiPageToNode @ 0x14005AA30 (MiPageToNode.c)
 *     MiClaimPhysicalRun @ 0x14005ACA0 (MiClaimPhysicalRun.c)
 *     MiCollapseRunTopDown @ 0x14005BF34 (MiCollapseRunTopDown.c)
 *     MiPfnsWorthTrying @ 0x14005CAD0 (MiPfnsWorthTrying.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiDereferencePageRuns @ 0x140100004 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x1401000AC (MiReferencePageRuns.c)
 *     MiConvertContiguousPages @ 0x14010FEA0 (MiConvertContiguousPages.c)
 *     MiSetPfnOwnedAndActive @ 0x1401225E4 (MiSetPfnOwnedAndActive.c)
 *     MiReleasePteCopyList @ 0x140128890 (MiReleasePteCopyList.c)
 *     MiEmptyKernelStackCache @ 0x14012FF64 (MiEmptyKernelStackCache.c)
 *     MiQueueWorkingSetRequest @ 0x14015A008 (MiQueueWorkingSetRequest.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiFindLargeNodePages @ 0x140214640 (MiFindLargeNodePages.c)
 */

__int64 __fastcall MiFindContiguousPages(
        __int16 *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        unsigned int a9,
        unsigned __int64 *a10)
{
  __int16 *v10; // r14
  unsigned int v13; // ecx
  unsigned __int8 CurrentIrql; // bl
  unsigned int v15; // r15d
  unsigned int v16; // r13d
  unsigned int *v17; // rax
  unsigned int v18; // r10d
  int *v19; // r11
  __int64 v20; // rsi
  __int64 v21; // r8
  unsigned int *v22; // r8
  unsigned __int64 v23; // rax
  unsigned int v24; // ebx
  unsigned __int8 *v25; // rdi
  __int64 v26; // r9
  unsigned __int8 *v27; // rcx
  int v28; // eax
  int v29; // r10d
  __int64 v30; // rax
  __int64 v31; // rsi
  unsigned __int64 v32; // rdi
  __int64 v33; // r14
  unsigned __int64 v34; // rbx
  BOOL v35; // edx
  unsigned int v36; // ebx
  __int64 result; // rax
  unsigned __int64 v38; // rbx
  __int64 v39; // r9
  unsigned __int64 v40; // rdx
  __int64 v41; // r8
  volatile signed __int32 *v42; // r10
  unsigned int v43; // eax
  unsigned __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  unsigned int v47; // ecx
  unsigned __int8 v48; // si
  unsigned int v49; // edi
  unsigned __int16 *v50; // rcx
  void *KernelStack; // rcx
  int v52; // r9d
  unsigned __int64 v53; // rcx
  unsigned int v54; // [rsp+40h] [rbp-C0h]
  BOOL v55; // [rsp+44h] [rbp-BCh]
  unsigned int v56; // [rsp+48h] [rbp-B8h]
  unsigned __int16 v57; // [rsp+4Ch] [rbp-B4h]
  int *v58; // [rsp+50h] [rbp-B0h]
  unsigned int *v59; // [rsp+58h] [rbp-A8h]
  unsigned __int8 *v60; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v61; // [rsp+68h] [rbp-98h] BYREF
  int v62; // [rsp+70h] [rbp-90h]
  int v63; // [rsp+74h] [rbp-8Ch]
  int v64; // [rsp+78h] [rbp-88h] BYREF
  __int16 *v65; // [rsp+80h] [rbp-80h]
  unsigned __int16 *v66; // [rsp+88h] [rbp-78h]
  int v67; // [rsp+90h] [rbp-70h]
  int v68; // [rsp+94h] [rbp-6Ch]
  int v69; // [rsp+98h] [rbp-68h]
  unsigned __int64 v70; // [rsp+A0h] [rbp-60h]
  __int64 v71; // [rsp+A8h] [rbp-58h]
  unsigned __int64 *v72; // [rsp+B0h] [rbp-50h]
  unsigned __int8 *v73; // [rsp+B8h] [rbp-48h]
  int v74; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v75; // [rsp+C4h] [rbp-3Ch]
  __int64 v76; // [rsp+CCh] [rbp-34h]
  int v77; // [rsp+D4h] [rbp-2Ch]
  unsigned __int16 *v78; // [rsp+D8h] [rbp-28h]
  __int64 v79; // [rsp+E0h] [rbp-20h] BYREF
  __int64 i; // [rsp+E8h] [rbp-18h]
  __int64 v81; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v82; // [rsp+F8h] [rbp-8h]
  __int64 v83; // [rsp+100h] [rbp+0h]
  unsigned __int64 v84; // [rsp+108h] [rbp+8h]
  char v85[8]; // [rsp+110h] [rbp+10h] BYREF
  void *v86; // [rsp+118h] [rbp+18h] BYREF
  __int64 v87; // [rsp+120h] [rbp+20h]
  _QWORD v88[2]; // [rsp+128h] [rbp+28h] BYREF

  v10 = a1;
  v72 = a10;
  v65 = a1;
  v13 = a7;
  v75 = 0LL;
  v76 = 0LL;
  v77 = 0;
  v70 = a3;
  v54 = a7;
  v74 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    return 3221225659LL;
  v15 = a9;
  v57 = *v10;
  if ( CurrentIrql == 2 )
    v15 = a9 | 8;
  v16 = 1;
  v68 = v15 & 0x20000000;
  if ( (v15 & 0x20000000) == 0 )
  {
    if ( !(unsigned int)MiChargeCommit(v10, a5, 1LL) )
      return 3221225773LL;
    if ( !(unsigned int)MiChargeResident(v10, a5, 0LL, v39) )
    {
      MiReturnCommit(v10, a5);
      return 3221225626LL;
    }
    if ( v10 == MiSystemPartition )
      _InterlockedExchangeAdd64(&qword_14034F940, a5);
    v13 = a7;
  }
  if ( (v15 & 0x40) != 0 )
  {
    if ( a6 == 1 )
    {
      if ( (int)MiFindLargeNodePages(v10, v13, v15, &v61) >= 0 )
      {
        *v72 = v61;
        return 0LL;
      }
      v36 = -1073741801;
    }
    else
    {
      v36 = -1073741811;
    }
    goto LABEL_35;
  }
  if ( (__int64)a5 > *((_QWORD *)v10 + 688) - 128LL )
  {
    v36 = -1073741670;
LABEL_34:
    MiReleasePteCopyList(&v74);
LABEL_35:
    if ( !v68 )
    {
      if ( v10 == MiSystemPartition )
      {
        MiReturnResidentAvailable(a5);
        _InterlockedExchangeAdd64(&qword_14034F950, a5);
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)v10 + 696, a5);
      }
      MiReturnCommit(v10, a5);
    }
    return v36;
  }
  v69 = v15 & 0x10000000;
  if ( (v15 & 0x10000000) == 0 )
  {
    MiCreatePteCopyList(a5, 0x40uLL, (__int64)&v74);
    if ( !(_DWORD)v75 )
    {
      v36 = -1073741670;
      goto LABEL_34;
    }
  }
  v55 = 0;
  if ( (v15 & 0xA000008) == 0x8000000 && (_DWORD)InitializationPhase )
    v55 = CurrentIrql != 2;
  if ( a7 >= (unsigned __int16)KeNumberNodes )
    v54 = a7 | 0x80000000;
  v63 = 0;
  v17 = (unsigned int *)MiReferencePageRuns(v10, 1LL);
  v18 = -1;
  v58 = (int *)v17;
  v19 = (int *)v17;
  v83 = a4;
  v20 = *((_QWORD *)v10 + 5);
  v21 = *v17 + 1LL;
  v78 = 0LL;
  v22 = &v17[4 * v21];
  v81 = a2;
  v23 = v70;
  v66 = 0LL;
  v59 = v22;
  v82 = v70;
  v84 = a5;
  v71 = v20;
LABEL_13:
  v56 = v18;
  v24 = MmNumberOfChannels;
  v25 = 0LL;
  v60 = 0LL;
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    v26 = v54;
    if ( (v54 & 0x80000000) == 0 )
    {
      v45 = 1336LL * v54;
    }
    else
    {
      if ( v18 == -1 )
      {
        v44 = *((_QWORD *)v10 + 665);
        if ( v23 <= v44 )
          v44 = v23;
        v18 = MiPageToNode(v44, 0);
        v26 = v54;
        v19 = v58;
        v56 = v18;
        v66 = (unsigned __int16 *)((char *)qword_14034EB68 + 2 * v18 * (unsigned __int16)KeNumberNodes);
        v22 = v59;
        v78 = &v66[(unsigned __int16)KeNumberNodes];
      }
      v45 = 1336LL * v18;
    }
    v46 = v20 + v45;
    if ( (*(_DWORD *)(v46 + 1296) & 1) != 0 )
    {
      v25 = (unsigned __int8 *)(v46 + 1317);
      v60 = (unsigned __int8 *)(v46 + 1317);
      if ( a8 >= 0 )
      {
        v47 = 0;
        if ( v24 )
        {
          do
          {
            if ( *v25 == a8 )
              break;
            ++v25;
            ++v47;
          }
          while ( v47 < v24 );
          v60 = v25;
        }
        v24 = 1;
      }
    }
  }
  else
  {
    v26 = v54;
  }
  v27 = &v25[v24];
  v73 = v27;
  while ( 1 )
  {
    v28 = *v19;
    if ( *v19 )
      break;
LABEL_29:
    v35 = v55;
LABEL_30:
    if ( !v25 )
      goto LABEL_31;
    v60 = ++v25;
    if ( v25 >= v27 )
    {
      if ( v56 != -1 )
      {
        v50 = v66 + 1;
        v66 = v50;
        if ( v50 != v78 )
        {
          v18 = *v50;
          v10 = v65;
          v23 = v70;
          v20 = v71;
          goto LABEL_13;
        }
      }
LABEL_31:
      if ( v63 != 1 || !v35 )
      {
        v36 = -1073741801;
        MiDereferencePageRuns(v19);
        v10 = v65;
        goto LABEL_34;
      }
      if ( (DWORD1(PerfGlobalGroupMask) & 0x100000) != 0 )
      {
        v86 = 0LL;
        v87 = 0LL;
        v88[1] = 16LL;
        KernelStack = KeGetCurrentThread()[1].KernelStack;
        v87 = a5 << 12;
        v86 = KernelStack;
        v88[0] = &v86;
        EtwTraceKernelEvent((int)v88, 1, 0x20100000u, 0x271u, 4200962);
        v22 = v59;
        v19 = v58;
      }
      v10 = v65;
      if ( byte_14034FB98 )
      {
        MiQueueWorkingSetRequest(v65, 32LL, v22, v26);
        v22 = v59;
        v19 = v58;
      }
      v20 = v71;
      v55 = 0;
      v18 = -1;
      v23 = v70;
      goto LABEL_13;
    }
  }
  v29 = v26 & 0x80000000;
  v62 = v26 & 0x80000000;
  while ( 1 )
  {
    v30 = (unsigned int)(v28 - 1);
    v67 = v30;
    if ( (v29 || *((unsigned __int8 *)v22 + 2 * v30) == (_DWORD)v26)
      && (!v25 || *((unsigned __int8 *)v22 + 2 * v30 + 1) == *v25) )
    {
      break;
    }
LABEL_27:
    v28 = v67;
    if ( !v67 )
    {
      v27 = v73;
      goto LABEL_29;
    }
  }
  v79 = *(_QWORD *)&v19[4 * (unsigned int)v30 + 4];
  for ( i = *(_QWORD *)&v19[4 * (unsigned int)v30 + 6] + v79; ; i = v31 - v34 )
  {
    if ( !(unsigned int)MiCollapseRunTopDown(&v79) )
    {
LABEL_26:
      v25 = v60;
      v19 = v58;
      v29 = v62;
      v26 = v54;
      v22 = v59;
      goto LABEL_27;
    }
    v31 = i;
    v32 = i - v84;
    v63 = 1;
    v64 = 0;
    v61 = i - v84;
    v33 = 48 * (i - v84) - 0x58000000000LL;
    v34 = MiPfnsWorthTrying(v57, 48 * ((int)i - (int)v84), a5, v15, (__int64)&v64, (__int64)v85);
    if ( v34 )
      goto LABEL_24;
    if ( v64 == 1 )
      MiEmptyKernelStackCache();
    v34 = MiClaimPhysicalRun(v65, v32, a5, (__int64)&v74, v15, -1, 0LL);
    if ( !v34 )
      break;
    if ( v69 )
    {
      v48 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v49 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v49 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v49);
        }
        while ( (*(_QWORD *)(v33 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) );
      }
      if ( (*(_QWORD *)(v33 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL && (*(_BYTE *)(v33 + 34) & 7) == 5 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v48);
        v22 = v59;
        v35 = 0;
        v26 = v54;
        v19 = v58;
        v25 = v60;
        v27 = v73;
        v55 = 0;
        goto LABEL_30;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v48);
      v32 = v61;
      v31 = i;
    }
LABEL_24:
    if ( v34 > v32 - v79 )
      goto LABEL_26;
  }
  MiDereferencePageRuns(v58);
  MiReleasePteCopyList(&v74);
  if ( ((v32 | a5) & 0x1FF) != 0 )
    goto LABEL_44;
  v40 = a5 >> 9;
  v41 = (v32 >> 9) & 0x1F;
  v42 = (volatile signed __int32 *)(qword_14034FBA8[0] + 4 * (v32 >> 14));
  if ( v41 + (a5 >> 9) > 0x20 )
  {
    if ( v41 )
    {
      v52 = (v32 >> 9) & 0x1F;
      _InterlockedOr(v42, ((1 << (32 - v52)) - 1) << v41);
      v32 = v61;
      v40 -= (unsigned int)(32 - v52);
      ++v42;
    }
    if ( v40 >= 0x20 )
    {
      v53 = v40 >> 5;
      v40 += -32LL * (v40 >> 5);
      do
      {
        *v42++ = -1;
        --v53;
      }
      while ( v53 );
    }
    if ( v40 )
    {
      v43 = (1 << v40) - 1;
LABEL_60:
      _InterlockedOr(v42, v43);
      v32 = v61;
    }
  }
  else
  {
    if ( v40 != 32 )
    {
      v43 = ((1 << v40) - 1) << v41;
      goto LABEL_60;
    }
    *v42 = -1;
  }
LABEL_44:
  MiConvertContiguousPages(v33, a5, a6);
  if ( (v15 & 0x40000000) == 0 )
  {
    if ( (v15 & 0x200000) != 0 )
      v16 = 2;
    v38 = v33 + 48 * a5;
    do
    {
      *(_QWORD *)(v33 + 40) &= ~0x200000000000000uLL;
      *(_QWORD *)v33 = 0LL;
      MiSetPfnOwnedAndActive(v33, -8LL, a6, v16);
      v33 += 48LL;
    }
    while ( v33 != v38 );
  }
  result = 0LL;
  *v72 = v32;
  return result;
}
