/*
 * XREFs of ObCreateObject @ 0x14047181C
 * Callers:
 *     SepCreateTokenEx @ 0x14007FBC8 (SepCreateTokenEx.c)
 *     NtAllocateReserveObject @ 0x1403E28BC (NtAllocateReserveObject.c)
 *     PspAllocateProcess @ 0x14046F030 (PspAllocateProcess.c)
 *     ObpCreateDirectoryObject @ 0x140470CE4 (ObpCreateDirectoryObject.c)
 *     NtCreateWorkerFactory @ 0x140470E94 (NtCreateWorkerFactory.c)
 *     NtCreateIoCompletion @ 0x1404711E0 (NtCreateIoCompletion.c)
 *     NtCreateTimer2 @ 0x1404712EC (NtCreateTimer2.c)
 *     NtCreateTimer @ 0x14047169C (NtCreateTimer.c)
 *     IoCreateDevice @ 0x1404734C0 (IoCreateDevice.c)
 *     NtCreateSymbolicLinkObject @ 0x140473B2C (NtCreateSymbolicLinkObject.c)
 *     WmipCreateGuidObject @ 0x140473F48 (WmipCreateGuidObject.c)
 *     NtCreatePrivateNamespace @ 0x1404776D4 (NtCreatePrivateNamespace.c)
 *     SepFilterToken @ 0x14047AFF4 (SepFilterToken.c)
 *     EtwpRealtimeConnect @ 0x14049259C (EtwpRealtimeConnect.c)
 *     IopLoadDriver @ 0x14049E388 (IopLoadDriver.c)
 *     NtCreateJobObject @ 0x1404A20AC (NtCreateJobObject.c)
 *     NtCreateRegistryTransaction @ 0x1404E9C94 (NtCreateRegistryTransaction.c)
 *     ExCreateCallback @ 0x1404EADFC (ExCreateCallback.c)
 *     EtwpCreateUmReplyObject @ 0x1404EF810 (EtwpCreateUmReplyObject.c)
 *     PopCreatePowerRequestObject @ 0x140520558 (PopCreatePowerRequestObject.c)
 *     MiSessionObjectCreate @ 0x140535AA4 (MiSessionObjectCreate.c)
 *     IoCreateDriver @ 0x140551384 (IoCreateDriver.c)
 *     MiPartitionObjectCreate @ 0x140552E68 (MiPartitionObjectCreate.c)
 *     NtCreateKeyedEvent @ 0x140576418 (NtCreateKeyedEvent.c)
 *     IoCreateController @ 0x14057F5FC (IoCreateController.c)
 *     CmpDoAccessCheckOnKCB @ 0x140600AC8 (CmpDoAccessCheckOnKCB.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140613754 (VrpHandleIoctlInitializeJobForVreg.c)
 *     NtCreateDebugObject @ 0x1406195FC (NtCreateDebugObject.c)
 *     TtmiCreateTerminal @ 0x140677760 (TtmiCreateTerminal.c)
 *     TtmiCreateEventQueue @ 0x140679E9C (TtmiCreateEventQueue.c)
 *     ExpProfileCreate @ 0x1406B7C0C (ExpProfileCreate.c)
 *     IopInitializeBuiltinDriver @ 0x14079BB9C (IopInitializeBuiltinDriver.c)
 *     MiSectionInitialization @ 0x1407A1524 (MiSectionInitialization.c)
 *     CmpCreateRegistryRoot @ 0x1407AE4D4 (CmpCreateRegistryRoot.c)
 * Callees:
 *     ObCreateObjectEx @ 0x14041D970 (ObCreateObjectEx.c)
 */

__int64 __fastcall ObCreateObject(char a1, _DWORD *a2, __int64 a3, char a4, int a5, int a6, int a7, int a8, _QWORD *a9)
{
  __int64 v10; // [rsp+20h] [rbp-38h]

  return ObCreateObjectEx(a1, a2, a3, a4, v10, a6, a7, a8, a9, 0LL);
}
