/*
 * XREFs of VmpFaultEntryInsert @ 0x14020C3C8
 * Callers:
 *     VmAccessFault @ 0x14020C258 (VmAccessFault.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x140034FA0 (RtlRbInsertNodeEx.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14003AA70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
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
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 56));
  v5 = *(_QWORD **)(a1 + 40);
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
  RtlRbInsertNodeEx((unsigned __int64 *)(a1 + 40), (unsigned __int64)v5, v6, a2);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 56));
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
