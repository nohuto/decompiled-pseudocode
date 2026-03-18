/*
 * XREFs of CmpDelayFreeCmRm @ 0x14049B2B0
 * Callers:
 *     CmpRunDownCmRM @ 0x14049B138 (CmpRunDownCmRM.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     KeSetTimer @ 0x140091530 (KeSetTimer.c)
 */

void __fastcall CmpDelayFreeCmRm(PVOID *a1)
{
  PVOID **v2; // rax
  bool v3; // zf

  ExAcquireFastMutex(&CmpDelayFreeRMLock);
  v2 = (PVOID **)qword_1402FD0A8;
  *a1 = &CmpDelayFreeRMListHead;
  a1[1] = v2;
  if ( *v2 != &CmpDelayFreeRMListHead )
    __fastfail(3u);
  v3 = CmpDelayFreeRMWorkItemActive == 0;
  *v2 = a1;
  qword_1402FD0A8 = (__int64)a1;
  if ( v3 )
  {
    CmpDelayFreeRMWorkItemActive = 1;
    KeSetTimer(&CmpDelayFreeRMTimer, (LARGE_INTEGER)-300000000LL, &CmpDelayFreeRMDpc);
  }
  KeReleaseGuardedMutex(&CmpDelayFreeRMLock);
}
