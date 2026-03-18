/*
 * XREFs of ObInsertObject @ 0x14044E94C
 * Callers:
 *     SepCreateTokenEx @ 0x140004180 (SepCreateTokenEx.c)
 *     FsRtlCreateSectionForDataScan @ 0x140093000 (FsRtlCreateSectionForDataScan.c)
 *     NtAllocateReserveObject @ 0x1403B53DC (NtAllocateReserveObject.c)
 *     IopLoadDriver @ 0x1403BB9F8 (IopLoadDriver.c)
 *     IoCreateDevice @ 0x1403C028C (IoCreateDevice.c)
 *     NtCreateLowBoxToken @ 0x1403C0A6C (NtCreateLowBoxToken.c)
 *     SepCreateClientSecurityEx @ 0x14042C5D0 (SepCreateClientSecurityEx.c)
 *     NtQueryInformationToken @ 0x140431390 (NtQueryInformationToken.c)
 *     SeSubProcessToken @ 0x14044C430 (SeSubProcessToken.c)
 *     ObpCreateDirectoryObject @ 0x14044E350 (ObpCreateDirectoryObject.c)
 *     NtCreateWorkerFactory @ 0x14044E4E8 (NtCreateWorkerFactory.c)
 *     NtCreateIoCompletion @ 0x14044E840 (NtCreateIoCompletion.c)
 *     MmCreateSpecialImageSection @ 0x14044FAE0 (MmCreateSpecialImageSection.c)
 *     PopPowerRequestCreateInfo @ 0x140452B24 (PopPowerRequestCreateInfo.c)
 *     NtCreateJobObject @ 0x140487354 (NtCreateJobObject.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140491900 (IoCreateStreamFileObjectEx2.c)
 *     NtCreatePrivateNamespace @ 0x1404A9DC8 (NtCreatePrivateNamespace.c)
 *     NtCreateSymbolicLinkObject @ 0x1404B0E34 (NtCreateSymbolicLinkObject.c)
 *     AlpcpCreateConnectionPort @ 0x1404B1C70 (AlpcpCreateConnectionPort.c)
 *     EtwpRealtimeConnect @ 0x1404B615C (EtwpRealtimeConnect.c)
 *     NtFilterToken @ 0x1404BD130 (NtFilterToken.c)
 *     ExCreateCallback @ 0x1404BF200 (ExCreateCallback.c)
 *     EtwpCreateUmReplyObject @ 0x1404C4A00 (EtwpCreateUmReplyObject.c)
 *     WmipCreateGuidObject @ 0x1404C83F0 (WmipCreateGuidObject.c)
 *     MiSessionObjectCreate @ 0x1404FED9C (MiSessionObjectCreate.c)
 *     IoCreateDriver @ 0x140523034 (IoCreateDriver.c)
 *     MiPartitionObjectCreate @ 0x1405261F8 (MiPartitionObjectCreate.c)
 *     SepInitializationPhase1 @ 0x1405262AC (SepInitializationPhase1.c)
 *     NtCreateKeyedEvent @ 0x140542444 (NtCreateKeyedEvent.c)
 *     IoCreateController @ 0x14054EE00 (IoCreateController.c)
 *     NtCreateDebugObject @ 0x1405EFA00 (NtCreateDebugObject.c)
 *     SeFilterToken @ 0x14064D7C8 (SeFilterToken.c)
 *     SeGetLogonSessionToken @ 0x1406537B0 (SeGetLogonSessionToken.c)
 *     ExpProfileCreate @ 0x1406752BC (ExpProfileCreate.c)
 *     CmpCreateRegistryRoot @ 0x140745C60 (CmpCreateRegistryRoot.c)
 *     IopInitializeBuiltinDriver @ 0x14075210C (IopInitializeBuiltinDriver.c)
 *     MiSectionInitialization @ 0x14075A850 (MiSectionInitialization.c)
 * Callees:
 *     ObInsertObjectEx @ 0x14042D940 (ObInsertObjectEx.c)
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
           PassedAccessState,
           *(__int64 *)&DesiredAccess,
           ObjectPointerBias,
           0,
           NewObject,
           (__int64 *)Handle);
}
