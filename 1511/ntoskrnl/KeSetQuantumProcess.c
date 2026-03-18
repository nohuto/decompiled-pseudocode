/*
 * XREFs of KeSetQuantumProcess @ 0x1400960D4
 * Callers:
 *     KeSetPriorityAndQuantumProcess @ 0x140094B64 (KeSetPriorityAndQuantumProcess.c)
 *     PspApplyJobLimitsToProcess @ 0x1403E9118 (PspApplyJobLimitsToProcess.c)
 *     PsChangeQuantumTable @ 0x14050B020 (PsChangeQuantumTable.c)
 * Callees:
 *     KiAcquireProcessLockExclusive @ 0x14002AB2C (KiAcquireProcessLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall KeSetQuantumProcess(__int64 a1, char a2)
{
  _QWORD *i; // rax
  unsigned __int8 v5; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_BYTE *)(a1 + 445) != a2 )
  {
    KiAcquireProcessLockExclusive(a1, &v5);
    *(_BYTE *)(a1 + 445) = a2;
    for ( i = *(_QWORD **)(a1 + 48); i != (_QWORD *)(a1 + 48); i = (_QWORD *)*i )
      *((_BYTE *)i - 109) = a2;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    __writecr8(v5);
  }
}
