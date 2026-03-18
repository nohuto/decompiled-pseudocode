/*
 * XREFs of EtwpOpenConsumer @ 0x14054D81C
 * Callers:
 *     EtwpRealtimeConnect @ 0x14054D23C (EtwpRealtimeConnect.c)
 * Callees:
 *     ObOpenObjectByPointer @ 0x140434390 (ObOpenObjectByPointer.c)
 */

NTSTATUS __fastcall EtwpOpenConsumer(PHANDLE Handle)
{
  return ObOpenObjectByPointer(
           KeGetCurrentThread()->ApcState.Process,
           0x200u,
           0LL,
           0x28u,
           (POBJECT_TYPE)PsProcessType,
           0,
           Handle);
}
