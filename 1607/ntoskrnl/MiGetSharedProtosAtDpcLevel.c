/*
 * XREFs of MiGetSharedProtosAtDpcLevel @ 0x1401F50B0
 * Callers:
 *     MiImageProtoChargedCommit @ 0x14012D97C (MiImageProtoChargedCommit.c)
 *     MiGetSharedProtos @ 0x1401F5088 (MiGetSharedProtos.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14001DD60 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400EA3E0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLocateSessionProtosInSubsection @ 0x1401F52E8 (MiLocateSessionProtosInSubsection.c)
 */

__int64 __fastcall MiGetSharedProtosAtDpcLevel(__int64 a1, unsigned int a2, __int64 a3)
{
  volatile LONG *v3; // rdi
  __int64 SessionProtosInSubsection; // rbx

  v3 = (volatile LONG *)(a1 + 72);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  SessionProtosInSubsection = MiLocateSessionProtosInSubsection(a3, a2);
  ExReleaseSpinLockSharedFromDpcLevel(v3);
  return SessionProtosInSubsection;
}
