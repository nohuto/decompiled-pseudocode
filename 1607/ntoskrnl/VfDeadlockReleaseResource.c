/*
 * XREFs of VfDeadlockReleaseResource @ 0x14071425C
 * Callers:
 *     VerifierKeReleaseInStackQueuedSpinLock @ 0x140712220 (VerifierKeReleaseInStackQueuedSpinLock.c)
 *     VerifierKeReleaseInStackQueuedSpinLockForDpc @ 0x1407122B8 (VerifierKeReleaseInStackQueuedSpinLockForDpc.c)
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140712334 (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseMutant @ 0x1407123B8 (VerifierKeReleaseMutant.c)
 *     VerifierKeReleaseMutex @ 0x140712478 (VerifierKeReleaseMutex.c)
 *     VerifierKeReleaseSpinLock @ 0x1407124FC (VerifierKeReleaseSpinLock.c)
 *     VerifierKeReleaseSpinLockFromDpcLevel @ 0x14071255C (VerifierKeReleaseSpinLockFromDpcLevel.c)
 *     VerifierExReleaseFastMutex @ 0x14071A228 (VerifierExReleaseFastMutex.c)
 *     VerifierExReleaseFastMutexUnsafe @ 0x14071A298 (VerifierExReleaseFastMutexUnsafe.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140082890 (RtlCaptureStackBackTrace.c)
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     VfReportIssueWithOptions @ 0x140223370 (VfReportIssueWithOptions.c)
 *     ViLowerIrql @ 0x140223A70 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x140223A80 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockCanProceed @ 0x140714D14 (ViDeadlockCanProceed.c)
 *     ViDeadlockDetectionLock @ 0x14071518C (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x1407151C0 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockFree @ 0x140715474 (ViDeadlockFree.c)
 *     ViDeadlockPreprocessOptions @ 0x1407156D0 (ViDeadlockPreprocessOptions.c)
 *     ViDeadlockRemoveThread @ 0x140715AC4 (ViDeadlockRemoveThread.c)
 *     ViDeadlockSearchResource @ 0x140715C10 (ViDeadlockSearchResource.c)
 *     ViDeadlockSearchThread @ 0x140715CB0 (ViDeadlockSearchThread.c)
 *     ViIsThreadInsidePagingCodePaths @ 0x140715E0C (ViIsThreadInsidePagingCodePaths.c)
 */

__int64 __fastcall VfDeadlockReleaseResource(const void *a1, unsigned int a2, __int64 a3, void *a4)
{
  ULONG_PTR v4; // rdi
  int v8; // r13d
  __int64 result; // rax
  __int64 *v10; // r14
  _QWORD *v11; // rbp
  __int64 v12; // rax
  unsigned int v13; // edx
  unsigned __int8 v14; // si
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  int *v18; // rax
  __int64 v19; // rdx
  int *v20; // rsi
  int v21; // eax
  __int16 v22; // cx
  __int64 v23; // rdx
  __int64 v24; // r8
  ULONG_PTR v25; // rax
  __int64 *v26; // rdi
  __int16 v27; // cx
  _DWORD *v28; // rdx
  __int64 *v29; // rcx
  __int64 v30; // rax
  __int64 *v31; // rcx
  __int64 v32; // rax
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  _QWORD *v36; // rcx
  _QWORD *v37; // rbx
  unsigned __int8 v38; // [rsp+40h] [rbp-98h]
  PVOID Entry; // [rsp+48h] [rbp-90h] BYREF
  PVOID BackTrace[2]; // [rsp+50h] [rbp-88h] BYREF
  __int128 v41; // [rsp+60h] [rbp-78h]
  __int128 v42; // [rsp+70h] [rbp-68h]
  __int128 v43; // [rsp+80h] [rbp-58h]

  v4 = (int)a2;
  Entry = 0LL;
  v8 = 0;
  result = ViDeadlockCanProceed(a1, a2);
  if ( !(_DWORD)result )
    return result;
  result = ViIsThreadInsidePagingCodePaths();
  if ( (_DWORD)result )
    return result;
  result = (__int64)ViDeadlockGlobals;
  if ( *((_DWORD *)ViDeadlockGlobals + 8196) )
    return result;
  result = (unsigned int)ViDeadlockChildrenCountMaximum;
  if ( *((_DWORD *)ViDeadlockGlobals + 8282) > ViDeadlockChildrenCountMaximum )
    return result;
  v10 = 0LL;
  v11 = 0LL;
  v12 = RtlCaptureStackBackTrace(2u, 8u, BackTrace, 0LL);
  if ( !(_WORD)v12 )
  {
    BackTrace[0] = a4;
    v12 = 1LL;
  }
  if ( (unsigned int)v12 < 8 )
    BackTrace[v12] = 0LL;
  v38 = ViRaiseIrqlToDpcLevel();
  v14 = v38;
  ViDeadlockDetectionLock(v13);
  v17 = MEMORY[0xFFFFF78000000320];
  if ( ViDeadlockDetectionEnabled )
  {
    v18 = (int *)ViDeadlockSearchResource(a1, &Entry, v15, v16);
    v20 = v18;
    if ( !v18 )
    {
LABEL_59:
      v14 = v38;
      goto LABEL_60;
    }
    v21 = *v18;
    if ( v21 != (_DWORD)v4 )
    {
      if ( v21 == 7 && (unsigned int)(v4 - 5) <= 1 )
      {
        *v20 = v4;
      }
      else
      {
        if ( v21 != 1 || (_DWORD)v4 != 2 )
        {
          ViDeadlockPreprocessOptions(
            byte_1402F99D4,
            "Releasing lock 0x%p using mismatched API for this lock type.",
            (const void *)0x1009);
          VfReportIssueWithOptions(196, 4105, (int)a1, *v20, v4, byte_1402F99D4);
LABEL_58:
          v33 = v41;
          *(_OWORD *)(v20 + 46) = *(_OWORD *)BackTrace;
          v34 = v42;
          *(_OWORD *)(v20 + 50) = v33;
          v35 = v43;
          *(_OWORD *)(v20 + 54) = v34;
          *(_OWORD *)(v20 + 58) = v35;
          goto LABEL_59;
        }
        if ( *((_WORD *)v20 + 3) > 1u )
          *((_WORD *)v20 + 3) = 1;
      }
    }
    v22 = *((_WORD *)v20 + 3);
    if ( v22 )
    {
      v11 = (_QWORD *)*((_QWORD *)v20 + 2);
      if ( *v11 != a3 )
        v8 = 1;
      if ( (unsigned int)(*v20 - 5) <= 1 )
        v26 = (__int64 *)v11[1];
      else
        v26 = (__int64 *)v11[2];
      v27 = v22 - 1;
      *((_WORD *)v20 + 3) = v27;
      if ( v27 )
      {
        v8 = 0;
      }
      else
      {
        v28 = ViDeadlockGlobals;
        *((_QWORD *)v20 + 2) = 0LL;
        ++v28[8210];
        if ( (int *)v26[7] == v20 )
        {
          *((_DWORD *)v26 + 18) &= ~1u;
          v10 = v26;
        }
        else
        {
          ++v28[8208];
          if ( (ViDeadlockResourceTypeInfo[*(int *)v26[7]] & 4) == 0 && (ViDeadlockResourceTypeInfo[*v20] & 4) == 0 )
          {
            DbgPrintEx(0x5Du, 0, "Deadlock detection: Must release resources in reverse-order\n");
            DbgPrintEx(
              0x5Du,
              0,
              "Resource %p acquired before resource %p -- \nCurrent thread (%p) is trying to release %p first\n",
              a1,
              *(const void **)(v26[7] + 8),
              v11,
              a1);
            ViDeadlockPreprocessOptions(
              byte_1402F99CC,
              "Releasing two locks in reverse order of their acquire.",
              4099LL,
              a1,
              *(_QWORD *)(v26[7] + 8),
              v11);
            VfReportIssueWithOptions(196, 4099, (int)a1, *(_QWORD *)(v26[7] + 8), (ULONG_PTR)v11, byte_1402F99CC);
            v28 = ViDeadlockGlobals;
          }
          while ( (int *)v26[7] != v20 )
          {
            v26 = (__int64 *)*v26;
            if ( !v26 )
              goto LABEL_41;
          }
          *((_DWORD *)v26 + 18) &= ~1u;
          v10 = v26;
          if ( (v26[9] & 4) == 0 )
            ++v28[8209];
          *((_DWORD *)v26 + 18) |= 4u;
        }
LABEL_41:
        if ( (unsigned int)(*v20 - 5) <= 1 )
        {
          if ( v11[1] )
          {
            do
            {
              v31 = (__int64 *)v11[1];
              if ( (v31[9] & 1) != 0 && (_QWORD *)v31[8] == v11 )
                break;
              v32 = *v31;
              v11[1] = *v31;
            }
            while ( v32 );
          }
        }
        else if ( v11[2] )
        {
          do
          {
            v29 = (__int64 *)v11[2];
            if ( (v29[9] & 1) != 0 && (_QWORD *)v29[8] == v11 )
              break;
            v30 = *v29;
            v11[2] = *v29;
          }
          while ( v30 );
        }
        if ( !v10 )
          goto LABEL_57;
        v10[8] = 0LL;
        --*((_DWORD *)v11 + 10);
        if ( v8 )
          *((_DWORD *)v10 + 18) |= 4u;
        if ( *((_DWORD *)v11 + 10) )
        {
LABEL_57:
          v8 = 0;
        }
        else
        {
          v8 = 1;
          ViDeadlockRemoveThread((ULONG_PTR)v11);
        }
      }
    }
    else if ( !*((_DWORD *)ViDeadlockGlobals + 8196)
           && *((_DWORD *)ViDeadlockGlobals + 8282) <= ViDeadlockChildrenCountMaximum )
    {
      ViDeadlockSearchThread(a3, v19, 0LL);
      ViDeadlockPreprocessOptions(
        &dword_1402F99C8,
        "Releasing lock 0x%p that is not owned by the current thread.",
        (const void *)0x1007);
      v25 = ViDeadlockSearchThread(a3, v23, v24);
      VfReportIssueWithOptions(196, 4103, (int)a1, (int)v20, v25, &dword_1402F99C8);
    }
    goto LABEL_58;
  }
LABEL_60:
  if ( MEMORY[0xFFFFF78000000320] - v17 > *((_QWORD *)ViDeadlockGlobals + 1) )
    *((_QWORD *)ViDeadlockGlobals + 1) = MEMORY[0xFFFFF78000000320] - v17;
  ViDeadlockDetectionUnlock(1LL);
  result = ViLowerIrql(v14);
  v36 = Entry;
  if ( Entry )
  {
    do
    {
      v37 = (_QWORD *)*v36;
      result = ViDeadlockFree(v36);
      v36 = v37;
    }
    while ( v37 );
  }
  if ( v8 )
    return ViDeadlockFree(v11);
  return result;
}
