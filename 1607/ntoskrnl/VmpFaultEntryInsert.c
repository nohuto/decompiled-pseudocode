/*
 * XREFs of VmpFaultEntryInsert @ 0x140223CB4
 * Callers:
 *     VmAccessFault @ 0x140223B40 (VmAccessFault.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026AF0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x1400EAD30 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall VmpFaultEntryInsert(__int64 a1, _RTL_BALANCED_NODE *a2)
{
  unsigned __int8 CurrentIrql; // bp
  _RTL_BALANCED_NODE *v5; // rdx
  BOOLEAN v6; // al
  _RTL_BALANCED_NODE *v7; // rcx
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  v5 = *(_RTL_BALANCED_NODE **)(a1 + 48);
  v6 = 0;
  if ( v5 )
  {
    while ( 1 )
    {
      if ( a2[1].Children[0] >= v5[1].Children[0] )
      {
        v7 = v5->Children[1];
        if ( !v7 )
        {
          v6 = 1;
          break;
        }
      }
      else
      {
        v7 = v5->Children[0];
        if ( !v5->Children[0] )
          break;
      }
      v5 = v7;
    }
  }
  RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 48), v5, v6, a2);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
