/*
 * XREFs of KiStartDynamicProcessor @ 0x14069849C
 * Callers:
 *     KeStartDynamicProcessor @ 0x140698E60 (KeStartDynamicProcessor.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x140010480 (MmUnlockPagableImageSection.c)
 *     MiLockPagableImageSection @ 0x140010490 (MiLockPagableImageSection.c)
 *     MmCreateKernelStack @ 0x140022090 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x140022520 (MmDeleteKernelStack.c)
 *     ExInitializeProcessor @ 0x14015F3F0 (ExInitializeProcessor.c)
 *     KiQueryProcessorNode @ 0x140163650 (KiQueryProcessorNode.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KiAdjustGroupConfiguration @ 0x1402003B0 (KiAdjustGroupConfiguration.c)
 *     KiRemoveProcessorFromGroupDatabase @ 0x14020081C (KiRemoveProcessorFromGroupDatabase.c)
 *     KiDynamicProcessorAddNotification @ 0x14020332C (KiDynamicProcessorAddNotification.c)
 *     KeOptimizeSpecCtrlSettings @ 0x140208044 (KeOptimizeSpecCtrlSettings.c)
 *     MmDeleteProcessor @ 0x14020DB08 (MmDeleteProcessor.c)
 *     EtwpCCSwapDeleteProcessor @ 0x140260884 (EtwpCCSwapDeleteProcessor.c)
 *     ExDeletePoolTagTable @ 0x14026219C (ExDeletePoolTagTable.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     KiComputeProcessorDataSize @ 0x1403F7128 (KiComputeProcessorDataSize.c)
 *     KiInitializePrcbContext @ 0x1403FA5A8 (KiInitializePrcbContext.c)
 *     MmInitializeProcessor @ 0x1403FA854 (MmInitializeProcessor.c)
 *     KiInitializeDynamicProcessor @ 0x1404018C0 (KiInitializeDynamicProcessor.c)
 *     KiUnshadowProcessorAllocation @ 0x140402B8C (KiUnshadowProcessorAllocation.c)
 *     KiAddProcessorToGroupSchedulingDatabase @ 0x140402BCC (KiAddProcessorToGroupSchedulingDatabase.c)
 *     WheaInitializeProcessor @ 0x140404D94 (WheaInitializeProcessor.c)
 *     MmFreeIndependentPages @ 0x14055E3E4 (MmFreeIndependentPages.c)
 *     MmAllocateIndependentPages @ 0x1405610B8 (MmAllocateIndependentPages.c)
 *     EtwInitializeProcessor @ 0x14059597C (EtwInitializeProcessor.c)
 *     CcInitializeProcessor @ 0x140595B40 (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x140595BE4 (ObInitializeProcessor.c)
 *     IoInitializeProcessor @ 0x140595D04 (IoInitializeProcessor.c)
 *     MmAllocateIsrStack @ 0x14059A694 (MmAllocateIsrStack.c)
 *     KeInitializeTimerTable @ 0x14059A850 (KeInitializeTimerTable.c)
 *     HvlInitializeProcessor @ 0x14059A970 (HvlInitializeProcessor.c)
 *     KxInitializeProcessorState @ 0x14059A9C8 (KxInitializeProcessorState.c)
 *     ExCreatePoolTagTable @ 0x14059AD08 (ExCreatePoolTagTable.c)
 *     CmInitializeProcessor @ 0x14065B694 (CmInitializeProcessor.c)
 *     HvlDeleteProcessor @ 0x140670600 (HvlDeleteProcessor.c)
 *     MmFreeIsrStack @ 0x1406A5A44 (MmFreeIsrStack.c)
 */

__int64 __fastcall KiStartDynamicProcessor(__int64 a1, SIZE_T a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int16 v4; // r14
  __int64 v5; // r15
  _OWORD *v6; // rsi
  struct _KPRCB *v7; // rdi
  __int64 KernelStack; // r13
  __int64 v9; // r12
  int v10; // ebx
  unsigned int v11; // r15d
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r14
  int v15; // ebx
  unsigned __int64 v16; // r8
  PVOID v17; // rcx
  __int64 v18; // r15
  int v19; // r14d
  _OWORD *v20; // rax
  __int64 v21; // rcx
  __int128 v22; // xmm1
  __int64 EtwSupport; // rcx
  size_t Size; // [rsp+20h] [rbp-E0h]
  unsigned __int16 v26; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v27; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v28; // [rsp+80h] [rbp-80h]
  unsigned int v29; // [rsp+84h] [rbp-7Ch]
  __int64 IndependentPages; // [rsp+88h] [rbp-78h]
  int v31; // [rsp+90h] [rbp-70h] BYREF
  int v32; // [rsp+94h] [rbp-6Ch] BYREF
  __int64 v33; // [rsp+98h] [rbp-68h] BYREF
  void *PoolTagTable; // [rsp+A0h] [rbp-60h]
  __int64 v35; // [rsp+A8h] [rbp-58h]
  _OWORD v36[21]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v37[182]; // [rsp+200h] [rbp+100h] BYREF

  v29 = a4;
  v4 = a3;
  v27 = a2;
  v5 = 0LL;
  PoolTagTable = 0LL;
  v6 = 0LL;
  IndependentPages = 0LL;
  v7 = 0LL;
  v33 = 0LL;
  KernelStack = 0LL;
  v28 = 0;
  v9 = 0LL;
  v26 = 0;
  if ( (unsigned int)KeNumberProcessors_0 >= 0x280
    || KeNumprocSpecified && (unsigned int)KeNumberProcessors_0 >= KeNumprocSpecified )
  {
    v10 = -1073741223;
    goto LABEL_39;
  }
  v10 = HalRegisterDynamicProcessor((unsigned int)KeRegisteredProcessors, v27);
  if ( v10 < 0 )
  {
LABEL_42:
    KiBarrierWait = 0;
    if ( v5 )
    {
      a2 = 128LL;
      v20 = (_OWORD *)v5;
      v21 = 2LL;
      do
      {
        *v20 = *v6;
        v20[1] = v6[1];
        v20[2] = v6[2];
        v20[3] = v6[3];
        v20[4] = v6[4];
        v20[5] = v6[5];
        v20[6] = v6[6];
        v20 += 8;
        v22 = v6[7];
        v6 += 8;
        *(v20 - 1) = v22;
        --v21;
      }
      while ( v21 );
      KeNodeBlock[v26] = v5;
    }
    if ( v7 )
    {
      HvlDeleteProcessor(v7, a2, (MEMORY_CACHING_TYPE)a3);
      MmDeleteProcessor((__int64)v7);
      EtwSupport = (__int64)v7->EtwSupport;
      if ( EtwSupport )
      {
        EtwpCCSwapDeleteProcessor(EtwSupport);
        ExFreePoolWithTag(v7->EtwSupport, 0);
        v7->EtwSupport = 0LL;
      }
    }
    v14 = IndependentPages;
    v11 = v28;
    goto LABEL_50;
  }
  v26 = v4;
  v10 = KiQueryProcessorNode(v29, &v27, &v26);
  if ( v10 )
    goto LABEL_39;
  KiAdjustGroupConfiguration(KeNodeBlock[v26]);
  v11 = KiComputeProcessorDataSize(KeMaximumProcessors, &v31, &v32);
  v28 = v11;
  IndependentPages = MmAllocateIndependentPages(v11, v26, v12);
  v14 = IndependentPages;
  if ( !IndependentPages )
  {
    v10 = -1073741670;
    KiBarrierWait = 0;
    return (unsigned int)v10;
  }
  v15 = v29;
  PoolTagTable = ExCreatePoolTagTable(v29, v26, v13);
  if ( PoolTagTable )
  {
    KernelStack = MmCreateKernelStack(0, v26, 0LL);
    if ( !KernelStack || (v9 = MmCreateKernelStack(0, v26, 0LL)) == 0 || !MmAllocateIsrStack(&v33, v26, v16) )
    {
      v10 = -1073741670;
      KiBarrierWait = 0;
LABEL_50:
      if ( PoolTagTable )
        ExDeletePoolTagTable(v29);
      goto LABEL_52;
    }
    v5 = KeNodeBlock[v26];
    v35 = v5;
    memset(v36, 0, 0x148uLL);
    v36[1] = *(_OWORD *)&PsLoadedModuleList;
    LODWORD(Size) = v28;
    v7 = (struct _KPRCB *)KxInitializeProcessorState(
                            v37,
                            v36,
                            v14,
                            1,
                            Size,
                            v26,
                            v15,
                            KeMaximumProcessors,
                            v31,
                            v32,
                            KernelStack,
                            v9,
                            v33);
    if ( !v7 )
    {
      v10 = -1073741670;
      goto LABEL_42;
    }
    v6 = (_OWORD *)KeNodeBlock[v26];
    if ( !(unsigned int)MmInitializeProcessor((__int64)v7, a2, a3) )
    {
      v10 = -1073741823;
      goto LABEL_40;
    }
    v10 = KiInitializePrcbContext((__int64)v7, v26);
    if ( v10 < 0 )
      goto LABEL_40;
    v10 = KeInitializeTimerTable((__int64)v7);
    if ( v10 < 0
      || (v10 = ExInitializeProcessor((__int64)v7, 1), v10 < 0)
      || (v10 = ObInitializeProcessor(v7), v10 < 0)
      || (v10 = IoInitializeProcessor((__int64)v7, 0LL), v10 < 0)
      || (v10 = CcInitializeProcessor((__int64)v7), v10 < 0)
      || (v10 = EtwInitializeProcessor((__int64)v7), v10 < 0)
      || (v10 = WheaInitializeProcessor((__int64)v7, 0), v10 < 0)
      || (v10 = HvlInitializeProcessor((__int64)v7), v10 < 0) )
    {
LABEL_40:
      if ( v7 )
        KiRemoveProcessorFromGroupDatabase((__int64)v7);
      goto LABEL_42;
    }
    v17 = ExPageLockHandle;
    v7->ProcessorProfileControlArea = 0LL;
    v7->ProfileEventIndexAddress = &v7->ProfileEventIndexAddress;
    MiLockPagableImageSection((ULONG_PTR)v17, 1uLL);
    KiAddProcessorToGroupSchedulingDatabase((__int64)v7);
    v18 = KeLoaderBlock_0;
    KiBarrierWait = 1;
    if ( !KeLoaderBlock_0 )
    {
      KeLoaderBlock_0 = (__int64)v36;
      v36[1] = *(_OWORD *)&PsLoadedModuleList;
    }
    v10 = KiDynamicProcessorAddNotification(0, v7->Number, v7->Group, v7->GroupIndex, v27, 0);
    v19 = 2;
    if ( v10 >= 0 )
    {
      if ( (unsigned __int8)HalStartDynamicProcessor(v37, v29, v27, v26) )
      {
        while ( *((_QWORD *)&v36[8] + 1) )
          _mm_pause();
        KiInitializeDynamicProcessor((__int64)v7);
        v19 = 1;
      }
      else
      {
        v10 = -1073741823;
      }
    }
    KiDynamicProcessorAddNotification(v19, v7->Number, v7->Group, v7->GroupIndex, v27, v10);
    if ( v10 >= 0 )
    {
      WheaInitializeProcessor((__int64)v7, 1u);
      CmInitializeProcessor((__int64)v7);
      KeOptimizeSpecCtrlSettings(0LL);
    }
    KeLoaderBlock_0 = v18;
    MmUnlockPagableImageSection(ExPageLockHandle);
    v5 = v35;
LABEL_39:
    if ( v10 >= 0 )
      return (unsigned int)v10;
    goto LABEL_40;
  }
  v10 = -1073741670;
  KiBarrierWait = 0;
LABEL_52:
  if ( v14 )
  {
    if ( v7 )
      KiUnshadowProcessorAllocation((__int64)v7, (__int64)v37);
    MmFreeIndependentPages(v14, v11);
  }
  if ( KernelStack )
    MmDeleteKernelStack(KernelStack, 0LL);
  if ( v9 )
    MmDeleteKernelStack(v9, 0LL);
  if ( v33 )
    MmFreeIsrStack();
  return (unsigned int)v10;
}
