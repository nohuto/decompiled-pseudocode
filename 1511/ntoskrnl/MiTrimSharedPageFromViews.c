/*
 * XREFs of MiTrimSharedPageFromViews @ 0x140008834
 * Callers:
 *     MiTrimSection @ 0x1400083E8 (MiTrimSection.c)
 * Callees:
 *     MiReplaceLockedPage @ 0x140007BB8 (MiReplaceLockedPage.c)
 *     MiAcquireProperVm @ 0x140007D88 (MiAcquireProperVm.c)
 *     MiPrepareAttachThread @ 0x1400095D0 (MiPrepareAttachThread.c)
 *     MiAttachThreadDone @ 0x140009620 (MiAttachThreadDone.c)
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     MiLocateAddress @ 0x140038340 (MiLocateAddress.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetProtoPteAddress @ 0x14004B0A0 (MiGetProtoPteAddress.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiLocateWsle @ 0x140058C00 (MiLocateWsle.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x14006C330 (MiFreeWsleList.c)
 *     MiStartingOffset @ 0x14007C940 (MiStartingOffset.c)
 *     MmDetachSession @ 0x140091918 (MmDetachSession.c)
 *     MmAttachSession @ 0x14009197C (MmAttachSession.c)
 *     MmGetSessionById @ 0x140091A20 (MmGetSessionById.c)
 *     MiTbFlushType @ 0x1400A086C (MiTbFlushType.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1400B82C4 (MI_WSLE_LOG_ACCESS.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MmQuitNextSession @ 0x1404C34D0 (MmQuitNextSession.c)
 */

__int64 __fastcall MiTrimSharedPageFromViews(_QWORD *a1, int a2, int a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rbp
  int v6; // r10d
  _QWORD *v7; // r14
  unsigned int v8; // edi
  int v9; // r13d
  LONG *v10; // rsi
  struct _KTHREAD *CurrentThread; // r9
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  ULONG_PTR v14; // r15
  __int64 v15; // rax
  __int64 v16; // rbx
  unsigned __int64 v17; // r12
  __int64 v18; // r10
  unsigned __int64 v19; // r12
  __int64 v20; // rbx
  __int64 v21; // r13
  __int64 v22; // rcx
  ULONG_PTR SessionById; // rax
  unsigned __int64 v24; // rax
  volatile signed __int32 *v25; // rdi
  struct _KTHREAD *v26; // rbx
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned int AbEntrySummary; // edx
  __int64 v29; // rcx
  __int64 v30; // rdx
  bool v31; // zf
  struct _KPROCESS *Process; // rax
  unsigned __int64 v33; // rcx
  int v34; // eax
  __int16 v35; // ax
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r9
  _QWORD *v39; // rdx
  unsigned __int64 v40; // r8
  volatile signed __int64 *v41; // rbx
  __int64 v42; // r12
  __int64 v43; // rbx
  int v44; // r14d
  __int64 v45; // r10
  KIRQL v46; // al
  __int64 Address; // rax
  int v48; // ecx
  _QWORD *v49; // rax
  unsigned __int64 v50; // r10
  __int64 v51; // r9
  __int64 ProtoPteAddress; // rax
  __int64 v53; // rcx
  __int64 v54; // rdx
  int v55; // edi
  unsigned __int64 v56; // rax
  unsigned __int64 *v57; // rcx
  __int64 v58; // rbx
  __int64 v59; // rax
  __int64 v60; // rbx
  int i; // edi
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rax
  unsigned __int64 v67; // rax
  unsigned __int64 *v68; // rsi
  __int64 v69; // rax
  char v70; // bl
  __int64 v71; // rax
  __int64 v72; // rdi
  int v73; // r15d
  __int64 v74; // rax
  unsigned __int8 v75; // cl
  char v76; // al
  unsigned __int64 v77; // rbx
  __int64 v78; // r14
  unsigned __int64 Wsle; // rax
  unsigned __int64 v80; // rbx
  int v81; // eax
  __int64 v82; // rax
  int v83; // ecx
  int locked; // eax
  __int64 v85; // rdx
  volatile signed __int64 *v86; // rbx
  __int64 v87; // rbx
  _QWORD *v88; // rbx
  void *v89; // rcx
  signed __int32 v91[8]; // [rsp+0h] [rbp-70h] BYREF
  _BYTE v92[4]; // [rsp+70h] [rbp+0h] BYREF

  v5 = (unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(v5 + 144) = a5;
  v6 = a3;
  *(_QWORD *)(v5 + 96) = a4;
  *(_QWORD *)(v5 + 184) = 0LL;
  v7 = a1;
  *(_QWORD *)(v5 + 192) = 0LL;
  v8 = 0;
  *(_QWORD *)(v5 + 176) = 0LL;
  v9 = 0;
  *(_DWORD *)(v5 + 380) = 0;
  v10 = 0LL;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(v5 + 16) = CurrentThread;
  *(_DWORD *)(v5 + 12) = a3;
  *(_DWORD *)(v5 + 68) = a2;
  *(_BYTE *)v5 = 17;
  *(_DWORD *)(v5 + 4) = 0;
  *(_DWORD *)(v5 + 8) = 0;
  *(_DWORD *)(v5 + 208) = 0;
  if ( !a1 )
    return v8;
  while ( 2 )
  {
    v12 = (unsigned __int64)v7;
    *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = 0LL;
    v7 = (_QWORD *)*v7;
    v13 = 0LL;
    *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = v12;
    *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v7;
    v14 = *(_QWORD *)(v12 + 8);
    v15 = *(_QWORD *)(v12 + 24);
    v16 = *(_QWORD *)(v12 + 32);
    v17 = *(_QWORD *)(v12 + 16);
    *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v14;
    *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = v15;
    *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v16;
    *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = 0LL;
    *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 0;
    *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 0;
    if ( !v14 || (_KPROCESS *)v14 == KeGetCurrentThread()->ApcState.Process )
    {
      if ( *(_DWORD *)(v12 + 44) < 2u )
        goto LABEL_6;
      v22 = *(unsigned int *)(v12 + 40);
      if ( (_DWORD)v22 == -1 )
      {
        v13 = (unsigned __int64)&unk_1402FE5C0;
      }
      else
      {
        if ( (_DWORD)v22 == -2 )
          goto LABEL_17;
        SessionById = MmGetSessionById(v22, v12, 0LL);
        LODWORD(v18) = 0;
        *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = SessionById;
        if ( !SessionById )
          goto LABEL_157;
        if ( (int)MmAttachSession(SessionById) < 0 )
        {
          MmQuitNextSession(*(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70));
          LODWORD(v18) = 0;
          *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = 0LL;
          goto LABEL_157;
        }
        v12 = *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
        CurrentThread = *(struct _KTHREAD **)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
        v6 = *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
        v13 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 2880;
      }
      *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = v13;
LABEL_17:
      if ( *(_DWORD *)(v12 + 44) == 3 )
      {
        LODWORD(v18) = 0;
        v24 = v17 + 0x70000000000LL;
        if ( *(_DWORD *)(v12 + 40) == -2 )
        {
          if ( v24 <= 0x7FFFFFFFFFLL )
            goto LABEL_157;
        }
        else if ( v24 > 0x7FFFFFFFFFLL )
        {
          goto LABEL_157;
        }
        goto LABEL_7;
      }
      if ( (v6 & 0x140000) != 0 )
        goto LABEL_156;
      --CurrentThread->SpecialApcDisable;
      v25 = *(volatile signed __int32 **)(v13 + 8);
      if ( !KiAbEnabled )
      {
        v36 = 0LL;
        *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0LL;
        goto LABEL_44;
      }
      v26 = KeGetCurrentThread();
      if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
        KeBugCheckEx(0x192u, (ULONG_PTR)v26, *(_QWORD *)(v13 + 8), KeGetCurrentIrql(), 0LL);
      --v26->SpecialApcDisable;
      if ( !v26->AbEntrySummary )
      {
        if ( !v26->AbOrphanedEntrySummary )
        {
          v31 = (WORD2(PerfGlobalGroupMask) & 0x200) == 0;
          *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0LL;
          if ( !v31 )
            EtwTraceAutoBoostEntryExhaustion(v26, v25);
          goto LABEL_30;
        }
        AbOrphanedEntrySummary = v26->AbOrphanedEntrySummary;
        v26->AbOrphanedEntrySummary = 0;
        v26->AbEntrySummary |= AbOrphanedEntrySummary;
      }
      AbEntrySummary = v26->AbEntrySummary;
      _BitScanForward((unsigned int *)&v29, AbEntrySummary);
      *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = v29;
      v26->AbEntrySummary = AbEntrySummary & ~(1 << v29);
      v30 = (__int64)&v26->LockEntries[v29];
      *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v30;
      if ( v30 )
      {
        if ( (unsigned __int64)(v25 + 0x1C000000000LL) > 0x7FFFFFFFFFLL
          || (Process = v26->ApcState.Process, (v33 = Process[1].ActiveProcessors.Bitmap[2]) == 0)
          || Process == PsInitialSystemProcess )
        {
          v34 = -1;
        }
        else
        {
          v34 = *(_DWORD *)(v33 + 8);
        }
        *(_DWORD *)(v30 + 40) = v34;
        *(_QWORD *)(v30 + 32) = (unsigned __int64)v25 & 0x7FFFFFFFFFFFFFFCLL;
        goto LABEL_39;
      }
LABEL_30:
      _interlockedbittestandset((volatile signed __int32 *)&v26->116 + 1, 0xFu);
LABEL_39:
      v35 = v26->SpecialApcDisable + 1;
      v26->SpecialApcDisable = v35;
      if ( !v35 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v26->ApcState.ApcListHead[0].Flink != &v26->152 )
        KiCheckForKernelApcDelivery();
      v16 = *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
      v36 = *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
LABEL_44:
      if ( _interlockedbittestandset64(v25, 0LL) )
        ExfAcquirePushLockExclusiveEx(v25, v36, v25);
      v37 = *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
      LODWORD(v18) = 0;
      if ( v37 )
        *(_BYTE *)(v37 + 26) |= 1u;
      v38 = *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68);
      v39 = *(_QWORD **)(v38 + 16);
      if ( !v39 )
        goto LABEL_54;
      while ( 1 )
      {
        v40 = v39[10] & 0xFFFFFFFFFFFFF000uLL;
        if ( v17 >= v40 + v39[4] )
        {
          v39 = (_QWORD *)v39[1];
        }
        else
        {
          if ( v17 >= v40 )
          {
            if ( *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) == (v39[6] & 0xFFFFFFFFFFFFFFF8uLL)
              && v17 + (v39[3] << 12) - v16 == (v39[10] & 0xFFFFFFFFFFFFF000uLL) )
            {
              *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 1;
              goto LABEL_7;
            }
LABEL_54:
            v41 = *(volatile signed __int64 **)(v38 + 8);
            if ( (_InterlockedExchangeAdd64(v41, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v41);
            KeAbPostRelease((ULONG_PTR)v41);
            v42 = *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
            KiLeaveGuardedRegionUnsafe(v42);
            v8 = *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
            LODWORD(v18) = 0;
            goto LABEL_158;
          }
          v39 = (_QWORD *)*v39;
        }
        if ( !v39 )
          goto LABEL_54;
      }
    }
    KeAcquireInStackQueuedSpinLock(&SpinLock, (PKLOCK_QUEUE_HANDLE)(v5 + 176));
    *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = MiPrepareAttachThread(v14, v14 + 1280);
    KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)(v5 + 176));
    LODWORD(v18) = 0;
    if ( !*(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) )
      goto LABEL_157;
    KiStackAttachProcess(v14);
LABEL_6:
    LODWORD(v18) = 0;
LABEL_7:
    v19 = v17 - 4096;
    *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0LL;
    v20 = v16 - 4096;
    v12 = v19 >> 12;
    v21 = 0LL;
    v10 = 0LL;
LABEL_152:
    v44 = *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
LABEL_153:
    v13 = *(unsigned int *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
LABEL_64:
    v19 += 4096LL;
    while ( 1 )
    {
      if ( v19 >= *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) )
      {
LABEL_79:
        v7 = *(_QWORD **)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
        v9 = *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        v8 = *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
        goto LABEL_157;
      }
      ++v12;
      v43 = v20 + 4096;
      *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v12;
      *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v43;
      if ( !v14 )
      {
        *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = 1;
        if ( v44 == 1 )
        {
          if ( (v19 & 0x1FFFFF) != 0 )
          {
            v8 = *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
            goto LABEL_108;
          }
          if ( *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) )
          {
            v62 = MiFreeWsleList(v10, v5 + 208, 0LL);
            v8 = *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
            if ( v62 )
              v8 = 277;
            *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) = 0;
            *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v8;
          }
          else
          {
            MiFlushTbList(v5 + 368, v12, v13);
            v8 = *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
          }
          LOBYTE(v63) = *(_BYTE *)v5;
          MiUnlockWorkingSetExclusive(v10, v63);
          LODWORD(v18) = 0;
          v44 = 0;
          *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0;
        }
        else
        {
          v8 = *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
        }
        if ( !v44 )
        {
          v10 = (LONG *)MiAcquireProperVm(v19, (KIRQL *)((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL));
          *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v10;
          LODWORD(v18) = 0;
        }
LABEL_108:
        if ( (unsigned __int64)v10 < 2 )
        {
          v7 = *(_QWORD **)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
          v10 = 0LL;
          v9 = *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
          goto LABEL_157;
        }
        if ( (*(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) & 0x80000) != 0 && !v44 )
        {
          *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x170) = MiTbFlushType(v10);
          *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x178) = 20LL;
          *(_WORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x174) = 0;
          *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x180) = v18;
          *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x188) = v18;
        }
        v64 = *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
        v44 = 1;
        *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 1;
        if ( *(_DWORD *)(v64 + 44) == (_DWORD)v18 )
        {
          if ( !qword_1402FE940 )
            goto LABEL_160;
          if ( v19 < qword_1402FE940 )
            goto LABEL_160;
          if ( v19 >= qword_1402FE940 + (qword_1402FE920 << 21) )
            goto LABEL_160;
          *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = MI_READ_PTE_LOCK_FREE(
                                                                                  ((v19 >> 18) & 0x3FFFFFF8)
                                                                                - 0x904C0000000LL);
          v65 = 48 * (MI_GET_PAGE_FRAME_FROM_PTE(v5 + 168) - 0x1D55555555LL);
          LODWORD(v18) = 0;
          v13 = *(_QWORD *)v65;
          v12 = 5 * ((v19 >> 18) & 7);
          v66 = *(_QWORD *)(*(_QWORD *)v65 + 40 * ((v19 >> 18) & 7) + 16);
          _InterlockedOr(v91, 0);
          if ( !v66 )
            goto LABEL_160;
          v67 = *(_QWORD *)(v13 + 40 * ((v19 >> 18) & 7) + 24);
          *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = v67;
          if ( (v67 & 1) != 0 )
          {
            v67 &= ~1uLL;
            *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = v67;
          }
          if ( *(_QWORD *)v67 != *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60)
            || (*(_QWORD *)(v13 + 40 * ((v19 >> 18) & 7) + 32) ^ ((unsigned int)v19 ^ (unsigned int)*(_QWORD *)(v13 + 40 * ((v19 >> 18) & 7) + 32)) & 0x3FFFF) != v43 )
          {
LABEL_160:
            v42 = *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
            v7 = *(_QWORD **)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
            goto LABEL_161;
          }
        }
LABEL_121:
        v68 = (unsigned __int64 *)(((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v69 = MI_READ_PTE_LOCK_FREE(v68);
        v12 = *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
        v70 = v69;
        v13 = *(unsigned int *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
        LODWORD(v18) = 0;
        *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = v69;
        if ( (v69 & 1) == 0 )
          goto LABEL_62;
        v71 = MI_GET_PAGE_FRAME_FROM_PTE(v5 + 136);
        v13 = *(unsigned int *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
        v72 = 48 * v71 - 0x58000000000LL;
        v73 = *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) & 0x10000000;
        if ( v73
          && ((v12 = *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
               LODWORD(v18) = 0,
               (v70 & 0x42) != 0)
           || (*(_BYTE *)(v72 + 34) & 0x10) != 0)
          || (v74 = *(_QWORD *)(v72 + 16),
              LODWORD(v18) = 0,
              v12 = *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
              (*(_QWORD *)(v72 + 40) & 0x200000000000000LL) == 0) )
        {
          v14 = *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
          goto LABEL_62;
        }
        if ( (v13 & 0x80000) != 0 )
        {
          v14 = *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
          if ( (v74 & 0x400) == 0 )
            goto LABEL_62;
          v31 = (v70 & 0x42) == 0;
          v20 = *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
          if ( !v31 )
          {
            v75 = MiLockPageInline(v72);
            v76 = *(_BYTE *)(v72 + 34);
            if ( (v76 & 0x10) == 0 )
              *(_BYTE *)(v72 + 34) = v76 | 0x10;
            _InterlockedAnd64((volatile signed __int64 *)(v72 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v75);
            v77 = *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) & 0xFFFFFFFFFFFFFFBDuLL;
            *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = v77;
            *v68 = v77;
            if ( (unsigned int)MiPteInShadowRange(v68) )
              MiWritePteShadow(v68, v77);
            MiInsertTbFlushEntry(v5 + 368, v19, 1LL, 0LL);
            v12 = *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
            LODWORD(v18) = 0;
            v13 = *(unsigned int *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
LABEL_62:
            v20 = *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
          }
LABEL_63:
          v10 = *(LONG **)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
          goto LABEL_64;
        }
        if ( (v74 & 0x400) == 0
          && (v20 = *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
              (*(_DWORD *)(*(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) + 56LL) & 0x80u) != 0)
          || *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) + 44LL) == 3
          && ((v12 = *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
               LODWORD(v18) = 0,
               v20 = *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
               !*(_QWORD *)v72)
           || (*(_BYTE *)(v72 + 35) & 8) != 0) )
        {
          v14 = *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
          goto LABEL_63;
        }
        v78 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) + 184LL);
        Wsle = MiLocateWsle(v19);
        v80 = Wsle;
        if ( Wsle < *(_QWORD *)(v78 + 8)
          || (v13 = *(unsigned int *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC), (v13 & 0x1000000) != 0) )
        {
          v10 = *(LONG **)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
          LODWORD(v18) = 0;
          if ( v73
            || !*(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x44)
            || v10 == &dword_1402FF880
            || (locked = MiReplaceLockedPage(
                           *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20),
                           v72,
                           v19,
                           *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58)),
                v12 = *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
                LODWORD(v18) = 0,
                v20 = *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
                v14 = *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38),
                v44 = *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
                v13 = *(unsigned int *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC),
                !locked) )
          {
            v12 = *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
            v20 = *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
            v14 = *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
            *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 277;
            goto LABEL_152;
          }
        }
        else
        {
          LODWORD(v18) = 0;
          v10 = *(LONG **)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
          if ( dword_1402FED88 )
          {
            MI_WSLE_LOG_ACCESS(
              v10,
              *(_QWORD *)(v78 + 496) + Wsle * *(unsigned int *)(v78 + 64),
              ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            v13 = *(unsigned int *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
            LODWORD(v18) = 0;
          }
          v12 = *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
          v14 = *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
          v44 = *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
          *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL)
                    + 0xD8
                    + 8LL * *(unsigned int *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0)) = v80;
          v20 = *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
          v81 = *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) + 1;
          *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) = v81;
          if ( v81 == 19 )
          {
            v82 = MiFreeWsleList(v10, v5 + 208, 0LL);
            v83 = *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
            LODWORD(v18) = 0;
            v12 = *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
            *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) = 0;
            if ( v82 )
              v83 = 277;
            *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v83;
            goto LABEL_153;
          }
        }
        goto LABEL_64;
      }
      *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = 0;
      v10 = (LONG *)(v14 + 1280);
      *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v14 + 1280;
      if ( !v44 )
      {
        v44 = 1;
        *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 1;
        if ( (v13 & 0x80000) != 0 )
        {
          *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x170) = MiTbFlushType(v14 + 1280);
          *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x178) = 20LL;
          *(_WORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x174) = 0;
          *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x180) = v45;
          *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x188) = v45;
        }
        v46 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v14 + 1280));
        v12 = *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
        *(_BYTE *)v5 = v46;
      }
      if ( v21
        && v12 >= (*(unsigned int *)(v21 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 32) << 32))
        && v12 <= (*(unsigned int *)(v21 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 33) << 32)) )
      {
        v12 = *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
      }
      else
      {
        Address = MiLocateAddress(v19, v12);
        v21 = Address;
        if ( !Address )
          goto LABEL_79;
        v48 = *(_DWORD *)(Address + 48);
        if ( (v48 & 0x8000) != 0 )
          goto LABEL_79;
        v12 = *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
        if ( (*(_DWORD *)(v12 + 56) & 0x20) == 0 && (v48 & 7) != 0 )
          goto LABEL_79;
        v49 = *(_QWORD **)(Address + 72);
        *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = v49;
        if ( *v49 != v12 )
          goto LABEL_79;
      }
      if ( (*(_DWORD *)(v12 + 56) & 0x20) != 0 )
        break;
      ProtoPteAddress = MiGetProtoPteAddress(v21, v19 >> 12, 0LL, v5 + 120);
      LODWORD(v18) = 0;
      if ( !ProtoPteAddress )
        goto LABEL_79;
      v53 = *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
      if ( !v53 )
        goto LABEL_79;
      if ( v43 != MiStartingOffset(v53, ProtoPteAddress, 0xFFFFFFFFLL) )
        goto LABEL_155;
LABEL_88:
      v54 = 3LL;
      v55 = 3;
      v56 = ((v19 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      v57 = (unsigned __int64 *)(v5 + 608);
      do
      {
        *v57++ = v56;
        v56 = ((v56 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v54;
      }
      while ( v54 );
      while ( 1 )
      {
        v58 = *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x260 + 8LL * (unsigned int)--v55);
        v59 = MI_READ_PTE_LOCK_FREE(v58);
        LODWORD(v18) = 0;
        *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = v59;
        if ( (v59 & 1) == 0 )
          break;
        if ( !v55 )
        {
          if ( (v59 & 0x80u) == 0LL )
            goto LABEL_121;
          break;
        }
      }
      v60 = v58 + 8;
      for ( i = v55 + 2; i; --i )
        v60 = v60 << 25 >> 16;
      v12 = *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
      v19 = v60;
      v20 = *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
      v13 = *(unsigned int *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
    }
    v13 = *(_QWORD *)(v21 + 80);
    v50 = *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90);
    if ( v50 >= v13 )
    {
      v51 = *(unsigned int *)(v21 + 24);
      v12 = *(unsigned int *)(v21 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 33) << 32);
      if ( v50 < v13 - 8 * (v51 | ((unsigned __int64)*(unsigned __int8 *)(v21 + 32) << 32)) + 8 * (v12 + 1) )
      {
        v19 = ((__int64)(v50 - v13) >> 3 << 12)
            + ((v51 | ((unsigned __int64)*(unsigned __int8 *)(v21 + 32) << 32)) << 12);
        goto LABEL_88;
      }
    }
LABEL_155:
    v7 = *(_QWORD **)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
    v9 = *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    v8 = *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
LABEL_156:
    LODWORD(v18) = 0;
LABEL_157:
    v42 = *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
LABEL_158:
    if ( v9 == 1 )
    {
LABEL_161:
      if ( *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) == (_DWORD)v18 )
      {
        MiFlushTbList(v5 + 368, v12, v13);
      }
      else
      {
        v31 = MiFreeWsleList(v10, v5 + 208, 0LL) == 0;
        *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) = 0;
        if ( !v31 )
          v8 = 277;
        *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v8;
      }
      if ( v14 )
      {
        LOBYTE(v85) = *(_BYTE *)v5;
        MiUnlockWorkingSetExclusive(v10, v85);
      }
      else if ( v10 )
      {
        LOBYTE(v85) = *(_BYTE *)v5;
        MiUnlockWorkingSetExclusive(v10, v85);
        v10 = 0LL;
      }
      v9 = 0;
      *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0;
    }
    if ( *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) == 1 )
    {
      v86 = *(volatile signed __int64 **)(*(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) + 8LL);
      if ( (_InterlockedExchangeAdd64(v86, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v86);
      KeAbPostRelease((ULONG_PTR)v86);
      KiLeaveGuardedRegionUnsafe(v42);
    }
    v87 = *(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70);
    if ( v87 )
    {
      MmDetachSession(*(_QWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70), v5 + 560);
      MmQuitNextSession(v87);
    }
    else if ( *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) == 1 )
    {
      KiUnstackDetachProcess(v5 + 560, 1LL);
      MiAttachThreadDone(v14 + 1280);
    }
    if ( v14 )
      ObfDereferenceObject((PVOID)v14);
    ExFreePoolWithTag(*(PVOID *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80), 0);
    if ( *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x44) == 1
      && (**(_BYTE **)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) & 1) == 0 )
    {
      while ( v7 )
      {
        v88 = v7;
        v7 = (_QWORD *)*v7;
        v89 = (void *)v88[1];
        if ( v89 )
          ObfDereferenceObject(v89);
        ExFreePoolWithTag(v88, 0);
      }
      return 0LL;
    }
    else
    {
      if ( v7 )
      {
        CurrentThread = *(struct _KTHREAD **)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
        v6 = *(_DWORD *)(((unsigned __int64)v92 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
        continue;
      }
      return v8;
    }
  }
}
