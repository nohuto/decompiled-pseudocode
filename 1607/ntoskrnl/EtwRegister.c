/*
 * XREFs of EtwRegister @ 0x140549F44
 * Callers:
 *     KiIntSteerConnect @ 0x14012D37C (KiIntSteerConnect.c)
 *     BapdRegisterEtwProvider @ 0x1401322E0 (BapdRegisterEtwProvider.c)
 *     McGenEventRegister @ 0x14013C3BC (McGenEventRegister.c)
 *     HvlpEtwRegister @ 0x1401C0BF0 (HvlpEtwRegister.c)
 *     PsDispatchIumService @ 0x14020FC24 (PsDispatchIumService.c)
 *     PfSnBeginBootPhase @ 0x1403D3020 (PfSnBeginBootPhase.c)
 *     TraceLoggingRegisterEx @ 0x140546994 (TraceLoggingRegisterEx.c)
 *     PopDiagSleepStudyInitialize @ 0x1405545C8 (PopDiagSleepStudyInitialize.c)
 *     WdipSemEnableSemProvider @ 0x140564A64 (WdipSemEnableSemProvider.c)
 *     DbgkpStartSystemErrorHandler @ 0x14061A9C8 (DbgkpStartSystemErrorHandler.c)
 *     DbgkCaptureLiveDump @ 0x14061ADEC (DbgkCaptureLiveDump.c)
 *     SepSqmInformation @ 0x140695354 (SepSqmInformation.c)
 *     sub_1406AEF3C @ 0x1406AEF3C (sub_1406AEF3C.c)
 *     sub_1406AF784 @ 0x1406AF784 (sub_1406AF784.c)
 *     ExpTriggerFastCacheReeval @ 0x1406AFB08 (ExpTriggerFastCacheReeval.c)
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
 *     PsGetCurrentServerSiloGlobals @ 0x14008C610 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpRegisterProvider @ 0x140492024 (EtwpRegisterProvider.c)
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
