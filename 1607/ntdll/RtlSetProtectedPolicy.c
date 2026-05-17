/*
 * XREFs of RtlSetProtectedPolicy @ 0x180083130
 * Callers:
 *     <none>
 * Callees:
 *     LdrProtectMrdata @ 0x1800190A8 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlProtectHeap @ 0x18002D7A0 (RtlProtectHeap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     LdrEnsureMrdataHeapExists @ 0x180081D00 (LdrEnsureMrdataHeapExists.c)
 *     bsearch @ 0x180099410 (bsearch.c)
 *     qsort @ 0x18009A780 (qsort.c)
 *     memmove @ 0x1800AC980 (memmove.c)
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
  unsigned int v17; // ebx
  void *ProcessHeap; // rcx
  char *Heap; // rdi
  void *v20; // rsi
  __int64 v21; // rcx
  int v22; // ecx
  void *v24; // rcx

  v6 = 0;
  v8 = LdrEnsureMrdataHeapExists();
  if ( v8 < 0 )
    return (unsigned int)v8;
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpProtectedPoliciesSRWLock, v7, v9, v10);
  if ( qword_180163310 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v11, v12, v13);
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
    goto LABEL_22;
  if ( v15 && (_DWORD)RtlpProtectedPoliciesActiveCount + 1 != RtlpProtectedPoliciesTotalCount )
  {
    LdrProtectMrdata(0);
    Heap = (char *)RtlpProtectedPolicies;
LABEL_21:
    v16 = &Heap[24 * (unsigned int)RtlpProtectedPoliciesActiveCount];
    LODWORD(RtlpProtectedPoliciesActiveCount) = RtlpProtectedPoliciesActiveCount + 1;
    *(_QWORD *)v16 = 0LL;
    *((_QWORD *)v16 + 1) = 0LL;
    *((_QWORD *)v16 + 2) = 0LL;
    *(_OWORD *)v16 = *Key;
    LdrProtectMrdata(1);
    v15 = RtlpProtectedPolicies;
    v6 = 1;
LABEL_22:
    v21 = *((_QWORD *)v16 + 2);
    *((_QWORD *)v16 + 2) = a2;
    if ( a3 )
      *a3 = v21;
    if ( v6 )
      qsort(
        v15,
        (unsigned int)RtlpProtectedPoliciesActiveCount,
        0x18uLL,
        (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
    v8 = 0;
    goto LABEL_27;
  }
  v17 = 16;
  if ( RtlpProtectedPoliciesTotalCount )
    v17 = 2 * RtlpProtectedPoliciesTotalCount;
  if ( v17 >= RtlpProtectedPoliciesTotalCount && v17 < 0xAAAAAAA )
  {
    v12 = 24LL * v17;
    if ( qword_180163310 )
    {
      if ( v12 >= 0xFF000 )
        goto LABEL_43;
      ProcessHeap = (void *)LdrpMrdataHeap;
    }
    else
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    }
    Heap = (char *)RtlAllocateHeap((__int64)ProcessHeap, 0, v12);
    if ( Heap )
    {
      LdrProtectMrdata(0);
      v20 = RtlpProtectedPolicies;
      if ( RtlpProtectedPolicies )
      {
        memmove(Heap, RtlpProtectedPolicies, 24LL * (unsigned int)RtlpProtectedPoliciesActiveCount);
        if ( qword_180163310 )
          v24 = (void *)LdrpMrdataHeap;
        else
          v24 = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap((__int64)v24, 0, (unsigned __int64)v20);
      }
      RtlpProtectedPolicies = Heap;
      RtlpProtectedPoliciesTotalCount = v17;
      goto LABEL_21;
    }
  }
LABEL_43:
  v8 = -1073741801;
LABEL_27:
  if ( qword_180163310 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v11, v12, v13);
    v22 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v22 - 1;
    if ( v22 == 1 )
      RtlProtectHeap(LdrpMrdataHeap, 1);
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
  return (unsigned int)v8;
}
