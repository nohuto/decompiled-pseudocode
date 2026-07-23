/*
 * XREFs of EtwpOpenConsumer @ 0x1404935C0
 * Callers:
 *     EtwpRealtimeConnect @ 0x14049302C (EtwpRealtimeConnect.c)
 * Callees:
 *     ObOpenObjectByPointer @ 0x14041F280 (ObOpenObjectByPointer.c)
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
