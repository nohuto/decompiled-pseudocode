/*
 * XREFs of ObCreateObject @ 0x140473208
 * Callers:
 *     SepCreateTokenEx @ 0x14002EC40 (SepCreateTokenEx.c)
 *     NtCreateSymbolicLinkObject @ 0x140411194 (NtCreateSymbolicLinkObject.c)
 *     SepFilterToken @ 0x140411C6C (SepFilterToken.c)
 *     IoCreateDevice @ 0x1404132C4 (IoCreateDevice.c)
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 *     NtCreateWorkerFactory @ 0x14046FE54 (NtCreateWorkerFactory.c)
 *     NtCreateIoCompletion @ 0x1404701AC (NtCreateIoCompletion.c)
 *     NtCreateTimer2 @ 0x140470F5C (NtCreateTimer2.c)
 *     AlpcpAcceptConnectPort @ 0x140471474 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateClientPort @ 0x140472CA0 (AlpcpCreateClientPort.c)
 *     WmipCreateGuidObject @ 0x1404AA098 (WmipCreateGuidObject.c)
 *     PopCreatePowerRequestObject @ 0x1404E5E2C (PopCreatePowerRequestObject.c)
 *     NtCreateJobObject @ 0x1404EB86C (NtCreateJobObject.c)
 *     ObpCreateDirectoryObject @ 0x140540120 (ObpCreateDirectoryObject.c)
 *     AlpcpCreateConnectionPort @ 0x14054355C (AlpcpCreateConnectionPort.c)
 *     NtCreatePrivateNamespace @ 0x14054422C (NtCreatePrivateNamespace.c)
 *     EtwpRealtimeConnect @ 0x14054D23C (EtwpRealtimeConnect.c)
 *     ExCreateCallback @ 0x1405544CC (ExCreateCallback.c)
 *     EtwpCreateUmReplyObject @ 0x14055B78C (EtwpCreateUmReplyObject.c)
 *     IopLoadDriver @ 0x140572EA0 (IopLoadDriver.c)
 *     MiSessionObjectCreate @ 0x14057979C (MiSessionObjectCreate.c)
 *     IoCreateDriver @ 0x1405900A4 (IoCreateDriver.c)
 *     MiPartitionObjectCreate @ 0x140596A48 (MiPartitionObjectCreate.c)
 *     NtCreateKeyedEvent @ 0x1405B8A1C (NtCreateKeyedEvent.c)
 *     IoCreateController @ 0x1405C6C28 (IoCreateController.c)
 *     CmpDoAccessCheckOnKCB @ 0x1406583CC (CmpDoAccessCheckOnKCB.c)
 *     NtCreateDebugObject @ 0x140668404 (NtCreateDebugObject.c)
 *     NtAllocateReserveObject @ 0x1406BF8AC (NtAllocateReserveObject.c)
 *     PspCreateSilo @ 0x1406C18E8 (PspCreateSilo.c)
 *     ExpProfileCreate @ 0x1406F9A1C (ExpProfileCreate.c)
 *     IopInitializeBuiltinDriver @ 0x1407B91D4 (IopInitializeBuiltinDriver.c)
 *     MiSectionInitialization @ 0x1407C41D0 (MiSectionInitialization.c)
 *     CmpCreateRegistryRoot @ 0x1407D7838 (CmpCreateRegistryRoot.c)
 * Callees:
 *     ObCreateObjectEx @ 0x14048A8A0 (ObCreateObjectEx.c)
 */

__int64 __fastcall ObCreateObject(int a1, int a2, int a3, int a4)
{
  return ObCreateObjectEx(a1, a2, a3, a4);
}
