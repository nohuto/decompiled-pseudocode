/*
 * XREFs of SepValidateAndCopyGlobalEntry @ 0x14021AA48
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x14009E524 (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     AuthzBasepDuplicateSecurityAttributes @ 0x14000E910 (AuthzBasepDuplicateSecurityAttributes.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x14007CF64 (SepGetSingletonEntryFromIndexNumber.c)
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 *     SepGetProcUniqueLuidAndIndexFromAttributeInfo @ 0x14021A7F8 (SepGetProcUniqueLuidAndIndexFromAttributeInfo.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepValidateAndCopyGlobalEntry(__int64 a1, _QWORD *a2)
{
  int ProcUniqueLuidAndIndexFromAttributeInfo; // edi
  _DWORD *PoolWithTag; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  unsigned int v7; // ecx
  __int64 SingletonEntryFromIndexNumber; // rsi
  KIRQL v9; // al
  KIRQL v10; // bp
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v14; // [rsp+48h] [rbp+10h] BYREF
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF

  *a2 = 0LL;
  ProcUniqueLuidAndIndexFromAttributeInfo = SepGetProcUniqueLuidAndIndexFromAttributeInfo(a1, &v14, &v15);
  if ( ProcUniqueLuidAndIndexFromAttributeInfo >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x74416553u);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = 0;
      PoolWithTag[6] = 0;
      v6 = PoolWithTag + 2;
      v7 = v14;
      v6[1] = v6;
      *v6 = v6;
      v5[5] = v5 + 4;
      v5[4] = v5 + 4;
      SingletonEntryFromIndexNumber = SepGetSingletonEntryFromIndexNumber(v7);
      v9 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)SingletonEntryFromIndexNumber);
      v10 = v9;
      if ( *(_QWORD *)(SingletonEntryFromIndexNumber + 8) == v15 )
      {
        v11 = *(_QWORD *)(SingletonEntryFromIndexNumber + 16);
        if ( v11 )
        {
          v12 = AuthzBasepDuplicateSecurityAttributes(v11, (__int64)v5, 0);
          *a2 = v5;
          ProcUniqueLuidAndIndexFromAttributeInfo = v12;
          v5 = 0LL;
        }
        ExReleaseSpinLockShared((PEX_SPIN_LOCK)SingletonEntryFromIndexNumber, v10);
      }
      else
      {
        ExReleaseSpinLockShared((PEX_SPIN_LOCK)SingletonEntryFromIndexNumber, v9);
        ProcUniqueLuidAndIndexFromAttributeInfo = -1073741275;
      }
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
