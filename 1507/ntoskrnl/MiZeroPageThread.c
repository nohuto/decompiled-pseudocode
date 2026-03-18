/*
 * XREFs of MiZeroPageThread @ 0x14015FE90
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140009C20 (KeSetActualBasePriorityThread.c)
 *     KxWaitForLockOwnerShip @ 0x140042D90 (KxWaitForLockOwnerShip.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     MiFinalizePageAttribute @ 0x140059C28 (MiFinalizePageAttribute.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     KeWaitForMultipleObjects @ 0x14009F320 (KeWaitForMultipleObjects.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1400C7B60 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     KeQueryNodeActiveAffinity @ 0x1400DBBC4 (KeQueryNodeActiveAffinity.c)
 *     MiChangePageAttribute @ 0x1400E5678 (MiChangePageAttribute.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     MiDeleteZeroThreadContext @ 0x1400FC244 (MiDeleteZeroThreadContext.c)
 *     MiReleaseNonPagedResources @ 0x1400FC2A8 (MiReleaseNonPagedResources.c)
 *     MiZeroLargePage @ 0x1400FC2EC (MiZeroLargePage.c)
 *     MiInsertLargePageInNodeList @ 0x1400FFD48 (MiInsertLargePageInNodeList.c)
 *     MiUnlinkNodeLargePage @ 0x1401023B8 (MiUnlinkNodeLargePage.c)
 *     KeSetIdealProcessorThreadEx @ 0x140118AF4 (KeSetIdealProcessorThreadEx.c)
 *     MiCreateZeroThreadContext @ 0x140123730 (MiCreateZeroThreadContext.c)
 *     MiAcquireNonPagedResources @ 0x140123878 (MiAcquireNonPagedResources.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x140186BF0 (KeZeroPages.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140200B54 (KiAcquireQueuedSpinLockInstrumented.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiGetPteTimeStamp @ 0x140225B28 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x140225FFC (MiUpdatePageFileHighInPte.c)
 *     MiInitializeZeroPagePtes @ 0x140597BAC (MiInitializeZeroPagePtes.c)
 */

__int64 __fastcall MiZeroPageThread(__int64 a1)
{
  unsigned __int64 v1; // rbp
  __int64 v2; // rsi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v5; // r15d
  __int64 v6; // rax
  __int64 v7; // r13
  struct _KEVENT *v8; // r12
  __int64 v9; // rbx
  unsigned int v10; // r14d
  char v11; // si
  unsigned int v12; // r9d
  unsigned int v13; // edx
  unsigned __int8 CurrentIrql; // al
  _QWORD *v15; // rdx
  __int64 v16; // rax
  char v17; // cl
  __int64 v18; // r12
  __int64 v19; // r13
  __int64 v20; // rax
  _QWORD *ZeroThreadContext; // rax
  __int64 v22; // rbx
  __int64 v23; // r12
  __int64 v24; // rdx
  unsigned __int64 v25; // r14
  __int64 v26; // rsi
  unsigned __int8 v27; // r15
  unsigned int v28; // ebx
  __int64 v29; // r9
  char v30; // al
  bool v31; // zf
  unsigned int v32; // eax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  unsigned __int8 v36; // si
  unsigned int v37; // ebx
  __int64 *v38; // rsi
  __int64 PteShadow; // rbx
  unsigned __int64 PteTimeStamp; // rax
  unsigned __int64 v41; // r13
  __int64 v42; // r14
  unsigned __int64 v43; // r14
  __int64 updated; // rax
  unsigned __int64 *v45; // r14
  unsigned __int64 *v46; // rbx
  __int64 v47; // rsi
  char v48; // al
  __int64 v49; // rcx
  __int64 v50; // rax
  int v51; // ecx
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // r13
  _QWORD *v54; // r14
  volatile signed __int32 *v55; // r12
  unsigned int v56; // esi
  unsigned __int64 v57; // rbx
  volatile signed __int32 *v58; // rsi
  unsigned int v59; // ebx
  __int64 v60; // rbx
  int v61; // [rsp+60h] [rbp+0h] BYREF
  void *retaddr; // [rsp+268h] [rbp+208h]

  v1 = (unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL;
  v2 = a1;
  *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = a1;
  result = MiInitializeZeroPagePtes();
  if ( !(_DWORD)result )
    return result;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = CurrentThread;
  *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = 0LL;
  *(_DWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = KeSetActualBasePriorityThread(
                                                                           (__int64)CurrentThread,
                                                                           0);
  v5 = 0;
  v31 = (unsigned int)MiAcquireNonPagedResources((__int16 *)v2, 0x100uLL) == 0;
  *(_DWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = -1;
  v6 = v2 + 152;
  v7 = 256LL;
  *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90) = v2 + 152;
  if ( v31 )
    v7 = 1LL;
  v8 = (struct _KEVENT *)(v2 + 4792);
  *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v7;
  *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = v7;
  *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88) = v2 + 4792;
  while ( 2 )
  {
    v9 = *(_QWORD *)(v2 + 40);
    *(_DWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = v5;
    v10 = v5;
    *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) = v6;
    *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78) = v8;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !KeWaitForMultipleObjects(
                2u,
                (PVOID *)(v1 + 112),
                WaitAny,
                WrFreePage,
                0,
                0,
                0LL,
                (PKWAIT_BLOCK)(v1 + 176)) )
          goto LABEL_126;
        if ( *(_QWORD *)(v2 + 1600) )
          break;
        *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = 0LL;
        *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = v2 + 4032;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v31 = (BYTE6(PerfGlobalGroupMask) & 0x21) == 0;
        *(_BYTE *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = CurrentIrql;
        if ( v31 )
        {
          v15 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v2 + 4032), v1 + 48);
          if ( v15 )
            KxWaitForLockOwnerShip(v1 + 48, v15);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented(v1 + 48, v2 + 4032);
        }
        if ( !*(_QWORD *)(v2 + 1600) )
        {
          *(_BYTE *)(v2 + 4816) = 0;
          KeResetEvent(v8);
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(v1 + 48, retaddr);
          goto LABEL_29;
        }
        _m_prefetchw((const void *)(v1 + 48));
        v16 = *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
        if ( !v16 )
        {
          if ( _InterlockedCompareExchange64(
                 *(volatile signed __int64 **)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38),
                 0LL,
                 ((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 48) == v1 + 48 )
            goto LABEL_29;
          v16 = KxWaitForLockChainValid((__int64 *)(v1 + 48));
        }
        *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(v16 + 8), 1uLL);
LABEL_29:
        __writecr8(*(unsigned __int8 *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40));
      }
      v11 = byte_14034EB89;
LABEL_10:
      if ( !dword_14034FB88 )
        break;
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
      v2 = *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
    }
    if ( (unsigned __int16)KeNumberNodes > 1u )
    {
      v12 = v5 >> byte_14034EB89;
      v13 = v5 >> byte_14034EB89;
      while ( !(*(_QWORD *)(1336LL * v13 + v9 + 8) | *(_QWORD *)(1336LL * v13 + v9 + 1176)) )
      {
        v13 = (v13 + 1) % (unsigned __int16)KeNumberNodes;
        if ( v13 == v12 )
          goto LABEL_10;
      }
      if ( v13 != v12 )
      {
        v10 = *(_DWORD *)(1336LL * v13 + v9 + 1224);
        *(_DWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = v10;
      }
    }
    *(_DWORD *)v1 = v10;
    v5 = v10;
    if ( v10 != -1 )
    {
      v17 = v11;
      v2 = *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
      v18 = 0LL;
      v19 = 0LL;
      v20 = qword_140353D28;
      *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = 0LL;
      if ( !*(_QWORD *)(1336 * ((unsigned __int64)v10 >> v17) + v20 + 8) )
        goto LABEL_38;
      ZeroThreadContext = MiCreateZeroThreadContext((__int16 *)v2, MiZeroContext, v10);
      *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = ZeroThreadContext;
      v22 = (__int64)ZeroThreadContext;
      if ( !ZeroThreadContext )
      {
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
        v6 = v2 + 152;
        goto LABEL_5;
      }
      v19 = MiUnlinkNodeLargePage(v2, v10 >> byte_14034EB89, 4u, 1);
      if ( !v19 )
      {
        MiDeleteZeroThreadContext(v2, v22);
        *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = 0LL;
LABEL_38:
        v23 = *(_QWORD *)(v2 + 1480);
        v24 = 0LL;
        *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 0LL;
        *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = 0LL;
LABEL_39:
        v25 = *(_QWORD *)(v23 + 40LL * v5 + 16);
        if ( v25 == 0xFFFFFFFFFLL )
          goto LABEL_59;
        v26 = 48 * v25 - 0x58000000000LL;
        v27 = KeGetCurrentIrql();
        __writecr8(2uLL);
        v28 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v28 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v28);
          }
          while ( (*(_QWORD *)(v26 + 24) & 0x8000000000000000uLL) != 0
               || _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) );
          v24 = *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
        }
        if ( (*(_BYTE *)(v26 + 34) & 7) != 1 || (*(_QWORD *)(v26 + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFELL )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v27);
          v5 = *(_DWORD *)v1;
        }
        else
        {
          MiUnlinkFreeOrZeroedPage(v25, 0LL);
          if ( (*(_BYTE *)(v26 + 34) & 7) != 5 || *(_WORD *)(v26 + 32) )
            KeBugCheckEx(
              0x4Eu,
              0x8DuLL,
              v25,
              *(unsigned __int16 *)(v26 + 32) | (unsigned __int64)(*(unsigned __int16 *)(v26 + 34) << 16),
              *(_QWORD *)(v26 + 8));
          *(_QWORD *)v26 = *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
          _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v27);
          v30 = *(_BYTE *)(v26 + 34) >> 6;
          if ( v30 )
          {
            if ( v30 == 2 )
            {
              v31 = (MiFlags & 0x4000) == 0;
              goto LABEL_56;
            }
          }
          else
          {
            v31 = (MiFlags & 0x2000) == 0;
LABEL_56:
            if ( !v31 )
              MiChangePageAttribute(48 * v25 - 0x58000000000LL, 1u, 0LL, v29);
          }
          v5 = *(_DWORD *)v1;
          v24 = *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) + 1LL;
          *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v24;
          *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = v26;
LABEL_59:
          v5 = v5 & ~dword_14034EB60 | dword_14034EB60 & (v5 + 1);
          *(_DWORD *)v1 = v5;
          if ( v5 == *(_DWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) )
            goto LABEL_61;
        }
        if ( v24 == *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) )
        {
LABEL_61:
          v2 = *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
          v18 = *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
          v6 = v2 + 152;
          if ( v18 )
          {
            v22 = *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
            goto LABEL_63;
          }
LABEL_5:
          v8 = (struct _KEVENT *)(v2 + 4792);
          continue;
        }
        goto LABEL_39;
      }
LABEL_63:
      v32 = v5 >> byte_14034EB89;
      if ( v5 >> byte_14034EB89 != *(_DWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) )
      {
        *(_DWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = v32;
        KeQueryNodeActiveAffinity(v32, (PGROUP_AFFINITY)(v1 + 152), 0LL);
        v33 = *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x98);
        if ( v33 )
        {
          _BitScanReverse64(&v34, v33);
          v35 = (unsigned int)v34
              + (*(unsigned __int16 *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0xA0) << 6);
          *(_DWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80) = v34;
          KeSetIdealProcessorThreadEx(
            *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68),
            KiProcessorNumberToIndexMappingTable[v35],
            0LL);
        }
      }
      if ( v19 )
      {
        MiZeroLargePage(v19, v22);
        v36 = KeGetCurrentIrql();
        __writecr8(2uLL);
        v37 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v37 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v37);
          }
          while ( (*(_QWORD *)(v19 + 24) & 0x8000000000000000uLL) != 0
               || _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) );
        }
        MiInsertLargePageInNodeList((v19 + 0x58000000000LL) / 48, 0x200uLL, 0);
        _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v36);
        v2 = *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
        MiDeleteZeroThreadContext(v2, *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18));
        v6 = v2 + 152;
        *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = 0LL;
        goto LABEL_5;
      }
      v38 = *(__int64 **)(v2 + 4824);
      PteShadow = *v38;
      if ( (unsigned __int64)(v38 + 0x12090482600LL) <= 0x7F8 )
        PteShadow = MiReadPteShadow(v38, *v38);
      PteTimeStamp = MiGetPteTimeStamp(PteShadow);
      v41 = *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
      v42 = PteTimeStamp;
      if ( v41 > PteTimeStamp )
      {
        *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x118) = 20LL;
        *(_DWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x110) = 0;
        *(_WORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x114) = 0;
        *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x120) = 0LL;
        *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x128) = 0LL;
        MiInsertTbFlushEntry(
          v1 + 272,
          (__int64)((PteTimeStamp << 28) + ((_QWORD)v38 << 25)) >> 16,
          (unsigned int)(256 - PteTimeStamp),
          0);
        MiFlushTbList(v1 + 272);
        v42 = 256LL;
      }
      v43 = v42 - v41;
      updated = MiUpdatePageFileHighInPte(PteShadow, v43);
      *v38 = updated;
      if ( (unsigned __int64)(v38 + 0x12090482600LL) <= 0x7F8 )
        MiWritePteShadow(v38, updated);
      v45 = (unsigned __int64 *)&v38[v43];
      *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = v45;
      v46 = v45;
      v47 = v18;
      *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = (__int64)((_QWORD)v45 << 25) >> 16;
LABEL_83:
      if ( (*(_BYTE *)(v47 + 34) & 0xC0) == 0xC0 )
        MiFinalizePageAttribute(v47, 1LL, 0);
      v48 = *(_BYTE *)(v47 + 34) >> 6;
      if ( v48 )
      {
        v49 = 4LL;
        if ( v48 == 2 )
          v49 = 28LL;
      }
      else
      {
        v49 = 12LL;
      }
      v50 = MmProtectToPteMask[v49] ^ ((((v47 + 0x58000000000LL) / 48) << 12) ^ MmProtectToPteMask[v49]) & 0xFFFFFFFFF000LL | 0x21;
      if ( (unsigned __int64)(v46 + 0x12098000000LL) <= 0x3FFFFFFF )
        v50 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
      if ( (unsigned __int64)v46 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
        && (unsigned __int64)v46 >= 0xFFFFF68000000000uLL
        || (unsigned __int64)v46 >= 0xFFFFF6FB40000000uLL
        && (unsigned __int64)v46 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
        || (unsigned __int64)v46 >= 0xFFFFF6FB7DA00000uLL
        && (unsigned __int64)v46 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
        || (unsigned __int64)v46 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)v46 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
      {
        v50 |= 4uLL;
      }
      if ( (unsigned __int64)v46 < 0xFFFFF6C000000000uLL )
      {
        v51 = HIBYTE(word_14034EC18);
        goto LABEL_106;
      }
      if ( (unsigned __int64)(v46 + 0x12070000000LL) > 0x3FFFFFFF
        && (unsigned __int64)(v46 + 0x12098000000LL) > 0x3FFFFFF8 )
      {
        v51 = HIBYTE(word_14034EC18);
        if ( (unsigned __int64)(v46 + 0x120A8000000LL) > 0xBFFFFFF8 )
          v51 = (unsigned __int8)word_14034EC18;
LABEL_106:
        if ( v51 )
          v50 |= 0x100uLL;
      }
      v52 = v50 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8) | 0x42;
      *v46 = v52;
      if ( (unsigned __int64)(v46 + 0x12090482600LL) <= 0x7F8 )
        MiWritePteShadow(v46, v52);
      v47 = *(_QWORD *)v47;
      ++v46;
      if ( !v47 )
      {
        v53 = *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
        KeZeroPages(*(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48), v53 << 12);
        v54 = *(_QWORD **)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58);
        v55 = *(volatile signed __int32 **)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
        v56 = 0;
        if ( v53 )
        {
          v57 = (unsigned __int64)(v54 + 0x12090482600LL);
          do
          {
            *v54 = 0LL;
            if ( v57 <= 0x7F8 )
              MiWritePteShadow(v54, 0LL);
            ++v56;
            ++v54;
            v57 += 8LL;
          }
          while ( v56 < v53 );
        }
        *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = KeGetCurrentIrql();
        __writecr8(2uLL);
        do
        {
          v58 = v55;
          v55 = *(volatile signed __int32 **)v55;
          v59 = 0;
          *((_QWORD *)v58 + 2) = 0LL;
          if ( _interlockedbittestandset64(v58 + 6, 0x3FuLL) )
          {
            do
            {
              if ( (++v59 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v59);
            }
            while ( (*((_QWORD *)v58 + 3) & 0x8000000000000000uLL) != 0 || _interlockedbittestandset64(v58 + 6, 0x3FuLL) );
          }
          MiInsertPageInFreeOrZeroedList((__int64)(v58 + 0x16000000000LL) / 48, 1);
          _InterlockedAnd64((volatile signed __int64 *)v58 + 3, 0x7FFFFFFFFFFFFFFFuLL);
        }
        while ( v55 );
        __writecr8((unsigned __int8)*(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58));
        v5 = *(_DWORD *)v1;
        v2 = *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
        v8 = *(struct _KEVENT **)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88);
        v6 = *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90);
        continue;
      }
      goto LABEL_83;
    }
    break;
  }
LABEL_126:
  v60 = *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
  if ( *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) != 1LL )
    MiReleaseNonPagedResources(
      *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 8),
      *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60));
  MiReleasePtes((__int64)&qword_14034FC70, *(_QWORD **)(v60 + 4824), 0x100u);
  return KeSetActualBasePriorityThread(
           *(_QWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68),
           *(_DWORD *)(((unsigned __int64)&v61 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50));
}
