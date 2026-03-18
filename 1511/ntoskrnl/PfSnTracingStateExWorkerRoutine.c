/*
 * XREFs of PfSnTracingStateExWorkerRoutine @ 0x1404C6650
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnTracingStateExWorkerRoutine(void *a1)
{
  PVOID v2; // rcx
  PVOID *v3; // rax

  ExAcquireFastMutex(&FastMutex);
  if ( dword_140305924 == 2 )
  {
    KeReleaseGuardedMutex(&FastMutex);
  }
  else
  {
    dword_140305924 = 1;
    while ( qword_1403058D8 != &qword_1403058D8 )
    {
      v2 = qword_1403058E0;
      v3 = (PVOID *)*((_QWORD *)qword_1403058E0 + 1);
      if ( *(PVOID **)qword_1403058E0 != &qword_1403058D8 || *v3 != qword_1403058E0 )
        __fastfail(3u);
      qword_1403058E0 = (PVOID)*((_QWORD *)qword_1403058E0 + 1);
      *v3 = &qword_1403058D8;
      ExFreePoolWithTag(v2, 0);
      --dword_140305920;
    }
    KeReleaseGuardedMutex(&FastMutex);
    if ( qword_140305928 )
      KeSetEvent(qword_140305928, 0, 0);
  }
  ExFreePoolWithTag(a1, 0);
}
