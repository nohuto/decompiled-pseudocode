/*
 * XREFs of PsRemoveSiloObjectFromJob @ 0x14063FB60
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PspGetJobSilo @ 0x1400776E8 (PspGetJobSilo.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     PsRemoveSiloObjectByPointer @ 0x14063FA94 (PsRemoveSiloObjectByPointer.c)
 */

NTSTATUS __fastcall PsRemoveSiloObjectFromJob(void *a1, void *a2)
{
  NTSTATUS result; // eax
  __int64 JobSilo; // rax
  int v5; // ebx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  result = ObReferenceObjectByHandle(a1, 2u, (POBJECT_TYPE)PsJobType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    JobSilo = PspGetJobSilo((__int64)Object);
    if ( JobSilo )
      v5 = PsRemoveSiloObjectByPointer(JobSilo, a2);
    else
      v5 = -1073740535;
    ObfDereferenceObject(Object);
    return v5;
  }
  return result;
}
