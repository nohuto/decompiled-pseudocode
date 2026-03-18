/*
 * XREFs of PsRemoveSiloObject @ 0x1406C10D8
 * Callers:
 *     <none>
 * Callees:
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     PsGetCurrentSilo @ 0x140511880 (PsGetCurrentSilo.c)
 *     PsRemoveSiloObjectByPointer @ 0x1406C115C (PsRemoveSiloObjectByPointer.c)
 */

NTSTATUS __fastcall PsRemoveSiloObject(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *CurrentSilo; // rdi
  NTSTATUS result; // eax
  int v7; // ebx
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 == (void *)-1LL )
  {
    CurrentSilo = PsGetCurrentSilo(-1LL, a2, a3, a4);
    if ( !CurrentSilo )
      return -1073741816;
  }
  else
  {
    result = ObReferenceObjectByHandle(a1, 2u, PsSiloType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
    CurrentSilo = Object;
    if ( result < 0 )
      return result;
  }
  v7 = PsRemoveSiloObjectByPointer(CurrentSilo, a2);
  PspDereferenceSiloObject(CurrentSilo);
  return v7;
}
