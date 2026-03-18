/*
 * XREFs of CmpCleanUpKcbValueCache @ 0x1404372D8
 * Callers:
 *     CmpRebuildKcbCacheFromNode @ 0x14000AEEC (CmpRebuildKcbCacheFromNode.c)
 *     CmpGetSymbolicLinkTarget @ 0x14000B4B0 (CmpGetSymbolicLinkTarget.c)
 *     CmDeleteValueKey @ 0x1403FAE34 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x1403FE088 (CmpCreateChild.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x140402E58 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmSetValueKey @ 0x1404037B0 (CmSetValueKey.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140436D30 (CmpCleanUpKcbCacheWithLock.c)
 *     CmEnumerateValueKey @ 0x140437F70 (CmEnumerateValueKey.c)
 *     CmQueryValueKey @ 0x14043F420 (CmQueryValueKey.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     CmpMarkKeyUnbacked @ 0x14049FE7C (CmpMarkKeyUnbacked.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x14053AF30 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmRestoreKey @ 0x14060C24C (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x14060D810 (CmpRefreshHive.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x14060E630 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 * Callees:
 *     ExIsResourceAcquiredExclusiveLite @ 0x1400928C0 (ExIsResourceAcquiredExclusiveLite.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpDelayDerefKeyControlBlock @ 0x14043735C (CmpDelayDerefKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140437B40 (CmpDereferenceKeyControlBlockWithLock.c)
 */

void __fastcall CmpCleanUpKcbValueCache(__int64 a1)
{
  ULONG_PTR v2; // rdi
  unsigned __int64 v3; // rdi
  __int64 i; // rsi
  __int64 v5; // rcx

  if ( (*(_BYTE *)(a1 + 178) & 0x40) == 0 )
  {
    v2 = *(_QWORD *)(a1 + 96);
    if ( (v2 & 1) == 0 || v2 == 0xFFFFFFFF )
    {
      if ( (*(_DWORD *)(a1 + 4) & 8) != 0 )
      {
        if ( ExIsResourceAcquiredExclusiveLite(&CmpRegistryLock) )
          CmpDereferenceKeyControlBlockWithLock(v2);
        else
          CmpDelayDerefKeyControlBlock(v2);
        *(_WORD *)(a1 + 4) &= ~8u;
      }
    }
    else
    {
      v3 = v2 & 0xFFFFFFFFFFFFFFFEuLL;
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 88); i = (unsigned int)(i + 1) )
      {
        v5 = *(_QWORD *)(v3 + 8 * i + 8);
        if ( (v5 & 1) != 0 && v5 != 0xFFFFFFFFLL )
          ExFreePoolWithTag((PVOID)(v5 & 0xFFFFFFFFFFFFFFFEuLL), 0);
      }
      ExFreePoolWithTag((PVOID)(*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFFEuLL), 0);
      *(_QWORD *)(a1 + 96) = 0xFFFFFFFFLL;
    }
  }
}
