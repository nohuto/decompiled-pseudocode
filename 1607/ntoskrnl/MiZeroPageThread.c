/*
 * XREFs of MiZeroPageThread @ 0x14013A1B0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x14000509C (KeQueryNodeActiveAffinity.c)
 *     KxWaitForLockOwnerShip @ 0x14001B920 (KxWaitForLockOwnerShip.c)
 *     MiChangePageAttribute @ 0x14001CC08 (MiChangePageAttribute.c)
 *     MiFinalizePageAttribute @ 0x1400232DC (MiFinalizePageAttribute.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14002EA80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeWaitForMultipleObjects @ 0x140059E60 (KeWaitForMultipleObjects.c)
 *     MiZeroSinglePage @ 0x140066710 (MiZeroSinglePage.c)
 *     MiGetLargePageToZero @ 0x140089D80 (MiGetLargePageToZero.c)
 *     MiZeroLargePage @ 0x14008A8C0 (MiZeroLargePage.c)
 *     KeFindFirstSetLeftGroupAffinity @ 0x1400A6C08 (KeFindFirstSetLeftGroupAffinity.c)
 *     KeSignalGate @ 0x1400A6E1C (KeSignalGate.c)
 *     KeSetIdealProcessorThreadEx @ 0x1400C8244 (KeSetIdealProcessorThreadEx.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     KeSetActualBasePriorityThread @ 0x1400D06E0 (KeSetActualBasePriorityThread.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     KxWaitForLockChainValid @ 0x1400F7370 (KxWaitForLockChainValid.c)
 *     MiDereferencePageRuns @ 0x140104DD8 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x140104E70 (MiReferencePageRuns.c)
 *     MiCreateZeroThreadContext @ 0x14013B070 (MiCreateZeroThreadContext.c)
 *     MiInitializePageZeroing @ 0x14013B3E0 (MiInitializePageZeroing.c)
 *     MiDeleteZeroThreadContext @ 0x14013F75C (MiDeleteZeroThreadContext.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     HvlNotifyLongSpinWait @ 0x1401BAD4C (HvlNotifyLongSpinWait.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D380C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401D3988 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPteTimeStamp @ 0x1401F24C8 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x1401F2840 (MiUpdatePageFileHighInPte.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14022DB5C (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14022DCC8 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall MiZeroPageThread(int *a1)
{
  unsigned __int64 v1; // rbp
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // rax
  _DWORD *v5; // rdi
  __int64 ZeroThreadContext; // rax
  unsigned int v7; // edi
  struct _KTHREAD *CurrentThread; // rcx
  struct _KEVENT *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r12
  BOOL v12; // r13d
  __int64 v13; // rsi
  _QWORD *v14; // r14
  _QWORD *v15; // rdi
  volatile signed __int32 *v16; // rbx
  unsigned __int8 CurrentIrql; // r15
  signed __int32 v18; // edx
  bool v19; // zf
  signed __int32 v20; // eax
  void *v21; // rsi
  _QWORD *v22; // rbx
  unsigned int v23; // r8d
  unsigned int v24; // edx
  __int64 v25; // rax
  unsigned int v26; // ecx
  _QWORD *v27; // rax
  unsigned __int8 v28; // al
  _QWORD *v29; // rdx
  __int64 v30; // rax
  unsigned int v31; // r15d
  volatile signed __int32 *v32; // rbx
  unsigned __int8 v33; // di
  signed __int32 v34; // edx
  signed __int32 v35; // eax
  _QWORD *v36; // rsi
  unsigned int v37; // eax
  _QWORD *v38; // rcx
  __int64 v39; // rdi
  unsigned int i; // ebx
  BOOL LargePageToZero; // eax
  __int64 v42; // r15
  int v43; // edx
  ULONG_PTR v44; // r14
  __int64 v45; // rsi
  unsigned __int8 v46; // r12
  unsigned int v47; // ebx
  __int64 *v48; // rax
  unsigned int j; // ecx
  __int64 v50; // r15
  __int64 *v51; // rdi
  __int64 v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 PteTimeStamp; // r9
  __int64 v56; // r10
  _KPROCESS *v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 updated; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r9
  unsigned __int64 v64; // rbx
  __int64 v65; // rcx
  unsigned __int64 v66; // rcx
  char v67; // al
  __int64 v68; // rcx
  __int64 v69; // rax
  int v70; // ecx
  unsigned __int64 v71; // rdx
  __int64 v72; // rdx
  __int64 v73; // rcx
  unsigned __int64 v74; // r11
  unsigned int v75; // eax
  int FirstSetLeftGroupAffinity; // eax
  int v77; // [rsp+60h] [rbp+0h] BYREF
  void *retaddr; // [rsp+2D8h] [rbp+278h]

  v1 = (unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL;
  v2 = 0LL;
  *(_QWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = a1;
  v3 = (__int64)a1;
  if ( a1 != MiSystemPartition
    || (v2 = MiReferencePageRuns((__int64)a1, 0),
        v4 = MiInitializePageZeroing(),
        *(_QWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = v4,
        (v5 = (_DWORD *)v4) == 0LL) )
  {
    v5 = (_DWORD *)(v1 + 432);
    *(_QWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = ((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                         + 432;
    memset((void *)(v1 + 432), 0, 0x88uLL);
  }
  ZeroThreadContext = MiCreateZeroThreadContext(v3, v5, 0LL);
  *(_QWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = ZeroThreadContext;
  if ( ZeroThreadContext )
  {
    v7 = v5[20];
    CurrentThread = KeGetCurrentThread();
    *(_DWORD *)v1 = v7;
    *(_QWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = CurrentThread;
    v9 = (struct _KEVENT *)(v3 + 5760);
    *(_DWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = KeSetActualBasePriorityThread(
                                                                             (__int64)CurrentThread,
                                                                             0);
    *(_QWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = v3 + 5760;
    *(_DWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = -1;
LABEL_8:
    v10 = v3 + 144;
LABEL_9:
    v11 = *(_QWORD *)(v3 + 48);
    *(_DWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = v7;
    v12 = 0;
    *(_QWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = v10;
    *(_QWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) = v9;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( v2 )
          {
            v13 = *(_QWORD *)(v2 - 16);
            v14 = (_QWORD *)(v2 - 16);
            v15 = 0LL;
            v16 = (volatile signed __int32 *)(v13 + 232);
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v13 + 232, CurrentIrql);
            }
            else
            {
              *(_DWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0;
              if ( _interlockedbittestandset(v16, 0x1Fu) )
                *(_DWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = ExpWaitForSpinLockExclusiveAndAcquire(
                                                                                      (volatile signed __int32 *)(v13 + 232),
                                                                                      CurrentIrql);
              v18 = *v16;
              while ( (v18 & 0xBFFFFFFF) != 0x80000000 )
              {
                if ( (v18 & 0x40000000) == 0 )
                {
                  v20 = _InterlockedCompareExchange(v16, v18 | 0x40000000, v18);
                  v19 = v18 == v20;
                  v18 = v20;
                  if ( !v19 )
                    continue;
                }
                KeYieldProcessorEx((_DWORD *)(v1 + 8));
                v18 = *v16;
              }
            }
            if ( (int *)v13 == MiSystemPartition )
            {
              v19 = (*(_QWORD *)(v13 + 72))-- == 1LL;
              if ( v19 )
              {
                v15 = *(_QWORD **)(v13 + 128);
                *(_QWORD *)(v13 + 128) = 0LL;
              }
            }
            v19 = v14[1]-- == 1LL;
            v21 = 0LL;
            if ( v19 )
              v21 = v14;
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v16, retaddr);
            else
              *v16 = 0;
            __writecr8(CurrentIrql);
            if ( v15 )
            {
              do
              {
                v22 = (_QWORD *)*v15;
                KeSignalGate((__int64)(v15 + 1), 1u);
                v15 = v22;
              }
              while ( v22 );
            }
            if ( v21 )
              ExFreePoolWithTag(v21, 0);
            v3 = *(_QWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48);
            v2 = 0LL;
            v7 = *(_DWORD *)v1;
            v9 = *(struct _KEVENT **)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60);
          }
          if ( !KeWaitForMultipleObjects(
                  2u,
                  (PVOID *)(v1 + 104),
                  WaitAny,
                  WrFreePage,
                  0,
                  0,
                  0LL,
                  (PKWAIT_BLOCK)(v1 + 144)) )
          {
LABEL_159:
            KeSetActualBasePriorityThread(
              *(_QWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50),
              *(_DWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40));
            MiDeleteZeroThreadContext(*(_QWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20));
            ExFreePoolWithTag(*(PVOID *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20), 0);
            v5 = *(_DWORD **)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58);
            goto LABEL_160;
          }
          if ( !*(_QWORD *)(v3 + 1856) )
            break;
LABEL_35:
          if ( !dword_1403277C8 && *(_QWORD *)(v3 + 6464) >= 0xA0uLL )
          {
            if ( (unsigned __int16)KeNumberNodes <= 1u )
              goto LABEL_62;
            v23 = v7 >> byte_140326A09;
            v24 = v7 >> byte_140326A09;
            while ( 1 )
            {
              v25 = v11 + 2184LL * v24;
              if ( *(_QWORD *)(v25 + 2016) )
                break;
              v26 = 0;
              v27 = (_QWORD *)(v25 + 8);
              do
              {
                if ( *v27 )
                  break;
                ++v26;
                v27 += 2;
              }
              while ( v26 < 3 );
              if ( v26 != 3 )
                break;
              v24 = (v24 + 1) % (unsigned __int16)KeNumberNodes;
              if ( v24 == v23 )
                goto LABEL_35;
            }
            if ( v24 == v23 )
            {
LABEL_62:
              v31 = *(_DWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
            }
            else
            {
              v31 = *(_DWORD *)(2184LL * v24 + v11 + 2064);
              *(_DWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = v31;
            }
            v32 = (volatile signed __int32 *)(v3 + 232);
            v33 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v3 + 232, v33);
            }
            else
            {
              *(_DWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC) = 0;
              if ( _interlockedbittestandset(v32, 0x1Fu) )
                *(_DWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC) = ExpWaitForSpinLockExclusiveAndAcquire(
                                                                                        (volatile signed __int32 *)(v3 + 232),
                                                                                        v33);
              v34 = *v32;
              while ( (v34 & 0xBFFFFFFF) != 0x80000000 )
              {
                if ( (v34 & 0x40000000) == 0 )
                {
                  v35 = _InterlockedCompareExchange(v32, v34 | 0x40000000, v34);
                  v19 = v34 == v35;
                  v34 = v35;
                  if ( !v19 )
                    continue;
                }
                KeYieldProcessorEx((_DWORD *)(v1 + 12));
                v34 = *v32;
              }
            }
            v36 = MmPhysicalMemoryBlock;
            if ( (int *)v3 != MiSystemPartition )
              v36 = *(_QWORD **)(v3 + 136);
            *(_QWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = v36;
            if ( v36 )
            {
              ++*(v36 - 1);
              if ( (int *)v3 == MiSystemPartition )
                ++*(_QWORD *)(v3 + 72);
            }
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3 + 232, retaddr);
            else
              *v32 = 0;
            __writecr8(v33);
            if ( !v36 )
              *(_QWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = MiReferencePageRuns(
                                                                                       (__int64)MiSystemPartition,
                                                                                       0);
            *(_DWORD *)v1 = v31;
            v7 = v31;
            if ( v31 != -1 )
            {
              v37 = 0;
              v38 = (_QWORD *)(*(_QWORD *)(v3 + 48) + 2184 * ((unsigned __int64)v31 >> byte_140326A09) + 8);
              while ( !*v38 )
              {
                ++v37;
                v38 += 2;
                if ( v37 >= 3 )
                  goto LABEL_91;
              }
              v39 = *(_QWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
              for ( i = 0; i < 3; ++i )
              {
                LargePageToZero = MiGetLargePageToZero(v3, v39, i, v31);
                v12 = LargePageToZero;
                if ( LargePageToZero )
                  break;
              }
              v7 = v31;
              if ( !LargePageToZero )
              {
LABEL_91:
                v42 = *(_QWORD *)(v3 + 1736);
                v43 = dword_1403269E0;
                while ( 1 )
                {
                  v44 = *(_QWORD *)(v42 + 40LL * v7 + 16);
                  if ( v44 == 0xFFFFFFFFFLL )
                  {
                    v7 = v7 & ~v43 | v43 & (v7 + 1);
                    *(_DWORD *)v1 = v7;
                  }
                  else
                  {
                    v45 = 48 * v44 - 0x58000000000LL;
                    v46 = KeGetCurrentIrql();
                    __writecr8(2uLL);
                    v47 = 0;
                    if ( _interlockedbittestandset64((volatile signed __int32 *)(v45 + 24), 0x3FuLL) )
                    {
                      do
                      {
                        if ( (++v47 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                          _mm_pause();
                        else
                          HvlNotifyLongSpinWait(v47);
                      }
                      while ( (*(_QWORD *)(v45 + 24) & 0x8000000000000000uLL) != 0
                           || _interlockedbittestandset64((volatile signed __int32 *)(v45 + 24), 0x3FuLL) );
                    }
                    if ( v44 <= qword_140326AD0
                      && (!MmPhysicalMemoryBlock || (*(_QWORD *)(48 * v44 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0)
                      && (*(_BYTE *)(v45 + 34) & 7) == 1 )
                    {
                      v48 = MiLargePageContainingFrames;
                      for ( j = 0; j < 3; ++j )
                      {
                        if ( (*(_QWORD *)(v45 + 40) & 0xFFFFFFFFFLL) == *v48 )
                          goto LABEL_115;
                        ++v48;
                      }
                      if ( *(_WORD *)(v45 + 32) )
                        KeBugCheckEx(0x4Eu, 0x8DuLL, v44, *(unsigned int *)(v45 + 32), *(_QWORD *)(v45 + 8));
                      *(_BYTE *)(v45 + 34) |= 8u;
                      v50 = *(_QWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
                      *(_QWORD *)(v45 + 16) = v50;
                      v51 = *(__int64 **)(v50 + 136);
                      v52 = MI_READ_PTE_LOCK_FREE(v51);
                      PteTimeStamp = MiGetPteTimeStamp(v52, v53, v54);
                      if ( !PteTimeStamp )
                      {
                        *(_QWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0xF8) = 20LL;
                        *(_DWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0xF0) = v56;
                        *(_WORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0xF4) = 0;
                        *(_QWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0x100) = v56;
                        *(_QWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0x108) = v56;
                        MiInsertTbFlushEntry(v1 + 240, (__int64)((_QWORD)v51 << 25) >> 16, 256LL, 0);
                        MiFlushTbList(v1 + 240, v57, v58, v59);
                        PteTimeStamp = 256LL;
                      }
                      updated = MiUpdatePageFileHighInPte(v52, PteTimeStamp - 1);
                      *v51 = updated;
                      if ( (unsigned int)MiPteInShadowRange(v51, updated) )
                        MiWritePteShadow(v62, v61);
                      v64 = (unsigned __int64)&v51[v63 - 1];
                      *(_QWORD *)(v50 + 32) = v64;
                      *(_DWORD *)(v50 + 64) = -1;
                      v65 = (__int64)(v64 << 25) >> 16;
                      *(_QWORD *)(v50 + 40) = v65;
                      *(_QWORD *)(v50 + 24) = v45;
                      *(_QWORD *)(v50 + 72) = v45;
                      *(_BYTE *)(v50 + 68) = 0;
                      *(_QWORD *)(v50 + 48) = v65 + 4095;
                      v66 = *(unsigned __int8 *)(v45 + 34);
                      if ( ((*(unsigned __int8 *)(v45 + 34) >> 6) & 0xFFFFFFFD) != 0 )
                      {
                        if ( (v66 & 0xC0) == 0xC0 )
                          MiFinalizePageAttribute(48 * v44 - 0x58000000000LL, 1u, 1u);
                      }
                      else if ( dword_140326A64[4 * (v66 >> 6)] == 1 )
                      {
                        MiChangePageAttribute(48 * v44 - 0x58000000000LL, 1u, 1);
                      }
                      v67 = *(_BYTE *)(v45 + 34) >> 6;
                      if ( v67 )
                      {
                        v68 = 4LL;
                        if ( v67 == 2 )
                          v68 = 28LL;
                      }
                      else
                      {
                        v68 = 12LL;
                      }
                      v69 = MmProtectToPteMask[v68] ^ ((v44 << 12) ^ MmProtectToPteMask[v68]) & 0xFFFFFFFFF000LL | 0x21;
                      if ( v64 >= 0xFFFFF6FB40000000uLL && v64 <= 0xFFFFF6FB7FFFFFFFuLL )
                        v69 &= ~qword_1403A9350 & 0x7FFFFFFFFFFFFFFFLL;
                      if ( v64 <= 0xFFFFF6BFFFFFFF78uLL && v64 >= 0xFFFFF68000000000uLL
                        || v64 >= 0xFFFFF6FB40000000uLL && v64 <= 0xFFFFF6FB5FFFFFF8uLL
                        || v64 >= 0xFFFFF6FB7DA00000uLL && v64 <= 0xFFFFF6FB7DAFFFF8uLL
                        || v64 >= 0xFFFFF6FB7DBED000uLL && v64 <= 0xFFFFF6FB7DBED7F8uLL )
                      {
                        v69 |= 4uLL;
                      }
                      if ( v64 < 0xFFFFF6C000000000uLL )
                      {
                        v70 = HIBYTE(word_140326AE8);
                        goto LABEL_146;
                      }
                      if ( (v64 < (((unsigned __int64)qword_140326950 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
                         || v64 >= (((unsigned __int64)(qword_140326950 + 0x8000000000LL) >> 9) & 0x7FFFFFFFF8LL)
                                 - 0x98000000000LL)
                        && (v64 < 0xFFFFF6FB40000000uLL || v64 > 0xFFFFF6FB7FFFFFF8uLL) )
                      {
                        if ( v64 < (((unsigned __int64)qword_140327FD0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
                          || (v70 = HIBYTE(word_140326AE8),
                              v64 > (((unsigned __int64)qword_140326D38 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) )
                        {
                          v70 = (unsigned __int8)word_140326AE8;
                        }
LABEL_146:
                        if ( v70 )
                          v69 |= 0x100uLL;
                      }
                      v71 = v69 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_140326AE8 & 1) << 8) | 0x42;
                      *(_QWORD *)v64 = v71;
                      if ( (unsigned int)MiPteInShadowRange(v64, v71) )
                        MiWritePteShadow(v73, v72);
                      _InterlockedAnd64((volatile signed __int64 *)(v45 + 24), v74);
                      __writecr8(v46);
                      v3 = *(_QWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48);
                      v7 = *(_DWORD *)v1;
                      goto LABEL_152;
                    }
LABEL_115:
                    _InterlockedAnd64((volatile signed __int64 *)(v45 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                    __writecr8(v46);
                    v43 = dword_1403269E0;
                    v7 = *(_DWORD *)v1;
                  }
                  v3 = *(_QWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48);
                  v2 = *(_QWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
                  v9 = (struct _KEVENT *)(v3 + 5760);
                  v10 = v3 + 144;
                  if ( v7 == *(_DWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 4) )
                    goto LABEL_9;
                }
              }
              v50 = *(_QWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
LABEL_152:
              v75 = v7 >> byte_140326A09;
              if ( v7 >> byte_140326A09 != *(_DWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) )
              {
                *(_DWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v75;
                KeQueryNodeActiveAffinity(v75, (PGROUP_AFFINITY)(v1 + 120), 0LL);
                if ( *(_QWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78) )
                {
                  FirstSetLeftGroupAffinity = KeFindFirstSetLeftGroupAffinity(v1 + 120);
                  KeSetIdealProcessorThreadEx(
                    *(_QWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50),
                    FirstSetLeftGroupAffinity,
                    0LL);
                }
              }
              if ( v12 )
                MiZeroLargePage(v50);
              else
                MiZeroSinglePage(v50);
              v2 = *(_QWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
              v9 = (struct _KEVENT *)(v3 + 5760);
              goto LABEL_8;
            }
            goto LABEL_159;
          }
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
        }
        *(_QWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = 0LL;
        *(_QWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = v3 + 4352;
        v28 = KeGetCurrentIrql();
        __writecr8(2uLL);
        v19 = (BYTE6(PerfGlobalGroupMask) & 0x21) == 0;
        *(_BYTE *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = v28;
        if ( v19 )
        {
          v29 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v3 + 4352), v1 + 40);
          if ( v29 )
            KxWaitForLockOwnerShip(v1 + 40, v29);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented(v1 + 40, v3 + 4352);
        }
        if ( !*(_QWORD *)(v3 + 1856) )
        {
          *(_BYTE *)(v3 + 5784) = 0;
          KeResetEvent(v9);
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
          break;
        KiReleaseQueuedSpinLockInstrumented(v1 + 40, retaddr);
        __writecr8(*(unsigned __int8 *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38));
      }
      _m_prefetchw((const void *)(v1 + 40));
      v30 = *(_QWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
      if ( !v30 )
      {
        if ( _InterlockedCompareExchange64(
               *(volatile signed __int64 **)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30),
               0LL,
               ((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 40) == v1 + 40 )
          goto LABEL_59;
        v30 = KxWaitForLockChainValid((__int64 *)(v1 + 40));
      }
      *(_QWORD *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v30 + 8), 1uLL);
LABEL_59:
      __writecr8(*(unsigned __int8 *)(((unsigned __int64)&v77 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38));
    }
  }
  if ( v2 )
    MiDereferencePageRuns(v2);
LABEL_160:
  if ( v5 != (_DWORD *)(v1 + 432) )
    ExFreePoolWithTag(v5, 0);
}
