/*
 * XREFs of VmpFaultEntryInsert @ 0x140223E88
 * Callers:
 *     VmAccessFault @ 0x140223D14 (VmAccessFault.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026F70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E9E0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x1400ECEC0 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall VmpFaultEntryInsert(__int64 a1, unsigned __int64 a2)
{
  unsigned __int8 CurrentIrql; // bp
  _QWORD *v5; // rdx
  bool v6; // al
  _QWORD *v7; // rcx
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  v5 = *(_QWORD **)(a1 + 48);
  v6 = 0;
  if ( v5 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(a2 + 24) >= v5[3] )
      {
        v7 = (_QWORD *)v5[1];
        if ( !v7 )
        {
          v6 = 1;
          break;
        }
      }
      else
      {
        v7 = (_QWORD *)*v5;
        if ( !*v5 )
          break;
      }
      v5 = v7;
    }
  }
  RtlRbInsertNodeEx((unsigned __int64 *)(a1 + 48), (unsigned __int64)v5, v6, a2);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
