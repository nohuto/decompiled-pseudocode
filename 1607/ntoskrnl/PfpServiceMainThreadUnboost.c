/*
 * XREFs of PfpServiceMainThreadUnboost @ 0x1401145B0
 * Callers:
 *     PfPowerActionNotify @ 0x1403CFF90 (PfPowerActionNotify.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14005DB70 (ObDereferenceObjectDeferDelete.c)
 *     KeSetActualBasePriorityThread @ 0x1400D2840 (KeSetActualBasePriorityThread.c)
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall PfpServiceMainThreadUnboost(_DWORD *P)
{
  PVOID v2; // rbx
  KIRQL v3; // si

  v2 = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_1403285C8);
  if ( !P || dword_1403285D0 == P[41] )
  {
    v2 = qword_1403285B8;
    if ( qword_1403285B8 )
    {
      qword_1403285B8 = 0LL;
      KeSetActualBasePriorityThread((__int64)v2, dword_1403285C0);
    }
  }
  KeReleaseSpinLock(&qword_1403285C8, v3);
  if ( v2 )
    ObDereferenceObjectDeferDelete(v2);
  if ( P )
    ExFreePoolWithTag(P, 0);
}
