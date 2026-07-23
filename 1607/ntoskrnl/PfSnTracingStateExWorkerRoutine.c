/*
 * XREFs of PfSnTracingStateExWorkerRoutine @ 0x1404D350C
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnTracingStateExWorkerRoutine(void *a1)
{
  PVOID v2; // rcx
  PVOID *v3; // rax

  ExAcquireFastMutex(&FastMutex);
  if ( dword_140328764 == 2 )
  {
    KeReleaseGuardedMutex(&FastMutex);
  }
  else
  {
    dword_140328764 = 1;
    while ( qword_140328718 != &qword_140328718 )
    {
      v2 = qword_140328720;
      v3 = (PVOID *)*((_QWORD *)qword_140328720 + 1);
      if ( *(PVOID **)qword_140328720 != &qword_140328718 || *v3 != qword_140328720 )
        __fastfail(3u);
      qword_140328720 = (PVOID)*((_QWORD *)qword_140328720 + 1);
      *v3 = &qword_140328718;
      ExFreePoolWithTag(v2, 0);
      --dword_140328760;
    }
    KeReleaseGuardedMutex(&FastMutex);
    if ( qword_140328768 )
      KeSetEvent(qword_140328768, 0, 0);
  }
  ExFreePoolWithTag(a1, 0);
}
