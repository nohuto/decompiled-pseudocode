/*
 * XREFs of ObCreateObject @ 0x14044EE00
 * Callers:
 *     SepCreateTokenEx @ 0x140004180 (SepCreateTokenEx.c)
 *     NtAllocateReserveObject @ 0x1403B53DC (NtAllocateReserveObject.c)
 *     IopLoadDriver @ 0x1403BB9F8 (IopLoadDriver.c)
 *     IoCreateDevice @ 0x1403C028C (IoCreateDevice.c)
 *     SepFilterToken @ 0x1403C11C8 (SepFilterToken.c)
 *     PspAllocateProcess @ 0x14044C768 (PspAllocateProcess.c)
 *     ObpCreateDirectoryObject @ 0x14044E350 (ObpCreateDirectoryObject.c)
 *     NtCreateWorkerFactory @ 0x14044E4E8 (NtCreateWorkerFactory.c)
 *     NtCreateIoCompletion @ 0x14044E840 (NtCreateIoCompletion.c)
 *     NtCreateTimer2 @ 0x14044EB44 (NtCreateTimer2.c)
 *     NtCreateTimer @ 0x14044EC80 (NtCreateTimer.c)
 *     PopCreatePowerRequestObject @ 0x14045519C (PopCreatePowerRequestObject.c)
 *     NtCreateJobObject @ 0x140487354 (NtCreateJobObject.c)
 *     NtCreatePrivateNamespace @ 0x1404A9DC8 (NtCreatePrivateNamespace.c)
 *     NtCreateSymbolicLinkObject @ 0x1404B0E34 (NtCreateSymbolicLinkObject.c)
 *     EtwpRealtimeConnect @ 0x1404B615C (EtwpRealtimeConnect.c)
 *     ExCreateCallback @ 0x1404BF200 (ExCreateCallback.c)
 *     EtwpCreateUmReplyObject @ 0x1404C4A00 (EtwpCreateUmReplyObject.c)
 *     WmipCreateGuidObject @ 0x1404C83F0 (WmipCreateGuidObject.c)
 *     MiSessionObjectCreate @ 0x1404FED9C (MiSessionObjectCreate.c)
 *     IoCreateDriver @ 0x140523034 (IoCreateDriver.c)
 *     MiPartitionObjectCreate @ 0x1405261F8 (MiPartitionObjectCreate.c)
 *     NtCreateKeyedEvent @ 0x140542444 (NtCreateKeyedEvent.c)
 *     IoCreateController @ 0x14054EE00 (IoCreateController.c)
 *     CmpDoAccessCheckOnKCB @ 0x1405E21C8 (CmpDoAccessCheckOnKCB.c)
 *     NtCreateDebugObject @ 0x1405EFA00 (NtCreateDebugObject.c)
 *     ExpProfileCreate @ 0x1406752BC (ExpProfileCreate.c)
 *     CmpCreateRegistryRoot @ 0x140745C60 (CmpCreateRegistryRoot.c)
 *     IopInitializeBuiltinDriver @ 0x14075210C (IopInitializeBuiltinDriver.c)
 *     MiSectionInitialization @ 0x14075A850 (MiSectionInitialization.c)
 * Callees:
 *     ObCreateObjectEx @ 0x140412D10 (ObCreateObjectEx.c)
 */

__int64 __fastcall ObCreateObject(char a1, _DWORD *a2, __int64 a3, char a4, int a5, int a6, int a7, int a8, _QWORD *a9)
{
  __int64 v10; // [rsp+20h] [rbp-38h]

  return ObCreateObjectEx(a1, a2, a3, a4, v10, a6, a7, a8, a9, 0LL);
}
