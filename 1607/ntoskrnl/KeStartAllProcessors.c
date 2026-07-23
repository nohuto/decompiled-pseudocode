/*
 * XREFs of KeStartAllProcessors @ 0x140792860
 * Callers:
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 * Callees:
 *     MmCreateKernelStack @ 0x1400EF600 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x1400EF9D0 (MmDeleteKernelStack.c)
 *     KiQueryProcessorNode @ 0x140139A1C (KiQueryProcessorNode.c)
 *     HvlStartBootLogicalProcessors @ 0x140139CA4 (HvlStartBootLogicalProcessors.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     xHalTscSynchronization @ 0x1401BA75C (xHalTscSynchronization.c)
 *     KiRemoveProcessorFromGroupDatabase @ 0x1401D339C (KiRemoveProcessorFromGroupDatabase.c)
 *     MmDeleteProcessor @ 0x1401E18D0 (MmDeleteProcessor.c)
 *     ExDeletePoolTagTable @ 0x14022CB70 (ExDeletePoolTagTable.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     KiComputeProcessorDataSize @ 0x1403D2FF0 (KiComputeProcessorDataSize.c)
 *     KiConfigureSchedulingInformation @ 0x1403D3734 (KiConfigureSchedulingInformation.c)
 *     KiInitializePrcbContext @ 0x1403D3AC4 (KiInitializePrcbContext.c)
 *     KiUpdateProcessorCount @ 0x1403D3BD4 (KiUpdateProcessorCount.c)
 *     KiConfigureProcessorBlock @ 0x1403D3C64 (KiConfigureProcessorBlock.c)
 *     MmInitializeProcessor @ 0x1403D3D40 (MmInitializeProcessor.c)
 *     KiUnshadowProcessorAllocation @ 0x1403DE1D4 (KiUnshadowProcessorAllocation.c)
 *     MmFreeIndependentPages @ 0x1403E1F14 (MmFreeIndependentPages.c)
 *     MmAllocateIndependentPages @ 0x1404C8A68 (MmAllocateIndependentPages.c)
 *     MmAllocateIsrStack @ 0x14054E5A4 (MmAllocateIsrStack.c)
 *     KeInitializeTimerTable @ 0x14054E710 (KeInitializeTimerTable.c)
 *     HvlInitializeProcessor @ 0x14054E878 (HvlInitializeProcessor.c)
 *     KxInitializeProcessorState @ 0x14054E9DC (KxInitializeProcessorState.c)
 *     ExCreatePoolTagTable @ 0x14054ED40 (ExCreatePoolTagTable.c)
 *     KiResetBootProcessorApicMask @ 0x140581ED4 (KiResetBootProcessorApicMask.c)
 *     HvlDeleteProcessor @ 0x1406204A0 (HvlDeleteProcessor.c)
 *     KiAllocateCpuSetData @ 0x14079344C (KiAllocateCpuSetData.c)
 */

char KeStartAllProcessors()
{
  KPCR *Pcr; // rax
  void *Base; // rbx
  PVOID PoolWithTag; // rax
  unsigned int v3; // edi
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v5; // r12d
  unsigned __int64 v6; // r8
  unsigned int MaximumProcessorCount; // eax
  int LogicalProcessorsPerCore; // edx
  int CoresPerPhysicalProcessor; // ecx
  unsigned int v10; // ebx
  unsigned int v11; // edx
  unsigned int v12; // esi
  unsigned int v13; // r15d
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r8
  __int64 v16; // r14
  __int64 v17; // rsi
  unsigned __int64 v18; // r8
  __int64 v19; // r13
  struct _KPRCB *v20; // r14
  _OWORD *v21; // rsi
  __int64 v22; // rdx
  unsigned __int64 v23; // r8
  SIZE_T v24; // rdx
  __int64 v25; // rcx
  _OWORD *v26; // rax
  __int128 v27; // xmm1
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // r9
  unsigned __int64 v34; // r8
  unsigned int v35; // edi
  _OWORD *v36; // rbx
  PVOID v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rax
  _OWORD *v40; // rcx
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  unsigned __int64 v43; // rax
  __int64 v44; // rdx
  unsigned int v45; // esi
  char IsHyperThreadingEnabled; // r15
  unsigned int v47; // r8d
  __int64 v48; // r11
  __int64 v49; // rdi
  __int64 v50; // r10
  int v51; // r14d
  unsigned int i; // r9d
  __int64 v53; // rdx
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rdx
  unsigned __int64 v58; // rcx
  unsigned int v59; // ebx
  int v60; // eax
  unsigned int v61; // ecx
  size_t BugCheckParameter4; // [rsp+28h] [rbp-E0h]
  int v64; // [rsp+78h] [rbp-90h] BYREF
  int v65; // [rsp+7Ch] [rbp-8Ch]
  unsigned int Size; // [rsp+80h] [rbp-88h]
  unsigned int Size_4; // [rsp+84h] [rbp-84h] BYREF
  int v68; // [rsp+88h] [rbp-80h] BYREF
  int v69; // [rsp+8Ch] [rbp-7Ch] BYREF
  unsigned int v70; // [rsp+90h] [rbp-78h]
  __int64 KernelStack; // [rsp+98h] [rbp-70h]
  __int64 v72; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v73; // [rsp+A8h] [rbp-60h]
  __int64 IndependentPages; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v75[182]; // [rsp+B8h] [rbp-50h] BYREF

  Pcr = KeGetPcr();
  Base = Pcr->Prcb.ProcessorState.SpecialRegisters.Idtr.Base;
  LODWORD(KiBootProcessorIdtSize) = Pcr->Prcb.ProcessorState.SpecialRegisters.Idtr.Limit + 1;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)KiBootProcessorIdtSize, 0x2020654Bu);
  KiBootProcessorIdt = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_96;
  memmove(PoolWithTag, Base, (unsigned int)KiBootProcessorIdtSize);
  if ( (unsigned int)KeRegisteredProcessors > 0x280 )
    KeRegisteredProcessors = 640;
  KiBarrierWait = 1;
  memset(v75, 0, sizeof(v75));
  if ( !(unsigned __int8)((__int64 (*)(void))HalIsHyperThreadingEnabled)() )
    KiResetBootProcessorApicMask();
  v3 = HalEnumerateProcessors((unsigned int)KeRegisteredProcessors);
  if ( KeNumprocSpecified && KeNumprocSpecified < v3 )
    v3 = KeNumprocSpecified;
  if ( KeBootprocSpecified && KeBootprocSpecified < v3 )
    v3 = KeBootprocSpecified;
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = 0;
  if ( (int)KiInitializePrcbContext((__int64)CurrentPrcb, 0LL) < 0 || !MmAllocateIsrStack(&CurrentPrcb->IsrStack, 0, v6) )
    goto LABEL_96;
  MaximumProcessorCount = HalQueryMaximumProcessorCount();
  LogicalProcessorsPerCore = CurrentPrcb->LogicalProcessorsPerCore;
  CoresPerPhysicalProcessor = CurrentPrcb->CoresPerPhysicalProcessor;
  v10 = MaximumProcessorCount;
  if ( MaximumProcessorCount > 0x280 )
    v10 = 640;
  v70 = MaximumProcessorCount;
  v11 = KeRegisteredProcessors * CoresPerPhysicalProcessor * LogicalProcessorsPerCore;
  if ( v10 > v11 )
    v10 = v11;
  if ( KeNumprocSpecified && KeNumprocSpecified < v10 )
    v10 = KeNumprocSpecified;
  if ( !KeDynamicPartitioningSupported && v10 > v3 )
    v10 = v3;
  if ( !(unsigned int)KiAllocateCpuSetData(v10) )
    goto LABEL_96;
  v12 = KiComputeProcessorDataSize(v10, &v69, &v68);
  Size = v12;
  if ( (int)HvlStartBootLogicalProcessors() < 0 )
    goto LABEL_96;
  v13 = 0;
  while ( (unsigned int)KeNumberProcessors_0 < v3 )
  {
    Size_4 = -1;
    ++v5;
    LOWORD(v64) = -1;
    if ( !(unsigned int)KiQueryProcessorNode(v5, &Size_4, (unsigned __int16 *)&v64) )
    {
      ++v13;
      IndependentPages = MmAllocateIndependentPages(v12, (unsigned __int16)v64, v14);
      v16 = IndependentPages;
      if ( !IndependentPages )
        goto LABEL_96;
      if ( !ExCreatePoolTagTable(v13, v64, v15) )
        goto LABEL_96;
      KernelStack = MmCreateKernelStack(0, v64, 0LL);
      v17 = KernelStack;
      if ( !KernelStack )
        goto LABEL_96;
      v19 = MmCreateKernelStack(0, v64, 0LL);
      if ( !v19 )
        goto LABEL_96;
      v72 = 0LL;
      if ( !MmAllocateIsrStack(&v72, v64, v18) )
        goto LABEL_96;
      v73 = KeNodeBlock[(unsigned __int16)v64];
      LODWORD(BugCheckParameter4) = Size;
      v20 = (struct _KPRCB *)KxInitializeProcessorState(
                               v75,
                               (_QWORD *)KeLoaderBlock_0,
                               v16,
                               0,
                               BugCheckParameter4,
                               (unsigned __int16)v64,
                               v13,
                               v10,
                               v69,
                               v68,
                               v17,
                               v19,
                               v72);
      if ( !v20 )
        goto LABEL_96;
      v21 = (_OWORD *)KeNodeBlock[(unsigned __int16)v64];
      if ( HvlInitializeProcessor((__int64)v20, Size_4)
        || !(unsigned int)MmInitializeProcessor((__int64)v20, v22, v23)
        || (int)KiInitializePrcbContext((__int64)v20, (unsigned __int16)v64) < 0
        || (int)KeInitializeTimerTable((__int64)v20) < 0 )
      {
        goto LABEL_96;
      }
      if ( !(unsigned __int8)HalStartNextProcessor(v75, v13, Size_4) )
      {
        KiRemoveProcessorFromGroupDatabase((__int64)v20);
        v24 = v73;
        v25 = 2LL;
        v26 = (_OWORD *)v73;
        do
        {
          *v26 = *v21;
          v26[1] = v21[1];
          v26[2] = v21[2];
          v26[3] = v21[3];
          v26[4] = v21[4];
          v26[5] = v21[5];
          v26[6] = v21[6];
          v26 += 8;
          v27 = v21[7];
          v21 += 8;
          *(v26 - 1) = v27;
          --v25;
        }
        while ( v25 );
        *v26 = *v21;
        v26[1] = v21[1];
        v26[2] = v21[2];
        v26[3] = v21[3];
        KeNodeBlock[(unsigned __int16)v64] = v24;
        HvlDeleteProcessor(v20, v24, (MEMORY_CACHING_TYPE)0x140000000uLL);
        MmDeleteProcessor((__int64)v20);
        ExDeletePoolTagTable(v13);
        KiUnshadowProcessorAllocation((__int64)v20, (__int64)v75);
        MmFreeIndependentPages(IndependentPages, Size);
        MmDeleteKernelStack(KernelStack, 0, v28, v29);
        MmDeleteKernelStack(v19, 0, v30, v31);
        break;
      }
      while ( *(_QWORD *)(KeLoaderBlock_0 + 136) )
        _mm_pause();
      KiConfigureProcessorBlock((__int64)v20);
      KiUpdateProcessorCount(v13, v20->Group);
      v12 = Size;
    }
    if ( v5 >= 0x27F )
      break;
  }
  v32 = (unsigned __int16)KeNumberNodes;
  v33 = 0xF0F0F0F0F0F0F0FLL;
  if ( (unsigned __int16)KeNumberNodes <= 1u )
  {
    v43 = *(_QWORD *)(KeNodeBlock[0] + 136) - ((*(_QWORD *)(KeNodeBlock[0] + 136) >> 1) & 0x5555555555555555LL);
    if ( (unsigned int)((0x101010101010101LL
                       * (((v43 & 0x3333333333333333LL)
                         + ((v43 >> 2) & 0x3333333333333333LL)
                         + (((v43 & 0x3333333333333333LL) + ((v43 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 == (_DWORD)KeNumberProcessors_0 )
    {
      v32 = (unsigned __int16)KeNumberNodes;
      v34 = 0x140000000uLL;
      goto LABEL_60;
    }
LABEL_96:
    KeBugCheckEx(0x32u, 0LL, 0LL, 0x14uLL, 0LL);
  }
  v34 = 0x140000000uLL;
  v35 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      v36 = (_OWORD *)((char *)&KiNodeInit + 320 * v35);
      if ( (_OWORD *)KeNodeBlock[v35] == v36 )
      {
        v37 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x840uLL, 0x2020654Bu);
        v38 = (__int64)v37;
        if ( !v37 )
          goto LABEL_96;
        memset(v37, 0, 0x840uLL);
        v39 = 2LL;
        v40 = (_OWORD *)v38;
        do
        {
          *v40 = *v36;
          v40[1] = v36[1];
          v40[2] = v36[2];
          v40[3] = v36[3];
          v40[4] = v36[4];
          v40[5] = v36[5];
          v40[6] = v36[6];
          v40 += 8;
          v41 = v36[7];
          v36 += 8;
          *(v40 - 1) = v41;
          --v39;
        }
        while ( v39 );
        v42 = *v36;
        v34 = 0x140000000uLL;
        KeNodeBlock[v35] = v38;
        *v40 = v42;
        v40[1] = v36[1];
        v40[2] = v36[2];
        v40[3] = v36[3];
        v32 = (unsigned __int16)KeNumberNodes;
      }
      ++v35;
    }
    while ( v35 < (unsigned __int16)v32 );
  }
LABEL_60:
  v44 = (unsigned __int16)v32;
  if ( (unsigned __int16)v32 < 0x40u )
    memset(
      (void *)(0x140000000LL + 8LL * (unsigned __int16)v32 + 3925056),
      0,
      8LL * (64 - (unsigned int)(unsigned __int16)v32));
  v45 = 0;
  IsHyperThreadingEnabled = HalIsHyperThreadingEnabled(v32, v44, v34, v33);
  LOBYTE(v65) = IsHyperThreadingEnabled;
  for ( Size = 0; v45 < (unsigned __int16)KeNumberNodes; Size = ++v45 )
  {
    v47 = KeNumberProcessors_0;
    if ( (unsigned int)KeNumberProcessors_0 > 0x40 )
      v47 = 64;
    v48 = KeNodeBlock[v45];
    KernelStack = v48;
    v49 = *(_QWORD *)(v48 + 136);
    v50 = v49;
    if ( v49 )
    {
      v51 = *(unsigned __int16 *)(v48 + 144);
      for ( i = 0; i < 0x40; ++i )
      {
        if ( !v50 )
          break;
        if ( _bittest64(&v50, i) )
        {
          v53 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v51 + i]];
          if ( IsHyperThreadingEnabled )
          {
            v54 = *(_QWORD *)(v53 + 24920);
            v50 &= ~v54;
            v55 = (((v54 - ((v54 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + (((v54 - ((v54 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                 + ((((v54 - ((v54 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                   + (((v54 - ((v54 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL;
            v56 = 0x101010101010101LL;
          }
          else
          {
            v57 = v49 & *(_QWORD *)(v53 + 8LL * *(unsigned __int8 *)(v53 + 1616) + 24608);
            v50 &= ~v57;
            v56 = (((v57 - ((v57 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + (((v57 - ((v57 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                 + ((((v57 - ((v57 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                   + (((v57 - ((v57 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL;
            v55 = 0x101010101010101LL;
          }
          v58 = (v56 * v55) >> 56;
          if ( (unsigned int)v58 < v47 )
            v47 = v58;
        }
      }
      v45 = Size;
      v59 = 0;
      *(_BYTE *)(KernelStack + 150) = v47;
      do
      {
        if ( !v49 )
          break;
        if ( _bittest64(&v49, v59) )
        {
          v49 &= ~(1LL << v59);
          KiConfigureSchedulingInformation(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v51 + v59]], 0);
        }
        ++v59;
      }
      while ( v59 < 0x40 );
      IsHyperThreadingEnabled = v65;
    }
  }
  LOBYTE(v60) = off_1402F23C0();
  if ( !KeMaximumProcessors )
  {
    if ( !KeDynamicPartitioningSupported || v70 <= (unsigned int)KeNumberProcessors_0 )
    {
      v60 = KeNumberProcessors_0;
LABEL_92:
      KeMaximumProcessors = v60;
      goto LABEL_93;
    }
    v61 = KeRegisteredProcessors
        * *(unsigned __int8 *)(KiProcessorBlock[0] + 1598)
        * *(unsigned __int8 *)(KiProcessorBlock[0] + 1599);
    KeMaximumProcessors = v61;
    if ( v61 > KiMaximumGroupSize * (unsigned int)(unsigned __int16)KiMaximumGroups )
    {
      v61 = KiMaximumGroupSize * (unsigned __int16)KiMaximumGroups;
      KeMaximumProcessors = v61;
    }
    if ( v61 > v70 )
    {
      v61 = v70;
      KeMaximumProcessors = v70;
    }
    v60 = 640;
    if ( v61 > 0x280 )
      goto LABEL_92;
  }
LABEL_93:
  if ( !KeDynamicPartitioningSupported )
  {
    LOBYTE(v60) = KiActiveGroups;
    KiMaximumGroups = KiActiveGroups;
  }
  KiBootProcessorsStarted = 1;
  KiBarrierWait = 0;
  return v60;
}
