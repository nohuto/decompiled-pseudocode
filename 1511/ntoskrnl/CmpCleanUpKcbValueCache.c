/*
 * XREFs of CmpCleanUpKcbValueCache @ 0x1403F9C74
 * Callers:
 *     CmDeleteValueKey @ 0x1403D4B80 (CmDeleteValueKey.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x1403D5C98 (CmpCommitDeleteValueKeyUoW.c)
 *     CmpCommitSetValueKeyUoW @ 0x1403D7548 (CmpCommitSetValueKeyUoW.c)
 *     CmpRebuildKcbCache @ 0x1403DE8AC (CmpRebuildKcbCache.c)
 *     CmSetValueKey @ 0x1403F36C0 (CmSetValueKey.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1403F3E7C (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1403F99D0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpGetSymbolicLink @ 0x1403FBEB0 (CmpGetSymbolicLink.c)
 *     CmpDoOpen @ 0x1403FEFA0 (CmpDoOpen.c)
 *     CmQueryValueKey @ 0x140405E20 (CmQueryValueKey.c)
 *     CmEnumerateValueKey @ 0x140423940 (CmEnumerateValueKey.c)
 *     CmRestoreKey @ 0x1405E95A4 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x1405EAB18 (CmpRefreshHive.c)
 * Callees:
 *     ExIsResourceAcquiredExclusiveLite @ 0x1400C6A60 (ExIsResourceAcquiredExclusiveLite.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1403F9D0C (CmpDelayDerefKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1403FB7B0 (CmpDereferenceKeyControlBlockWithLock.c)
 */

void __fastcall CmpCleanUpKcbValueCache(__int64 a1)
{
  __int64 v2; // rdi
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  ULONG_PTR v4; // rcx
  unsigned __int64 v5; // rdi
  __int64 i; // rsi
  __int64 v7; // rcx

  if ( (*(_BYTE *)(a1 + 186) & 0x40) == 0 )
  {
    v2 = *(_QWORD *)(a1 + 104);
    if ( (v2 & 1) == 0 || v2 == 0xFFFFFFFFLL )
    {
      if ( (*(_DWORD *)(a1 + 4) & 8) != 0 )
      {
        if ( *(_DWORD *)v2 == 1 && (*(_DWORD *)(v2 + 4) & 0x20000) == 0 )
          *(_WORD *)(v2 + 4) |= 0x20u;
        IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(&CmpRegistryLock);
        v4 = *(_QWORD *)(a1 + 104);
        if ( IsResourceAcquiredExclusiveLite )
          CmpDereferenceKeyControlBlockWithLock(v4);
        else
          CmpDelayDerefKeyControlBlock(v4);
        *(_WORD *)(a1 + 4) &= ~8u;
      }
    }
    else
    {
      v5 = v2 & 0xFFFFFFFFFFFFFFFEuLL;
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 96); i = (unsigned int)(i + 1) )
      {
        v7 = *(_QWORD *)(v5 + 8 * i + 8);
        if ( (v7 & 1) != 0 && v7 != 0xFFFFFFFFLL )
          ExFreePoolWithTag((PVOID)(v7 & 0xFFFFFFFFFFFFFFFEuLL), 0);
      }
      ExFreePoolWithTag((PVOID)(*(_QWORD *)(a1 + 104) & 0xFFFFFFFFFFFFFFFEuLL), 0);
      *(_QWORD *)(a1 + 104) = 0xFFFFFFFFLL;
    }
  }
}
