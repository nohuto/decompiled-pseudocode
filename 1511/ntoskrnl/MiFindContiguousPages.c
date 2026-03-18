/*
 * XREFs of MiFindContiguousPages @ 0x1400BE4E0
 * Callers:
 *     MiWaitForInPageComplete @ 0x140039E00 (MiWaitForInPageComplete.c)
 *     MiFindPagesForMdl @ 0x1400BCF40 (MiFindPagesForMdl.c)
 *     MiAllocateContiguousMemory @ 0x1400BD4F4 (MiAllocateContiguousMemory.c)
 *     MiRebuildLargePage @ 0x1400BE1B0 (MiRebuildLargePage.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1401D2094 (MmMarkPhysicalMemoryAsBad.c)
 *     MiUseLargeDriverPage @ 0x1403CC26C (MiUseLargeDriverPage.c)
 *     MiAllocateDriverPage @ 0x140484298 (MiAllocateDriverPage.c)
 *     MmRemovePhysicalMemory @ 0x1406230A8 (MmRemovePhysicalMemory.c)
 *     MiFindLargePageMemory @ 0x14062B53C (MiFindLargePageMemory.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     MiPageToNode @ 0x140071380 (MiPageToNode.c)
 *     MiClaimPhysicalRun @ 0x1400720B0 (MiClaimPhysicalRun.c)
 *     MiChargeResident @ 0x1400AA260 (MiChargeResident.c)
 *     MiCollapseRunTopDown @ 0x1400BE9E8 (MiCollapseRunTopDown.c)
 *     MiPfnsWorthTrying @ 0x1400BF370 (MiPfnsWorthTrying.c)
 *     MiReferencePageRuns @ 0x1400BFDB4 (MiReferencePageRuns.c)
 *     MiCreatePteCopyList @ 0x1400BFE3C (MiCreatePteCopyList.c)
 *     MiReleasePteCopyList @ 0x1400BFE9C (MiReleasePteCopyList.c)
 *     MiDereferencePageRuns @ 0x1400BFEC0 (MiDereferencePageRuns.c)
 *     MiConvertContiguousPages @ 0x1400BFF60 (MiConvertContiguousPages.c)
 *     MiSetPfnOwnedAndActive @ 0x1400C0054 (MiSetPfnOwnedAndActive.c)
 *     MiEmptyKernelStackCache @ 0x1400C1C3C (MiEmptyKernelStackCache.c)
 *     MiQueueWorkingSetRequest @ 0x14011B7BC (MiQueueWorkingSetRequest.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MiFindLargeNodePages @ 0x1401D325C (MiFindLargeNodePages.c)
 */

__int64 __fastcall MiFindContiguousPages(
        unsigned __int64 a1,
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
  signed int v11; // r14d
  unsigned __int8 CurrentIrql; // bl
  unsigned int v14; // r12d
  unsigned int v15; // r13d
  unsigned int *v16; // rax
  unsigned int v17; // r10d
  __int64 v18; // rdi
  int *v19; // r8
  __int64 v20; // r9
  __int64 v21; // rsi
  unsigned int *v22; // r9
  unsigned __int64 v23; // rax
  unsigned int v24; // ebx
  unsigned __int8 *v25; // r11
  unsigned __int8 *v26; // rcx
  int v27; // eax
  unsigned int v28; // r10d
  __int64 v29; // rax
  __int64 v30; // rsi
  unsigned __int64 v31; // rdi
  __int64 v32; // r14
  unsigned __int64 v33; // rbx
  BOOL v34; // edx
  unsigned int v35; // ebx
  __int64 result; // rax
  unsigned __int64 v37; // rbx
  int v38; // eax
  unsigned __int64 v39; // rdx
  __int64 v40; // r9
  volatile signed __int32 *v41; // r10
  unsigned int v42; // eax
  unsigned __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  unsigned int v46; // ecx
  unsigned __int8 v47; // al
  unsigned __int16 *v48; // rcx
  void *KernelStack; // rcx
  int v50; // r8d
  unsigned __int64 v51; // rcx
  BOOL v52; // [rsp+40h] [rbp-C0h]
  unsigned int v53; // [rsp+44h] [rbp-BCh]
  __int64 v54; // [rsp+48h] [rbp-B8h]
  unsigned int v55; // [rsp+50h] [rbp-B0h]
  int *v56; // [rsp+58h] [rbp-A8h]
  unsigned __int8 *v57; // [rsp+60h] [rbp-A0h]
  unsigned __int16 v58; // [rsp+68h] [rbp-98h]
  unsigned __int64 v59; // [rsp+70h] [rbp-90h] BYREF
  unsigned int *v60; // [rsp+78h] [rbp-88h]
  unsigned int v61; // [rsp+80h] [rbp-80h]
  int v62; // [rsp+84h] [rbp-7Ch]
  int v63; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int16 *v64; // [rsp+90h] [rbp-70h]
  int v65; // [rsp+98h] [rbp-68h]
  int v66; // [rsp+9Ch] [rbp-64h]
  int v67; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v68; // [rsp+A8h] [rbp-58h]
  __int64 v69; // [rsp+B0h] [rbp-50h]
  unsigned __int64 *v70; // [rsp+B8h] [rbp-48h]
  unsigned __int8 *v71; // [rsp+C0h] [rbp-40h]
  int v72; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v73; // [rsp+CCh] [rbp-34h]
  __int64 v74; // [rsp+D4h] [rbp-2Ch]
  int v75; // [rsp+DCh] [rbp-24h]
  unsigned __int16 *v76; // [rsp+E0h] [rbp-20h]
  __int64 v77; // [rsp+E8h] [rbp-18h] BYREF
  __int64 i; // [rsp+F0h] [rbp-10h]
  __int64 v79; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v80; // [rsp+100h] [rbp+0h]
  __int64 v81; // [rsp+108h] [rbp+8h]
  unsigned __int64 v82; // [rsp+110h] [rbp+10h]
  char v83[8]; // [rsp+118h] [rbp+18h] BYREF
  void *v84; // [rsp+120h] [rbp+20h] BYREF
  __int64 v85; // [rsp+128h] [rbp+28h]
  _QWORD v86[2]; // [rsp+130h] [rbp+30h] BYREF

  v11 = a7;
  v70 = a10;
  v73 = 0LL;
  v74 = 0LL;
  v75 = 0;
  v68 = a3;
  v54 = a1;
  v55 = a7;
  v72 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    return 3221225659LL;
  v14 = a9;
  v58 = *(_WORD *)a1;
  if ( CurrentIrql == 2 )
    v14 = a9 | 8;
  v15 = 1;
  v66 = v14 & 0x20000000;
  if ( (v14 & 0x20000000) == 0 )
  {
    if ( !(unsigned int)MiChargeCommit(a1, a5, 1uLL) )
      return 3221225773LL;
    v38 = MiChargeResident((int *)v54, a5, 0LL);
    a1 = v54;
    if ( !v38 )
    {
      MiReturnCommit(v54, a5);
      return 3221225626LL;
    }
    if ( (int *)v54 == MiSystemPartition )
      _InterlockedExchangeAdd64(&qword_1402FF4C0, a5);
  }
  if ( (v14 & 0x40) != 0 )
  {
    if ( a6 == 1 )
    {
      if ( (int)MiFindLargeNodePages(a1, a7, v14, &v59) >= 0 )
      {
        *v70 = v59;
        return 0LL;
      }
      v35 = -1073741801;
    }
    else
    {
      v35 = -1073741811;
    }
    goto LABEL_34;
  }
  if ( (__int64)a5 > *(_QWORD *)(a1 + 5888) - 160LL )
  {
    v35 = -1073741670;
    goto LABEL_34;
  }
  v67 = v14 & 0x10000000;
  if ( (v14 & 0x10000000) == 0 )
  {
    MiCreatePteCopyList(a5, 64LL, &v72);
    if ( !(_DWORD)v73 )
    {
      v35 = -1073741670;
      goto LABEL_34;
    }
    a1 = v54;
  }
  v52 = 0;
  if ( (v14 & 0xA000008) == 0x8000000 && (_DWORD)InitializationPhase )
    v52 = CurrentIrql != 2;
  if ( a7 >= (unsigned __int16)KeNumberNodes )
  {
    v11 = a7 | 0x80000000;
    v55 = a7 | 0x80000000;
  }
  v62 = 0;
  v16 = (unsigned int *)MiReferencePageRuns(a1, 1LL);
  v79 = a2;
  v17 = -1;
  v18 = v54;
  v19 = (int *)v16;
  v56 = (int *)v16;
  v20 = *v16 + 1LL;
  v81 = a4;
  v21 = *(_QWORD *)(v54 + 40);
  v22 = &v16[4 * v20];
  v76 = 0LL;
  v23 = v68;
  v64 = 0LL;
  v60 = v22;
  v80 = v68;
  v82 = a5;
  v69 = v21;
LABEL_14:
  v53 = v17;
  v24 = MmNumberOfChannels;
  v25 = 0LL;
  v57 = 0LL;
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    if ( v11 >= 0 )
    {
      v44 = (unsigned int)v11;
    }
    else
    {
      if ( v17 == -1 )
      {
        v43 = *(_QWORD *)(v18 + 5704);
        if ( v23 <= v43 )
          v43 = v23;
        v17 = MiPageToNode(v43, 0);
        v22 = v60;
        v25 = 0LL;
        v53 = v17;
        v64 = (unsigned __int16 *)((char *)qword_1402FE6B8 + 2 * v17 * (unsigned __int16)KeNumberNodes);
        v19 = v56;
        v76 = &v64[(unsigned __int16)KeNumberNodes];
      }
      v44 = v17;
    }
    v45 = v21 + 1336 * v44;
    if ( (*(_DWORD *)(v45 + 1296) & 1) != 0 )
    {
      v25 = (unsigned __int8 *)(v45 + 1317);
      v57 = (unsigned __int8 *)(v45 + 1317);
      if ( a8 >= 0 )
      {
        v46 = 0;
        if ( v24 )
        {
          do
          {
            if ( *v25 == a8 )
              break;
            ++v25;
            ++v46;
          }
          while ( v46 < v24 );
          v57 = v25;
        }
        v24 = 1;
      }
    }
  }
  v26 = &v25[v24];
  v71 = v26;
  while ( 1 )
  {
    v27 = *v19;
    if ( *v19 )
      break;
LABEL_29:
    v34 = v52;
LABEL_30:
    if ( !v25 )
      goto LABEL_31;
    v57 = ++v25;
    if ( v25 >= v26 )
    {
      if ( v53 != -1 )
      {
        v48 = v64 + 1;
        v64 = v48;
        if ( v48 != v76 )
        {
          v17 = *v48;
          v18 = v54;
          v23 = v68;
          v21 = v69;
          goto LABEL_14;
        }
      }
LABEL_31:
      if ( v62 != 1 || !v34 )
      {
        v35 = -1073741801;
        MiDereferencePageRuns(v19);
LABEL_34:
        MiReleasePteCopyList(&v72);
        if ( !v66 )
        {
          if ( (int *)v54 == MiSystemPartition )
          {
            MiReturnResidentAvailable(a5);
            _InterlockedExchangeAdd64(&qword_1402FF4D0, a5);
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v54 + 5952), a5);
          }
          MiReturnCommit(v54, a5);
        }
        return v35;
      }
      if ( (DWORD1(PerfGlobalGroupMask) & 0x100000) != 0 )
      {
        v84 = 0LL;
        v85 = 0LL;
        v86[1] = 16LL;
        KernelStack = KeGetCurrentThread()[1].KernelStack;
        v85 = a5 << 12;
        v84 = KernelStack;
        v86[0] = &v84;
        EtwTraceKernelEvent((int)v86, 1, 0x20100000u, 0x271u, 4200962);
        v19 = v56;
        v22 = v60;
      }
      v18 = v54;
      if ( byte_1402FF6D8 )
      {
        MiQueueWorkingSetRequest(v54, 32LL, v19, v22);
        v19 = v56;
        v22 = v60;
      }
      v21 = v69;
      v52 = 0;
      v17 = -1;
      v23 = v68;
      goto LABEL_14;
    }
  }
  v28 = v11 & 0x80000000;
  v61 = v11 & 0x80000000;
  while ( 1 )
  {
    v29 = (unsigned int)(v27 - 1);
    v65 = v29;
    if ( (v28 || *((unsigned __int8 *)v22 + 2 * v29) == v11)
      && (!v25 || *((unsigned __int8 *)v22 + 2 * v29 + 1) == *v25) )
    {
      break;
    }
LABEL_27:
    v27 = v65;
    if ( !v65 )
    {
      v26 = v71;
      goto LABEL_29;
    }
  }
  v77 = *(_QWORD *)&v19[4 * (unsigned int)v29 + 4];
  for ( i = *(_QWORD *)&v19[4 * (unsigned int)v29 + 6] + v77; ; i = v30 - v33 )
  {
    if ( !(unsigned int)MiCollapseRunTopDown(&v77) )
    {
LABEL_26:
      v25 = v57;
      v28 = v61;
      v22 = v60;
      v19 = v56;
      v11 = v55;
      goto LABEL_27;
    }
    v30 = i;
    v31 = i - v82;
    v62 = 1;
    v63 = 0;
    v59 = i - v82;
    v32 = 48 * (i - v82) - 0x58000000000LL;
    v33 = MiPfnsWorthTrying(v58, 48 * ((int)i - (int)v82), a5, v14, (__int64)&v63, (__int64)v83);
    if ( v33 )
      goto LABEL_24;
    if ( v63 == 1 )
      MiEmptyKernelStackCache();
    v33 = MiClaimPhysicalRun((int *)v54, v31, a5, (__int64)&v72, v14, 0xFFFFFFFF, 0LL);
    if ( !v33 )
      break;
    if ( v67 )
    {
      v47 = MiLockPageInline(v32);
      if ( (*(_QWORD *)(v32 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL && (*(_BYTE *)(v32 + 34) & 7) == 5 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v47);
        v11 = v55;
        v34 = 0;
        v19 = v56;
        v22 = v60;
        v25 = v57;
        v26 = v71;
        v52 = 0;
        goto LABEL_30;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v47);
      v31 = v59;
      v30 = i;
    }
LABEL_24:
    if ( v33 > v31 - v77 )
      goto LABEL_26;
  }
  MiDereferencePageRuns(v56);
  MiReleasePteCopyList(&v72);
  if ( ((v31 | a5) & 0x1FF) != 0 )
    goto LABEL_43;
  v39 = a5 >> 9;
  v40 = (v31 >> 9) & 0x1F;
  v41 = (volatile signed __int32 *)(qword_1402FF6E8[0] + 4 * (v31 >> 14));
  if ( v40 + (a5 >> 9) > 0x20 )
  {
    if ( v40 )
    {
      v50 = (v31 >> 9) & 0x1F;
      _InterlockedOr(v41, ((1 << (32 - v50)) - 1) << v40);
      v31 = v59;
      v39 -= (unsigned int)(32 - v50);
      ++v41;
    }
    if ( v39 >= 0x20 )
    {
      v51 = v39 >> 5;
      v39 += -32LL * (v39 >> 5);
      do
      {
        *v41++ = -1;
        --v51;
      }
      while ( v51 );
    }
    if ( v39 )
    {
      v42 = (1 << v39) - 1;
LABEL_58:
      _InterlockedOr(v41, v42);
      v31 = v59;
    }
  }
  else
  {
    if ( v39 != 32 )
    {
      v42 = ((1 << v39) - 1) << v40;
      goto LABEL_58;
    }
    *v41 = -1;
  }
LABEL_43:
  MiConvertContiguousPages(v32, a5, a6);
  if ( (v14 & 0x40000000) == 0 )
  {
    if ( (v14 & 0x200000) != 0 )
      v15 = 2;
    v37 = v32 + 48 * a5;
    do
    {
      *(_QWORD *)(v32 + 40) &= ~0x200000000000000uLL;
      *(_QWORD *)v32 = 0LL;
      MiSetPfnOwnedAndActive(v32, -8LL, a6, v15);
      v32 += 48LL;
    }
    while ( v32 != v37 );
  }
  result = 0LL;
  *v70 = v31;
  return result;
}
