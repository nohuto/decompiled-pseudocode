/*
 * XREFs of EtwRegister @ 0x1404CC744
 * Callers:
 *     KiIntSteerConnect @ 0x140122B3C (KiIntSteerConnect.c)
 *     BapdRegisterEtwProvider @ 0x1401275E8 (BapdRegisterEtwProvider.c)
 *     McGenEventRegister @ 0x1401340C8 (McGenEventRegister.c)
 *     HvlpEtwRegister @ 0x1401B4D64 (HvlpEtwRegister.c)
 *     PsDispatchIumService @ 0x1401F5B10 (PsDispatchIumService.c)
 *     PfSnBeginBootPhase @ 0x1403A6AC8 (PfSnBeginBootPhase.c)
 *     DbgkpStartSystemErrorHandler @ 0x1404A45AC (DbgkpStartSystemErrorHandler.c)
 *     PopDiagSleepStudyInitialize @ 0x1405244E0 (PopDiagSleepStudyInitialize.c)
 *     TraceLoggingRegisterEx @ 0x14052451C (TraceLoggingRegisterEx.c)
 *     WdipSemEnableSemProvider @ 0x140532B1C (WdipSemEnableSemProvider.c)
 *     DbgkCaptureLiveDump @ 0x1405F0B8C (DbgkCaptureLiveDump.c)
 *     SepSqmInformation @ 0x140655C10 (SepSqmInformation.c)
 *     sub_1406698B8 @ 0x1406698B8 (sub_1406698B8.c)
 *     sub_14066A098 @ 0x14066A098 (sub_14066A098.c)
 *     ExpTriggerFastCacheReeval @ 0x14066A550 (ExpTriggerFastCacheReeval.c)
 *     VerifierEtwRegister @ 0x1406D0DC4 (VerifierEtwRegister.c)
 *     PopDiagInitialize @ 0x1407558FC (PopDiagInitialize.c)
 *     PerfDiagInitialize @ 0x140755CA0 (PerfDiagInitialize.c)
 *     PnpDiagInitialize @ 0x140756188 (PnpDiagInitialize.c)
 *     KseInitialize @ 0x140756FC0 (KseInitialize.c)
 *     EtwpInitialize @ 0x140757334 (EtwpInitialize.c)
 *     IoInitSystemPreDrivers @ 0x140757B24 (IoInitSystemPreDrivers.c)
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 *     SmInitSystem @ 0x14076A984 (SmInitSystem.c)
 *     WheapInitializeEventing @ 0x140772188 (WheapInitializeEventing.c)
 * Callees:
 *     EtwpRegisterProvider @ 0x1404CC76C (EtwpRegisterProvider.c)
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
