/*
 * XREFs of PfSnTracingStateExWorkerRoutine @ 0x1404F1418
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnTracingStateExWorkerRoutine(void *a1)
{
  PVOID v2; // rcx
  PVOID *v3; // rax

  ExAcquireFastMutex(&FastMutex);
  if ( dword_140328724 == 2 )
  {
    KeReleaseGuardedMutex(&FastMutex);
  }
  else
  {
    dword_140328724 = 1;
    while ( qword_1403286D8 != &qword_1403286D8 )
    {
      v2 = qword_1403286E0;
      v3 = (PVOID *)*((_QWORD *)qword_1403286E0 + 1);
      if ( *(PVOID **)qword_1403286E0 != &qword_1403286D8 || *v3 != qword_1403286E0 )
        __fastfail(3u);
      qword_1403286E0 = (PVOID)*((_QWORD *)qword_1403286E0 + 1);
      *v3 = &qword_1403286D8;
      ExFreePoolWithTag(v2, 0);
      --dword_140328720;
    }
    KeReleaseGuardedMutex(&FastMutex);
    if ( qword_140328728 )
      KeSetEvent(qword_140328728, 0, 0);
  }
  ExFreePoolWithTag(a1, 0);
}
