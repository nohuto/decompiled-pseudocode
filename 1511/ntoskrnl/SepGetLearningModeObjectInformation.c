/*
 * XREFs of SepGetLearningModeObjectInformation @ 0x140201350
 * Callers:
 *     SeLogAccessFailure @ 0x1400E6334 (SeLogAccessFailure.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     KeIsAttachedProcess @ 0x1400701C0 (KeIsAttachedProcess.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     SepGetCurrentLogLevel @ 0x14020132C (SepGetCurrentLogLevel.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

unsigned __int64 __fastcall SepGetLearningModeObjectInformation(_BYTE *a1)
{
  UNICODE_STRING *v1; // r14
  PVOID v2; // r12
  int CurrentLogLevel; // r8d
  _BYTE *v4; // rcx
  __int64 v5; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rdx
  char *v8; // rcx
  char *v9; // r8
  char *v10; // r8
  _QWORD *PoolWithTag; // rax
  _QWORD *v12; // rsi
  UNICODE_STRING *v13; // rdi
  PVOID v14; // r15
  void *Src[2]; // [rsp+30h] [rbp-58h]
  void *v16[2]; // [rsp+40h] [rbp-48h]
  unsigned __int64 v18; // [rsp+98h] [rbp+10h]

  v1 = 0LL;
  v2 = 0LL;
  CurrentLogLevel = SepGetCurrentLogLevel();
  *v4 = 0;
  result = *(_QWORD *)(v5 + 1864);
  if ( !result || *(_DWORD *)(result + 8) != CurrentLogLevel )
  {
    if ( KeGetCurrentThread()->PreviousMode != 1 )
      return 0LL;
    if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeIsAttachedProcess() )
      result = 0LL;
    else
      result = (unsigned __int64)KeGetCurrentThread()->Teb;
    if ( result )
    {
      result = *(_QWORD *)(result + 40);
      if ( result )
      {
        if ( (result & 7) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( result + 24 > MmUserProbeAddress || result + 24 < result )
          *(_BYTE *)MmUserProbeAddress = 0;
        if ( *(_DWORD *)result != -1395763957 )
          return 0LL;
        v18 = *(_QWORD *)(result + 8);
        v7 = *(_QWORD *)(result + 16);
        if ( (v18 & 7) != 0 )
          ExRaiseDatatypeMisalignment();
        v8 = (char *)MmUserProbeAddress;
        if ( v18 + 16 > MmUserProbeAddress || v18 + 16 < v18 )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
          v8 = (char *)MmUserProbeAddress;
        }
        if ( (v7 & 7) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v7 + 16 > (unsigned __int64)v8 || v7 + 16 < v7 )
        {
          *v8 = 0;
          v8 = (char *)MmUserProbeAddress;
        }
        *(_OWORD *)Src = *(_OWORD *)v18;
        *(_OWORD *)v16 = *(_OWORD *)v7;
        if ( WORD1(*(_OWORD *)v18) )
        {
          if ( ((__int64)Src[1] & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v9 = (char *)Src[1] + WORD1(Src[0]);
          if ( v9 > v8 || v9 < Src[1] )
          {
            *v8 = 0;
            v8 = (char *)MmUserProbeAddress;
          }
        }
        if ( WORD1(v16[0]) )
        {
          if ( ((__int64)v16[1] & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v10 = (char *)v16[1] + WORD1(v16[0]);
          if ( v10 > v8 || v10 < v16[1] )
            *v8 = 0;
        }
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x494F6553u);
        v12 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, 0x38uLL);
          v13 = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x544F6553u);
          if ( v13 )
          {
            *(_QWORD *)&v13->Length = 0LL;
            v13->Buffer = 0LL;
            v2 = ExAllocatePoolWithTag(PagedPool, WORD1(Src[0]), 0x544F6553u);
            if ( v2 )
            {
              v1 = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x4E4F6553u);
              if ( v1 )
              {
                *(_QWORD *)&v1->Length = 0LL;
                v1->Buffer = 0LL;
                v14 = ExAllocatePoolWithTag(PagedPool, WORD1(v16[0]), 0x4E4F6553u);
                if ( v14 )
                {
                  memmove(v2, Src[1], WORD1(Src[0]));
                  RtlInitUnicodeString(v13, (PCWSTR)v2);
                  memmove(v14, v16[1], WORD1(v16[0]));
                  RtlInitUnicodeString(v1, (PCWSTR)v14);
                  v12[2] = v13;
                  v12[3] = v1;
                  *a1 = 1;
                  return (unsigned __int64)v12;
                }
              }
            }
          }
          if ( v13 )
            ExFreePoolWithTag(v13, 0);
          if ( v2 )
            ExFreePoolWithTag(v2, 0);
          if ( v1 )
            ExFreePoolWithTag(v1, 0);
          ExFreePoolWithTag(v12, 0);
        }
        return 0LL;
      }
    }
  }
  return result;
}
