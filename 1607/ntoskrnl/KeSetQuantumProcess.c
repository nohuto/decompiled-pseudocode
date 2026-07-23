/*
 * XREFs of KeSetQuantumProcess @ 0x14007F140
 * Callers:
 *     KeSetPriorityAndQuantumProcess @ 0x14007EAE4 (KeSetPriorityAndQuantumProcess.c)
 *     PspApplyJobLimitsToProcess @ 0x1404690A0 (PspApplyJobLimitsToProcess.c)
 *     PsChangeQuantumTable @ 0x1405455D4 (PsChangeQuantumTable.c)
 * Callees:
 *     KiReleaseProcessLockExclusive @ 0x1400F0CDC (KiReleaseProcessLockExclusive.c)
 *     KiAcquireProcessLockExclusive @ 0x1400F0DA0 (KiAcquireProcessLockExclusive.c)
 */

void __fastcall KeSetQuantumProcess(__int64 a1, char a2)
{
  __int64 v4; // rdx
  _QWORD *i; // rax
  char v6; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_BYTE *)(a1 + 445) != a2 )
  {
    KiAcquireProcessLockExclusive(a1, &v6);
    *(_BYTE *)(a1 + 445) = a2;
    for ( i = *(_QWORD **)(a1 + 48); i != (_QWORD *)(a1 + 48); i = (_QWORD *)*i )
      *((_BYTE *)i - 109) = a2;
    LOBYTE(v4) = v6;
    KiReleaseProcessLockExclusive(a1, v4);
  }
}
