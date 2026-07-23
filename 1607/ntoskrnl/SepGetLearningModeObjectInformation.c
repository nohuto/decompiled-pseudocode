/*
 * XREFs of SepGetLearningModeObjectInformation @ 0x14021ACB0
 * Callers:
 *     SeLogAccessFailure @ 0x140061150 (SeLogAccessFailure.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KeIsAttachedProcess @ 0x1400E5D20 (KeIsAttachedProcess.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SepGetCurrentLogLevel @ 0x14021AC8C (SepGetCurrentLogLevel.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

_QWORD *__fastcall SepGetLearningModeObjectInformation(_BYTE *a1)
{
  UNICODE_STRING *v1; // r14
  PVOID v2; // r12
  int CurrentLogLevel; // r8d
  _BYTE *v4; // rcx
  __int64 v5; // rdx
  _QWORD *result; // rax
  _QWORD *Teb; // rcx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  _QWORD *PoolWithTag; // rax
  _QWORD *v13; // rsi
  UNICODE_STRING *v14; // rdi
  PVOID v15; // r15
  void *Src[2]; // [rsp+30h] [rbp-58h]
  void *v17[2]; // [rsp+40h] [rbp-48h]
  unsigned __int64 v19; // [rsp+98h] [rbp+10h]

  v1 = 0LL;
  v2 = 0LL;
  CurrentLogLevel = SepGetCurrentLogLevel();
  *v4 = 0;
  result = *(_QWORD **)(v5 + 1872);
  if ( !result || *((_DWORD *)result + 2) != CurrentLogLevel )
  {
    if ( KeGetCurrentThread()->PreviousMode == 1 )
    {
      if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeIsAttachedProcess() )
        Teb = 0LL;
      else
        Teb = KeGetCurrentThread()->Teb;
      if ( !Teb )
        return 0LL;
      v8 = Teb[5];
      if ( !v8 )
        return 0LL;
      if ( (v8 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v8 + 24 > 0x7FFFFFFF0000LL || v8 + 24 < v8 )
        MEMORY[0x7FFFFFFF0000] = 0;
      if ( *(_DWORD *)v8 != -1395763957 )
        return 0LL;
      v19 = *(_QWORD *)(v8 + 8);
      v9 = *(_QWORD *)(v8 + 16);
      if ( (v19 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v19 + 16 > 0x7FFFFFFF0000LL || v19 + 16 < v19 )
        MEMORY[0x7FFFFFFF0000] = 0;
      if ( (v9 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v9 + 16 > 0x7FFFFFFF0000LL || v9 + 16 < v9 )
        MEMORY[0x7FFFFFFF0000] = 0;
      *(_OWORD *)Src = *(_OWORD *)v19;
      *(_OWORD *)v17 = *(_OWORD *)v9;
      if ( WORD1(*(_OWORD *)v19) )
      {
        if ( ((__int64)Src[1] & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v10 = (unsigned __int64)Src[1] + WORD1(Src[0]);
        if ( v10 > 0x7FFFFFFF0000LL || (void *)v10 < Src[1] )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      if ( WORD1(v17[0]) )
      {
        if ( ((__int64)v17[1] & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v11 = (unsigned __int64)v17[1] + WORD1(v17[0]);
        if ( v11 > 0x7FFFFFFF0000LL || (void *)v11 < v17[1] )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x494F6553u);
      v13 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x38uLL);
        v14 = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x544F6553u);
        if ( v14 )
        {
          *(_QWORD *)&v14->Length = 0LL;
          v14->Buffer = 0LL;
          v2 = ExAllocatePoolWithTag(PagedPool, WORD1(Src[0]), 0x544F6553u);
          if ( v2 )
          {
            v1 = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x4E4F6553u);
            if ( v1 )
            {
              *(_QWORD *)&v1->Length = 0LL;
              v1->Buffer = 0LL;
              v15 = ExAllocatePoolWithTag(PagedPool, WORD1(v17[0]), 0x4E4F6553u);
              if ( v15 )
              {
                memmove(v2, Src[1], WORD1(Src[0]));
                RtlInitUnicodeString(v14, (PCWSTR)v2);
                memmove(v15, v17[1], WORD1(v17[0]));
                RtlInitUnicodeString(v1, (PCWSTR)v15);
                v13[2] = v14;
                v13[3] = v1;
                *a1 = 1;
                return v13;
              }
            }
          }
        }
        if ( v14 )
          ExFreePoolWithTag(v14, 0);
        if ( v2 )
          ExFreePoolWithTag(v2, 0);
        if ( v1 )
          ExFreePoolWithTag(v1, 0);
        ExFreePoolWithTag(v13, 0);
      }
    }
    return 0LL;
  }
  return result;
}
