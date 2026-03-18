/*
 * XREFs of MiZeroPageThread @ 0x1401307A0
 * Callers:
 *     <none>
 * Callees:
 *     MiReleaseFreshPageLocked @ 0x140007B44 (MiReleaseFreshPageLocked.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiUnlinkNodeLargePage @ 0x140019534 (MiUnlinkNodeLargePage.c)
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14003ECA0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     MiFinalizePageAttribute @ 0x140072854 (MiFinalizePageAttribute.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KeSetActualBasePriorityThread @ 0x14007D1E0 (KeSetActualBasePriorityThread.c)
 *     KeWaitForMultipleObjects @ 0x1400810B0 (KeWaitForMultipleObjects.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     KeSetIdealProcessorThreadEx @ 0x1400956F8 (KeSetIdealProcessorThreadEx.c)
 *     MiChangePageAttribute @ 0x1400AA634 (MiChangePageAttribute.c)
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     MiInsertLargePageInNodeList @ 0x1400C02B4 (MiInsertLargePageInNodeList.c)
 *     KxWaitForLockChainValid @ 0x1400C6540 (KxWaitForLockChainValid.c)
 *     MiZeroLargePage @ 0x1400E4A68 (MiZeroLargePage.c)
 *     KeFindFirstSetLeftGroupAffinity @ 0x1400E7EC0 (KeFindFirstSetLeftGroupAffinity.c)
 *     MiAcquireNonPagedResources @ 0x1400E8A40 (MiAcquireNonPagedResources.c)
 *     MiReleaseNonPagedResources @ 0x1400E9D1C (MiReleaseNonPagedResources.c)
 *     KeQueryNodeActiveAffinity @ 0x1400F69BC (KeQueryNodeActiveAffinity.c)
 *     MiInitializeZeroPagePtes @ 0x140130700 (MiInitializeZeroPagePtes.c)
 *     MiInitializePageZeroing @ 0x1401312FC (MiInitializePageZeroing.c)
 *     MiCreateZeroThreadContext @ 0x1401318FC (MiCreateZeroThreadContext.c)
 *     MiDeleteZeroThreadContext @ 0x140131D78 (MiDeleteZeroThreadContext.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x140157480 (KeZeroPages.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401C49A4 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall MiZeroPageThread(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 v4; // r15
  __int64 v5; // rax
  unsigned int v6; // ebx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // r13
  unsigned int v11; // r14d
  __int64 v12; // rbx
  struct _KEVENT *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned int v16; // r13d
  char v17; // di
  unsigned int v18; // r9d
  unsigned __int8 CurrentIrql; // al
  _QWORD *v20; // rdx
  __int64 v21; // rax
  void *v22; // rcx
  __int64 v23; // r13
  __int64 v24; // r12
  __int64 v25; // r15
  __int64 v26; // r9
  __int64 v27; // r10
  unsigned __int64 v28; // rdi
  __int64 v29; // rbx
  unsigned __int8 v30; // r14
  char v31; // al
  bool v32; // zf
  unsigned int v33; // eax
  unsigned int FirstSetLeftGroupAffinity; // eax
  unsigned __int64 v35; // rbx
  unsigned __int64 *v36; // r15
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rbx
  __int64 v39; // r14
  unsigned int v40; // edi
  _KPROCESS *v41; // rdx
  unsigned __int64 v42; // r14
  unsigned __int64 *v43; // r12
  unsigned __int64 *v44; // r14
  __int64 v45; // r15
  unsigned __int64 PteAddress; // r13
  char v47; // cl
  __int64 v48; // rax
  __int64 v49; // rdi
  unsigned __int8 v50; // bl
  int v51; // eax
  bool v52; // cc
  unsigned __int64 v53; // rbx
  unsigned __int64 v54; // r13
  __int64 v55; // r8
  _QWORD *v56; // r12
  unsigned int i; // ebx
  volatile signed __int32 *v58; // r15
  volatile signed __int32 *v59; // rbx
  __int64 v60; // rdx
  int v61; // [rsp+60h] [rbp+0h] BYREF
  void *retaddr; // [rsp+258h] [rbp+1F8h]

  v3 = (unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL;
  v4 = a1;
  *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = a1;
  if ( !(unsigned int)MiInitializeZeroPagePtes(a1, a2, a3) )
    return;
  if ( (int *)v4 == MiSystemPartition )
  {
    v5 = MiInitializePageZeroing();
    *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = v5;
    if ( v5 )
    {
      v6 = *(_DWORD *)(v5 + 64);
      goto LABEL_7;
    }
  }
  else
  {
    v5 = 0LL;
    *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 0LL;
  }
  v6 = 0;
LABEL_7:
  *(_DWORD *)v3 = v6;
  *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = MiCreateZeroThreadContext(v4, v5, 0LL);
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78) = CurrentThread;
  *(_DWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = KeSetActualBasePriorityThread(
                                                                           (__int64)CurrentThread,
                                                                           0LL,
                                                                           v8);
  v9 = MiAcquireNonPagedResources((int *)v4, 0x100uLL);
  *(_DWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = -1;
  v10 = 256LL;
  if ( !v9 )
    v10 = 1LL;
  *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v10;
  *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) = v10;
  while ( 2 )
  {
    *(_DWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = v6;
    v11 = v6;
    v12 = *(_QWORD *)(v4 + 40);
    v13 = (struct _KEVENT *)(v4 + 5120);
    *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80) = v4 + 136;
    *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88) = v4 + 5120;
    if ( !KeWaitForMultipleObjects(2u, (PVOID *)(v3 + 128), WaitAny, WrFreePage, 0, 0, 0LL, (PKWAIT_BLOCK)(v3 + 160)) )
      break;
    v16 = *(_DWORD *)v3;
    while ( 1 )
    {
      if ( !*(_QWORD *)(v4 + 1728) )
      {
        *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = 0LL;
        *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = v4 + 4224;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v32 = (BYTE6(PerfGlobalGroupMask) & 0x21) == 0;
        *(_BYTE *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = CurrentIrql;
        if ( v32 )
        {
          v20 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v4 + 4224), v3 + 40);
          if ( v20 )
            KxWaitForLockOwnerShip(v3 + 40, v20, v15);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented(v3 + 40);
        }
        if ( !*(_QWORD *)(v4 + 1728) )
        {
          *(_BYTE *)(v4 + 5144) = 0;
          KeResetEvent(v13);
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(v3 + 40, retaddr);
LABEL_34:
          __writecr8(*(unsigned __int8 *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38));
          goto LABEL_35;
        }
        _m_prefetchw((const void *)(v3 + 40));
        v21 = *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
        if ( !v21 )
        {
          if ( _InterlockedCompareExchange64(
                 *(volatile signed __int64 **)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30),
                 0LL,
                 ((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 40) == v3 + 40 )
            goto LABEL_34;
          v21 = KxWaitForLockChainValid((__int64 *)(v3 + 40), (__int64)v20, v15);
        }
        *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(v21 + 8), 1uLL);
        goto LABEL_34;
      }
      v17 = byte_1402FE6D9;
LABEL_14:
      if ( !dword_1402FF6C8 && *(_QWORD *)(v4 + 5888) >= 0xA0uLL )
        break;
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
      v13 = (struct _KEVENT *)(v4 + 5120);
LABEL_35:
      if ( !KeWaitForMultipleObjects(2u, (PVOID *)(v3 + 128), WaitAny, WrFreePage, 0, 0, 0LL, (PKWAIT_BLOCK)(v3 + 160)) )
        goto LABEL_36;
    }
    if ( (unsigned __int16)KeNumberNodes > 1u )
    {
      v18 = v16 >> byte_1402FE6D9;
      v14 = v16 >> byte_1402FE6D9;
      while ( !(*(_QWORD *)(1336LL * (unsigned int)v14 + v12 + 8) | *(_QWORD *)(1336LL * (unsigned int)v14 + v12 + 1176)) )
      {
        v14 = ((int)v14 + 1) % (unsigned int)(unsigned __int16)KeNumberNodes;
        if ( (_DWORD)v14 == v18 )
          goto LABEL_14;
      }
      if ( (_DWORD)v14 != v18 )
      {
        v11 = *(_DWORD *)(1336LL * (unsigned int)v14 + v12 + 1224);
        *(_DWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = v11;
      }
    }
    v6 = v11;
    *(_DWORD *)v3 = v11;
    if ( v11 != -1 )
    {
      v32 = *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) == 0LL;
      v23 = 0LL;
      *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 0LL;
      v24 = 0LL;
      if ( !v32 && *(_QWORD *)(1336 * ((unsigned __int64)v11 >> v17) + *(_QWORD *)(v4 + 40) + 8) )
      {
        if ( !(unsigned int)MiAcquireNonPagedResources((int *)v4, 0x201uLL) )
        {
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
          continue;
        }
        v24 = MiUnlinkNodeLargePage(v4, v11 >> byte_1402FE6D9, 4u, 1);
        if ( v24 )
          goto LABEL_77;
        MiReleaseNonPagedResources(v4, 0x201uLL);
      }
      v25 = *(_QWORD *)(v4 + 1608);
      v26 = 0LL;
      *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0LL;
      v27 = 0xFFFFFFFFFLL;
      *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 0LL;
LABEL_54:
      v28 = *(_QWORD *)(v25 + 40LL * v6 + 16);
      if ( v28 == v27 )
        goto LABEL_72;
      v29 = 48 * v28 - 0x58000000000LL;
      v30 = KeGetCurrentIrql();
      __writecr8(2uLL);
      *(_DWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x4C) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx((_DWORD *)(v3 + 76), v14, v15);
        while ( (*(_QWORD *)(v29 + 24) & 0x8000000000000000uLL) != 0 );
      }
      if ( MI_IS_PFN(v28) && (*(_BYTE *)(v29 + 34) & 7) == 1 && (v27 & *(_QWORD *)(v29 + 40)) != 0xFFFFFFFFELL )
      {
        if ( !(unsigned int)MiUnlinkFreeOrZeroedPage(v28, 0LL, 0) )
        {
          MiReleaseFreshPageLocked(48 * v28 - 0x58000000000LL);
          _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v30);
LABEL_76:
          v4 = *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
          v6 = *(_DWORD *)v3;
          if ( !v23 )
            continue;
LABEL_77:
          v33 = v6 >> byte_1402FE6D9;
          if ( v6 >> byte_1402FE6D9 != *(_DWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) )
          {
            *(_DWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v33;
            KeQueryNodeActiveAffinity(v33, (PGROUP_AFFINITY)(v3 + 144), 0LL);
            if ( *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90) )
            {
              FirstSetLeftGroupAffinity = KeFindFirstSetLeftGroupAffinity(v3 + 144);
              KeSetIdealProcessorThreadEx(
                *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78),
                FirstSetLeftGroupAffinity,
                0LL);
            }
          }
          if ( v24 )
          {
            MiZeroLargePage(v24, *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40));
            v35 = (unsigned __int8)MiLockPageInline(v24);
            MiInsertLargePageInNodeList((v24 + 0x58000000000LL) / 48, 0x200uLL, 0);
            _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v35);
            MiReleaseNonPagedResources(v4, 0x201uLL);
            v6 = *(_DWORD *)v3;
            continue;
          }
          v36 = *(unsigned __int64 **)(v4 + 5152);
          v37 = MI_READ_PTE_LOCK_FREE(v36);
          v38 = *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
          v39 = HIDWORD(v37);
          v40 = v37;
          if ( v38 > HIDWORD(v37) )
          {
            *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x108) = 20LL;
            *(_DWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x100) = 0;
            *(_WORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x104) = 0;
            *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x110) = 0LL;
            *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x118) = 0LL;
            MiInsertTbFlushEntry(
              v3 + 256,
              ((v39 << 28) + ((_QWORD)v36 << 25)) >> 16,
              (unsigned int)(256 - HIDWORD(v37)),
              0);
            MiFlushTbList(v3 + 256, v41);
            v39 = 256LL;
          }
          v42 = v39 - v38;
          *v36 = v40 ^ (v42 << 32);
          if ( (unsigned int)MiPteInShadowRange(v36) )
            MiWritePteShadow(v36, v40 ^ (v42 << 32));
          v43 = &v36[v42];
          *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = v43;
          v44 = v43;
          v45 = v23;
          *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = (__int64)((_QWORD)v43 << 25) >> 16;
          PteAddress = MiGetPteAddress(0xFFFF800000000000uLL);
LABEL_87:
          if ( (*(_BYTE *)(v45 + 34) & 0xC0) == 0xC0 )
            MiFinalizePageAttribute(v45, 1LL, 0);
          v47 = *(_BYTE *)(v45 + 34) >> 6;
          if ( v47 )
          {
            v48 = 4LL;
            if ( v47 == 2 )
              v48 = 28LL;
          }
          else
          {
            v48 = 12LL;
          }
          v49 = MmProtectToPteMask[v48] ^ ((((v45 + 0x58000000000LL) / 48) << 12) ^ MmProtectToPteMask[v48]) & 0xFFFFFFFFF000LL | 0x21;
          if ( (unsigned __int64)(v44 + 0x12098000000LL) <= 0x3FFFFFFF )
            v49 &= ~qword_140381310 & 0x7FFFFFFFFFFFFFFFLL;
          if ( (unsigned __int64)v44 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL)
                                      - 0x98000000000LL
            && (unsigned __int64)v44 >= 0xFFFFF68000000000uLL
            || (unsigned __int64)v44 >= 0xFFFFF6FB40000000uLL
            && (unsigned __int64)v44 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
            || (unsigned __int64)v44 >= 0xFFFFF6FB7DA00000uLL
            && (unsigned __int64)v44 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
            || (unsigned __int64)v44 >= 0xFFFFF6FB7DBED000uLL
            && (unsigned __int64)v44 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
          {
            v49 |= 4uLL;
          }
          v50 = word_1402FE760;
          if ( (unsigned __int64)v44 < PteAddress )
          {
            v51 = HIBYTE(word_1402FE760);
            goto LABEL_113;
          }
          if ( ((unsigned __int64)v44 < MiGetPteAddress(0xFFFFF90000000000uLL)
             || (unsigned __int64)v44 >= MiGetPteAddress(0xFFFFF98000000000uLL))
            && ((unsigned __int64)v44 < MiGetPteAddress(0xFFFFF68000000000uLL)
             || (unsigned __int64)v44 > MiGetPteAddress(0xFFFFF6FFFFFFFFFFuLL)) )
          {
            if ( (unsigned __int64)v44 < MiGetPteAddress(0xFFFFF58000000000uLL)
              || (v52 = (unsigned __int64)v44 <= MiGetPteAddress(0xFFFFF6FFFFFFFFFFuLL),
                  v51 = HIBYTE(word_1402FE760),
                  !v52) )
            {
              v51 = v50;
            }
LABEL_113:
            if ( v51 )
              v49 |= 0x100uLL;
          }
          v53 = v49 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(v50 & 1) << 8) | 0x42;
          *v44 = v53;
          if ( (unsigned int)MiPteInShadowRange(v44) )
            MiWritePteShadow(v44, v53);
          v45 = *(_QWORD *)v45;
          ++v44;
          if ( !v45 )
          {
            v54 = *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
            KeZeroPages(*(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18), v54 << 12);
            v56 = *(_QWORD **)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60);
            for ( i = 0; i < v54; ++v56 )
            {
              *v56 = 0LL;
              if ( (unsigned int)MiPteInShadowRange(v56) )
                MiWritePteShadow(v56, 0LL);
              ++i;
            }
            *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = KeGetCurrentIrql();
            __writecr8(2uLL);
            v58 = *(volatile signed __int32 **)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58);
            do
            {
              v59 = v58;
              *(_DWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 0;
              v58 = *(volatile signed __int32 **)v58;
              v60 = (unsigned __int128)((__int64)(v59 + 0x16000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
              *((_QWORD *)v59 + 2) = 0LL;
              while ( _interlockedbittestandset64(v59 + 6, 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx((_DWORD *)(v3 + 80), v60, v55);
                while ( (*((_QWORD *)v59 + 3) & 0x8000000000000000uLL) != 0 );
              }
              MiInsertPageInFreeOrZeroedList((__int64)(v59 + 0x16000000000LL) / 48, 1uLL);
              _InterlockedAnd64((volatile signed __int64 *)v59 + 3, 0x7FFFFFFFFFFFFFFFuLL);
            }
            while ( v58 );
            __writecr8((unsigned __int8)*(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60));
            v4 = *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
            v6 = *(_DWORD *)v3;
            continue;
          }
          goto LABEL_87;
        }
        if ( (*(_BYTE *)(v29 + 34) & 7) != 5 || *(_WORD *)(v29 + 32) )
          KeBugCheckEx(
            0x4Eu,
            0x8DuLL,
            v28,
            *(unsigned __int16 *)(v29 + 32) | (unsigned __int64)(*(unsigned __int16 *)(v29 + 34) << 16),
            *(_QWORD *)(v29 + 8));
        *(_QWORD *)v29 = v23;
        _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v30);
        v31 = *(_BYTE *)(v29 + 34) >> 6;
        if ( v31 )
        {
          if ( v31 == 2 )
          {
            v32 = (MiFlags & 0x4000) == 0;
            goto LABEL_68;
          }
        }
        else
        {
          v32 = (MiFlags & 0x2000) == 0;
LABEL_68:
          if ( !v32 )
            MiChangePageAttribute(v29, 1, 0);
        }
        v23 = 48 * v28 - 0x58000000000LL;
        v11 = *(_DWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
        v26 = *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 8) + 1LL;
        *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = v29;
        v27 = 0xFFFFFFFFFLL;
        v6 = *(_DWORD *)v3;
        *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v26;
LABEL_72:
        v6 = v6 & ~dword_1402FE6B0 | dword_1402FE6B0 & (v6 + 1);
        *(_DWORD *)v3 = v6;
        if ( v6 == v11 )
          goto LABEL_76;
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v30);
        v11 = *(_DWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
        v6 = *(_DWORD *)v3;
      }
      if ( v26 == *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) )
        goto LABEL_76;
      goto LABEL_54;
    }
    break;
  }
LABEL_36:
  KeSetActualBasePriorityThread(
    *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78),
    *(unsigned int *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48),
    v15);
  if ( *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) != 1LL )
    MiReleaseNonPagedResources(v4, *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70));
  MiReleasePtes((__int64)&qword_1402FF7B0, *(_QWORD **)(v4 + 5152), 0x100u);
  if ( *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) )
    MiDeleteZeroThreadContext(v4, *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40), 0LL);
  v22 = *(void **)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68);
  if ( v22 )
    ExFreePoolWithTag(v22, 0);
}
