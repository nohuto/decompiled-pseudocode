/*
 * XREFs of MiSwapStackPage @ 0x140109A7C
 * Callers:
 *     MiClaimPhysicalRun @ 0x14010415C (MiClaimPhysicalRun.c)
 * Callees:
 *     MiPageToNode @ 0x14001B5D4 (MiPageToNode.c)
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MiClearPfnReuseFields @ 0x140021DA0 (MiClearPfnReuseFields.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiFinalizePageAttribute @ 0x1400232DC (MiFinalizePageAttribute.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiGetPteFromCopyList @ 0x140034700 (MiGetPteFromCopyList.c)
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14004E2C0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiAddLockedPageCharge @ 0x14004ED08 (MiAddLockedPageCharge.c)
 *     KeGenericCallDpc @ 0x14009EDE4 (KeGenericCallDpc.c)
 *     MiReleaseFreshPage @ 0x1400AAB5C (MiReleaseFreshPage.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x1400EEE30 (KeExpandKernelStackAndCalloutInternal.c)
 *     KeFlushSingleTb @ 0x1401083A8 (KeFlushSingleTb.c)
 *     MiSwapStackPageNoDpc @ 0x1401098D4 (MiSwapStackPageNoDpc.c)
 *     MiCanStealKernelStack @ 0x140109F4C (MiCanStealKernelStack.c)
 *     KeTryToFreezeThreadStack @ 0x1401D2DD0 (KeTryToFreezeThreadStack.c)
 *     MiCopyKstack @ 0x1401E6034 (MiCopyKstack.c)
 *     MiSwitchKstackPages @ 0x1401E6638 (MiSwitchKstackPages.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiLockNestedPageAtDpc @ 0x1401F29A4 (MiLockNestedPageAtDpc.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiSwapStackPage(__int64 a1, unsigned int *a2, int a3, __int64 *a4, _DWORD *a5)
{
  unsigned __int64 CurrentThread; // rbp
  _QWORD *PoolWithTag; // r14
  __int64 v9; // r12
  unsigned int v10; // r8d
  int v11; // edi
  int v12; // eax
  __int64 v13; // rdi
  int v14; // eax
  __int64 Page; // rax
  __int64 v16; // r13
  LONG *SharedVm; // rdi
  __int64 v18; // rdx
  __int64 v19; // r12
  __int64 v20; // rdi
  __int64 *PteFromCopyList; // r15
  unsigned __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  int v31; // eax
  LONG *v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  char v36; // r9
  __int64 v37; // rcx
  unsigned __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned __int8 v42; // al
  KIRQL v44; // [rsp+30h] [rbp-68h]
  __int64 v45; // [rsp+38h] [rbp-60h]
  char *AnyMultiplexedVm; // [rsp+40h] [rbp-58h]
  __int64 v47; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v48; // [rsp+50h] [rbp-48h]
  __int64 v49; // [rsp+58h] [rbp-40h]

  CurrentThread = (unsigned __int64)KeGetCurrentThread();
  v48 = CurrentThread;
  if ( !byte_1403277D8 )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x734B694Du);
  if ( !PoolWithTag )
    return 0LL;
  v9 = (a1 + 0x58000000000LL) / 48;
  if ( a3 == -1 )
  {
    v13 = (*(_QWORD *)(a1 + 40) >> 36) & 3LL;
    v14 = MiPageToNode((a1 + 0x58000000000LL) / 48, 0);
    v10 = 0;
    v12 = v14 << byte_140326A09;
    v11 = dword_140326A38 & v9 | ((_DWORD)v13 << byte_140326A18);
  }
  else
  {
    v10 = 16;
    v11 = a3 & ~dword_140326A38;
    v12 = dword_140326A38 & v9;
  }
  Page = MiGetPage((__int64)MiSystemPartition, v12 | (unsigned int)v11, v10);
  v45 = Page;
  if ( Page == -1 )
  {
LABEL_42:
    ExFreePoolWithTag(PoolWithTag, 0);
    return 0LL;
  }
  v16 = 48 * Page - 0x58000000000LL;
  MiFinalizePageAttribute(v16, 1u, 0);
  PoolWithTag[6] = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v44 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  MiLockPageAtDpcInline(a1);
  PoolWithTag[5] = (__int64)(*(_QWORD *)(a1 + 8) << 25) >> 16;
  if ( !(unsigned int)MiCanStealKernelStack(a1, 1LL) )
    goto LABEL_40;
  if ( (MiFlags & 0x800) != 0 || (unsigned int)MiSwapStackPageNoDpc((int *)a2, a1, v16) != 1 )
  {
    v20 = *(_QWORD *)a1;
    v49 = v20;
    if ( v20 != -5 && (v20 & 1) != 0 )
    {
      PteFromCopyList = MiGetPteFromCopyList(a2, v45, -1LL);
      if ( v20 != -3 && v20 != (CurrentThread | 1) )
      {
        v22 = v20 & 0xFFFFFFFFFFFFFFFEuLL;
        if ( (unsigned __int8)KeTryToFreezeThreadStack(v22, &v47) == 1 )
        {
          MiCopyKstack(v16, a1, PteFromCopyList);
          MiLockNestedPageAtDpc(v16);
          MiSwitchKstackPages(v16, a1);
          _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiClearPfnReuseFields(a1);
          *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          KeFlushSingleTb(PoolWithTag[5], 0, 2u);
          if ( v47 )
            _InterlockedAnd64((volatile signed __int64 *)(v47 + 48), 0LL);
          LOBYTE(v24) = v44;
          *(_QWORD *)(v22 + 64) = 0LL;
          MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v24);
          *PteFromCopyList = 0LL;
          if ( (unsigned int)MiPteInShadowRange(PteFromCopyList, v25) )
            MiWritePteShadow(v26, 0LL);
          goto LABEL_11;
        }
        goto LABEL_26;
      }
      if ( (unsigned int)MiAddLockedPageCharge(a1, 0) )
      {
        PoolWithTag[6] = a1;
LABEL_26:
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        LOBYTE(v23) = v44;
        MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v23);
        v29 = v49;
        v30 = v48 | 1;
        *PoolWithTag = v9;
        v19 = v45;
        PoolWithTag[3] = v30;
        PoolWithTag[1] = v45;
        PoolWithTag[2] = PteFromCopyList;
        *((_DWORD *)PoolWithTag + 8) = 0;
        if ( v29 == -3 || v29 == v30 )
        {
          v31 = KeExpandKernelStackAndCalloutInternal(
                  (void (__fastcall *)(__int64))MiJumpStack,
                  (__int64)PoolWithTag,
                  24576,
                  5,
                  0LL);
          if ( v31 < 0 )
            *((_DWORD *)PoolWithTag + 8) = v31;
        }
        else
        {
          KeGenericCallDpc((__int64)MiDoStackCopy, (__int64)PoolWithTag);
        }
        if ( *((int *)PoolWithTag + 8) >= 0 )
        {
          *a5 = 0;
          v42 = MiLockPageInline(a1);
          *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v42);
          goto LABEL_37;
        }
        v32 = MiGetSharedVm((__int64)AnyMultiplexedVm);
        ExAcquireSpinLockExclusive(v32);
        v32[1] = 0;
        *PteFromCopyList = 0LL;
        if ( (unsigned int)MiPteInShadowRange(PteFromCopyList, v33) )
          MiWritePteShadow(v35, 0LL);
        LOBYTE(v34) = v36;
        MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v34);
        MiReleaseFreshPage(v16);
        v37 = PoolWithTag[6];
        if ( v37 )
        {
          v38 = (unsigned __int8)MiLockPageInline(v37);
          MiRemoveLockedPageChargeAndDecRef(PoolWithTag[6], v39, v40, v41);
          _InterlockedAnd64((volatile signed __int64 *)(PoolWithTag[6] + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v38);
        }
        goto LABEL_42;
      }
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      *PteFromCopyList = 0LL;
      if ( (unsigned int)MiPteInShadowRange(PteFromCopyList, v23) )
        MiWritePteShadow(v27, 0LL);
      v28 = (__int64)AnyMultiplexedVm;
      goto LABEL_41;
    }
LABEL_40:
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v28 = (__int64)AnyMultiplexedVm;
LABEL_41:
    LOBYTE(v18) = v44;
    MiUnlockWorkingSetExclusive(v28, v18);
    MiReleaseFreshPage(v16);
    goto LABEL_42;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v18) = v44;
  MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v18);
LABEL_11:
  v19 = v45;
  *a5 = 1;
LABEL_37:
  *(_WORD *)(a1 + 32) = 0;
  if ( a4 )
    *a4 = v19;
  ExFreePoolWithTag(PoolWithTag, 0);
  return 1LL;
}
