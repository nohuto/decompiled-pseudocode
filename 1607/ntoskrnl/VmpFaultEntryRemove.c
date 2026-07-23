/*
 * XREFs of VmpFaultEntryRemove @ 0x140223D4C
 * Callers:
 *     VmAccessFault @ 0x140223B40 (VmAccessFault.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026AF0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x140030EA0 (RtlRbRemoveNode.c)
 */

__int64 __fastcall VmpFaultEntryRemove(__int64 a1, _RTL_BALANCED_NODE *a2)
{
  unsigned __int8 CurrentIrql; // bp
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 48), a2);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
