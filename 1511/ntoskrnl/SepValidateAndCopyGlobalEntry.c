/*
 * XREFs of SepValidateAndCopyGlobalEntry @ 0x1402010E8
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x140006054 (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     SepGetSingletonEntryFromIndexNumber @ 0x140008104 (SepGetSingletonEntryFromIndexNumber.c)
 *     ExReleaseSpinLockShared @ 0x14000A410 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x14009E350 (AuthzBasepDuplicateSecurityAttributes.c)
 *     SepGetProcUniqueLuidAndIndexFromAttributeInfo @ 0x140200F3C (SepGetProcUniqueLuidAndIndexFromAttributeInfo.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
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
