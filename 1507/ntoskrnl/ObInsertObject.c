/*
 * XREFs of ObInsertObject @ 0x140471094
 * Callers:
 *     SepCreateTokenEx @ 0x14002EC40 (SepCreateTokenEx.c)
 *     FsRtlCreateSectionForDataScan @ 0x14002F658 (FsRtlCreateSectionForDataScan.c)
 *     IoCreateStreamFileObjectEx2 @ 0x14040E4B0 (IoCreateStreamFileObjectEx2.c)
 *     NtFilterToken @ 0x14040F530 (NtFilterToken.c)
 *     NtCreateSymbolicLinkObject @ 0x140411194 (NtCreateSymbolicLinkObject.c)
 *     NtCreateLowBoxToken @ 0x140412A24 (NtCreateLowBoxToken.c)
 *     IoCreateDevice @ 0x1404132C4 (IoCreateDevice.c)
 *     SeSubProcessToken @ 0x14046A560 (SeSubProcessToken.c)
 *     NtCreateWorkerFactory @ 0x14046FE54 (NtCreateWorkerFactory.c)
 *     NtCreateIoCompletion @ 0x1404701AC (NtCreateIoCompletion.c)
 *     NtCreateTimer2 @ 0x140470F5C (NtCreateTimer2.c)
 *     AlpcpAcceptConnectPort @ 0x140471474 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateClientPort @ 0x140472CA0 (AlpcpCreateClientPort.c)
 *     SepCreateClientSecurityEx @ 0x140481870 (SepCreateClientSecurityEx.c)
 *     NtQueryInformationToken @ 0x140482E10 (NtQueryInformationToken.c)
 *     WmipCreateGuidObject @ 0x1404AA098 (WmipCreateGuidObject.c)
 *     PopPowerRequestCreateInfo @ 0x1404EA904 (PopPowerRequestCreateInfo.c)
 *     NtCreateJobObject @ 0x1404EB86C (NtCreateJobObject.c)
 *     MmCreateSpecialImageSection @ 0x140508F84 (MmCreateSpecialImageSection.c)
 *     ObpCreateDirectoryObject @ 0x140540120 (ObpCreateDirectoryObject.c)
 *     AlpcpCreateConnectionPort @ 0x14054355C (AlpcpCreateConnectionPort.c)
 *     NtCreatePrivateNamespace @ 0x14054422C (NtCreatePrivateNamespace.c)
 *     EtwpRealtimeConnect @ 0x14054D23C (EtwpRealtimeConnect.c)
 *     ExCreateCallback @ 0x1405544CC (ExCreateCallback.c)
 *     EtwpCreateUmReplyObject @ 0x14055B78C (EtwpCreateUmReplyObject.c)
 *     IopLoadDriver @ 0x140572EA0 (IopLoadDriver.c)
 *     MiSessionObjectCreate @ 0x14057979C (MiSessionObjectCreate.c)
 *     IoCreateDriver @ 0x1405900A4 (IoCreateDriver.c)
 *     SepInitializationPhase1 @ 0x1405931F0 (SepInitializationPhase1.c)
 *     MiPartitionObjectCreate @ 0x140596A48 (MiPartitionObjectCreate.c)
 *     NtCreateKeyedEvent @ 0x1405B8A1C (NtCreateKeyedEvent.c)
 *     IoCreateController @ 0x1405C6C28 (IoCreateController.c)
 *     NtCreateDebugObject @ 0x140668404 (NtCreateDebugObject.c)
 *     NtAllocateReserveObject @ 0x1406BF8AC (NtAllocateReserveObject.c)
 *     PspCreateSilo @ 0x1406C18E8 (PspCreateSilo.c)
 *     SeFilterToken @ 0x1406D0C14 (SeFilterToken.c)
 *     SeGetLogonSessionToken @ 0x1406D5628 (SeGetLogonSessionToken.c)
 *     ExpProfileCreate @ 0x1406F9A1C (ExpProfileCreate.c)
 *     IopInitializeBuiltinDriver @ 0x1407B91D4 (IopInitializeBuiltinDriver.c)
 *     MiSectionInitialization @ 0x1407C41D0 (MiSectionInitialization.c)
 *     CmpCreateRegistryRoot @ 0x1407D7838 (CmpCreateRegistryRoot.c)
 * Callees:
 *     ObInsertObjectEx @ 0x140487BC0 (ObInsertObjectEx.c)
 */

NTSTATUS __stdcall ObInsertObject(
        PVOID Object,
        PACCESS_STATE PassedAccessState,
        ACCESS_MASK DesiredAccess,
        ULONG ObjectPointerBias,
        PVOID *NewObject,
        PHANDLE Handle)
{
  return ObInsertObjectEx(Object, 0, (__int64)NewObject, (__int64)Handle);
}
