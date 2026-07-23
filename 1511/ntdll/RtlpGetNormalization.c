/*
 * XREFs of RtlpGetNormalization @ 0x18006B6AC
 * Callers:
 *     RtlIsNormalizedString @ 0x1800026D0 (RtlIsNormalizedString.c)
 *     RtlNormalizeString @ 0x18006AB00 (RtlNormalizeString.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     NormalizationList__Lookup @ 0x18006B804 (NormalizationList__Lookup.c)
 *     Normalization__LoadTables @ 0x18006B834 (Normalization__LoadTables.c)
 *     ZwGetNlsSectionPtr @ 0x1800A6E10 (ZwGetNlsSectionPtr.c)
 */

__int64 __fastcall RtlpGetNormalization(unsigned int a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rax
  NTSTATUS NlsSectionPtr; // ebx
  _QWORD *Heap; // rax
  _QWORD *v10; // rbx
  int Tables; // ebp
  _UNKNOWN ***v12; // rax
  __int64 SectionSize; // [rsp+58h] [rbp+10h] BYREF
  PVOID SectionPointer; // [rsp+60h] [rbp+18h] BYREF

  if ( !a2 )
    return 3221225712LL;
  RtlAcquireSRWLockExclusive(&NormalizationListLock);
  v6 = NormalizationList__Lookup(a1);
  if ( !v6 )
  {
    LODWORD(v5) = v5 ^ 0x100;
    v7 = NormalizationList__Lookup(v5);
    if ( v7 )
    {
      SectionPointer = *(PVOID *)(v7 + 8);
      SectionSize = *(_QWORD *)(v7 + 16);
    }
    else
    {
      NlsSectionPtr = ZwGetNlsSectionPtr(0xCu, a1 & 0xFFFFFEFF, 0LL, &SectionPointer, (PULONG)&SectionSize);
      if ( NlsSectionPtr < 0 )
        goto LABEL_12;
    }
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x90uLL);
    v10 = Heap;
    if ( !Heap )
    {
      NlsSectionPtr = -1073741801;
LABEL_12:
      RtlReleaseSRWLockExclusive(&NormalizationListLock);
      return (unsigned int)NlsSectionPtr;
    }
    v6 = (__int64)(Heap + 3);
    Tables = Normalization__LoadTables(a1, SectionPointer, SectionSize, Heap + 3);
    if ( Tables < 0 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
      NlsSectionPtr = Tables;
      goto LABEL_12;
    }
    *((_DWORD *)v10 + 4) = a1;
    v12 = (_UNKNOWN ***)off_180142998[0];
    *v10 = &NormalizationListHead;
    v10[1] = v12;
    if ( *v12 != &NormalizationListHead )
      __fastfail(3u);
    *v12 = (_UNKNOWN **)v10;
    off_180142998[0] = (_UNKNOWN **)v10;
  }
  RtlReleaseSRWLockExclusive(&NormalizationListLock);
  result = 0LL;
  *a2 = v6;
  return result;
}
