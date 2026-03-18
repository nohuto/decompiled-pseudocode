/*
 * XREFs of PsGetSiloObjectFromJob @ 0x14063F86C
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PspGetJobSilo @ 0x1400776E8 (PspGetJobSilo.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     PsGetSiloObjectByPointer @ 0x14063F7B8 (PsGetSiloObjectByPointer.c)
 */

NTSTATUS __fastcall PsGetSiloObjectFromJob(void *a1, __int64 *a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  __int64 JobSilo; // rax
  int SiloObjectByPointer; // ebx
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  result = ObReferenceObjectByHandle(a1, 4u, (POBJECT_TYPE)PsJobType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    JobSilo = PspGetJobSilo((__int64)Object);
    if ( JobSilo )
      SiloObjectByPointer = PsGetSiloObjectByPointer(JobSilo, a2, a3);
    else
      SiloObjectByPointer = -1073740535;
    ObfDereferenceObject(Object);
    return SiloObjectByPointer;
  }
  return result;
}
