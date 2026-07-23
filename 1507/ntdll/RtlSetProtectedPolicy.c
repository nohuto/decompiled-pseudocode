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

NTSTATUS __cdecl RtlSetProtectedPolicy(PGUID PolicyGuid, ULONG_PTR PolicyValue, PULONG_PTR OldPolicyValue)
{
  char v6; // di
  int v7; // ebx
  int v8; // ebx
  PVOID v9; // rax
  GUID *v10; // rbx
  char *Heap; // rdi
  unsigned int v12; // ebx
  SIZE_T v13; // r8
  PVOID ProcessHeap; // rcx
  PVOID v15; // rsi
  PVOID v16; // rcx
  unsigned __int64 v17; // rcx
  int v18; // ecx

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
    goto LABEL_31;
  if ( v9 && (_DWORD)RtlpProtectedPoliciesActiveCount + 1 != RtlpProtectedPoliciesTotalCount )
  {
    LdrProtectMrdata(0);
    Heap = (char *)RtlpProtectedPolicies;
LABEL_30:
    v10 = (GUID *)&Heap[24 * (unsigned int)RtlpProtectedPoliciesActiveCount];
    LODWORD(RtlpProtectedPoliciesActiveCount) = RtlpProtectedPoliciesActiveCount + 1;
    *(_QWORD *)&v10->Data1 = 0LL;
    *(_QWORD *)v10->Data4 = 0LL;
    *(_QWORD *)&v10[1].Data1 = 0LL;
    *v10 = *PolicyGuid;
    LdrProtectMrdata(1);
    v9 = RtlpProtectedPolicies;
    v6 = 1;
LABEL_31:
    v17 = *(_QWORD *)&v10[1].Data1;
    *(_QWORD *)&v10[1].Data1 = PolicyValue;
    if ( OldPolicyValue )
      *OldPolicyValue = v17;
    if ( v6 )
      qsort(
        v9,
        (unsigned int)RtlpProtectedPoliciesActiveCount,
        0x18uLL,
        (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
    v7 = 0;
    goto LABEL_36;
  }
  v12 = 16;
  if ( RtlpProtectedPoliciesTotalCount )
    v12 = 2 * RtlpProtectedPoliciesTotalCount;
  if ( v12 >= RtlpProtectedPoliciesTotalCount && v12 < 0xAAAAAAA )
  {
    v13 = 24LL * v12;
    if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
    {
      if ( v13 >= 0xFF000 )
        goto LABEL_39;
      ProcessHeap = LdrpMrdataHeap;
    }
    else
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    }
    Heap = (char *)RtlAllocateHeap(ProcessHeap, 0, v13);
    if ( Heap )
    {
      LdrProtectMrdata(0);
      v15 = RtlpProtectedPolicies;
      if ( RtlpProtectedPolicies )
      {
        memmove(Heap, RtlpProtectedPolicies, 24LL * (unsigned int)RtlpProtectedPoliciesActiveCount);
        if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
          v16 = LdrpMrdataHeap;
        else
          v16 = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap(v16, 0, v15);
      }
      RtlpProtectedPolicies = Heap;
      RtlpProtectedPoliciesTotalCount = v12;
      goto LABEL_30;
    }
  }
LABEL_39:
  v7 = -1073741801;
LABEL_36:
  if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v18 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v18 - 1;
    if ( v18 == 1 )
      RtlProtectHeap(LdrpMrdataHeap, 1u);
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
  return v7;
}
