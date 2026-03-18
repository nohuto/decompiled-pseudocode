/*
 * XREFs of KeSetQuantumProcess @ 0x14000ABF8
 * Callers:
 *     KeSetPriorityAndQuantumProcess @ 0x14000A20C (KeSetPriorityAndQuantumProcess.c)
 *     PspApplyJobLimitsToProcess @ 0x14041B6A4 (PspApplyJobLimitsToProcess.c)
 *     PsChangeQuantumTable @ 0x140581874 (PsChangeQuantumTable.c)
 * Callees:
 *     KiAcquireProcessLockExclusive @ 0x14000FB0C (KiAcquireProcessLockExclusive.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

void __fastcall KeSetQuantumProcess(__int64 a1, char a2)
{
  _QWORD *i; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int8 v6; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_BYTE *)(a1 + 445) != a2 )
  {
    KiAcquireProcessLockExclusive(a1, &v6);
    *(_BYTE *)(a1 + 445) = a2;
    for ( i = *(_QWORD **)(a1 + 48); i != (_QWORD *)(a1 + 48); i = (_QWORD *)*i )
      *((_BYTE *)i - 109) = a2;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 64, retaddr);
    else
      *(_DWORD *)(a1 + 64) = 0;
    __writecr8(v6);
  }
}
