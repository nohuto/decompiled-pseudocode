/*
 * XREFs of EtwRegister @ 0x14054A484
 * Callers:
 *     KiIntSteerConnect @ 0x14012D8EC (KiIntSteerConnect.c)
 *     BapdRegisterEtwProvider @ 0x140132850 (BapdRegisterEtwProvider.c)
 *     McGenEventRegister @ 0x14013C92C (McGenEventRegister.c)
 *     HvlpEtwRegister @ 0x1401C0AD4 (HvlpEtwRegister.c)
 *     PsDispatchIumService @ 0x14020FA50 (PsDispatchIumService.c)
 *     PfSnBeginBootPhase @ 0x1403D3020 (PfSnBeginBootPhase.c)
 *     TraceLoggingRegisterEx @ 0x140546ED4 (TraceLoggingRegisterEx.c)
 *     PopDiagSleepStudyInitialize @ 0x140554B08 (PopDiagSleepStudyInitialize.c)
 *     WdipSemEnableSemProvider @ 0x140564FA4 (WdipSemEnableSemProvider.c)
 *     DbgkpStartSystemErrorHandler @ 0x14061AA7C (DbgkpStartSystemErrorHandler.c)
 *     DbgkCaptureLiveDump @ 0x14061AEA0 (DbgkCaptureLiveDump.c)
 *     SepSqmInformation @ 0x140695438 (SepSqmInformation.c)
 *     sub_1406AF074 @ 0x1406AF074 (sub_1406AF074.c)
 *     sub_1406AF8BC @ 0x1406AF8BC (sub_1406AF8BC.c)
 *     ExpTriggerFastCacheReeval @ 0x1406AFC40 (ExpTriggerFastCacheReeval.c)
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 *     PnpDiagInitialize @ 0x14079CC74 (PnpDiagInitialize.c)
 *     KseInitialize @ 0x14079DAE8 (KseInitialize.c)
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 *     EtwpInitialize @ 0x1407A0D3C (EtwpInitialize.c)
 *     PopDiagInitialize @ 0x1407A91B0 (PopDiagInitialize.c)
 *     SmInitSystem @ 0x1407B62B8 (SmInitSystem.c)
 *     PerfDiagInitialize @ 0x1407BBA24 (PerfDiagInitialize.c)
 *     WheapInitializeEventing @ 0x1407BD098 (WheapInitializeEventing.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14008BD70 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpRegisterProvider @ 0x140492AB4 (EtwpRegisterProvider.c)
 */

NTSTATUS __stdcall EtwRegister(
        LPCGUID ProviderId,
        PETWENABLECALLBACK EnableCallback,
        PVOID CallbackContext,
        PREGHANDLE RegHandle)
{
  __int64 v4; // rcx
  void (__fastcall *v5)(__int64, __int64, __int128 *, __int64); // rdx
  __int64 v6; // r8
  __int64 *v7; // r9
  __int64 v8; // r10
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v4 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 106);
  return EtwpRegisterProvider(v4, v8, 3, v5, v6, retaddr, v7);
}
