/*
 * XREFs of PsRemoveSiloObjectFromJob @ 0x1406C1254
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     PspReferenceJobSilo @ 0x140415668 (PspReferenceJobSilo.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     PsRemoveSiloObjectByPointer @ 0x1406C115C (PsRemoveSiloObjectByPointer.c)
 */

NTSTATUS __fastcall PsRemoveSiloObjectFromJob(void *a1, void *a2)
{
  NTSTATUS result; // eax
  void *v4; // rdi
  int v5; // ebx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  result = ObReferenceObjectByHandle(a1, 2u, (POBJECT_TYPE)PsJobType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v4 = PspReferenceJobSilo((__int64)Object, (__int64)KeGetCurrentThread());
    ObfDereferenceObject(Object);
    if ( !v4 )
      return -1073741811;
    v5 = PsRemoveSiloObjectByPointer((__int64)v4, a2);
    PspDereferenceSiloObject(v4);
    return v5;
  }
  return result;
}
