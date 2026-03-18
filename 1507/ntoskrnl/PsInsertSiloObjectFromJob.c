/*
 * XREFs of PsInsertSiloObjectFromJob @ 0x1406C0F4C
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     PspReferenceJobSilo @ 0x140415668 (PspReferenceJobSilo.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     PsInsertSiloObjectByPointer @ 0x1406C0E40 (PsInsertSiloObjectByPointer.c)
 */

NTSTATUS __fastcall PsInsertSiloObjectFromJob(void *a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax
  void *v6; // rdi
  int inserted; // ebx
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  result = ObReferenceObjectByHandle(a1, 2u, (POBJECT_TYPE)PsJobType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v6 = PspReferenceJobSilo((__int64)Object, (__int64)KeGetCurrentThread());
    ObfDereferenceObject(Object);
    if ( !v6 )
      return -1073741811;
    inserted = PsInsertSiloObjectByPointer((__int64)v6, a2, a3);
    PspDereferenceSiloObject(v6);
    return inserted;
  }
  return result;
}
