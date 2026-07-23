/*
 * XREFs of MiChargeForLockedPage @ 0x140101100
 * Callers:
 *     MiObtainProtoReference @ 0x1400231D8 (MiObtainProtoReference.c)
 *     MiFinishHardFault @ 0x14004D220 (MiFinishHardFault.c)
 *     MiAddLockedPageCharge @ 0x14004ED08 (MiAddLockedPageCharge.c)
 * Callees:
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiIsPfnCommitNotCharged @ 0x14004ECC0 (MiIsPfnCommitNotCharged.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiChargeResident @ 0x1401011D0 (MiChargeResident.c)
 */

__int64 __fastcall MiChargeForLockedPage(__int64 a1, char a2)
{
  __int64 v2; // rsi
  __int64 v3; // r10
  bool v4; // bl
  int *v5; // rax
  char v6; // r11
  __int64 v7; // rdi
  __int64 result; // rax
  unsigned int v9; // esi

  if ( (a2 & 1) != 0 )
    v2 = 0xFFFFFFFFLL;
  else
    v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 40);
  v4 = (v3 & 0x200000000000000LL) != 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0
    || (unsigned int)MiIsPfnCommitNotCharged(a1) != 0;
  v5 = MiPartitionIdToPointer((HIDWORD(v3) >> 8) & 0x3FF);
  v7 = (__int64)v5;
  if ( !v4 || (result = MiChargeCommit((__int64)v5, 1uLL, v6), (_DWORD)result) )
  {
    v9 = MiChargeResident(v7, 1LL, v2);
    if ( !v9 && v4 )
      MiReturnCommit(v7, 1uLL);
    return v9;
  }
  return result;
}
