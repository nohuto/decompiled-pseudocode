/*
 * XREFs of RtlSetProtectedPolicy @ 0x1800E5290
 * Callers:
 *     <none>
 * Callees:
 *     LdrEnsureMrdataHeapExists @ 0x1800051C8 (LdrEnsureMrdataHeapExists.c)
 *     RtlProtectHeap @ 0x180005E30 (RtlProtectHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     LdrProtectMrdata @ 0x18003611C (LdrProtectMrdata.c)
 *     bsearch @ 0x180086890 (bsearch.c)
 *     qsort @ 0x180087C00 (qsort.c)
 *     memmove @ 0x180098200 (memmove.c)
 */

__int64 __fastcall RtlSetProtectedPolicy(_OWORD *Key, __int64 a2, _QWORD *a3)
{
  char v6; // di
  char *v7; // rdx
  int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  char *v11; // rdx
  unsigned __int64 v12; // r8
  __int64 v13; // r9
  int v14; // ebx
  void *v15; // rax
  char *v16; // rbx
  __int64 v17; // r8
  __int64 v18; // r9
  char *Heap; // rdi
  unsigned int v20; // ebx
  void *ProcessHeap; // rcx
  void *v22; // rsi
  void *v23; // rcx
  char *v24; // rdx
  __int64 v25; // rcx
  int v26; // ecx

  v6 = 0;
  v8 = LdrEnsureMrdataHeapExists();
  if ( v8 < 0 )
    return (unsigned int)v8;
  RtlAcquireSRWLockExclusive(&RtlpProtectedPoliciesSRWLock, v7, v9, v10);
  if ( qword_1801572F0 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v11, v12, v13);
    v14 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      RtlProtectHeap(LdrpMrdataHeap, 0);
    if ( v14 == -1 )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v14 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  v15 = RtlpProtectedPolicies;
  if ( RtlpProtectedPolicies )
  {
    v16 = (char *)bsearch(
                    Key,
                    RtlpProtectedPolicies,
                    (unsigned int)RtlpProtectedPoliciesActiveCount,
                    0x18uLL,
                    (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
    v15 = RtlpProtectedPolicies;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v16 )
    goto LABEL_31;
  if ( v15 && (_DWORD)RtlpProtectedPoliciesActiveCount + 1 != RtlpProtectedPoliciesTotalCount )
  {
    LdrProtectMrdata(0, v11, v12, v13);
    Heap = (char *)RtlpProtectedPolicies;
LABEL_30:
    v16 = &Heap[24 * (unsigned int)RtlpProtectedPoliciesActiveCount];
    LODWORD(RtlpProtectedPoliciesActiveCount) = RtlpProtectedPoliciesActiveCount + 1;
    v24 = (char *)(unsigned int)RtlpProtectedPoliciesActiveCount;
    *(_QWORD *)v16 = 0LL;
    *((_QWORD *)v16 + 1) = 0LL;
    *((_QWORD *)v16 + 2) = 0LL;
    *(_OWORD *)v16 = *Key;
    LdrProtectMrdata(1, v24, v17, v18);
    v15 = RtlpProtectedPolicies;
    v6 = 1;
LABEL_31:
    v25 = *((_QWORD *)v16 + 2);
    *((_QWORD *)v16 + 2) = a2;
    if ( a3 )
      *a3 = v25;
    if ( v6 )
      qsort(
        v15,
        (unsigned int)RtlpProtectedPoliciesActiveCount,
        0x18uLL,
        (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
    v8 = 0;
    goto LABEL_36;
  }
  v20 = 16;
  if ( RtlpProtectedPoliciesTotalCount )
    v20 = 2 * RtlpProtectedPoliciesTotalCount;
  if ( v20 >= RtlpProtectedPoliciesTotalCount && v20 < 0xAAAAAAA )
  {
    v12 = 24LL * v20;
    if ( qword_1801572F0 )
    {
      if ( v12 >= 0xFF000 )
        goto LABEL_39;
      ProcessHeap = (void *)LdrpMrdataHeap;
    }
    else
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    }
    Heap = (char *)RtlAllocateHeap((__int64)ProcessHeap, 0, v12);
    if ( Heap )
    {
      LdrProtectMrdata(0, v11, v12, v13);
      v22 = RtlpProtectedPolicies;
      if ( RtlpProtectedPolicies )
      {
        memmove(Heap, RtlpProtectedPolicies, 24LL * (unsigned int)RtlpProtectedPoliciesActiveCount);
        if ( qword_1801572F0 )
          v23 = (void *)LdrpMrdataHeap;
        else
          v23 = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap((__int64)v23, 0, (unsigned __int64)v22);
      }
      RtlpProtectedPolicies = Heap;
      RtlpProtectedPoliciesTotalCount = v20;
      goto LABEL_30;
    }
  }
LABEL_39:
  v8 = -1073741801;
LABEL_36:
  if ( qword_1801572F0 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v11, v12, v13);
    v26 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v26 - 1;
    if ( v26 == 1 )
      RtlProtectHeap(LdrpMrdataHeap, 1);
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
  return (unsigned int)v8;
}
