/*
 * XREFs of MiDeleteVirtualAddresses @ 0x140045780
 * Callers:
 *     MiDeleteVad @ 0x140028450 (MiDeleteVad.c)
 *     MiDeleteFinalPageTables @ 0x140075B18 (MiDeleteFinalPageTables.c)
 *     MiDeletePartialVad @ 0x1400955C0 (MiDeletePartialVad.c)
 *     MiDeleteRotateAndStopFaults @ 0x14010EB18 (MiDeleteRotateAndStopFaults.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001B870 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiGetNextPageTable @ 0x140043470 (MiGetNextPageTable.c)
 *     MiLocateWsle @ 0x1400466D0 (MiLocateWsle.c)
 *     MiRemoveWsle @ 0x140046A90 (MiRemoveWsle.c)
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MiLogPageAccess @ 0x1400484C0 (MiLogPageAccess.c)
 *     MiDeletePteRun @ 0x140064CC0 (MiDeletePteRun.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     KeShouldYieldProcessor @ 0x140094EC0 (KeShouldYieldProcessor.c)
 *     MiDecayPfnFullyInitialized @ 0x140096210 (MiDecayPfnFullyInitialized.c)
 *     MiCompressTbFlushList @ 0x140096CF0 (MiCompressTbFlushList.c)
 *     MiCreateDecayPfn @ 0x140096EF0 (MiCreateDecayPfn.c)
 *     MiLockSetPfnPriority @ 0x1400A8B18 (MiLockSetPfnPriority.c)
 *     MiDecrementCloneBlockReference @ 0x1400B6B30 (MiDecrementCloneBlockReference.c)
 *     MiRemoveLockedPageFromWorkingSet @ 0x1400B899C (MiRemoveLockedPageFromWorkingSet.c)
 *     MiLocateCloneAddress @ 0x1400BB990 (MiLocateCloneAddress.c)
 *     MiRotatedToFrameBuffer @ 0x1400BBC90 (MiRotatedToFrameBuffer.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiDeletePageTableHierarchy @ 0x1400E2BE0 (MiDeletePageTableHierarchy.c)
 *     MiGetPfnPriority @ 0x1400E4644 (MiGetPfnPriority.c)
 *     MiUnmapFrameBuffer @ 0x14010E304 (MiUnmapFrameBuffer.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     qsort @ 0x14014E520 (qsort.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1401D1CD8 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiPteHasShadow @ 0x1401EF1B8 (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiGetUsedPtesHandle @ 0x1401EF60C (MiGetUsedPtesHandle.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x1401F2534 (MiIsPrototypePteVadLookup.c)
 *     MiReverseSwizzleInvalidPte @ 0x1401F2760 (MiReverseSwizzleInvalidPte.c)
 *     MiRelockWorkingSetExclusive @ 0x1401F2918 (MiRelockWorkingSetExclusive.c)
 *     MiDecrementCombinedPte @ 0x1401F9558 (MiDecrementCombinedPte.c)
 *     EtwTraceShouldYieldProcessor @ 0x140225FE8 (EtwTraceShouldYieldProcessor.c)
 */

int __fastcall MiDeleteVirtualAddresses(unsigned __int64 a1, unsigned __int64 a2, char a3, __int64 a4, __int64 a5)
{
  char v5; // si
  unsigned __int16 *v6; // r12
  unsigned __int16 v7; // ax
  __int64 NextPageTable; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r14
  ULONG_PTR v11; // r15
  int v12; // eax
  ULONG_PTR v13; // r13
  ULONG_PTR UsedPtesHandle; // rsi
  __int64 v15; // r11
  unsigned __int64 v16; // rax
  ULONG_PTR v17; // r14
  ULONG_PTR v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // r10
  unsigned __int16 v23; // r11
  ULONG_PTR v24; // rbx
  __int64 v25; // rsi
  __int64 v26; // rbx
  __int64 Wsle; // r14
  char v28; // dl
  __int64 v29; // rcx
  unsigned int PfnPriority; // eax
  ULONG_PTR *v31; // rsi
  ULONG_PTR v32; // r13
  unsigned __int64 v33; // r9
  char v34; // cl
  ULONG_PTR *v35; // r12
  ULONG_PTR v36; // rdx
  unsigned __int64 v37; // rax
  ULONG_PTR *v38; // r8
  ULONG_PTR v39; // r15
  __int64 v40; // r10
  __int64 v41; // r11
  unsigned __int64 v42; // rdx
  __int64 v43; // r9
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rdx
  __int64 v46; // rsi
  ULONG_PTR v47; // r8
  __int64 v48; // r14
  ULONG_PTR v49; // rdx
  __int64 v50; // r9
  _KPROCESS *v51; // r8
  int v52; // eax
  unsigned __int16 v53; // ax
  int *v54; // r15
  __int64 v55; // r14
  char *p_ProcessListEntry; // rsi
  struct _LIST_ENTRY *v57; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v59; // rcx
  ULONG_PTR v60; // r9
  _QWORD *v61; // rdx
  ULONG_PTR v62; // rdx
  int v63; // ecx
  __int64 v64; // rax
  ULONG_PTR v65; // r8
  __int64 v66; // rdx
  unsigned int v67; // eax
  signed __int64 v68; // rdx
  __int64 v69; // rcx
  ULONG_PTR v70; // r9
  unsigned int v71; // r8d
  ULONG_PTR *v72; // rdx
  ULONG_PTR v73; // rsi
  unsigned __int64 i; // rax
  unsigned int v75; // r8d
  __int64 v76; // rax
  unsigned __int64 v77; // r9
  unsigned __int64 v78; // rdx
  __int64 v79; // rdx
  unsigned __int64 v80; // rax
  LONG *v81; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int DpcWatchdogCount; // r14d
  volatile int DpcRequestSummary; // r9d
  unsigned int DpcTimeCount; // esi
  int v86; // r8d
  bool v87; // zf
  int IsPrototypePteVadLookup; // eax
  ULONG_PTR v89; // rdx
  int v90; // eax
  ULONG_PTR CloneAddress; // rax
  __int64 v92; // rcx
  unsigned __int64 v93; // rax
  __int16 v94; // ax
  _KTHREAD *NextThread; // rax
  ULONG_PTR v96; // r13
  LONG *v97; // rax
  unsigned __int16 v99; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v100; // [rsp+32h] [rbp-CEh]
  ULONG_PTR v101; // [rsp+38h] [rbp-C8h]
  _KPROCESS *Process; // [rsp+48h] [rbp-B8h]
  ULONG_PTR *v104; // [rsp+50h] [rbp-B0h] BYREF
  int v105; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v106; // [rsp+60h] [rbp-A0h]
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-98h]
  int v108; // [rsp+70h] [rbp-90h]
  int v109; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 SharedWorkingSetList; // [rsp+78h] [rbp-88h]
  ULONG_PTR v111; // [rsp+80h] [rbp-80h] BYREF
  volatile signed __int64 *v112; // [rsp+88h] [rbp-78h]
  __int64 v113; // [rsp+90h] [rbp-70h]
  volatile signed __int64 *v114; // [rsp+98h] [rbp-68h]
  ULONG_PTR v115; // [rsp+A0h] [rbp-60h]
  __int64 v116; // [rsp+A8h] [rbp-58h]
  struct _KEVENT *v117; // [rsp+B0h] [rbp-50h]
  ULONG_PTR v118; // [rsp+B8h] [rbp-48h]
  int v119; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v120; // [rsp+C8h] [rbp-38h]
  __int64 v121; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v122; // [rsp+D8h] [rbp-28h]
  char v123[8]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v124; // [rsp+E8h] [rbp-18h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+F0h] [rbp-10h] BYREF
  int v126; // [rsp+110h] [rbp+10h] BYREF
  __int16 v127; // [rsp+114h] [rbp+14h]
  __int64 v128; // [rsp+118h] [rbp+18h]
  __int64 v129; // [rsp+120h] [rbp+20h]
  _QWORD Base[21]; // [rsp+128h] [rbp+28h] BYREF

  v116 = a5;
  v100 = a4;
  v5 = a3;
  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = &Process[1].IdealNode[12];
  v7 = WORD2(Process[1].InstrumentationCallback);
  if ( v7 == 1023 )
    v117 = (struct _KEVENT *)MiSystemPartition;
  else
    v117 = *(struct _KEVENT **)(qword_140327038 + 8LL * v7);
  BugCheckParameter2 = 0LL;
  v126 = 1;
  v127 = 0;
  v129 = 0LL;
  Base[0] = 0LL;
  v128 = 20LL;
  LODWORD(NextPageTable) = 0;
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v122 = v10;
  if ( v9 <= v10 )
  {
    v120 = 0xF000000000000LL;
    while ( 1 )
    {
      NextPageTable = MiGetNextPageTable(v9, v10, (__int64)&v126, a4, 4, &v119);
      v114 = (volatile signed __int64 *)NextPageTable;
      v11 = NextPageTable;
      if ( !NextPageTable )
        return NextPageTable;
      v12 = *((_BYTE *)v6 + 187) & 1;
      v108 = v12;
      if ( (v5 & 2) != 0 && !v12 && dword_1403271C8 )
        SharedWorkingSetList = MiGetSharedWorkingSetList(v6);
      else
        SharedWorkingSetList = 0LL;
      v105 = 0;
      v121 = 0LL;
      v13 = (__int64)(v11 << 25) >> 16;
      v106 = v13;
      UsedPtesHandle = MiGetUsedPtesHandle(v13);
      v118 = UsedPtesHandle;
      v99 = 0;
      v101 = 0LL;
      v15 = HIWORD(*(_DWORD *)(UsedPtesHandle + 16)) & 0x3FF;
      v115 = 0LL;
      v113 = v15;
      v16 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      if ( v16 > v10 )
        v16 = v10;
      v17 = 0LL;
      v112 = (volatile signed __int64 *)v16;
      if ( v11 > v16 )
        goto LABEL_205;
      while ( 1 )
      {
        v18 = MI_READ_PTE_LOCK_FREE(v11);
        v104 = (ULONG_PTR *)v18;
        v24 = v18;
        if ( !v18 )
          goto LABEL_201;
        LOWORD(v21) = v21 + 1;
        v99 = v21;
        if ( (unsigned __int16)v21 > v23 )
          KeBugCheckEx(0x1Au, 0x41793uLL, v11, (unsigned __int16)v21, v23);
        if ( (v18 & 1) == 0 )
        {
          if ( (v18 & 0x400) != 0 )
          {
            MiGetPrototypePteDirect(v18);
            IsPrototypePteVadLookup = MiIsPrototypePteVadLookup(v24);
            if ( IsPrototypePteVadLookup || (v24 & 0x800) == 0 )
            {
              if ( Process[1].Affinity.Bitmap[12] )
              {
                if ( !IsPrototypePteVadLookup )
                {
                  CloneAddress = MiLocateCloneAddress(Process, v89);
                  if ( CloneAddress )
                  {
                    v90 = MiDecrementCloneBlockReference(CloneAddress, v89);
                    goto LABEL_165;
                  }
                }
              }
            }
            else
            {
              v90 = MiDecrementCombinedPte(v89);
LABEL_165:
              if ( v90 == 3 )
              {
                v89 = v116;
                ++*(_QWORD *)(v116 + 8);
              }
              else if ( v90 == 5 )
              {
                ++*(_QWORD *)(v116 + 16);
              }
            }
LABEL_169:
            *(_QWORD *)v11 = 0LL;
            if ( (unsigned int)MiPteInShadowRange(v11, v89) )
              MiWritePteShadow(v92, 0LL);
          }
          else if ( (v18 & 0x800) == 0 )
          {
            if ( (v18 & 0x3E0) == 0 )
              KeBugCheckEx(0x1Au, 0x41792uLL, v11, v18, 0LL);
            v111 = v18;
            if ( (v18 & 4) != 0 || (v18 & 2) != 0 )
              v93 = MI_READ_PTE_LOCK_FREE(&v111);
            else
              v93 = 0LL;
            v111 = v93;
            if ( v93 )
              MiReleasePageFileInfo(v117, v93, 0);
            v94 = MiReverseSwizzleInvalidPte(v24, v19, v20, v21);
            if ( (v94 & 0x400) != 0 || (v94 & 0x800) != 0 || (v94 & 4) != 0 )
              _InterlockedExchangeAdd64(
                (volatile signed __int64 *)&Process[1].Affinity.Bitmap[13],
                0xFFFFFFFFFFFFFFFFuLL);
            goto LABEL_169;
          }
LABEL_140:
          LODWORD(v26) = 1;
          goto LABEL_141;
        }
        v25 = MI_GET_PFN_FROM_PTE(&v104);
        if ( (a3 & 8) != 0 && (unsigned int)MiRotatedToFrameBuffer(v11) == 1 )
        {
          MiUnmapFrameBuffer(v11, 3LL, 0LL, v123);
          LODWORD(v26) = 1;
          MiInsertTbFlushEntry(&v126, v13, 1LL);
          v17 = v101;
          goto LABEL_141;
        }
        if ( SharedWorkingSetList )
        {
          Wsle = MiLocateWsle(v13);
          if ( (*(_BYTE *)v11 & 0x20) != 0
            && (*(_DWORD *)(*(_QWORD *)(SharedWorkingSetList + 80) + Wsle * *(unsigned int *)(SharedWorkingSetList + 32)) & 0xE00) != 0xE00LL )
          {
            MiLogPageAccess(v6, v11);
          }
        }
        if ( (*(_QWORD *)(v25 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        {
          v28 = a3;
          if ( (a3 & 1) != 0 && (unsigned int)MiGetPfnPriority(v25) - 3 <= 2 )
          {
            MiLockSetPfnPriority(v29, 2LL);
            v28 = a3;
          }
          if ( (v28 & 4) != 0
            && !BugCheckParameter2
            && (v24 & 0x42) == 0
            && (*(_QWORD *)(v25 + 40) & 0x200000000000000LL) != 0
            && (*(_BYTE *)(v25 + 34) & 0x10) == 0 )
          {
            PfnPriority = MiGetPfnPriority(v25);
            if ( PfnPriority < 5 )
              BugCheckParameter2 = MiCreateDecayPfn(PfnPriority);
          }
        }
        if ( !v108 )
        {
          if ( (v6[92] & 7) == 2 )
          {
            v31 = &::BugCheckParameter2;
            v104 = &::BugCheckParameter2;
          }
          else
          {
            v31 = (ULONG_PTR *)(*((_QWORD *)v6 + 2) + 416LL);
            v104 = v31;
          }
          v32 = MiLocateWsle(v13);
          v124 = *(_QWORD *)(v31[10] + v32 * *((unsigned int *)v31 + 8));
          if ( (v124 & 8) != 0
            && (*(_QWORD *)(MI_GET_PFN_FROM_PTE(((v106 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) + 40) & 0x200000000000000LL) == 0 )
          {
            --*((_QWORD *)v6 + 17);
            if ( v33 < 0xFFFFF68000000000uLL || v33 > 0xFFFFF6FFFFFFFFFFuLL )
              --*((_QWORD *)v6 + 15);
          }
          MiRemoveWsle(v32);
          v34 = v6[92] & 7;
          if ( v34 == 2 )
            v35 = &::BugCheckParameter2;
          else
            v35 = (ULONG_PTR *)(*((_QWORD *)v6 + 2) + 416LL);
          if ( v32 < v35[1] )
          {
LABEL_86:
            v51 = Process;
          }
          else
          {
            v36 = v35[10] + v32 * *((unsigned int *)v35 + 8);
            v37 = *(_QWORD *)v36;
            if ( v34 == 2 )
              v38 = &::BugCheckParameter2;
            else
              v38 = (ULONG_PTR *)(*(_QWORD *)&Process[1].IdealGlobalNode + 416LL);
            if ( *((_DWORD *)v38 + 8) == 16 )
            {
              v39 = v38[10];
              if ( (__int64)(v36 - v39) >> 4 >= v38[1] )
              {
                v40 = *(unsigned int *)(v36 + 8) | (v37 >> 16) & 0xF00000000LL;
                v41 = *(unsigned int *)(v36 + 12) | (v37 >> 20) & 0xF00000000LL;
                v42 = *(_QWORD *)v36;
                v43 = 2 * ((unsigned int)(v37 >> 9) & 7);
                if ( (v37 & 0x800000000000LL) != 0 )
                  v44 = v42 | 0xFFFF000000000000uLL;
                else
                  v44 = v42 & 0xFFFFFFFFFFFFLL;
                if ( v44 < 0xFFFFF68000000000uLL
                  || ((v37 & 0x800000000000LL) == 0
                    ? (v45 = v37 & 0xFFFFFFFFFFFFLL)
                    : (v45 = v37 | 0xFFFF000000000000uLL),
                      v45 > 0xFFFFF6FFFFFFFFFFuLL) )
                {
                  v43 = (unsigned int)(v43 + 1);
                }
                v46 = *(_QWORD *)&Process[1].IdealGlobalNode;
                v47 = v39 + 16 * v40;
                v48 = (unsigned int)v43;
                v49 = v39 + 16 * v41;
                v50 = 2 * (v43 + 10);
                if ( v41 == 0xFFFFFFFFFLL )
                {
                  *(_QWORD *)(v46 + 8 * v50) = v40;
                }
                else
                {
                  *(_DWORD *)(v49 + 8) = v40;
                  *(_QWORD *)v49 ^= v120 & (*(_QWORD *)v49 ^ (v40 << 16));
                }
                if ( v40 == 0xFFFFFFFFFLL )
                {
                  *(_QWORD *)(v46 + 8 * v50 + 8) = v41;
                }
                else
                {
                  *(_DWORD *)(v47 + 12) = v41;
                  *(_QWORD *)v47 ^= (*(_QWORD *)v47 ^ (v41 << 20)) & 0xF0000000000000LL;
                }
                --*(_QWORD *)(v46 + 8 * v48 + 32);
              }
            }
            v51 = Process;
            v52 = (v37 >> 9) & 7;
            if ( v52 )
            {
              --*(&Process[1].CycleTime + (unsigned int)(v52 - 1));
              if ( v52 == 7 )
              {
                v53 = WORD2(Process[1].InstrumentationCallback);
                v54 = v53 == 1023 ? MiSystemPartition : *(int **)(qword_140327038 + 8LL * v53);
                v55 = *((_QWORD *)v54 + 781);
                if ( *(_QWORD *)&Process[1].Spare2[12] < *(_QWORD *)(v55 + 64) )
                {
                  p_ProcessListEntry = (char *)&Process[1].ProcessListEntry;
                  if ( Process[1].ProcessListEntry.Flink )
                  {
                    if ( *((char **)v54 + 783) != p_ProcessListEntry )
                    {
                      KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_140327780, &LockHandle);
                      if ( *(_BYTE *)(v55 + 53) || !*(_QWORD *)p_ProcessListEntry )
                      {
                        *(_BYTE *)(v55 + 54) = 1;
                      }
                      else
                      {
                        v57 = *(struct _LIST_ENTRY **)p_ProcessListEntry;
                        Blink = Process[1].ProcessListEntry.Blink;
                        if ( *(char **)(*(_QWORD *)p_ProcessListEntry + 8LL) != p_ProcessListEntry
                          || (char *)Blink->Flink != p_ProcessListEntry )
                        {
                          __fastfail(3u);
                        }
                        Blink->Flink = v57;
                        v57->Blink = Blink;
                        v59 = (struct _LIST_ENTRY *)*((_QWORD *)v54 + 783);
                        if ( (int *)v59->Flink != v54 + 1564 )
                          __fastfail(3u);
                        *(_QWORD *)p_ProcessListEntry = v54 + 1564;
                        Process[1].ProcessListEntry.Blink = v59;
                        v59->Flink = (struct _LIST_ENTRY *)p_ProcessListEntry;
                        *((_QWORD *)v54 + 783) = p_ProcessListEntry;
                      }
                      KxReleaseQueuedSpinLock(&LockHandle);
                      goto LABEL_86;
                    }
                  }
                }
              }
            }
          }
          v60 = *v35;
          if ( *v35 != 0xFFFFFFFFFLL )
          {
            if ( v60 < v35[1] || v60 > v35[3] )
              KeBugCheckEx(0x1Au, 0x5004uLL, (ULONG_PTR)v35, v60, v35[3]);
            v61 = (_QWORD *)(v35[10] + v60 * *((unsigned int *)v35 + 8));
            *v61 ^= (*(_DWORD *)v61 ^ (2 * (_DWORD)v32)) & 0xFFFFFFE;
          }
          *(_QWORD *)(v35[10] + v32 * *((unsigned int *)v35 + 8)) = (v60 << 28) | 0xFFFFFFE;
          *v35 = v32;
          v6 = &v51[1].IdealNode[12];
          --*(_QWORD *)&v51[1].Spare2[52];
          v62 = v106;
          if ( v106 < 0xFFFFF68000000000uLL || v106 > 0xFFFFF6FFFFFFFFFFuLL )
          {
            --*(_QWORD *)&v51[1].Spare2[36];
            v63 = 1;
          }
          else
          {
            v63 = 0;
          }
          if ( ((__int64)v51[2].Header.WaitListHead.Flink & 7) == 2 )
          {
            --qword_140327D48;
            if ( v63 == 1 )
              --qword_140327D50;
          }
          if ( v32 >= v104[1] )
          {
            v11 = (ULONG_PTR)v114;
            v13 = v62;
          }
          else
          {
            v64 = MI_GET_PFN_FROM_PTE(((v62 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            v65 = v32;
            v13 = v106;
            MiRemoveLockedPageFromWorkingSet(v6, v106, v65, v64);
            v11 = (ULONG_PTR)v114;
          }
        }
        v66 = *(_QWORD *)v11;
        v104 = (ULONG_PTR *)(v24 & 0xFFFFFFFFFFFFFBFEuLL | 0x400);
        v67 = MiPteInShadowRange(v11, v66);
        v71 = v67;
        if ( v67 && (unsigned int)MiPteHasShadow(v69, v68, v67) )
          v68 |= 0x20uLL;
        if ( (MiFlags & 0x800) != 0 )
        {
          v68 |= 0x20uLL;
        }
        else if ( (MiFlags & 0x1000000) != 0 )
        {
          _mm_lfence();
        }
        if ( (v68 & 0x20) == 0
          && v68 == _InterlockedCompareExchange64((volatile signed __int64 *)v11, (signed __int64)v104, v68) )
        {
LABEL_139:
          v17 = v101;
          goto LABEL_140;
        }
        v72 = v104;
        *(_QWORD *)v11 = v104;
        if ( v71 )
          MiWritePteShadow(v11, v72);
        v26 = 1LL;
        v73 = v13;
        if ( v126 != 1 )
        {
          if ( (v127 & 4) == 0 && v13 >= v70 && v13 <= 0xFFFFF6FFFFFFFFFFuLL )
            LOBYTE(v127) = v127 | 4;
          if ( v126 )
          {
            for ( i = v13; i >= v70; i = (__int64)((i << 25) - v121) >> 16 )
            {
              if ( i > 0xFFFFF6FFFFFFFFFFuLL )
                break;
            }
          }
        }
        v75 = HIDWORD(v128);
        if ( HIDWORD(v128) )
        {
          v76 = Base[HIDWORD(v128) - 1];
          if ( (v76 & 0xC00) == 0 )
          {
            v77 = Base[HIDWORD(v128) - 1] & 0x3FFLL;
            if ( (v76 & 0xFFFFFFFFFFFFF000uLL) + (((v76 & 0x3FF) + 1) << 12) == v13
              && v77 + 1 >= v77
              && v77 + 1 <= 0x3FF )
            {
              goto LABEL_126;
            }
            if ( (v76 & 0xC00) == 0 && (v76 & 0xFFFFFFFFFFFFF000uLL) == v13 + 4096 )
            {
              v78 = (Base[HIDWORD(v128) - 1] & 0x3FFLL) + 1;
              if ( v78 > (Base[HIDWORD(v128) - 1] & 0x3FFuLL) && v78 <= 0x3FF )
              {
                v76 -= 4096LL;
LABEL_126:
                v17 = v101;
                ++v129;
                Base[HIDWORD(v128) - 1] = (v76 ^ (v76 + 1)) & 0x3FF ^ v76;
                goto LABEL_141;
              }
            }
          }
        }
        if ( HIDWORD(v128) < (unsigned int)v128 )
        {
          while ( 1 )
          {
            v79 = 1024LL;
            if ( (unsigned __int64)(v26 - 1) <= 0x3FF )
              v79 = v26;
            v26 -= v79;
            v80 = v73 & 0xFFFFFFFFFFFFF000uLL | (v79 - 1) & 0x3FF;
            v73 += v79 << 12;
            Base[v75] = v80;
            v129 += v79;
            v75 = HIDWORD(v128) + 1;
            HIDWORD(v128) = v75;
            if ( v75 == (_DWORD)v128 )
            {
              qsort(Base, v75, 8uLL, MiTbFlushSort);
              MiCompressTbFlushList(&v126);
              v75 = HIDWORD(v128);
              if ( HIDWORD(v128) == (_DWORD)v128 )
                break;
            }
            if ( !v26 )
              goto LABEL_139;
          }
          v17 = v101;
          v87 = v26 == 0;
          LODWORD(v26) = 1;
          if ( !v87 )
          {
            HIBYTE(v127) = 1;
            v129 = HIDWORD(v128);
          }
        }
        else
        {
          v17 = v101;
          HIBYTE(v127) = 1;
        }
LABEL_141:
        v104 = (ULONG_PTR *)MI_READ_PTE_LOCK_FREE(v11);
        if ( v104 )
        {
          v115 = v11;
          if ( !v17 )
            v17 = v11;
          v101 = v17;
        }
        v22 = (unsigned __int64)v112;
        if ( (volatile signed __int64 *)v11 == v112 || v99 == (_WORD)v113 )
          goto LABEL_201;
        if ( (((_BYTE)v11 + 8) & 0x78) == 0 )
        {
          v81 = &dword_140327CC0;
          if ( (v6[92] & 7) != 2 )
            v81 = (LONG *)(v6 + 96);
          if ( (*v81 & 0x40000000) != 0 )
            break;
        }
        CurrentPrcb = KeGetCurrentPrcb();
        DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
        DpcRequestSummary = CurrentPrcb->DpcRequestSummary;
        DpcTimeCount = CurrentPrcb->DpcTimeCount;
        if ( (DpcRequestSummary & 1) == 0 )
        {
          v86 = 0;
          if ( (DpcRequestSummary & 0x1E) != 0 )
          {
            LODWORD(v26) = 2;
            goto LABEL_197;
          }
          if ( CurrentPrcb->QuantumEnd )
          {
            LODWORD(v26) = 3;
            goto LABEL_197;
          }
          NextThread = CurrentPrcb->NextThread;
          if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
          {
            LODWORD(v26) = 4;
            goto LABEL_197;
          }
LABEL_190:
          if ( DpcWatchdogCount <= 7 )
            goto LABEL_201;
          if ( !v86 )
          {
LABEL_196:
            _disable();
            CurrentPrcb->DpcWatchdogCount = 0;
            CurrentPrcb->DpcTimeCount = 0;
            KiResetGlobalDpcWatchdogProfiler();
            _enable();
            LODWORD(v26) = 0;
            goto LABEL_197;
          }
          goto LABEL_192;
        }
        v86 = 1;
        if ( DpcTimeCount <= 7 )
          goto LABEL_190;
        if ( CurrentPrcb->QuantumEnd )
          goto LABEL_197;
LABEL_192:
        if ( (DpcRequestSummary & 0x1E) != 0 )
        {
          LODWORD(v26) = 5;
        }
        else
        {
          if ( CurrentPrcb->CurrentThread == CurrentPrcb->IdleThread )
            goto LABEL_196;
          LODWORD(v26) = 6;
        }
LABEL_197:
        if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
          EtwTraceShouldYieldProcessor((unsigned int)v26, DpcWatchdogCount, DpcTimeCount);
        if ( (_DWORD)v26 )
          break;
        v22 = (unsigned __int64)v112;
LABEL_201:
        v17 = v101;
        v11 += 8LL;
        v13 += 4096LL;
        v114 = (volatile signed __int64 *)v11;
        v106 = v13;
        if ( v11 > v22 )
          goto LABEL_204;
      }
      v17 = v101;
      v11 += 8LL;
      v105 = 2;
LABEL_204:
      UsedPtesHandle = v118;
LABEL_205:
      MiFlushTbList(&v126);
      v96 = BugCheckParameter2;
      if ( v17 )
        MiDeletePteRun(v17, v116);
      if ( v96 )
      {
        MiDecayPfnFullyInitialized(v96);
        BugCheckParameter2 = 0LL;
      }
      if ( v99 )
      {
        if ( (((unsigned __int64)*(unsigned int *)(UsedPtesHandle + 16) >> 16) & 0x3FF) < v99 )
          KeBugCheckEx(
            0x1Au,
            0x41790uLL,
            UsedPtesHandle,
            ((unsigned __int64)*(unsigned int *)(UsedPtesHandle + 16) >> 16) & 0x3FF,
            v99);
        v109 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(UsedPtesHandle + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v109);
          while ( (*(_QWORD *)(UsedPtesHandle + 24) & 0x8000000000000000uLL) != 0 );
        }
        *(_QWORD *)(UsedPtesHandle + 16) ^= ((unsigned int)*(_QWORD *)(UsedPtesHandle + 16) ^ ((unsigned __int16)(WORD1(*(_QWORD *)(UsedPtesHandle + 16)) - v99) << 16)) & 0x3FF0000;
        _InterlockedAnd64((volatile signed __int64 *)(UsedPtesHandle + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      if ( (*(_DWORD *)(UsedPtesHandle + 16) & 0x3FF0000) == 0 )
        MiDeletePageTableHierarchy(0LL, v11 - 8);
      if ( v105 == 2 )
        goto LABEL_222;
      v97 = &dword_140327CC0;
      if ( (v6[92] & 7) != 2 )
        v97 = (LONG *)(v6 + 96);
      if ( (*v97 & 0x40000000) != 0 || (LODWORD(NextPageTable) = KeShouldYieldProcessor(), (_DWORD)NextPageTable) )
LABEL_222:
        LODWORD(NextPageTable) = MiRelockWorkingSetExclusive(v6, v100);
      v10 = v122;
      v9 = v11;
      if ( v11 > v122 )
        return NextPageTable;
      v5 = a3;
      a4 = v100;
    }
  }
  return NextPageTable;
}
