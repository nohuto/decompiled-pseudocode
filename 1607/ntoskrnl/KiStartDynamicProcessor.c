/*
 * XREFs of KiStartDynamicProcessor @ 0x14064F124
 * Callers:
 *     KeStartDynamicProcessor @ 0x14064FB2C (KeStartDynamicProcessor.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x140014404 (MiLockPagableImageSection.c)
 *     MmUnlockPagableImageSection @ 0x1400AAC64 (MmUnlockPagableImageSection.c)
 *     MmCreateKernelStack @ 0x1400EF600 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x1400EF9D0 (MmDeleteKernelStack.c)
 *     KiQueryProcessorNode @ 0x140139A1C (KiQueryProcessorNode.c)
 *     ExInitializeProcessor @ 0x14013CA8C (ExInitializeProcessor.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     KiDynamicProcessorInitialization @ 0x1401D1D70 (KiDynamicProcessorInitialization.c)
 *     KiAdjustGroupConfiguration @ 0x1401D2F34 (KiAdjustGroupConfiguration.c)
 *     KiRemoveProcessorFromGroupDatabase @ 0x1401D339C (KiRemoveProcessorFromGroupDatabase.c)
 *     KiDynamicProcessorAddNotification @ 0x1401D5780 (KiDynamicProcessorAddNotification.c)
 *     MmDeleteProcessor @ 0x1401E18D0 (MmDeleteProcessor.c)
 *     EtwpCCSwapDeleteProcessor @ 0x140229E64 (EtwpCCSwapDeleteProcessor.c)
 *     ExDeletePoolTagTable @ 0x14022CB70 (ExDeletePoolTagTable.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     KiComputeProcessorDataSize @ 0x1403D2FF0 (KiComputeProcessorDataSize.c)
 *     KiInitializePrcbContext @ 0x1403D3AC4 (KiInitializePrcbContext.c)
 *     MmInitializeProcessor @ 0x1403D3D40 (MmInitializeProcessor.c)
 *     KiInitializeDynamicProcessor @ 0x1403DD584 (KiInitializeDynamicProcessor.c)
 *     KiUnshadowProcessorAllocation @ 0x1403DE1D4 (KiUnshadowProcessorAllocation.c)
 *     KiAddProcessorToGroupSchedulingDatabase @ 0x1403DE214 (KiAddProcessorToGroupSchedulingDatabase.c)
 *     WheaInitializeProcessor @ 0x1403E0728 (WheaInitializeProcessor.c)
 *     MmFreeIndependentPages @ 0x1403E1F14 (MmFreeIndependentPages.c)
 *     MmAllocateIndependentPages @ 0x1404C8A68 (MmAllocateIndependentPages.c)
 *     MmAllocateIsrStack @ 0x14054E5A4 (MmAllocateIsrStack.c)
 *     KeInitializeTimerTable @ 0x14054E710 (KeInitializeTimerTable.c)
 *     HvlInitializeProcessor @ 0x14054E878 (HvlInitializeProcessor.c)
 *     KxInitializeProcessorState @ 0x14054E9DC (KxInitializeProcessorState.c)
 *     ExCreatePoolTagTable @ 0x14054ED40 (ExCreatePoolTagTable.c)
 *     CcInitializeProcessor @ 0x140552DC0 (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x140552E70 (ObInitializeProcessor.c)
 *     IoInitializeProcessor @ 0x140552F84 (IoInitializeProcessor.c)
 *     EtwInitializeProcessor @ 0x1405531DC (EtwInitializeProcessor.c)
 *     CmInitializeProcessor @ 0x14060397C (CmInitializeProcessor.c)
 *     HvlDeleteProcessor @ 0x1406204A0 (HvlDeleteProcessor.c)
 *     MmFreeIsrStack @ 0x14065B974 (MmFreeIsrStack.c)
 */

__int64 __fastcall KiStartDynamicProcessor(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // r14
  _OWORD *v5; // rsi
  struct _KPRCB *v6; // rdi
  unsigned __int64 v7; // r15
  __int64 KernelStack; // r13
  __int64 v9; // r12
  int v10; // ebx
  int v11; // r14d
  unsigned int v12; // ebx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r8
  PVOID v15; // rcx
  __int64 v16; // r15
  int v17; // r14d
  __int64 v18; // rcx
  __int64 v19; // rdx
  _OWORD *v20; // rax
  __int128 v21; // xmm1
  __int64 EtwSupport; // rcx
  size_t Size; // [rsp+20h] [rbp-E0h]
  unsigned __int16 v25; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v26; // [rsp+78h] [rbp-88h] BYREF
  int v27; // [rsp+80h] [rbp-80h]
  unsigned int v28; // [rsp+84h] [rbp-7Ch]
  int v29; // [rsp+88h] [rbp-78h] BYREF
  int v30; // [rsp+8Ch] [rbp-74h] BYREF
  __int64 v31; // [rsp+90h] [rbp-70h] BYREF
  __int64 v32; // [rsp+98h] [rbp-68h]
  void *PoolTagTable; // [rsp+A0h] [rbp-60h]
  __int64 IndependentPages; // [rsp+A8h] [rbp-58h]
  _OWORD v35[21]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v36[182]; // [rsp+200h] [rbp+100h] BYREF

  v27 = a4;
  v4 = a3;
  v26 = (unsigned int)a2;
  v5 = 0LL;
  PoolTagTable = 0LL;
  v6 = 0LL;
  v32 = 0LL;
  v7 = 0LL;
  v31 = 0LL;
  KernelStack = 0LL;
  v28 = 0;
  v9 = 0LL;
  v25 = 0;
  if ( (unsigned int)KeNumberProcessors_0 >= 0x280
    || KeNumprocSpecified && (unsigned int)KeNumberProcessors_0 >= KeNumprocSpecified )
  {
    v10 = -1073741223;
    goto LABEL_40;
  }
  v10 = HalRegisterDynamicProcessor((unsigned int)KeRegisteredProcessors, v26);
  if ( v10 < 0 )
    goto LABEL_43;
  v25 = v4;
  v11 = v27;
  v10 = KiQueryProcessorNode(v27, &v26, &v25);
  if ( v10 )
    goto LABEL_40;
  KiAdjustGroupConfiguration(KeNodeBlock[v25]);
  v12 = KiComputeProcessorDataSize(KeMaximumProcessors, &v30, &v29);
  v28 = v12;
  IndependentPages = MmAllocateIndependentPages(v12, v25, v13);
  v7 = IndependentPages;
  if ( !IndependentPages )
  {
    v10 = -1073741670;
    KiBarrierWait = 0;
    return (unsigned int)v10;
  }
  PoolTagTable = ExCreatePoolTagTable(v11, v25, v14);
  if ( PoolTagTable )
  {
    KernelStack = MmCreateKernelStack(0, v25, 0LL);
    if ( !KernelStack || (v9 = MmCreateKernelStack(0, v25, 0LL)) == 0 || !MmAllocateIsrStack(&v31, v25, a3) )
    {
      v10 = -1073741670;
      KiBarrierWait = 0;
LABEL_51:
      if ( PoolTagTable )
        ExDeletePoolTagTable(v11);
      goto LABEL_53;
    }
    v32 = KeNodeBlock[v25];
    memset(v35, 0, 0x148uLL);
    v35[1] = *(_OWORD *)&PsLoadedModuleList;
    LODWORD(Size) = v12;
    v6 = (struct _KPRCB *)KxInitializeProcessorState(
                            v36,
                            v35,
                            v7,
                            1,
                            Size,
                            v25,
                            v11,
                            KeMaximumProcessors,
                            v30,
                            v29,
                            KernelStack,
                            v9,
                            v31);
    if ( !v6 )
    {
      v10 = -1073741670;
LABEL_43:
      v18 = v32;
      KiBarrierWait = 0;
      if ( v32 )
      {
        v19 = 2LL;
        v20 = (_OWORD *)v32;
        a3 = 128LL;
        do
        {
          *v20 = *v5;
          v20[1] = v5[1];
          v20[2] = v5[2];
          v20[3] = v5[3];
          v20[4] = v5[4];
          v20[5] = v5[5];
          v20[6] = v5[6];
          v20 += 8;
          v21 = v5[7];
          v5 += 8;
          *(v20 - 1) = v21;
          --v19;
        }
        while ( v19 );
        a2 = KeNodeBlock;
        *v20 = *v5;
        v20[1] = v5[1];
        v20[2] = v5[2];
        v20[3] = v5[3];
        KeNodeBlock[v25] = v18;
      }
      if ( v6 )
      {
        HvlDeleteProcessor(v6, (SIZE_T)a2, (MEMORY_CACHING_TYPE)a3);
        MmDeleteProcessor((__int64)v6);
        EtwSupport = (__int64)v6->EtwSupport;
        if ( EtwSupport )
        {
          EtwpCCSwapDeleteProcessor(EtwSupport);
          ExFreePoolWithTag(v6->EtwSupport, 0);
          v6->EtwSupport = 0LL;
        }
      }
      v11 = v27;
      goto LABEL_51;
    }
    v5 = (_OWORD *)KeNodeBlock[v25];
    if ( !(unsigned int)MmInitializeProcessor((__int64)v6, (__int64)a2, a3) )
    {
      v10 = -1073741823;
      goto LABEL_41;
    }
    v10 = KiInitializePrcbContext((__int64)v6, v25);
    if ( v10 < 0 )
      goto LABEL_41;
    v10 = KeInitializeTimerTable((__int64)v6);
    if ( v10 < 0
      || (v10 = ExInitializeProcessor((__int64)v6, 1), v10 < 0)
      || (v10 = ObInitializeProcessor(v6), v10 < 0)
      || (v10 = IoInitializeProcessor((__int64)v6, 0LL), v10 < 0)
      || (v10 = CcInitializeProcessor((__int64)v6), v10 < 0)
      || (v10 = EtwInitializeProcessor((__int64)v6), v10 < 0)
      || (v10 = WheaInitializeProcessor((__int64)v6, 0), v10 < 0)
      || (v10 = HvlInitializeProcessor((__int64)v6, v26), v10 < 0) )
    {
LABEL_41:
      if ( v6 )
        KiRemoveProcessorFromGroupDatabase((__int64)v6);
      goto LABEL_43;
    }
    v15 = ExPageLockHandle;
    v6->ProcessorProfileControlArea = 0LL;
    v6->ProfileEventIndexAddress = &v6->ProfileEventIndexAddress;
    MiLockPagableImageSection((ULONG_PTR)v15, 1uLL);
    KiAddProcessorToGroupSchedulingDatabase((__int64)v6);
    v16 = KeLoaderBlock_0;
    KiBarrierWait = 1;
    if ( !KeLoaderBlock_0 )
    {
      KeLoaderBlock_0 = (__int64)v35;
      v35[1] = *(_OWORD *)&PsLoadedModuleList;
    }
    v10 = KiDynamicProcessorAddNotification(0, v6->Number, v6->Group, v6->GroupIndex, v26, 0);
    v17 = 2;
    if ( v10 >= 0 )
    {
      if ( (unsigned __int8)HalStartDynamicProcessor(v36, (unsigned int)v27, v26, v25) )
      {
        while ( *((_QWORD *)&v35[8] + 1) )
          _mm_pause();
        KiInitializeDynamicProcessor((__int64)v6);
        v17 = 1;
      }
      else
      {
        v10 = -1073741823;
      }
    }
    KiDynamicProcessorAddNotification(v17, v6->Number, v6->Group, v6->GroupIndex, v26, v10);
    if ( v10 >= 0 )
    {
      WheaInitializeProcessor((__int64)v6, 1u);
      CmInitializeProcessor((__int64)v6);
      KiDynamicProcessorInitialization((__int64)v6);
    }
    KeLoaderBlock_0 = v16;
    MmUnlockPagableImageSection(ExPageLockHandle);
    v7 = IndependentPages;
LABEL_40:
    if ( v10 >= 0 )
      return (unsigned int)v10;
    goto LABEL_41;
  }
  v10 = -1073741670;
  KiBarrierWait = 0;
LABEL_53:
  if ( v7 )
  {
    if ( v6 )
      KiUnshadowProcessorAllocation((__int64)v6, (__int64)v36);
    MmFreeIndependentPages(v7, v28);
  }
  if ( KernelStack )
    MmDeleteKernelStack(KernelStack, 0, a3, a4);
  if ( v9 )
    MmDeleteKernelStack(v9, 0, a3, a4);
  if ( v31 )
    MmFreeIsrStack();
  return (unsigned int)v10;
}
