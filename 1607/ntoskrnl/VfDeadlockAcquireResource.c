/*
 * XREFs of VfDeadlockAcquireResource @ 0x140713510
 * Callers:
 *     VerifierKeAcquireInStackQueuedSpinLock @ 0x140711AC8 (VerifierKeAcquireInStackQueuedSpinLock.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140711B08 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     VerifierKeAcquireInStackQueuedSpinLockForDpc @ 0x140711C68 (VerifierKeAcquireInStackQueuedSpinLockForDpc.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140711D24 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireSpinLockAtDpcLevel @ 0x140711E5C (VerifierKeAcquireSpinLockAtDpcLevel.c)
 *     VerifierKeAcquireSpinLockRaiseToDpc @ 0x140711EA4 (VerifierKeAcquireSpinLockRaiseToDpc.c)
 *     VerifierKeInitializeMutant @ 0x140711FD0 (VerifierKeInitializeMutant.c)
 *     VerifierKeTryToAcquireSpinLockAtDpcLevel @ 0x140712818 (VerifierKeTryToAcquireSpinLockAtDpcLevel.c)
 *     ViKeObjectAcquired @ 0x140713078 (ViKeObjectAcquired.c)
 *     VerifierExAcquireResourceExclusiveLite @ 0x140717ACC (VerifierExAcquireResourceExclusiveLite.c)
 *     VerifierExAcquireResourceSharedLite @ 0x140717B74 (VerifierExAcquireResourceSharedLite.c)
 *     VerifierExAcquireSharedStarveExclusive @ 0x140717C1C (VerifierExAcquireSharedStarveExclusive.c)
 *     VerifierExAcquireSharedWaitForExclusive @ 0x140717CC4 (VerifierExAcquireSharedWaitForExclusive.c)
 *     VerifierExEnterCriticalRegionAndAcquireResourceExclusive @ 0x140717EA8 (VerifierExEnterCriticalRegionAndAcquireResourceExclusive.c)
 *     VerifierExEnterCriticalRegionAndAcquireResourceShared @ 0x140717EF8 (VerifierExEnterCriticalRegionAndAcquireResourceShared.c)
 *     VerifierExEnterPriorityRegionAndAcquireResourceExclusive @ 0x140717F48 (VerifierExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     VerifierExEnterPriorityRegionAndAcquireResourceShared @ 0x140717F98 (VerifierExEnterPriorityRegionAndAcquireResourceShared.c)
 *     VerifierExAcquireFastMutex @ 0x14071A140 (VerifierExAcquireFastMutex.c)
 *     VerifierExAcquireFastMutexUnsafe @ 0x14071A18C (VerifierExAcquireFastMutexUnsafe.c)
 *     VerifierExTryToAcquireFastMutex @ 0x14071A318 (VerifierExTryToAcquireFastMutex.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140082890 (RtlCaptureStackBackTrace.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     VfReportIssueWithOptions @ 0x140223370 (VfReportIssueWithOptions.c)
 *     ViLowerIrql @ 0x140223A70 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x140223A80 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockAddResource @ 0x14071474C (ViDeadlockAddResource.c)
 *     ViDeadlockAddThread @ 0x140714984 (ViDeadlockAddThread.c)
 *     ViDeadlockAllocate @ 0x140714A40 (ViDeadlockAllocate.c)
 *     ViDeadlockAnalyze @ 0x140714A9C (ViDeadlockAnalyze.c)
 *     ViDeadlockCanProceed @ 0x140714D14 (ViDeadlockCanProceed.c)
 *     ViDeadlockCheckDuplicatesAmongChildren @ 0x140714FA8 (ViDeadlockCheckDuplicatesAmongChildren.c)
 *     ViDeadlockCheckDuplicatesAmongRoots @ 0x140715024 (ViDeadlockCheckDuplicatesAmongRoots.c)
 *     ViDeadlockDetectionLock @ 0x14071518C (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x1407151C0 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockFree @ 0x140715474 (ViDeadlockFree.c)
 *     ViDeadlockPreprocessOptions @ 0x1407156D0 (ViDeadlockPreprocessOptions.c)
 *     ViDeadlockRemoveThread @ 0x140715AC4 (ViDeadlockRemoveThread.c)
 *     ViDeadlockSearchResource @ 0x140715C10 (ViDeadlockSearchResource.c)
 *     ViDeadlockSearchThread @ 0x140715CB0 (ViDeadlockSearchThread.c)
 *     ViDeadlockSimilarNode @ 0x140715D38 (ViDeadlockSimilarNode.c)
 *     ViDeadlockUpdateChildrenCount @ 0x140715DE0 (ViDeadlockUpdateChildrenCount.c)
 *     ViIsThreadInsidePagingCodePaths @ 0x140715E0C (ViIsThreadInsidePagingCodePaths.c)
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
  _QWORD *v37; // rax
  __int64 v38; // r8
  _QWORD *v39; // rax
  __int64 v40; // rdx
  _QWORD *v41; // rcx
  _OWORD *v42; // rax
  __int64 v43; // rax
  __int128 v44; // xmm3
  __int128 v45; // xmm2
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  _QWORD *v48; // rcx
  _QWORD *v49; // rbx
  unsigned __int8 v50; // [rsp+34h] [rbp-8Dh]
  __int64 v52; // [rsp+40h] [rbp-81h]
  PVOID v53; // [rsp+48h] [rbp-79h]
  PVOID Entry; // [rsp+50h] [rbp-71h] BYREF
  int v55; // [rsp+58h] [rbp-69h]
  PVOID v56; // [rsp+60h] [rbp-61h]
  int v57; // [rsp+68h] [rbp-59h]
  PVOID v58; // [rsp+70h] [rbp-51h]
  PVOID v59; // [rsp+78h] [rbp-49h] BYREF
  __int64 v60; // [rsp+80h] [rbp-41h]
  PVOID BackTrace[2]; // [rsp+90h] [rbp-31h] BYREF
  __int128 v62; // [rsp+A0h] [rbp-21h]
  __int128 v63; // [rsp+B0h] [rbp-11h]
  __int128 v64; // [rsp+C0h] [rbp-1h]

  v5 = (int)a2;
  v60 = (__int64)a5;
  v8 = 0LL;
  v55 = 0;
  v59 = 0LL;
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
  v56 = 0LL;
  v9 = 0LL;
  v57 = ViDeadlockResourceTypeInfo[v5];
  v52 = ViDeadlockAllocate(3LL);
  v58 = (PVOID)ViDeadlockAllocate(2LL);
  v53 = (PVOID)ViDeadlockAllocate(1LL);
  v10 = RtlCaptureStackBackTrace(2u, 8u, BackTrace, 0LL);
  v11 = v10;
  if ( !v10 )
  {
    BackTrace[0] = a5;
    v11 = 1;
  }
  if ( v11 < 8 )
    BackTrace[v11] = 0LL;
  v50 = ViRaiseIrqlToDpcLevel();
  ViDeadlockDetectionLock(v12);
  v14 = MEMORY[0xFFFFF78000000320];
  if ( !ViDeadlockDetectionEnabled || (v56 = v58, v58 = 0LL, !v56) )
  {
    v18 = v53;
    goto LABEL_79;
  }
  v9 = ViDeadlockSearchThread(a3, v13, 0LL);
  if ( v9 )
  {
    v17 = 1;
    goto LABEL_19;
  }
  v16 = ViDeadlockAddThread(a3, v52);
  v52 = 0LL;
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
      v18 = v53;
      v19 = 0;
LABEL_81:
      v8 = (void *)v52;
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
            byte_1402F99DC,
            "Acquiring lock 0x%p using mismatched API for this lock type.",
            (const void *)0x1008);
          VfReportIssueWithOptions(196, 4104, a1, *(_DWORD *)v20, v5, byte_1402F99DC);
LABEL_36:
          v18 = v53;
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
          if ( (v57 & 1) != 0 )
            goto LABEL_21;
          ViDeadlockPreprocessOptions(
            &dword_1402F99D0,
            "Lock 0x%p doesn't support recursive acquire.",
            (const void *)0x1000);
          VfReportIssueWithOptions(196, 4096, a1, v20, v9, &dword_1402F99D0);
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
          v30 = ViDeadlockAnalyze(a1, v23, 1, 0, v60);
          v17 = 1;
          if ( v30 )
          {
            v18 = v53;
            v19 = 0;
            goto LABEL_81;
          }
        }
        v31 = a4;
LABEL_62:
        v29 = v56;
        v56 = 0LL;
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
        if ( !v55 )
        {
          v37 = (_QWORD *)(v23 + 8);
          v38 = *(_QWORD *)(v23 + 8);
          if ( *(_QWORD *)(v38 + 8) != v23 + 8 )
            __fastfail(3u);
          *v36 = v38;
          v29[4] = v37;
          *(_QWORD *)(v38 + 8) = v36;
          *v37 = v36;
          ViDeadlockUpdateChildrenCount(v23, 1LL);
        }
        v39 = (_QWORD *)(v20 + 24);
        v40 = *(_QWORD *)(v20 + 24);
        v41 = v29 + 5;
        if ( *(_QWORD *)(v40 + 8) != v20 + 24 )
          __fastfail(3u);
        *v41 = v40;
        v29[6] = v39;
        *(_QWORD *)(v40 + 8) = v41;
        *v39 = v41;
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
            v55 = 1;
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
        v42 = (_OWORD *)*v29;
        if ( *v29 )
        {
          *((_OWORD *)v29 + 9) = v42[5];
          *((_OWORD *)v29 + 10) = v42[6];
          *((_OWORD *)v29 + 11) = v42[7];
          *((_OWORD *)v29 + 12) = v42[8];
        }
        v43 = v29[7];
        v44 = *(_OWORD *)BackTrace;
        v45 = v62;
        v46 = v63;
        v47 = v64;
        *((_OWORD *)v29 + 5) = *(_OWORD *)BackTrace;
        *((_OWORD *)v29 + 6) = v45;
        *((_OWORD *)v29 + 7) = v46;
        *((_OWORD *)v29 + 8) = v47;
        *(_OWORD *)(v43 + 120) = v44;
        *(_OWORD *)(v43 + 136) = v45;
        *(_OWORD *)(v43 + 152) = v46;
        *(_OWORD *)(v43 + 168) = v47;
      }
      goto LABEL_21;
    }
    v18 = v53;
    if ( (unsigned int)ViDeadlockAddResource(
                         a1,
                         v5,
                         (_DWORD)v53,
                         (unsigned int)BackTrace,
                         (__int64)&v59,
                         (__int64)&Entry) )
    {
      v53 = 0LL;
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
  v18 = v53;
  v19 = 0;
LABEL_82:
  if ( MEMORY[0xFFFFF78000000320] - v14 > *(_QWORD *)ViDeadlockGlobals )
    *(_QWORD *)ViDeadlockGlobals = MEMORY[0xFFFFF78000000320] - v14;
  ViDeadlockDetectionUnlock(v17);
  ViLowerIrql(v50);
  v48 = Entry;
  if ( Entry )
  {
    do
    {
      v49 = (_QWORD *)*v48;
      ViDeadlockFree(v48);
      v48 = v49;
    }
    while ( v49 );
  }
  if ( v59 )
    ViDeadlockFree(v59);
  if ( v19 )
    ViDeadlockFree((PVOID)v9);
  if ( v56 )
    ViDeadlockFree(v56);
  if ( v18 )
    ViDeadlockFree(v18);
  if ( v58 )
    ViDeadlockFree(v58);
  if ( v8 )
    ViDeadlockFree(v8);
}
