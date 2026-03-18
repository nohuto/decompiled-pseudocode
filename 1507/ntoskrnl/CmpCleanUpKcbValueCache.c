/*
 * XREFs of CmpCleanUpKcbValueCache @ 0x1404CC8C0
 * Callers:
 *     CmEnumerateValueKey @ 0x1404277E0 (CmEnumerateValueKey.c)
 *     CmSetValueKey @ 0x140428B40 (CmSetValueKey.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x140429488 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmpRebuildKcbCache @ 0x1404484A8 (CmpRebuildKcbCache.c)
 *     CmQueryValueKey @ 0x1404C21A0 (CmQueryValueKey.c)
 *     CmpGetSymbolicLink @ 0x1404C5480 (CmpGetSymbolicLink.c)
 *     CmpDoOpen @ 0x1404C78D0 (CmpDoOpen.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1404CB304 (CmpCleanUpKcbCacheWithLock.c)
 *     CmDeleteValueKey @ 0x1404EFE30 (CmDeleteValueKey.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x1404F0898 (CmpCommitDeleteValueKeyUoW.c)
 *     CmpCommitSetValueKeyUoW @ 0x1404F19C4 (CmpCommitSetValueKeyUoW.c)
 *     CmRestoreKey @ 0x140660D14 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x140662520 (CmpRefreshHive.c)
 * Callees:
 *     ExIsResourceAcquiredExclusiveLite @ 0x1400FED50 (ExIsResourceAcquiredExclusiveLite.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404C87E0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1404CC960 (CmpDelayDerefKeyControlBlock.c)
 */

void __fastcall CmpCleanUpKcbValueCache(__int64 a1)
{
  __int64 v2; // rdi
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  ULONG_PTR v7; // rcx
  unsigned __int64 v8; // rdi
  __int64 i; // rsi
  __int64 v10; // rcx

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
        v7 = *(_QWORD *)(a1 + 104);
        if ( IsResourceAcquiredExclusiveLite )
        {
          LOBYTE(v4) = 1;
          CmpDereferenceKeyControlBlockWithLock(v7, v4, v5, v6);
        }
        else
        {
          CmpDelayDerefKeyControlBlock(v7);
        }
        *(_WORD *)(a1 + 4) &= ~8u;
      }
    }
    else
    {
      v8 = v2 & 0xFFFFFFFFFFFFFFFEuLL;
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 96); i = (unsigned int)(i + 1) )
      {
        v10 = *(_QWORD *)(v8 + 8 * i + 8);
        if ( (v10 & 1) != 0 && v10 != 0xFFFFFFFFLL )
          ExFreePoolWithTag((PVOID)(v10 & 0xFFFFFFFFFFFFFFFEuLL), 0);
      }
      ExFreePoolWithTag((PVOID)(*(_QWORD *)(a1 + 104) & 0xFFFFFFFFFFFFFFFEuLL), 0);
      *(_QWORD *)(a1 + 104) = 0xFFFFFFFFLL;
    }
  }
}
