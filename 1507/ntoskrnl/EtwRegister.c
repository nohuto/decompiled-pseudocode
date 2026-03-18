/*
 * XREFs of EtwRegister @ 0x14054C680
 * Callers:
 *     KiIntSteerConnect @ 0x1401558E8 (KiIntSteerConnect.c)
 *     BapdWriteEtwEvents @ 0x140157A80 (BapdWriteEtwEvents.c)
 *     McGenEventRegister @ 0x1401703BC (McGenEventRegister.c)
 *     HvlpEtwRegister @ 0x1401EFC38 (HvlpEtwRegister.c)
 *     PsDispatchIumService @ 0x140244710 (PsDispatchIumService.c)
 *     BapdRecordFirmwareBootStats @ 0x1403F66C8 (BapdRecordFirmwareBootStats.c)
 *     PfSnBeginBootPhase @ 0x1403F6FE8 (PfSnBeginBootPhase.c)
 *     DbgkpStartSystemErrorHandler @ 0x1404090C4 (DbgkpStartSystemErrorHandler.c)
 *     EtwpServerSiloCreateNotify @ 0x140593ABC (EtwpServerSiloCreateNotify.c)
 *     WdipSemEnableSemProvider @ 0x1405AE000 (WdipSemEnableSemProvider.c)
 *     TraceLoggingRegisterEx @ 0x1405BCF34 (TraceLoggingRegisterEx.c)
 *     DbgkCaptureLiveDump @ 0x14066980C (DbgkCaptureLiveDump.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1406B3808 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     SepSqmInformation @ 0x1406D7ABC (SepSqmInformation.c)
 *     sub_1406ECE4C @ 0x1406ECE4C (sub_1406ECE4C.c)
 *     sub_1406ED694 @ 0x1406ED694 (sub_1406ED694.c)
 *     ExpTriggerFastCacheReeval @ 0x1406EDB4C (ExpTriggerFastCacheReeval.c)
 *     VerifierEtwRegister @ 0x14075498C (VerifierEtwRegister.c)
 *     KseInitialize @ 0x1407C04D4 (KseInitialize.c)
 *     EtwpInitialize @ 0x1407C0848 (EtwpInitialize.c)
 *     IoInitSystemPreDrivers @ 0x1407C116C (IoInitSystemPreDrivers.c)
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 *     SmInitSystem @ 0x1407DEB40 (SmInitSystem.c)
 *     PopDiagInitialize @ 0x1407E37EC (PopDiagInitialize.c)
 *     PerfDiagInitialize @ 0x1407E6FFC (PerfDiagInitialize.c)
 *     PnpDiagInitialize @ 0x1407E8214 (PnpDiagInitialize.c)
 *     WheapInitializeEventing @ 0x1407E8C84 (WheapInitializeEventing.c)
 * Callees:
 *     EtwpRegisterProvider @ 0x14054C6A8 (EtwpRegisterProvider.c)
 */

NTSTATUS __stdcall EtwRegister(
        LPCGUID ProviderId,
        PETWENABLECALLBACK EnableCallback,
        PVOID CallbackContext,
        PREGHANDLE RegHandle)
{
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  return EtwpRegisterProvider(
           (_DWORD)ProviderId,
           3,
           (_DWORD)EnableCallback,
           (_DWORD)CallbackContext,
           retaddr,
           (__int64)RegHandle);
}
