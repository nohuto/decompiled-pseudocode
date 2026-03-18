/*
 * XREFs of EtwpOpenConsumer @ 0x1404B66EC
 * Callers:
 *     EtwpRealtimeConnect @ 0x1404B615C (EtwpRealtimeConnect.c)
 * Callees:
 *     ObOpenObjectByPointer @ 0x140476C40 (ObOpenObjectByPointer.c)
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
