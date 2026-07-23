/*
 * XREFs of NtClearEvent @ 0x1404A72E0
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtClearEvent(HANDLE EventHandle)
{
  NTSTATUS result; // eax
  NTSTATUS v2; // ebx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  result = ObReferenceObjectByHandle(
             EventHandle,
             2u,
             (POBJECT_TYPE)ExEventObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  v2 = result;
  if ( result >= 0 )
  {
    KeResetEvent((PRKEVENT)Object);
    ObfDereferenceObject(Object);
    return v2;
  }
  return result;
}
