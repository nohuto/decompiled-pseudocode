/*
 * XREFs of KeSetDisableQuantumProcess @ 0x140021B70
 * Callers:
 *     PspApplyJobLimitsToProcess @ 0x1403E9118 (PspApplyJobLimitsToProcess.c)
 * Callees:
 *     KiAcquireProcessLockExclusive @ 0x14002AB2C (KiAcquireProcessLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall KeSetDisableQuantumProcess(__int64 a1, int a2)
{
  signed __int8 v4; // cf
  unsigned int v5; // edi
  volatile signed __int32 *i; // rax
  unsigned __int8 v8; // [rsp+38h] [rbp+10h] BYREF

  KiAcquireProcessLockExclusive(a1, &v8);
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
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  __writecr8(v8);
  return v5;
}
