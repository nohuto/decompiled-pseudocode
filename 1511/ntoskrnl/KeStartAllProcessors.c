/*
 * XREFs of KeStartAllProcessors @ 0x140762F20
 * Callers:
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 * Callees:
 *     MmCreateKernelStack @ 0x14002CB50 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x14002CF40 (MmDeleteKernelStack.c)
 *     KiQueryProcessorNode @ 0x1401369B8 (KiQueryProcessorNode.c)
 *     HvlStartBootLogicalProcessors @ 0x140136B70 (HvlStartBootLogicalProcessors.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     xHalTscSynchronization @ 0x1401AE028 (xHalTscSynchronization.c)
 *     KiRemoveProcessorFromGroupDatabase @ 0x1401C45A0 (KiRemoveProcessorFromGroupDatabase.c)
 *     MmDeleteProcessor @ 0x1401CE820 (MmDeleteProcessor.c)
 *     ExDeletePoolTagTable @ 0x140212AD8 (ExDeletePoolTagTable.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     KiComputeProcessorDataSize @ 0x1403A6C04 (KiComputeProcessorDataSize.c)
 *     KiConfigureSchedulingInformation @ 0x1403A8B9C (KiConfigureSchedulingInformation.c)
 *     KiInitializePrcbContext @ 0x1403A8F2C (KiInitializePrcbContext.c)
 *     KiUpdateProcessorCount @ 0x1403A903C (KiUpdateProcessorCount.c)
 *     KiConfigureProcessorBlock @ 0x1403A90CC (KiConfigureProcessorBlock.c)
 *     MmInitializeProcessor @ 0x1403A91A8 (MmInitializeProcessor.c)
 *     KiUnshadowProcessorAllocation @ 0x1403B1AC0 (KiUnshadowProcessorAllocation.c)
 *     MmFreeIndependentPages @ 0x1403C5554 (MmFreeIndependentPages.c)
 *     MmAllocateIndependentPages @ 0x1403CBDCC (MmAllocateIndependentPages.c)
 *     MmAllocateIsrStack @ 0x14052F6BC (MmAllocateIsrStack.c)
 *     KeInitializeTimerTable @ 0x14052F834 (KeInitializeTimerTable.c)
 *     HvlInitializeProcessor @ 0x14052F954 (HvlInitializeProcessor.c)
 *     KxInitializeProcessorState @ 0x14052F9AC (KxInitializeProcessorState.c)
 *     ExCreatePoolTagTable @ 0x14052FCCC (ExCreatePoolTagTable.c)
 *     KiResetBootProcessorApicMask @ 0x14054F674 (KiResetBootProcessorApicMask.c)
 *     HvlDeleteProcessor @ 0x1405F683C (HvlDeleteProcessor.c)
 *     KiAllocateCpuSetData @ 0x140763C28 (KiAllocateCpuSetData.c)
 */

char KeStartAllProcessors()
{
  KPCR *Pcr; // rax
  void *Base; // rbx
  PVOID PoolWithTag; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // edi
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v9; // r12d
  unsigned __int64 v10; // r8
  unsigned int MaximumProcessorCount; // eax
  int LogicalProcessorsPerCore; // edx
  int CoresPerPhysicalProcessor; // ecx
  unsigned int v14; // ebx
  unsigned int v15; // edx
  unsigned int v16; // esi
  unsigned int v17; // r15d
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r8
  __int64 v20; // r14
  __int64 v21; // rsi
  unsigned __int64 v22; // r8
  __int64 v23; // r13
  struct _KPRCB *v24; // rsi
  _OWORD *v25; // r14
  __int64 v26; // rdx
  unsigned __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned int v31; // edi
  _OWORD *v32; // rbx
  PVOID v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rax
  _OWORD *v36; // rcx
  __int128 v37; // xmm1
  SIZE_T v38; // rdx
  __int64 v39; // rcx
  _OWORD *v40; // rax
  __int128 v41; // xmm1
  unsigned __int64 v42; // rax
  __int64 v43; // rdx
  unsigned int v44; // esi
  char IsHyperThreadingEnabled; // r15
  unsigned int v46; // r8d
  __int64 v47; // r11
  __int64 v48; // rdi
  __int64 v49; // r10
  int v50; // r14d
  unsigned int i; // r9d
  __int64 v52; // rdx
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // rcx
  unsigned int v58; // ebx
  unsigned int v59; // eax
  unsigned int v60; // ecx
  size_t BugCheckParameter4; // [rsp+28h] [rbp-E0h]
  int v63; // [rsp+78h] [rbp-90h] BYREF
  int v64; // [rsp+7Ch] [rbp-8Ch]
  unsigned int Size; // [rsp+80h] [rbp-88h]
  unsigned int Size_4; // [rsp+84h] [rbp-84h] BYREF
  int v67; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v68; // [rsp+8Ch] [rbp-7Ch]
  int v69; // [rsp+90h] [rbp-78h] BYREF
  __int64 KernelStack; // [rsp+98h] [rbp-70h]
  __int64 v71; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v72; // [rsp+A8h] [rbp-60h]
  __int64 IndependentPages; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v74[182]; // [rsp+B8h] [rbp-50h] BYREF

  Pcr = KeGetPcr();
  Base = Pcr->Prcb.ProcessorState.SpecialRegisters.Idtr.Base;
  LODWORD(KiBootProcessorIdtSize) = Pcr->Prcb.ProcessorState.SpecialRegisters.Idtr.Limit + 1;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)KiBootProcessorIdtSize, 0x2020654Bu);
  KiBootProcessorIdt = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_92;
  memmove(PoolWithTag, Base, (unsigned int)KiBootProcessorIdtSize);
  if ( (unsigned int)KeRegisteredProcessors > 0x280 )
    KeRegisteredProcessors = 640;
  KiBarrierWait = 1;
  memset(v74, 0, sizeof(v74));
  if ( !(unsigned __int8)HalIsHyperThreadingEnabled(v4, v3, v5, v6) )
    KiResetBootProcessorApicMask();
  v7 = HalEnumerateProcessors((unsigned int)KeRegisteredProcessors);
  if ( KeNumprocSpecified && KeNumprocSpecified < v7 )
    v7 = KeNumprocSpecified;
  if ( KeBootprocSpecified && KeBootprocSpecified < v7 )
    v7 = KeBootprocSpecified;
  CurrentPrcb = KeGetCurrentPrcb();
  v9 = 0;
  if ( (int)KiInitializePrcbContext((__int64)CurrentPrcb, 0LL) < 0
    || !MmAllocateIsrStack(&CurrentPrcb->IsrStack, 0, v10) )
  {
    goto LABEL_92;
  }
  MaximumProcessorCount = HalQueryMaximumProcessorCount();
  LogicalProcessorsPerCore = CurrentPrcb->LogicalProcessorsPerCore;
  CoresPerPhysicalProcessor = CurrentPrcb->CoresPerPhysicalProcessor;
  v14 = MaximumProcessorCount;
  if ( MaximumProcessorCount > 0x280 )
    v14 = 640;
  v68 = MaximumProcessorCount;
  v15 = KeRegisteredProcessors * CoresPerPhysicalProcessor * LogicalProcessorsPerCore;
  if ( v14 > v15 )
    v14 = v15;
  if ( KeNumprocSpecified && KeNumprocSpecified < v14 )
    v14 = KeNumprocSpecified;
  if ( !KeDynamicPartitioningSupported && v14 > v7 )
    v14 = v7;
  if ( !(unsigned int)KiAllocateCpuSetData(v14) )
    goto LABEL_92;
  v16 = KiComputeProcessorDataSize(v14, &v67, (unsigned int *)&v69);
  Size = v16;
  if ( (int)HvlStartBootLogicalProcessors() < 0 )
    goto LABEL_92;
  v17 = 0;
  while ( (unsigned int)KeNumberProcessors_0 < v7 )
  {
    Size_4 = -1;
    ++v9;
    LOWORD(v63) = -1;
    if ( !(unsigned int)KiQueryProcessorNode(v9, &Size_4, (unsigned __int16 *)&v63) )
    {
      ++v17;
      IndependentPages = MmAllocateIndependentPages(v16, (unsigned __int16)v63, v18);
      v20 = IndependentPages;
      if ( !IndependentPages )
        goto LABEL_92;
      if ( !ExCreatePoolTagTable(v17, v63, v19) )
        goto LABEL_92;
      KernelStack = MmCreateKernelStack(0, v63, 0LL);
      v21 = KernelStack;
      if ( !KernelStack )
        goto LABEL_92;
      v23 = MmCreateKernelStack(0, v63, 0LL);
      if ( !v23 )
        goto LABEL_92;
      v71 = 0LL;
      if ( !MmAllocateIsrStack(&v71, v63, v22) )
        goto LABEL_92;
      v72 = KeNodeBlock[(unsigned __int16)v63];
      LODWORD(BugCheckParameter4) = Size;
      v24 = (struct _KPRCB *)KxInitializeProcessorState(
                               v74,
                               (_QWORD *)KeLoaderBlock_0,
                               v20,
                               0,
                               BugCheckParameter4,
                               (unsigned __int16)v63,
                               v17,
                               v14,
                               v67,
                               v69,
                               v21,
                               v23,
                               v71);
      if ( !v24 )
        goto LABEL_92;
      v25 = (_OWORD *)KeNodeBlock[(unsigned __int16)v63];
      if ( HvlInitializeProcessor((__int64)v24)
        || !(unsigned int)MmInitializeProcessor((__int64)v24, v26, v27)
        || (int)KiInitializePrcbContext((__int64)v24, (unsigned __int16)v63) < 0
        || (int)KeInitializeTimerTable((__int64)v24) < 0 )
      {
        goto LABEL_92;
      }
      if ( !(unsigned __int8)HalStartNextProcessor(v74, v17, Size_4) )
      {
        KiRemoveProcessorFromGroupDatabase((__int64)v24);
        v38 = v72;
        v39 = 2LL;
        v40 = (_OWORD *)v72;
        do
        {
          *v40 = *v25;
          v40[1] = v25[1];
          v40[2] = v25[2];
          v40[3] = v25[3];
          v40[4] = v25[4];
          v40[5] = v25[5];
          v40[6] = v25[6];
          v40 += 8;
          v41 = v25[7];
          v25 += 8;
          *(v40 - 1) = v41;
          --v39;
        }
        while ( v39 );
        KeNodeBlock[(unsigned __int16)v63] = v38;
        HvlDeleteProcessor(v24, v38, (MEMORY_CACHING_TYPE)128);
        MmDeleteProcessor((__int64)v24);
        ExDeletePoolTagTable(v17);
        KiUnshadowProcessorAllocation((__int64)v24, (__int64)v74);
        MmFreeIndependentPages(IndependentPages, Size);
        MmDeleteKernelStack(KernelStack, 0);
        MmDeleteKernelStack(v23, 0);
        break;
      }
      while ( *(_QWORD *)(KeLoaderBlock_0 + 136) )
        _mm_pause();
      KiConfigureProcessorBlock((__int64)v24);
      KiUpdateProcessorCount(v17, v24->Group);
      v16 = Size;
    }
    if ( v9 >= 0x27F )
      break;
  }
  v28 = (unsigned __int16)KeNumberNodes;
  v29 = 0x5555555555555555LL;
  v30 = 0xF0F0F0F0F0F0F0FLL;
  if ( (unsigned __int16)KeNumberNodes <= 1u )
  {
    v42 = *(_QWORD *)(KeNodeBlock[0] + 136) - ((*(_QWORD *)(KeNodeBlock[0] + 136) >> 1) & 0x5555555555555555LL);
    if ( (unsigned int)((0x101010101010101LL
                       * (((v42 & 0x3333333333333333LL)
                         + ((v42 >> 2) & 0x3333333333333333LL)
                         + (((v42 & 0x3333333333333333LL) + ((v42 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 == (_DWORD)KeNumberProcessors_0 )
    {
      v28 = (unsigned __int16)KeNumberNodes;
      goto LABEL_59;
    }
LABEL_92:
    KeBugCheckEx(0x32u, 0LL, 0LL, 0x14uLL, 0LL);
  }
  v31 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      v32 = (_OWORD *)((char *)&KiNodeInit + 256 * (unsigned __int64)v31);
      if ( (_OWORD *)KeNodeBlock[v31] == v32 )
      {
        v33 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x540uLL, 0x2020654Bu);
        v34 = (__int64)v33;
        if ( !v33 )
          goto LABEL_92;
        memset(v33, 0, 0x540uLL);
        v35 = 2LL;
        v36 = (_OWORD *)v34;
        do
        {
          *v36 = *v32;
          v36[1] = v32[1];
          v36[2] = v32[2];
          v36[3] = v32[3];
          v36[4] = v32[4];
          v36[5] = v32[5];
          v36[6] = v32[6];
          v36 += 8;
          v37 = v32[7];
          v32 += 8;
          *(v36 - 1) = v37;
          --v35;
        }
        while ( v35 );
        v28 = (unsigned __int16)KeNumberNodes;
        KeNodeBlock[v31] = v34;
      }
      ++v31;
    }
    while ( v31 < (unsigned __int16)v28 );
  }
LABEL_59:
  v43 = (unsigned __int16)v28;
  if ( (unsigned __int16)v28 < 0x40u )
    memset(
      (void *)(0x140000000LL + 8LL * (unsigned __int16)v28 + 3757120),
      0,
      8LL * (64 - (unsigned int)(unsigned __int16)v28));
  v44 = 0;
  IsHyperThreadingEnabled = HalIsHyperThreadingEnabled(v28, v43, v29, v30);
  LOBYTE(v64) = IsHyperThreadingEnabled;
  for ( Size = 0; v44 < (unsigned __int16)KeNumberNodes; Size = ++v44 )
  {
    v46 = KeNumberProcessors_0;
    if ( (unsigned int)KeNumberProcessors_0 > 0x40 )
      v46 = 64;
    v47 = KeNodeBlock[v44];
    KernelStack = v47;
    v48 = *(_QWORD *)(v47 + 136);
    v49 = v48;
    if ( v48 )
    {
      v50 = *(unsigned __int16 *)(v47 + 144);
      for ( i = 0; i < 0x40; ++i )
      {
        if ( !v49 )
          break;
        if ( _bittest64(&v49, i) )
        {
          v52 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v50 + i]];
          if ( IsHyperThreadingEnabled )
          {
            v49 &= ~*(_QWORD *)(v52 + 24792);
            v53 = *(_QWORD *)(v52 + 24792) - ((*(_QWORD *)(v52 + 24792) >> 1) & 0x5555555555555555LL);
            v54 = ((v53 & 0x3333333333333333LL)
                 + ((v53 >> 2) & 0x3333333333333333LL)
                 + (((v53 & 0x3333333333333333LL) + ((v53 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL;
            v55 = 0x101010101010101LL;
          }
          else
          {
            v56 = v48 & *(_QWORD *)(v52 + 8LL * *(unsigned __int8 *)(v52 + 1616) + 24608);
            v49 &= ~v56;
            v55 = (((v56 - ((v56 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + (((v56 - ((v56 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                 + ((((v56 - ((v56 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                   + (((v56 - ((v56 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL;
            v54 = 0x101010101010101LL;
          }
          v57 = (v55 * v54) >> 56;
          if ( (unsigned int)v57 < v46 )
            v46 = v57;
        }
      }
      v44 = Size;
      v58 = 0;
      *(_BYTE *)(KernelStack + 150) = v46;
      do
      {
        if ( !v48 )
          break;
        if ( _bittest64(&v48, v58) )
        {
          v48 &= ~(1LL << v58);
          KiConfigureSchedulingInformation(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v50 + v58]], 0);
        }
        ++v58;
      }
      while ( v58 < 0x40 );
      IsHyperThreadingEnabled = v64;
    }
  }
  LOBYTE(v59) = off_1402D2720();
  if ( !KeMaximumProcessors )
  {
    if ( KeDynamicPartitioningSupported && v68 > (unsigned int)KeNumberProcessors_0 )
    {
      v59 = KiMaximumGroupSize * (unsigned __int16)KiMaximumGroups;
      v60 = KeRegisteredProcessors
          * *(unsigned __int8 *)(KiProcessorBlock[0] + 1598)
          * *(unsigned __int8 *)(KiProcessorBlock[0] + 1599);
      KeMaximumProcessors = v60;
      if ( v60 > v59 )
      {
        v60 = KiMaximumGroupSize * (unsigned __int16)KiMaximumGroups;
        KeMaximumProcessors = v60;
      }
      if ( v60 > v68 )
        KeMaximumProcessors = v68;
    }
    else
    {
      LOBYTE(v59) = KeNumberProcessors_0;
      KeMaximumProcessors = KeNumberProcessors_0;
    }
  }
  if ( !KeDynamicPartitioningSupported )
  {
    LOBYTE(v59) = KiActiveGroups;
    KiMaximumGroups = KiActiveGroups;
  }
  KiBarrierWait = 0;
  return v59;
}
