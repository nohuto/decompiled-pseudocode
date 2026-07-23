/*
 * XREFs of ObCreateObject @ 0x1404706EC
 * Callers:
 *     SepCreateTokenEx @ 0x14007FC48 (SepCreateTokenEx.c)
 *     NtAllocateReserveObject @ 0x1403E28BC (NtAllocateReserveObject.c)
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 *     ObpCreateDirectoryObject @ 0x14046FBB4 (ObpCreateDirectoryObject.c)
 *     NtCreateWorkerFactory @ 0x14046FD64 (NtCreateWorkerFactory.c)
 *     NtCreateIoCompletion @ 0x1404700B0 (NtCreateIoCompletion.c)
 *     NtCreateTimer2 @ 0x1404701BC (NtCreateTimer2.c)
 *     NtCreateTimer @ 0x14047056C (NtCreateTimer.c)
 *     IoCreateDevice @ 0x140472390 (IoCreateDevice.c)
 *     NtCreateSymbolicLinkObject @ 0x1404729FC (NtCreateSymbolicLinkObject.c)
 *     WmipCreateGuidObject @ 0x140472E18 (WmipCreateGuidObject.c)
 *     NtCreatePrivateNamespace @ 0x1404765A4 (NtCreatePrivateNamespace.c)
 *     SepFilterToken @ 0x140479EC4 (SepFilterToken.c)
 *     EtwpRealtimeConnect @ 0x14049302C (EtwpRealtimeConnect.c)
 *     NtCreateRegistryTransaction @ 0x1404CBD88 (NtCreateRegistryTransaction.c)
 *     ExCreateCallback @ 0x1404CCE20 (ExCreateCallback.c)
 *     EtwpCreateUmReplyObject @ 0x1404D182C (EtwpCreateUmReplyObject.c)
 *     PopCreatePowerRequestObject @ 0x1405035C0 (PopCreatePowerRequestObject.c)
 *     IopLoadDriver @ 0x140516794 (IopLoadDriver.c)
 *     NtCreateJobObject @ 0x14051A4B8 (NtCreateJobObject.c)
 *     MiSessionObjectCreate @ 0x140535FE4 (MiSessionObjectCreate.c)
 *     IoCreateDriver @ 0x1405518C4 (IoCreateDriver.c)
 *     MiPartitionObjectCreate @ 0x1405533A8 (MiPartitionObjectCreate.c)
 *     NtCreateKeyedEvent @ 0x140576958 (NtCreateKeyedEvent.c)
 *     IoCreateController @ 0x14057FAA8 (IoCreateController.c)
 *     CmpDoAccessCheckOnKCB @ 0x140600B7C (CmpDoAccessCheckOnKCB.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140613808 (VrpHandleIoctlInitializeJobForVreg.c)
 *     NtCreateDebugObject @ 0x1406196B0 (NtCreateDebugObject.c)
 *     TtmiCreateTerminal @ 0x140677844 (TtmiCreateTerminal.c)
 *     TtmiCreateEventQueue @ 0x140679F80 (TtmiCreateEventQueue.c)
 *     ExpProfileCreate @ 0x1406B7D44 (ExpProfileCreate.c)
 *     IopInitializeBuiltinDriver @ 0x14079BB9C (IopInitializeBuiltinDriver.c)
 *     MiSectionInitialization @ 0x1407A1524 (MiSectionInitialization.c)
 *     CmpCreateRegistryRoot @ 0x1407AE4D4 (CmpCreateRegistryRoot.c)
 * Callees:
 *     ObCreateObjectEx @ 0x14041C830 (ObCreateObjectEx.c)
 */

__int64 __fastcall ObCreateObject(char a1, _DWORD *a2, __int64 a3, char a4, int a5, int a6, int a7, int a8, _QWORD *a9)
{
  __int64 v10; // [rsp+20h] [rbp-38h]

  return ObCreateObjectEx(a1, a2, a3, a4, v10, a6, a7, a8, a9, 0LL);
}
