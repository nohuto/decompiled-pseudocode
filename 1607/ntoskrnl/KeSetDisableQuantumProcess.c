/*
 * XREFs of KeSetDisableQuantumProcess @ 0x140076ED4
 * Callers:
 *     PspApplyJobLimitsToProcess @ 0x1404690A0 (PspApplyJobLimitsToProcess.c)
 * Callees:
 *     KiReleaseProcessLockExclusive @ 0x1400F0CDC (KiReleaseProcessLockExclusive.c)
 *     KiAcquireProcessLockExclusive @ 0x1400F0DA0 (KiAcquireProcessLockExclusive.c)
 */

__int64 __fastcall KeSetDisableQuantumProcess(__int64 a1, int a2)
{
  __int64 v4; // rdx
  signed __int8 v5; // cf
  unsigned int v6; // edi
  volatile signed __int32 *i; // rax
  char v9; // [rsp+38h] [rbp+10h] BYREF

  KiAcquireProcessLockExclusive(a1, &v9);
  if ( a2 )
    v5 = _interlockedbittestandset((volatile signed __int32 *)(a1 + 440), 2u);
  else
    v5 = _interlockedbittestandreset((volatile signed __int32 *)(a1 + 440), 2u);
  v6 = v5;
  for ( i = *(volatile signed __int32 **)(a1 + 48);
        i != (volatile signed __int32 *)(a1 + 48);
        i = *(volatile signed __int32 **)i )
  {
    if ( a2 )
      _interlockedbittestandset(i - 160, 7u);
    else
      _interlockedbittestandreset(i - 160, 7u);
  }
  LOBYTE(v4) = v9;
  KiReleaseProcessLockExclusive(a1, v4);
  return v6;
}
