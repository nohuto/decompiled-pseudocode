/*
 * XREFs of RtlpGetNormalization @ 0x180058730
 * Callers:
 *     RtlIsNormalizedString @ 0x180002C90 (RtlIsNormalizedString.c)
 *     RtlNormalizeString @ 0x180058400 (RtlNormalizeString.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     NormalizationList__Lookup @ 0x180058860 (NormalizationList__Lookup.c)
 *     Normalization__LoadTables @ 0x180087548 (Normalization__LoadTables.c)
 *     ZwGetNlsSectionPtr @ 0x1800A81B0 (ZwGetNlsSectionPtr.c)
 */

__int64 __fastcall RtlpGetNormalization(unsigned int a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  int NlsSectionPtr; // ebx
  __int64 Heap; // rax
  unsigned __int64 v13; // rbx
  int Tables; // ebp
  unsigned __int64 *v15; // rax
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF
  __int64 v17; // [rsp+60h] [rbp+18h] BYREF

  if ( a2 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)NormalizationListLock, a2, a3, a4);
    v7 = NormalizationList__Lookup(a1);
    if ( v7 )
    {
LABEL_3:
      RtlReleaseSRWLockExclusive(NormalizationListLock);
      result = 0LL;
      *(_QWORD *)a2 = v7;
      return result;
    }
    LODWORD(v6) = v6 ^ 0x100;
    v9 = NormalizationList__Lookup(v6);
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
      {
LABEL_11:
        RtlReleaseSRWLockExclusive(NormalizationListLock);
        return (unsigned int)NlsSectionPtr;
      }
    }
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0x90uLL);
    v13 = Heap;
    if ( Heap )
    {
      v7 = Heap + 24;
      Tables = Normalization__LoadTables(a1, v17, v16, Heap + 24);
      if ( Tables >= 0 )
      {
        *(_DWORD *)(v13 + 16) = a1;
        v15 = (unsigned __int64 *)off_18014C638[0];
        if ( *(_UNKNOWN ***)off_18014C638[0] != &NormalizationListHead )
          __fastfail(3u);
        *(_QWORD *)v13 = &NormalizationListHead;
        *(_QWORD *)(v13 + 8) = v15;
        *v15 = v13;
        off_18014C638[0] = (_UNKNOWN *)v13;
        goto LABEL_3;
      }
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v13);
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
