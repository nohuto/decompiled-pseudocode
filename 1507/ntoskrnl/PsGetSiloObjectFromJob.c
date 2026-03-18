/*
 * XREFs of PsGetSiloObjectFromJob @ 0x1406C0C20
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     PspReferenceJobSilo @ 0x140415668 (PspReferenceJobSilo.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     PsGetSiloObjectByPointer @ 0x1406C0B54 (PsGetSiloObjectByPointer.c)
 */

NTSTATUS __fastcall PsGetSiloObjectFromJob(void *a1, __int64 a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  void *v6; // rdi
  int SiloObjectByPointer; // ebx
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  result = ObReferenceObjectByHandle(a1, 4u, (POBJECT_TYPE)PsJobType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v6 = PspReferenceJobSilo((__int64)Object, (__int64)KeGetCurrentThread());
    ObfDereferenceObject(Object);
    if ( !v6 )
      return -1073741811;
    SiloObjectByPointer = PsGetSiloObjectByPointer((__int64)v6, a2, a3);
    PspDereferenceSiloObject(v6);
    return SiloObjectByPointer;
  }
  return result;
}
