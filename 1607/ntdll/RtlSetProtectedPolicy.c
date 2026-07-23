/*
 * XREFs of RtlSetProtectedPolicy @ 0x180083120
 * Callers:
 *     <none>
 * Callees:
 *     LdrProtectMrdata @ 0x180019098 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlProtectHeap @ 0x18002D790 (RtlProtectHeap.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     LdrEnsureMrdataHeapExists @ 0x180081CF0 (LdrEnsureMrdataHeapExists.c)
 *     bsearch @ 0x180099410 (bsearch.c)
 *     qsort @ 0x18009A770 (qsort.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

NTSTATUS __cdecl RtlSetProtectedPolicy(PGUID PolicyGuid, ULONG_PTR PolicyValue, PULONG_PTR OldPolicyValue)
{
  char v6; // di
  int v7; // ebx
  int v8; // ebx
  PVOID v9; // rax
  GUID *v10; // rbx
  unsigned int v11; // ebx
  SIZE_T v12; // r8
  PVOID ProcessHeap; // rcx
  char *Heap; // rdi
  PVOID v15; // rsi
  unsigned __int64 v16; // rcx
  int v17; // ecx
  PVOID v19; // rcx

  v6 = 0;
  v7 = LdrEnsureMrdataHeapExists();
  if ( v7 < 0 )
    return v7;
  RtlAcquireSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
  if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v8 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      RtlProtectHeap(LdrpMrdataHeap, 0);
    if ( v8 == -1 )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v8 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  v9 = RtlpProtectedPolicies;
  if ( RtlpProtectedPolicies )
  {
    v10 = (GUID *)bsearch(
                    PolicyGuid,
                    RtlpProtectedPolicies,
                    (unsigned int)RtlpProtectedPoliciesActiveCount,
                    0x18uLL,
                    (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
    v9 = RtlpProtectedPolicies;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
    goto LABEL_22;
  if ( v9 && (_DWORD)RtlpProtectedPoliciesActiveCount + 1 != RtlpProtectedPoliciesTotalCount )
  {
    LdrProtectMrdata(0);
    Heap = (char *)RtlpProtectedPolicies;
LABEL_21:
    v10 = (GUID *)&Heap[24 * (unsigned int)RtlpProtectedPoliciesActiveCount];
    LODWORD(RtlpProtectedPoliciesActiveCount) = RtlpProtectedPoliciesActiveCount + 1;
    *(_QWORD *)&v10->Data1 = 0LL;
    *(_QWORD *)v10->Data4 = 0LL;
    *(_QWORD *)&v10[1].Data1 = 0LL;
    *v10 = *PolicyGuid;
    LdrProtectMrdata(1);
    v9 = RtlpProtectedPolicies;
    v6 = 1;
LABEL_22:
    v16 = *(_QWORD *)&v10[1].Data1;
    *(_QWORD *)&v10[1].Data1 = PolicyValue;
    if ( OldPolicyValue )
      *OldPolicyValue = v16;
    if ( v6 )
      qsort(
        v9,
        (unsigned int)RtlpProtectedPoliciesActiveCount,
        0x18uLL,
        (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
    v7 = 0;
    goto LABEL_27;
  }
  v11 = 16;
  if ( RtlpProtectedPoliciesTotalCount )
    v11 = 2 * RtlpProtectedPoliciesTotalCount;
  if ( v11 >= RtlpProtectedPoliciesTotalCount && v11 < 0xAAAAAAA )
  {
    v12 = 24LL * v11;
    if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
    {
      if ( v12 >= 0xFF000 )
        goto LABEL_43;
      ProcessHeap = LdrpMrdataHeap;
    }
    else
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    }
    Heap = (char *)RtlAllocateHeap(ProcessHeap, 0, v12);
    if ( Heap )
    {
      LdrProtectMrdata(0);
      v15 = RtlpProtectedPolicies;
      if ( RtlpProtectedPolicies )
      {
        memmove(Heap, RtlpProtectedPolicies, 24LL * (unsigned int)RtlpProtectedPoliciesActiveCount);
        if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
          v19 = LdrpMrdataHeap;
        else
          v19 = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap(v19, 0, v15);
      }
      RtlpProtectedPolicies = Heap;
      RtlpProtectedPoliciesTotalCount = v11;
      goto LABEL_21;
    }
  }
LABEL_43:
  v7 = -1073741801;
LABEL_27:
  if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v17 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v17 - 1;
    if ( v17 == 1 )
      RtlProtectHeap(LdrpMrdataHeap, 1u);
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
  return v7;
}
