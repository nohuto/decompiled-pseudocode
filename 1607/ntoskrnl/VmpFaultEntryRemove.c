/*
 * XREFs of VmpFaultEntryRemove @ 0x140223F20
 * Callers:
 *     VmAccessFault @ 0x140223D14 (VmAccessFault.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026F70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E9E0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x140031320 (RtlRbRemoveNode.c)
 */

__int64 __fastcall VmpFaultEntryRemove(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int8 CurrentIrql; // bp
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  RtlRbRemoveNode((unsigned __int64 *)(a1 + 48), a2);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
