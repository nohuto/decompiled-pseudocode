/*
 * XREFs of KeStartAllProcessors @ 0x1407D3888
 * Callers:
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 * Callees:
 *     MmCreateKernelStack @ 0x140022090 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x140022520 (MmDeleteKernelStack.c)
 *     KiQueryProcessorNode @ 0x140163650 (KiQueryProcessorNode.c)
 *     HvlStartBootLogicalProcessors @ 0x140163754 (HvlStartBootLogicalProcessors.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     xHalTscSynchronization @ 0x1401E48A0 (xHalTscSynchronization.c)
 *     KiRemoveProcessorFromGroupDatabase @ 0x14020081C (KiRemoveProcessorFromGroupDatabase.c)
 *     MmDeleteProcessor @ 0x14020DB08 (MmDeleteProcessor.c)
 *     ExDeletePoolTagTable @ 0x14026219C (ExDeletePoolTagTable.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     KiComputeProcessorDataSize @ 0x1403F7128 (KiComputeProcessorDataSize.c)
 *     KiConfigureSchedulingInformation @ 0x1403FA120 (KiConfigureSchedulingInformation.c)
 *     KiInitializePrcbContext @ 0x1403FA5A8 (KiInitializePrcbContext.c)
 *     KiUpdateProcessorCount @ 0x1403FA6B8 (KiUpdateProcessorCount.c)
 *     KiConfigureProcessorBlock @ 0x1403FA778 (KiConfigureProcessorBlock.c)
 *     MmInitializeProcessor @ 0x1403FA854 (MmInitializeProcessor.c)
 *     KiUnshadowProcessorAllocation @ 0x140402B8C (KiUnshadowProcessorAllocation.c)
 *     MmFreeIndependentPages @ 0x14055E3E4 (MmFreeIndependentPages.c)
 *     MmAllocateIndependentPages @ 0x1405610B8 (MmAllocateIndependentPages.c)
 *     MmAllocateIsrStack @ 0x14059A694 (MmAllocateIsrStack.c)
 *     KeInitializeTimerTable @ 0x14059A850 (KeInitializeTimerTable.c)
 *     HvlInitializeProcessor @ 0x14059A970 (HvlInitializeProcessor.c)
 *     KxInitializeProcessorState @ 0x14059A9C8 (KxInitializeProcessorState.c)
 *     ExCreatePoolTagTable @ 0x14059AD08 (ExCreatePoolTagTable.c)
 *     KiResetBootProcessorApicMask @ 0x1405C7420 (KiResetBootProcessorApicMask.c)
 *     HvlDeleteProcessor @ 0x140670600 (HvlDeleteProcessor.c)
 *     KiAllocateCpuSetData @ 0x1407D36D0 (KiAllocateCpuSetData.c)
 */

__int64 KeStartAllProcessors()
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
  unsigned int v59; // ecx
  __int64 result; // rax
  size_t BugCheckParameter4; // [rsp+28h] [rbp-E0h]
  int v62; // [rsp+78h] [rbp-90h] BYREF
  int v63; // [rsp+7Ch] [rbp-8Ch]
  unsigned int Size; // [rsp+80h] [rbp-88h]
  unsigned int Size_4; // [rsp+84h] [rbp-84h] BYREF
  int v66; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v67; // [rsp+8Ch] [rbp-7Ch]
  int v68; // [rsp+90h] [rbp-78h] BYREF
  __int64 KernelStack; // [rsp+98h] [rbp-70h]
  __int64 v70; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v71; // [rsp+A8h] [rbp-60h]
  __int64 IndependentPages; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v73[182]; // [rsp+B8h] [rbp-50h] BYREF

  Pcr = KeGetPcr();
  Base = Pcr->Prcb.ProcessorState.SpecialRegisters.Idtr.Base;
  LODWORD(KiBootProcessorIdtSize) = Pcr->Prcb.ProcessorState.SpecialRegisters.Idtr.Limit + 1;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)KiBootProcessorIdtSize, 0x2020654Bu);
  KiBootProcessorIdt = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_90;
  memmove(PoolWithTag, Base, (unsigned int)KiBootProcessorIdtSize);
  if ( (unsigned int)KeRegisteredProcessors > 0x280 )
    KeRegisteredProcessors = 640;
  KiBarrierWait = 1;
  memset(v73, 0, sizeof(v73));
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
    goto LABEL_90;
  }
  MaximumProcessorCount = HalQueryMaximumProcessorCount();
  LogicalProcessorsPerCore = CurrentPrcb->LogicalProcessorsPerCore;
  CoresPerPhysicalProcessor = CurrentPrcb->CoresPerPhysicalProcessor;
  v14 = MaximumProcessorCount;
  if ( MaximumProcessorCount > 0x280 )
    v14 = 640;
  v67 = MaximumProcessorCount;
  v15 = KeRegisteredProcessors * CoresPerPhysicalProcessor * LogicalProcessorsPerCore;
  if ( v14 > v15 )
    v14 = v15;
  if ( KeNumprocSpecified && KeNumprocSpecified < v14 )
    v14 = KeNumprocSpecified;
  if ( !KeDynamicPartitioningSupported && v14 > v7 )
    v14 = v7;
  if ( !(unsigned int)KiAllocateCpuSetData(v14) )
    goto LABEL_90;
  v16 = KiComputeProcessorDataSize(v14, &v66, &v68);
  Size = v16;
  if ( (int)HvlStartBootLogicalProcessors() < 0 )
    goto LABEL_90;
  v17 = 0;
  while ( (unsigned int)KeNumberProcessors_0 < v7 )
  {
    Size_4 = -1;
    ++v9;
    LOWORD(v62) = -1;
    if ( !(unsigned int)KiQueryProcessorNode(v9, &Size_4, (unsigned __int16 *)&v62) )
    {
      ++v17;
      IndependentPages = MmAllocateIndependentPages(v16, (unsigned __int16)v62, v18);
      v20 = IndependentPages;
      if ( !IndependentPages )
        goto LABEL_90;
      if ( !ExCreatePoolTagTable(v17, v62, v19) )
        goto LABEL_90;
      KernelStack = MmCreateKernelStack(0, v62, 0LL);
      v21 = KernelStack;
      if ( !KernelStack )
        goto LABEL_90;
      v23 = MmCreateKernelStack(0, v62, 0LL);
      if ( !v23 )
        goto LABEL_90;
      v70 = 0LL;
      if ( !MmAllocateIsrStack(&v70, v62, v22) )
        goto LABEL_90;
      v71 = KeNodeBlock[(unsigned __int16)v62];
      LODWORD(BugCheckParameter4) = Size;
      v24 = (struct _KPRCB *)KxInitializeProcessorState(
                               v73,
                               (_QWORD *)KeLoaderBlock_0,
                               v20,
                               0,
                               BugCheckParameter4,
                               (unsigned __int16)v62,
                               v17,
                               v14,
                               v66,
                               v68,
                               v21,
                               v23,
                               v70);
      if ( !v24 )
        goto LABEL_90;
      v25 = (_OWORD *)KeNodeBlock[(unsigned __int16)v62];
      if ( HvlInitializeProcessor((__int64)v24)
        || !(unsigned int)MmInitializeProcessor((__int64)v24, v26, v27)
        || (int)KiInitializePrcbContext((__int64)v24, (unsigned __int16)v62) < 0
        || (int)KeInitializeTimerTable((__int64)v24) < 0 )
      {
        goto LABEL_90;
      }
      if ( !(unsigned __int8)HalStartNextProcessor(v73, v17, Size_4) )
      {
        KiRemoveProcessorFromGroupDatabase((__int64)v24);
        v38 = v71;
        v39 = 2LL;
        v40 = (_OWORD *)v71;
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
        KeNodeBlock[(unsigned __int16)v62] = v38;
        HvlDeleteProcessor(v24, v38, (MEMORY_CACHING_TYPE)128);
        MmDeleteProcessor((__int64)v24);
        ExDeletePoolTagTable(v17);
        KiUnshadowProcessorAllocation((__int64)v24, (__int64)v73);
        MmFreeIndependentPages(IndependentPages, Size);
        MmDeleteKernelStack(KernelStack, 0LL);
        MmDeleteKernelStack(v23, 0LL);
        break;
      }
      while ( *(_QWORD *)(KeLoaderBlock_0 + 136) )
        _mm_pause();
      KiConfigureProcessorBlock((__int64)v24);
      KiUpdateProcessorCount();
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
LABEL_90:
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
          goto LABEL_90;
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
      (void *)(0x140000000LL + 8LL * (unsigned __int16)v28 + 4080704),
      0,
      8LL * (64 - (unsigned int)(unsigned __int16)v28));
  v44 = 0;
  IsHyperThreadingEnabled = HalIsHyperThreadingEnabled(v28, v43, v29, v30);
  LOBYTE(v63) = IsHyperThreadingEnabled;
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
      IsHyperThreadingEnabled = v63;
    }
  }
  off_140321870();
  if ( !KeMaximumProcessors )
  {
    if ( KeDynamicPartitioningSupported && v67 > (unsigned int)KeNumberProcessors_0 )
    {
      v59 = KeRegisteredProcessors
          * *(unsigned __int8 *)(KiProcessorBlock[0] + 1598)
          * *(unsigned __int8 *)(KiProcessorBlock[0] + 1599);
      KeMaximumProcessors = v59;
      if ( v59 > KiMaximumGroupSize * (unsigned int)(unsigned __int16)KiMaximumGroups )
      {
        v59 = KiMaximumGroupSize * (unsigned __int16)KiMaximumGroups;
        KeMaximumProcessors = v59;
      }
      if ( v59 > v67 )
        KeMaximumProcessors = v67;
    }
    else
    {
      KeMaximumProcessors = KeNumberProcessors_0;
    }
  }
  result = 0LL;
  KiBootProcessorsStarted = 1;
  KiBarrierWait = 0;
  return result;
}
