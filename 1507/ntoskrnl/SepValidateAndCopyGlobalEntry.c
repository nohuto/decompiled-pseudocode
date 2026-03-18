/*
 * XREFs of SepValidateAndCopyGlobalEntry @ 0x14025004C
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x14011C690 (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1400156C0 (AuthzBasepDuplicateSecurityAttributes.c)
 *     SepGetProcUniqueLuidAndIndexFromAttributeInfo @ 0x140015BD0 (SepGetProcUniqueLuidAndIndexFromAttributeInfo.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x14002D234 (SepGetSingletonEntryFromIndexNumber.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepValidateAndCopyGlobalEntry(__int64 a1, _QWORD *a2)
{
  int ProcUniqueLuidAndIndexFromAttributeInfo; // esi
  _DWORD *PoolWithTag; // rax
  _QWORD *v5; // rdi
  _QWORD *v6; // rax
  unsigned int v7; // ecx
  _QWORD *SingletonEntryFromIndexNumber; // rbx
  unsigned __int8 CurrentIrql; // bp
  signed __int32 v10; // ett
  __int64 v11; // rcx
  int v12; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v15; // [rsp+48h] [rbp+10h] BYREF
  __int64 v16; // [rsp+50h] [rbp+18h] BYREF

  *a2 = 0LL;
  ProcUniqueLuidAndIndexFromAttributeInfo = SepGetProcUniqueLuidAndIndexFromAttributeInfo(a1, &v15, &v16);
  if ( ProcUniqueLuidAndIndexFromAttributeInfo >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x74416553u);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = 0;
      PoolWithTag[6] = 0;
      v6 = PoolWithTag + 2;
      v7 = v15;
      v6[1] = v6;
      *v6 = v6;
      v5[5] = v5 + 4;
      v5[4] = v5 + 4;
      SingletonEntryFromIndexNumber = (_QWORD *)SepGetSingletonEntryFromIndexNumber(v7);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(SingletonEntryFromIndexNumber);
      }
      else
      {
        _m_prefetchw(SingletonEntryFromIndexNumber);
        v10 = *(_DWORD *)SingletonEntryFromIndexNumber & 0x7FFFFFFF;
        if ( v10 != _InterlockedCompareExchange((volatile signed __int32 *)SingletonEntryFromIndexNumber, v10 + 1, v10) )
          ExpWaitForSpinLockSharedAndAcquire((volatile signed __int32 *)SingletonEntryFromIndexNumber);
      }
      if ( SingletonEntryFromIndexNumber[1] == v16 )
      {
        v11 = SingletonEntryFromIndexNumber[2];
        if ( v11 )
        {
          v12 = AuthzBasepDuplicateSecurityAttributes(v11, (__int64)v5, 0);
          *a2 = v5;
          ProcUniqueLuidAndIndexFromAttributeInfo = v12;
          v5 = 0LL;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(SingletonEntryFromIndexNumber, retaddr);
        }
        else
        {
          _InterlockedAnd((volatile signed __int32 *)SingletonEntryFromIndexNumber, 0xBFFFFFFF);
          _InterlockedDecrement((volatile signed __int32 *)SingletonEntryFromIndexNumber);
        }
      }
      else
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(SingletonEntryFromIndexNumber, retaddr);
        }
        else
        {
          _InterlockedAnd((volatile signed __int32 *)SingletonEntryFromIndexNumber, 0xBFFFFFFF);
          _InterlockedDecrement((volatile signed __int32 *)SingletonEntryFromIndexNumber);
        }
        ProcUniqueLuidAndIndexFromAttributeInfo = -1073741275;
      }
      __writecr8(CurrentIrql);
      if ( v5 )
        ExFreePoolWithTag(v5, 0x74416553u);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)ProcUniqueLuidAndIndexFromAttributeInfo;
}
