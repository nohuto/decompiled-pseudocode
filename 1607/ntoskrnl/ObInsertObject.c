/*
 * XREFs of ObInsertObject @ 0x1404702F4
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x14007DBE0 (FsRtlCreateSectionForDataScan.c)
 *     SepCreateTokenEx @ 0x14007FC48 (SepCreateTokenEx.c)
 *     NtAllocateReserveObject @ 0x1403E28BC (NtAllocateReserveObject.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1403EE178 (IoCreateStreamFileObjectEx2.c)
 *     AlpcpCreateClientPort @ 0x14040735C (AlpcpCreateClientPort.c)
 *     NtQueryInformationToken @ 0x14040E6D0 (NtQueryInformationToken.c)
 *     SepCreateClientSecurityEx @ 0x140411140 (SepCreateClientSecurityEx.c)
 *     MmCreateSpecialImageSection @ 0x14045CE40 (MmCreateSpecialImageSection.c)
 *     SeSubProcessToken @ 0x14046D918 (SeSubProcessToken.c)
 *     ObpCreateDirectoryObject @ 0x14046FBB4 (ObpCreateDirectoryObject.c)
 *     NtCreateWorkerFactory @ 0x14046FD64 (NtCreateWorkerFactory.c)
 *     NtCreateIoCompletion @ 0x1404700B0 (NtCreateIoCompletion.c)
 *     NtCreateTimer2 @ 0x1404701BC (NtCreateTimer2.c)
 *     IoCreateDevice @ 0x140472390 (IoCreateDevice.c)
 *     NtCreateSymbolicLinkObject @ 0x1404729FC (NtCreateSymbolicLinkObject.c)
 *     WmipCreateGuidObject @ 0x140472E18 (WmipCreateGuidObject.c)
 *     NtCreatePrivateNamespace @ 0x1404765A4 (NtCreatePrivateNamespace.c)
 *     NtCreateLowBoxToken @ 0x14047AAA8 (NtCreateLowBoxToken.c)
 *     NtFilterToken @ 0x14047BC68 (NtFilterToken.c)
 *     EtwpRealtimeConnect @ 0x14049302C (EtwpRealtimeConnect.c)
 *     AlpcpCreateConnectionPort @ 0x14049DAA8 (AlpcpCreateConnectionPort.c)
 *     AlpcpAcceptConnectPort @ 0x14049EE08 (AlpcpAcceptConnectPort.c)
 *     NtCreateRegistryTransaction @ 0x1404CBD88 (NtCreateRegistryTransaction.c)
 *     ExCreateCallback @ 0x1404CCE20 (ExCreateCallback.c)
 *     EtwpCreateUmReplyObject @ 0x1404D182C (EtwpCreateUmReplyObject.c)
 *     PopPowerRequestCreateInfo @ 0x140501704 (PopPowerRequestCreateInfo.c)
 *     IopLoadDriver @ 0x140516794 (IopLoadDriver.c)
 *     NtCreateJobObject @ 0x14051A4B8 (NtCreateJobObject.c)
 *     MiSessionObjectCreate @ 0x140535FE4 (MiSessionObjectCreate.c)
 *     IoCreateDriver @ 0x1405518C4 (IoCreateDriver.c)
 *     MiPartitionObjectCreate @ 0x1405533A8 (MiPartitionObjectCreate.c)
 *     SepInitializationPhase1 @ 0x140553520 (SepInitializationPhase1.c)
 *     NtCreateKeyedEvent @ 0x140576958 (NtCreateKeyedEvent.c)
 *     IoCreateController @ 0x14057FAA8 (IoCreateController.c)
 *     NtCreateDebugObject @ 0x1406196B0 (NtCreateDebugObject.c)
 *     TtmiCreateTerminal @ 0x140677844 (TtmiCreateTerminal.c)
 *     TtmpDispatchCreateEventQueue @ 0x140679890 (TtmpDispatchCreateEventQueue.c)
 *     SeFilterToken @ 0x14068D030 (SeFilterToken.c)
 *     SeGetLogonSessionToken @ 0x140692B88 (SeGetLogonSessionToken.c)
 *     ExpProfileCreate @ 0x1406B7D44 (ExpProfileCreate.c)
 *     IopInitializeBuiltinDriver @ 0x14079BB9C (IopInitializeBuiltinDriver.c)
 *     MiSectionInitialization @ 0x1407A1524 (MiSectionInitialization.c)
 *     CmpCreateRegistryRoot @ 0x1407AE4D4 (CmpCreateRegistryRoot.c)
 * Callees:
 *     ObInsertObjectEx @ 0x14041DDC0 (ObInsertObjectEx.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ObInsertObject(
        PVOID Object,
        PACCESS_STATE PassedAccessState,
        ACCESS_MASK DesiredAccess,
        ULONG ObjectPointerBias,
        PVOID *NewObject,
        PHANDLE Handle)
{
  return ObInsertObjectEx(
           Object,
           (struct _SECURITY_SUBJECT_CONTEXT *)PassedAccessState,
           *(__int64 *)&DesiredAccess,
           ObjectPointerBias,
           0,
           NewObject,
           (unsigned __int64 *)Handle);
}
