/*
 * XREFs of PsInsertSiloObjectFromJob @ 0x14063F9E4
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PspGetJobSilo @ 0x1400776E8 (PspGetJobSilo.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     PsInsertSiloObjectByPointer @ 0x14063F8F0 (PsInsertSiloObjectByPointer.c)
 */

NTSTATUS __fastcall PsInsertSiloObjectFromJob(void *a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax
  __int64 JobSilo; // rax
  int inserted; // ebx
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  result = ObReferenceObjectByHandle(a1, 2u, (POBJECT_TYPE)PsJobType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    JobSilo = PspGetJobSilo((__int64)Object);
    if ( JobSilo )
      inserted = PsInsertSiloObjectByPointer(JobSilo, a2, a3);
    else
      inserted = -1073741811;
    ObfDereferenceObject(Object);
    return inserted;
  }
  return result;
}
