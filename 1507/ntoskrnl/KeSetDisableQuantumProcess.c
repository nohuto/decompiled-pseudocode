/*
 * XREFs of KeSetDisableQuantumProcess @ 0x140009814
 * Callers:
 *     PspApplyJobLimitsToProcess @ 0x14041B6A4 (PspApplyJobLimitsToProcess.c)
 * Callees:
 *     KiAcquireProcessLockExclusive @ 0x14000FB0C (KiAcquireProcessLockExclusive.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall KeSetDisableQuantumProcess(__int64 a1, int a2)
{
  signed __int8 v4; // cf
  unsigned int v5; // edi
  volatile signed __int32 *i; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int8 v9; // [rsp+38h] [rbp+10h] BYREF

  KiAcquireProcessLockExclusive(a1, &v9);
  if ( a2 )
    v4 = _interlockedbittestandset((volatile signed __int32 *)(a1 + 440), 2u);
  else
    v4 = _interlockedbittestandreset((volatile signed __int32 *)(a1 + 440), 2u);
  v5 = v4;
  for ( i = *(volatile signed __int32 **)(a1 + 48);
        i != (volatile signed __int32 *)(a1 + 48);
        i = *(volatile signed __int32 **)i )
  {
    if ( a2 )
      _interlockedbittestandset(i - 160, 7u);
    else
      _interlockedbittestandreset(i - 160, 7u);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 64, retaddr);
  else
    *(_DWORD *)(a1 + 64) = 0;
  __writecr8(v9);
  return v5;
}
