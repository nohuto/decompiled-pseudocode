/*
 * XREFs of RtlpGetNormalization @ 0x180058720
 * Callers:
 *     RtlIsNormalizedString @ 0x180002C90 (RtlIsNormalizedString.c)
 *     RtlNormalizeString @ 0x1800583F0 (RtlNormalizeString.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     NormalizationList__Lookup @ 0x180058850 (NormalizationList__Lookup.c)
 *     Normalization__LoadTables @ 0x180087538 (Normalization__LoadTables.c)
 *     ZwGetNlsSectionPtr @ 0x1800A81B0 (ZwGetNlsSectionPtr.c)
 */

__int64 __fastcall RtlpGetNormalization(unsigned int a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 result; // rax
  __int64 v7; // rax
  NTSTATUS NlsSectionPtr; // ebx
  char *Heap; // rax
  char *v10; // rbx
  int Tables; // ebp
  _QWORD *v12; // rax
  __int64 SectionSize; // [rsp+58h] [rbp+10h] BYREF
  PVOID SectionPointer; // [rsp+60h] [rbp+18h] BYREF

  if ( a2 )
  {
    RtlAcquireSRWLockExclusive(&NormalizationListLock);
    v5 = NormalizationList__Lookup(a1);
    if ( v5 )
    {
LABEL_3:
      RtlReleaseSRWLockExclusive(&NormalizationListLock);
      result = 0LL;
      *a2 = v5;
      return result;
    }
    LODWORD(v4) = v4 ^ 0x100;
    v7 = NormalizationList__Lookup(v4);
    if ( v7 )
    {
      SectionPointer = *(PVOID *)(v7 + 8);
      SectionSize = *(_QWORD *)(v7 + 16);
    }
    else
    {
      NlsSectionPtr = ZwGetNlsSectionPtr(0xCu, a1 & 0xFFFFFEFF, 0LL, &SectionPointer, (PULONG)&SectionSize);
      if ( NlsSectionPtr < 0 )
      {
LABEL_11:
        RtlReleaseSRWLockExclusive(&NormalizationListLock);
        return (unsigned int)NlsSectionPtr;
      }
    }
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x90uLL);
    v10 = Heap;
    if ( Heap )
    {
      v5 = (__int64)(Heap + 24);
      Tables = Normalization__LoadTables(a1, SectionPointer, SectionSize, Heap + 24);
      if ( Tables >= 0 )
      {
        *((_DWORD *)v10 + 4) = a1;
        v12 = off_18014C638[0];
        if ( *(_UNKNOWN ***)off_18014C638[0] != &NormalizationListHead )
          __fastfail(3u);
        *(_QWORD *)v10 = &NormalizationListHead;
        *((_QWORD *)v10 + 1) = v12;
        *v12 = v10;
        off_18014C638[0] = v10;
        goto LABEL_3;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
      NlsSectionPtr = Tables;
    }
    else
    {
      NlsSectionPtr = -1073741801;
    }
    goto LABEL_11;
  }
  return 3221225712LL;
}
