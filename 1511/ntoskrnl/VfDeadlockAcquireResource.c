/*
 * XREFs of VfDeadlockAcquireResource @ 0x1406CB730
 * Callers:
 *     VerifierKeAcquireInStackQueuedSpinLock @ 0x1406C5A78 (VerifierKeAcquireInStackQueuedSpinLock.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1406C5AB8 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     VerifierKeAcquireInStackQueuedSpinLockForDpc @ 0x1406C5C18 (VerifierKeAcquireInStackQueuedSpinLockForDpc.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x1406C5CD4 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireSpinLockAtDpcLevel @ 0x1406C5E0C (VerifierKeAcquireSpinLockAtDpcLevel.c)
 *     VerifierKeAcquireSpinLockRaiseToDpc @ 0x1406C5E54 (VerifierKeAcquireSpinLockRaiseToDpc.c)
 *     VerifierKeInitializeMutant @ 0x1406C5F80 (VerifierKeInitializeMutant.c)
 *     VerifierKeTryToAcquireSpinLockAtDpcLevel @ 0x1406C67C8 (VerifierKeTryToAcquireSpinLockAtDpcLevel.c)
 *     ViKeObjectAcquired @ 0x1406C7030 (ViKeObjectAcquired.c)
 *     VerifierExAcquireResourceExclusiveLite @ 0x1406C9100 (VerifierExAcquireResourceExclusiveLite.c)
 *     VerifierExAcquireResourceSharedLite @ 0x1406C91A8 (VerifierExAcquireResourceSharedLite.c)
 *     VerifierExAcquireSharedStarveExclusive @ 0x1406C9250 (VerifierExAcquireSharedStarveExclusive.c)
 *     VerifierExAcquireSharedWaitForExclusive @ 0x1406C92F8 (VerifierExAcquireSharedWaitForExclusive.c)
 *     VerifierExEnterCriticalRegionAndAcquireResourceExclusive @ 0x1406C94C8 (VerifierExEnterCriticalRegionAndAcquireResourceExclusive.c)
 *     VerifierExEnterCriticalRegionAndAcquireResourceShared @ 0x1406C9518 (VerifierExEnterCriticalRegionAndAcquireResourceShared.c)
 *     VerifierExEnterPriorityRegionAndAcquireResourceExclusive @ 0x1406C9568 (VerifierExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     VerifierExEnterPriorityRegionAndAcquireResourceShared @ 0x1406C95B8 (VerifierExEnterPriorityRegionAndAcquireResourceShared.c)
 *     VerifierExAcquireFastMutex @ 0x1406CE088 (VerifierExAcquireFastMutex.c)
 *     VerifierExAcquireFastMutexUnsafe @ 0x1406CE0D4 (VerifierExAcquireFastMutexUnsafe.c)
 *     VerifierExTryToAcquireFastMutex @ 0x1406CE260 (VerifierExTryToAcquireFastMutex.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1400243AC (RtlCaptureStackBackTrace.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     VfReportIssueWithOptions @ 0x14020BA88 (VfReportIssueWithOptions.c)
 *     ViLowerIrql @ 0x14020C200 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x14020C210 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockAddResource @ 0x1406CC970 (ViDeadlockAddResource.c)
 *     ViDeadlockAddThread @ 0x1406CCBA8 (ViDeadlockAddThread.c)
 *     ViDeadlockAllocate @ 0x1406CCC60 (ViDeadlockAllocate.c)
 *     ViDeadlockAnalyze @ 0x1406CCCBC (ViDeadlockAnalyze.c)
 *     ViDeadlockCanProceed @ 0x1406CCF34 (ViDeadlockCanProceed.c)
 *     ViDeadlockCheckDuplicatesAmongChildren @ 0x1406CD1C0 (ViDeadlockCheckDuplicatesAmongChildren.c)
 *     ViDeadlockCheckDuplicatesAmongRoots @ 0x1406CD23C (ViDeadlockCheckDuplicatesAmongRoots.c)
 *     ViDeadlockDetectionLock @ 0x1406CD3A4 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x1406CD3D8 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockFree @ 0x1406CD68C (ViDeadlockFree.c)
 *     ViDeadlockPreprocessOptions @ 0x1406CD8E8 (ViDeadlockPreprocessOptions.c)
 *     ViDeadlockRemoveThread @ 0x1406CDCDC (ViDeadlockRemoveThread.c)
 *     ViDeadlockSearchResource @ 0x1406CDE28 (ViDeadlockSearchResource.c)
 *     ViDeadlockSearchThread @ 0x1406CDEC8 (ViDeadlockSearchThread.c)
 *     ViDeadlockSimilarNode @ 0x1406CDF50 (ViDeadlockSimilarNode.c)
 *     ViDeadlockUpdateChildrenCount @ 0x1406CDFF8 (ViDeadlockUpdateChildrenCount.c)
 *     ViIsThreadInsidePagingCodePaths @ 0x1406CE024 (ViIsThreadInsidePagingCodePaths.c)
 */

void __fastcall VfDeadlockAcquireResource(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, void *a5)
{
  ULONG_PTR v5; // r13
  void *v8; // rdi
  ULONG_PTR v9; // r14
  USHORT v10; // ax
  unsigned int v11; // ecx
  unsigned int v12; // edx
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // rax
  unsigned int v17; // r9d
  void *v18; // rsi
  int v19; // r15d
  __int64 v20; // rsi
  __int64 v21; // r9
  int v22; // ecx
  __int64 v23; // r15
  __int64 v24; // rax
  unsigned __int16 v25; // ax
  __int64 v26; // rdx
  _QWORD *v27; // r10
  _QWORD *v28; // r9
  _QWORD *v29; // rdi
  int v30; // eax
  unsigned int v31; // r11d
  _QWORD *v32; // r10
  _QWORD *v33; // r9
  int v34; // edx
  int v35; // ecx
  _QWORD *v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rdx
  char *v39; // rcx
  _OWORD *v40; // rax
  __int64 v41; // rax
  __int128 v42; // xmm3
  __int128 v43; // xmm2
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  _QWORD *v46; // rcx
  _QWORD *v47; // rbx
  unsigned __int8 v49; // [rsp+38h] [rbp-89h]
  __int64 v50; // [rsp+40h] [rbp-81h]
  PVOID v51; // [rsp+48h] [rbp-79h]
  PVOID Entry; // [rsp+50h] [rbp-71h] BYREF
  int v53; // [rsp+58h] [rbp-69h]
  PVOID v54; // [rsp+60h] [rbp-61h]
  int v55; // [rsp+68h] [rbp-59h]
  PVOID v56; // [rsp+70h] [rbp-51h]
  PVOID v57; // [rsp+78h] [rbp-49h] BYREF
  __int64 v58; // [rsp+80h] [rbp-41h]
  PVOID BackTrace[2]; // [rsp+90h] [rbp-31h] BYREF
  __int128 v60; // [rsp+A0h] [rbp-21h]
  __int128 v61; // [rsp+B0h] [rbp-11h]
  __int128 v62; // [rsp+C0h] [rbp-1h]

  v5 = (int)a2;
  v58 = (__int64)a5;
  v8 = 0LL;
  v53 = 0;
  v57 = 0LL;
  Entry = 0LL;
  if ( a2 == 8
    && (!VfWin32kDllBase
     || VfWin32kDllBase > (unsigned __int64)a5
     || VfWin32kDllBase + (unsigned __int64)(unsigned int)VfWin32kSizeOfImage <= (unsigned __int64)a5)
    || !(unsigned int)ViDeadlockCanProceed(a1, a2)
    || (unsigned int)ViIsThreadInsidePagingCodePaths()
    || *((_DWORD *)ViDeadlockGlobals + 8196)
    || *((_DWORD *)ViDeadlockGlobals + 8282) > ViDeadlockChildrenCountMaximum )
  {
    return;
  }
  v54 = 0LL;
  v9 = 0LL;
  v55 = ViDeadlockResourceTypeInfo[v5];
  v50 = ViDeadlockAllocate(3LL);
  v56 = (PVOID)ViDeadlockAllocate(2LL);
  v51 = (PVOID)ViDeadlockAllocate(1LL);
  v10 = RtlCaptureStackBackTrace(2u, 8u, BackTrace, 0LL);
  v11 = v10;
  if ( !v10 )
  {
    BackTrace[0] = a5;
    v11 = 1;
  }
  if ( v11 < 8 )
    BackTrace[v11] = 0LL;
  v49 = ViRaiseIrqlToDpcLevel();
  ViDeadlockDetectionLock(v12);
  v14 = MEMORY[0xFFFFF78000000320];
  if ( !ViDeadlockDetectionEnabled || (v54 = v56, v56 = 0LL, !v54) )
  {
    v18 = v51;
    goto LABEL_79;
  }
  v9 = ViDeadlockSearchThread(a3, v13, 0LL);
  if ( v9 )
  {
    v17 = 1;
    goto LABEL_19;
  }
  v16 = ViDeadlockAddThread(a3, v50);
  v50 = 0LL;
  v9 = v16;
  v17 = 1;
  if ( v16 )
  {
    LODWORD(v8) = 1;
LABEL_19:
    if ( (_DWORD)v5 == 8 )
    {
      *(_BYTE *)(v9 + 48) = 1;
LABEL_21:
      v18 = v51;
      v19 = 0;
LABEL_81:
      v8 = (void *)v50;
      goto LABEL_82;
    }
    v20 = ViDeadlockSearchResource(a1, &Entry, v15, 1LL);
    if ( v20 )
    {
LABEL_25:
      v22 = *(_DWORD *)v20;
      v17 = 1;
      if ( *(_DWORD *)v20 != (_DWORD)v5 )
      {
        if ( ((unsigned int)(v5 - 3) > 1 || (unsigned int)(v22 - 3) > 1) && (v22 != 7 || (unsigned int)(v5 - 5) > 1) )
        {
          ViDeadlockPreprocessOptions(
            byte_1402D4074,
            "Acquiring lock 0x%p using mismatched API for this lock type.",
            (const void *)0x1008);
          VfReportIssueWithOptions(196, 4104, a1, *(_DWORD *)v20, v5, byte_1402D4074);
LABEL_36:
          v18 = v51;
          v19 = 0;
LABEL_80:
          v17 = 1;
          goto LABEL_81;
        }
        *(_DWORD *)v20 = v5;
      }
      if ( (unsigned int)(v5 - 5) <= 1 )
        v23 = *(_QWORD *)(v9 + 8);
      else
        v23 = *(_QWORD *)(v9 + 16);
      v24 = *(_QWORD *)(v20 + 16);
      if ( v24 && v24 != v9 )
        *(_WORD *)(v20 + 6) = 0;
      v25 = *(_WORD *)(v20 + 6) + 1;
      *(_QWORD *)(v20 + 16) = v9;
      *(_WORD *)(v20 + 6) = v25;
      if ( v23 )
      {
        if ( v25 > 1u )
        {
          if ( (v55 & 1) != 0 )
            goto LABEL_21;
          ViDeadlockPreprocessOptions(
            &dword_1402D4068,
            "Lock 0x%p doesn't support recursive acquire.",
            (const void *)0x1000);
          VfReportIssueWithOptions(196, 4096, a1, v20, v9, &dword_1402D4068);
          goto LABEL_36;
        }
        v26 = a4;
        v27 = (_QWORD *)(v23 + 8);
        v28 = *(_QWORD **)(v23 + 8);
        while ( v28 != v27 )
        {
          v29 = v28 - 3;
          if ( (unsigned int)ViDeadlockSimilarNode(a1, v26, v28 - 3, *v28) )
          {
            ViDeadlockCheckDuplicatesAmongChildren(v23, v29, &Entry);
            goto LABEL_53;
          }
        }
        if ( !(unsigned __int16)*(_DWORD *)(v20 + 4) || (_DWORD)v26 )
        {
          v17 = 1;
        }
        else
        {
          v30 = ViDeadlockAnalyze(a1, v23, 1, 0, v58);
          v17 = 1;
          if ( v30 )
          {
            v18 = v51;
            v19 = 0;
            goto LABEL_81;
          }
        }
        v31 = a4;
LABEL_62:
        v29 = v54;
        v54 = 0LL;
        v29[9] = 0LL;
        v29[8] = 0LL;
        v29[10] = 0LL;
        v29[18] = 0LL;
        *((_DWORD *)v29 + 18) &= ~1u;
        v34 = *((_DWORD *)v29 + 18);
        *v29 = v23;
        v29[7] = v20;
        v35 = v34 & 7 | (8 * *((_DWORD *)ViDeadlockGlobals + 8201));
        v36 = v29 + 3;
        *((_DWORD *)v29 + 18) = v35;
        v29[2] = v29 + 1;
        v29[1] = v29 + 1;
        v29[4] = v29 + 3;
        v29[3] = v29 + 3;
        *((_DWORD *)v29 + 18) ^= (*((_DWORD *)v29 + 18) ^ (2 * v31)) & 2;
        if ( !v53 )
        {
          v37 = *(_QWORD *)(v23 + 8);
          *v36 = v37;
          v29[4] = v23 + 8;
          if ( *(_QWORD *)(v37 + 8) != v23 + 8 )
            __fastfail(3u);
          *(_QWORD *)(v37 + 8) = v36;
          *(_QWORD *)(v23 + 8) = v36;
          ViDeadlockUpdateChildrenCount(v23, 1LL);
        }
        v38 = *(_QWORD *)(v20 + 24);
        v39 = (char *)(v29 + 5);
        v29[5] = v38;
        v29[6] = v20 + 24;
        if ( *(_QWORD *)(v38 + 8) != v20 + 24 )
          __fastfail(3u);
        *(_QWORD *)(v38 + 8) = v39;
        *(_QWORD *)(v20 + 24) = v39;
        *(_WORD *)(v20 + 4) += v17;
        if ( (unsigned __int16)*(_DWORD *)(v20 + 4) > 0xFFF0u )
          ViDeadlockState |= 0x20u;
      }
      else
      {
        v31 = a4;
        v32 = (_QWORD *)(v20 + 24);
        v33 = *(_QWORD **)(v20 + 24);
        do
        {
          if ( v33 == v32 )
          {
            v17 = 1;
            v53 = 1;
            goto LABEL_62;
          }
          v29 = v33 - 5;
          v33 = (_QWORD *)*v33;
        }
        while ( *v29 || !(unsigned int)ViDeadlockSimilarNode(a1, v31, v29, v33) );
        ViDeadlockCheckDuplicatesAmongRoots(v29, &Entry, 0LL);
LABEL_53:
        v17 = 1;
      }
      if ( v29 )
      {
        *((_DWORD *)v29 + 18) |= v17;
        v29[8] = v9;
        if ( (int)v5 - 5 <= v17 )
          *(_QWORD *)(v9 + 8) = v29;
        else
          *(_QWORD *)(v9 + 16) = v29;
        *(_DWORD *)(v9 + 40) += v17;
        v40 = (_OWORD *)*v29;
        if ( *v29 )
        {
          *((_OWORD *)v29 + 9) = v40[5];
          *((_OWORD *)v29 + 10) = v40[6];
          *((_OWORD *)v29 + 11) = v40[7];
          *((_OWORD *)v29 + 12) = v40[8];
        }
        v41 = v29[7];
        v42 = *(_OWORD *)BackTrace;
        v43 = v60;
        v44 = v61;
        v45 = v62;
        *((_OWORD *)v29 + 5) = *(_OWORD *)BackTrace;
        *((_OWORD *)v29 + 6) = v43;
        *((_OWORD *)v29 + 7) = v44;
        *((_OWORD *)v29 + 8) = v45;
        *(_OWORD *)(v41 + 120) = v42;
        *(_OWORD *)(v41 + 136) = v43;
        *(_OWORD *)(v41 + 152) = v44;
        *(_OWORD *)(v41 + 168) = v45;
      }
      goto LABEL_21;
    }
    v18 = v51;
    if ( (unsigned int)ViDeadlockAddResource(
                         a1,
                         v5,
                         (_DWORD)v51,
                         (unsigned int)BackTrace,
                         (__int64)&v57,
                         (__int64)&Entry) )
    {
      v51 = 0LL;
      v20 = ViDeadlockSearchResource(a1, &Entry, 0LL, v21);
      goto LABEL_25;
    }
    if ( (_DWORD)v8 )
    {
      v19 = 1;
      ViDeadlockRemoveThread(v9);
      v17 = 1;
      goto LABEL_81;
    }
LABEL_79:
    v19 = 0;
    goto LABEL_80;
  }
  v18 = v51;
  v19 = 0;
LABEL_82:
  if ( MEMORY[0xFFFFF78000000320] - v14 > *(_QWORD *)ViDeadlockGlobals )
    *(_QWORD *)ViDeadlockGlobals = MEMORY[0xFFFFF78000000320] - v14;
  ViDeadlockDetectionUnlock(v17);
  ViLowerIrql(v49);
  v46 = Entry;
  if ( Entry )
  {
    do
    {
      v47 = (_QWORD *)*v46;
      ViDeadlockFree(v46);
      v46 = v47;
    }
    while ( v47 );
  }
  if ( v57 )
    ViDeadlockFree(v57);
  if ( v19 )
    ViDeadlockFree((PVOID)v9);
  if ( v54 )
    ViDeadlockFree(v54);
  if ( v18 )
    ViDeadlockFree(v18);
  if ( v56 )
    ViDeadlockFree(v56);
  if ( v8 )
    ViDeadlockFree(v8);
}
