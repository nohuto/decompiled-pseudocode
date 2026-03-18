/*
 * XREFs of ObInsertObject @ 0x140471424
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x14007DB60 (FsRtlCreateSectionForDataScan.c)
 *     SepCreateTokenEx @ 0x14007FBC8 (SepCreateTokenEx.c)
 *     NtAllocateReserveObject @ 0x1403E28BC (NtAllocateReserveObject.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1403ECB48 (IoCreateStreamFileObjectEx2.c)
 *     AlpcpCreateClientPort @ 0x14040849C (AlpcpCreateClientPort.c)
 *     NtQueryInformationToken @ 0x14040F810 (NtQueryInformationToken.c)
 *     SepCreateClientSecurityEx @ 0x140412280 (SepCreateClientSecurityEx.c)
 *     MmCreateSpecialImageSection @ 0x14045DF70 (MmCreateSpecialImageSection.c)
 *     SeSubProcessToken @ 0x14046EA48 (SeSubProcessToken.c)
 *     ObpCreateDirectoryObject @ 0x140470CE4 (ObpCreateDirectoryObject.c)
 *     NtCreateWorkerFactory @ 0x140470E94 (NtCreateWorkerFactory.c)
 *     NtCreateIoCompletion @ 0x1404711E0 (NtCreateIoCompletion.c)
 *     NtCreateTimer2 @ 0x1404712EC (NtCreateTimer2.c)
 *     IoCreateDevice @ 0x1404734C0 (IoCreateDevice.c)
 *     NtCreateSymbolicLinkObject @ 0x140473B2C (NtCreateSymbolicLinkObject.c)
 *     WmipCreateGuidObject @ 0x140473F48 (WmipCreateGuidObject.c)
 *     NtCreatePrivateNamespace @ 0x1404776D4 (NtCreatePrivateNamespace.c)
 *     NtCreateLowBoxToken @ 0x14047BBD8 (NtCreateLowBoxToken.c)
 *     NtFilterToken @ 0x14047CD98 (NtFilterToken.c)
 *     EtwpRealtimeConnect @ 0x14049259C (EtwpRealtimeConnect.c)
 *     IopLoadDriver @ 0x14049E388 (IopLoadDriver.c)
 *     NtCreateJobObject @ 0x1404A20AC (NtCreateJobObject.c)
 *     AlpcpCreateConnectionPort @ 0x1404B36C8 (AlpcpCreateConnectionPort.c)
 *     AlpcpAcceptConnectPort @ 0x1404B4A28 (AlpcpAcceptConnectPort.c)
 *     NtCreateRegistryTransaction @ 0x1404E9C94 (NtCreateRegistryTransaction.c)
 *     ExCreateCallback @ 0x1404EADFC (ExCreateCallback.c)
 *     EtwpCreateUmReplyObject @ 0x1404EF810 (EtwpCreateUmReplyObject.c)
 *     PopPowerRequestCreateInfo @ 0x14051E69C (PopPowerRequestCreateInfo.c)
 *     MiSessionObjectCreate @ 0x140535AA4 (MiSessionObjectCreate.c)
 *     IoCreateDriver @ 0x140551384 (IoCreateDriver.c)
 *     MiPartitionObjectCreate @ 0x140552E68 (MiPartitionObjectCreate.c)
 *     SepInitializationPhase1 @ 0x140552FE0 (SepInitializationPhase1.c)
 *     NtCreateKeyedEvent @ 0x140576418 (NtCreateKeyedEvent.c)
 *     IoCreateController @ 0x14057F5FC (IoCreateController.c)
 *     NtCreateDebugObject @ 0x1406195FC (NtCreateDebugObject.c)
 *     TtmiCreateTerminal @ 0x140677760 (TtmiCreateTerminal.c)
 *     TtmpDispatchCreateEventQueue @ 0x1406797AC (TtmpDispatchCreateEventQueue.c)
 *     SeFilterToken @ 0x14068CF4C (SeFilterToken.c)
 *     SeGetLogonSessionToken @ 0x140692AA4 (SeGetLogonSessionToken.c)
 *     ExpProfileCreate @ 0x1406B7C0C (ExpProfileCreate.c)
 *     IopInitializeBuiltinDriver @ 0x14079BB9C (IopInitializeBuiltinDriver.c)
 *     MiSectionInitialization @ 0x1407A1524 (MiSectionInitialization.c)
 *     CmpCreateRegistryRoot @ 0x1407AE4D4 (CmpCreateRegistryRoot.c)
 * Callees:
 *     ObInsertObjectEx @ 0x14041EF00 (ObInsertObjectEx.c)
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
