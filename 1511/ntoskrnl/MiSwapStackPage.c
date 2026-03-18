/*
 * XREFs of MiSwapStackPage @ 0x1400D872C
 * Callers:
 *     MiClaimPhysicalRun @ 0x1400720B0 (MiClaimPhysicalRun.c)
 * Callees:
 *     KeFlushSingleTb @ 0x1400076D8 (KeFlushSingleTb.c)
 *     MiReleaseFreshPage @ 0x140007B08 (MiReleaseFreshPage.c)
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x14002C3A0 (KeExpandKernelStackAndCalloutInternal.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140065F30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiPageToNode @ 0x140071380 (MiPageToNode.c)
 *     MiFinalizePageAttribute @ 0x140072854 (MiFinalizePageAttribute.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiAddLockedPageCharge @ 0x1400AA108 (MiAddLockedPageCharge.c)
 *     MiSwitchKstackPages @ 0x1400D85D0 (MiSwitchKstackPages.c)
 *     MiCopyKstack @ 0x1400D8638 (MiCopyKstack.c)
 *     MiSwapStackPageNoDpc @ 0x1400D8BB0 (MiSwapStackPageNoDpc.c)
 *     MiCanStealKernelStack @ 0x1400D8D28 (MiCanStealKernelStack.c)
 *     KeTryToFreezeThreadStack @ 0x1400D8DA4 (KeTryToFreezeThreadStack.c)
 *     KeGenericCallDpc @ 0x1400E2FD8 (KeGenericCallDpc.c)
 *     MiGetPteFromCopyList @ 0x1400FE324 (MiGetPteFromCopyList.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiSwapStackPage(__int64 a1, __int64 a2, int a3, __int64 *a4, _DWORD *a5)
{
  unsigned __int64 CurrentThread; // rdi
  __int64 v7; // rcx
  __int64 v8; // r15
  int v9; // edx
  unsigned int v10; // r8d
  __int64 v11; // rdi
  int v12; // eax
  __int64 Page; // rax
  __int64 v14; // r13
  __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r13
  _QWORD *PteFromCopyList; // r14
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r8
  int v27; // ecx
  int v28; // eax
  KIRQL v29; // al
  KIRQL v30; // si
  __int64 v31; // rdx
  __int64 v32; // r8
  unsigned __int64 v33; // rbx
  unsigned __int8 v34; // al
  KIRQL v36; // [rsp+38h] [rbp-41h]
  __int64 v37; // [rsp+40h] [rbp-39h]
  unsigned __int64 v38; // [rsp+48h] [rbp-31h]
  _QWORD v39[4]; // [rsp+50h] [rbp-29h] BYREF
  int v40; // [rsp+70h] [rbp-9h]
  __int64 v41; // [rsp+78h] [rbp-1h]
  __int64 v42; // [rsp+80h] [rbp+7h]
  unsigned __int64 v43; // [rsp+88h] [rbp+Fh]
  __int64 v44[7]; // [rsp+90h] [rbp+17h] BYREF

  CurrentThread = (unsigned __int64)KeGetCurrentThread();
  v38 = CurrentThread;
  if ( !byte_1402FF6D8 )
    return 0LL;
  v7 = a1 + 0x58000000000LL;
  v8 = v7 / 48;
  if ( a3 == -1 )
  {
    v11 = (*(_QWORD *)(a1 + 40) >> 36) & 3LL;
    v12 = MiPageToNode(v7 / 48, 0);
    v10 = 0;
    v9 = ((_DWORD)v11 << byte_1402FE6E8) | (v12 << byte_1402FE6D9);
    CurrentThread = v38;
  }
  else
  {
    v9 = a3 & ~dword_1402FE708;
    v10 = 16;
  }
  Page = MiGetPage((__int64)MiSystemPartition, dword_1402FE708 & v8 | v9, v10);
  v37 = Page;
  v14 = Page;
  if ( Page == -1 )
    return 0LL;
  v15 = 48 * Page - 0x58000000000LL;
  MiFinalizePageAttribute(v15, 1LL, 0);
  v42 = 0LL;
  v36 = ExAcquireSpinLockExclusive(&dword_1402FFA80);
  MiLockPageAtDpcInline(a1, v16, v17);
  v41 = (__int64)(*(_QWORD *)(a1 + 8) << 25) >> 16;
  if ( !(unsigned int)MiCanStealKernelStack(a1, 1LL) )
    goto LABEL_41;
  if ( (MiFlags & 0x800) != 0 || (unsigned int)MiSwapStackPageNoDpc(a2, a1, v15) != 1 )
  {
    v20 = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 != -5LL && (v20 & 1) != 0 )
    {
      PteFromCopyList = (_QWORD *)MiGetPteFromCopyList(a2, v37, -1LL);
      if ( v20 != -3 && v20 != (CurrentThread | 1) )
      {
        v43 = v20 & 0xFFFFFFFFFFFFFFFEuLL;
        if ( (unsigned __int8)KeTryToFreezeThreadStack(v20 & 0xFFFFFFFFFFFFFFFEuLL, v44) == 1 )
        {
          MiCopyKstack(v15, a1, (__int64)PteFromCopyList);
          MiSwitchKstackPages(v15, a1, v24);
          *(_BYTE *)(a1 + 34) &= 0xC7u;
          *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
          *(_BYTE *)(a1 + 35) &= ~0x20u;
          *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          KeFlushSingleTb(v41, 0, 1u);
          if ( v44[0] )
            _InterlockedAnd64((volatile signed __int64 *)(v44[0] + 48), 0LL);
          LOBYTE(v25) = v36;
          *(_QWORD *)(v43 + 64) = 0LL;
          MiUnlockWorkingSetExclusive((__int64)&dword_1402FFA80, v25, v26);
          *PteFromCopyList = 0LL;
          if ( (unsigned int)MiPteInShadowRange(PteFromCopyList) )
            MiWritePteShadow(PteFromCopyList, 0LL);
          *a5 = 1;
          goto LABEL_37;
        }
        goto LABEL_25;
      }
      if ( (unsigned int)MiAddLockedPageCharge(a1, 0) )
      {
        v42 = a1;
LABEL_25:
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        LOBYTE(v22) = v36;
        MiUnlockWorkingSetExclusive((__int64)&dword_1402FFA80, v22, v23);
        v39[3] = v38 | 1;
        v39[0] = v8;
        v39[1] = v37;
        v39[2] = PteFromCopyList;
        v40 = 0;
        if ( v20 == -3 || v20 == (v38 | 1) )
        {
          v28 = KeExpandKernelStackAndCalloutInternal(
                  (void (__fastcall *)(__int64))MiJumpStack,
                  (__int64)v39,
                  24576,
                  5,
                  0LL);
          v27 = v40;
          if ( v28 < 0 )
            v27 = v28;
          v40 = v27;
        }
        else
        {
          KeGenericCallDpc(MiDoStackCopy, v39);
          v27 = v40;
        }
        if ( v27 >= 0 )
        {
          *a5 = 0;
          v34 = MiLockPageInline(a1);
          *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v34);
LABEL_37:
          v14 = v37;
          goto LABEL_38;
        }
        v29 = ExAcquireSpinLockExclusive(&dword_1402FFA80);
        *PteFromCopyList = 0LL;
        v30 = v29;
        if ( (unsigned int)MiPteInShadowRange(PteFromCopyList) )
          MiWritePteShadow(PteFromCopyList, 0LL);
        LOBYTE(v31) = v30;
        MiUnlockWorkingSetExclusive((__int64)&dword_1402FFA80, v31, v32);
        MiReleaseFreshPage(v15);
        if ( v42 )
        {
          v33 = (unsigned __int8)MiLockPageInline(v42);
          MiRemoveLockedPageChargeAndDecRef(v42);
          _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v33);
        }
        return 0LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      *PteFromCopyList = 0LL;
      if ( (unsigned int)MiPteInShadowRange(PteFromCopyList) )
        MiWritePteShadow(PteFromCopyList, 0LL);
      LOBYTE(v18) = v36;
LABEL_42:
      MiUnlockWorkingSetExclusive((__int64)&dword_1402FFA80, v18, v19);
      MiReleaseFreshPage(v15);
      return 0LL;
    }
LABEL_41:
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v18) = v36;
    goto LABEL_42;
  }
  *(_BYTE *)(a1 + 34) &= 0xC7u;
  *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v18) = v36;
  MiUnlockWorkingSetExclusive((__int64)&dword_1402FFA80, v18, v19);
  *a5 = 1;
LABEL_38:
  *(_WORD *)(a1 + 32) = 0;
  if ( a4 )
    *a4 = v14;
  return 1LL;
}
