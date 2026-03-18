/*
 * XREFs of KeSetProcessSchedulingGroup @ 0x140094784
 * Callers:
 *     PspTerminateProcess @ 0x140450604 (PspTerminateProcess.c)
 *     PspSetProcessSchedulingGroup @ 0x14045075C (PspSetProcessSchedulingGroup.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14003AA70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiSetThreadSchedulingGroup @ 0x140094830 (KiSetThreadSchedulingGroup.c)
 */

__int64 __fastcall KeSetProcessSchedulingGroup(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // r12
  __int64 v5; // r15
  _QWORD *i; // rbx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  v5 = *(_QWORD *)(a1 + 608);
  if ( v5 != a2 )
  {
    for ( i = *(_QWORD **)(a1 + 48); i != (_QWORD *)(a1 + 48); i = (_QWORD *)*i )
    {
      if ( *(i - 82) != a2 )
        KiSetThreadSchedulingGroup(i - 95, a2);
    }
    *(_QWORD *)(a1 + 608) = a2;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  __writecr8(CurrentIrql);
  return v5;
}
