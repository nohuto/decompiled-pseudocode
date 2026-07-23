/*
 * XREFs of VmpFaultEntryRemove @ 0x14020C460
 * Callers:
 *     VmAccessFault @ 0x14020C258 (VmAccessFault.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1400339F0 (RtlRbRemoveNode.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14003AA70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall VmpFaultEntryRemove(__int64 a1, _RTL_BALANCED_NODE *a2)
{
  unsigned __int8 CurrentIrql; // bp
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 56));
  RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 40), a2);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 56));
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
