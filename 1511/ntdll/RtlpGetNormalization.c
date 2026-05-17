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

__int64 __fastcall RtlpGetNormalization(unsigned int a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  int NlsSectionPtr; // ebx
  __int64 Heap; // rax
  unsigned __int64 v13; // rbx
  int Tables; // ebp
  unsigned __int64 *v15; // rax
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF
  __int64 v17; // [rsp+60h] [rbp+18h] BYREF

  if ( !a2 )
    return 3221225712LL;
  RtlAcquireSRWLockExclusive((unsigned __int64)NormalizationListLock, a2, a3, a4);
  v8 = NormalizationList__Lookup(a1);
  if ( !v8 )
  {
    LODWORD(v7) = v7 ^ 0x100;
    v9 = NormalizationList__Lookup(v7);
    if ( v9 )
    {
      v17 = *(_QWORD *)(v9 + 8);
      v16 = *(_QWORD *)(v9 + 16);
    }
    else
    {
      v10 = a1;
      LODWORD(v10) = a1 & 0xFFFFFEFF;
      NlsSectionPtr = ZwGetNlsSectionPtr(12LL, v10, 0LL, &v17, &v16);
      if ( NlsSectionPtr < 0 )
        goto LABEL_12;
    }
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 144LL);
    v13 = Heap;
    if ( !Heap )
    {
      NlsSectionPtr = -1073741801;
LABEL_12:
      RtlReleaseSRWLockExclusive(NormalizationListLock);
      return (unsigned int)NlsSectionPtr;
    }
    v8 = Heap + 24;
    Tables = Normalization__LoadTables(a1, v17, v16, Heap + 24);
    if ( Tables < 0 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v13);
      NlsSectionPtr = Tables;
      goto LABEL_12;
    }
    *(_DWORD *)(v13 + 16) = a1;
    v15 = (unsigned __int64 *)off_180142998[0];
    *(_QWORD *)v13 = &NormalizationListHead;
    *(_QWORD *)(v13 + 8) = v15;
    if ( (_UNKNOWN **)*v15 != &NormalizationListHead )
      __fastfail(3u);
    *v15 = v13;
    off_180142998[0] = (_UNKNOWN **)v13;
  }
  RtlReleaseSRWLockExclusive(NormalizationListLock);
  result = 0LL;
  *(_QWORD *)a2 = v8;
  return result;
}
