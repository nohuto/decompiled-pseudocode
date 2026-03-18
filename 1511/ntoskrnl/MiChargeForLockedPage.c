/*
 * XREFs of MiChargeForLockedPage @ 0x1400AA160
 * Callers:
 *     MiFinishHardFault @ 0x1400663D0 (MiFinishHardFault.c)
 *     MiAddLockedPageCharge @ 0x1400AA108 (MiAddLockedPageCharge.c)
 *     MiObtainProtoReference @ 0x1400AB334 (MiObtainProtoReference.c)
 * Callees:
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiChargeResident @ 0x1400AA260 (MiChargeResident.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MI_IS_PFN_COMMIT_NOT_CHARGED @ 0x1400AA2E4 (MI_IS_PFN_COMMIT_NOT_CHARGED.c)
 */

__int64 __fastcall MiChargeForLockedPage(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r9
  bool v4; // si
  unsigned __int64 v5; // rax
  unsigned int v6; // r10d
  int *v7; // rdi
  unsigned int v8; // ebp
  __int64 result; // rax

  if ( (a2 & 1) != 0 )
    v2 = 0xFFFFFFFFLL;
  else
    v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 40);
  v4 = (v3 & 0x200000000000000LL) != 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0
    || (unsigned int)MI_IS_PFN_COMMIT_NOT_CHARGED(a1, a2) != 0;
  v5 = MiPartitionIdToPointer((HIDWORD(v3) >> 8) & 0x3FF);
  v7 = (int *)v5;
  if ( !v4 || (result = MiChargeCommit(v5, 1uLL, v6), (_DWORD)result) )
  {
    v8 = MiChargeResident(v7, 1LL, v2);
    if ( v8 )
    {
      if ( v7 == MiSystemPartition )
        _InterlockedExchangeAdd64(&qword_1402FF600, 1uLL);
    }
    else if ( v4 )
    {
      MiReturnCommit((__int64)v7, 1uLL);
    }
    return v8;
  }
  return result;
}
