/*
 * XREFs of PfpServiceMainThreadUnboost @ 0x14011A3FC
 * Callers:
 *     PfPowerActionNotify @ 0x1403A46FC (PfPowerActionNotify.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetActualBasePriorityThread @ 0x14007D1E0 (KeSetActualBasePriorityThread.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14007DFD0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall PfpServiceMainThreadUnboost(_DWORD *P)
{
  PVOID v2; // rbx
  KIRQL v3; // si
  __int64 v4; // r8

  v2 = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_1403057C8);
  if ( !P || dword_1403057D0 == P[41] )
  {
    v2 = Object;
    if ( Object )
    {
      Object = 0LL;
      KeSetActualBasePriorityThread((__int64)v2, (unsigned int)dword_1403057C0, v4);
    }
  }
  KeReleaseSpinLock(&qword_1403057C8, v3);
  if ( v2 )
    ObDereferenceObjectDeferDeleteWithTag(v2, 0x746C6644u);
  if ( P )
    ExFreePoolWithTag(P, 0);
}
