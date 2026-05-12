/*
 * XREFs of RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C0021D20
 * Callers:
 *     RaidpAdapterDpcRoutine @ 0x1C0004FB0 (RaidpAdapterDpcRoutine.c)
 *     StorPortExtendedFunction @ 0x1C0005260 (StorPortExtendedFunction.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000E438 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidPnPPassToMiniPort @ 0x1C000E6FC (RaidPnPPassToMiniPort.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0022AA0 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0022EE8 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidCheckPerProcessorCompletions @ 0x1C0023604 (RaidCheckPerProcessorCompletions.c)
 *     RaidpAdapterRedirectDpcRoutine @ 0x1C0024CF0 (RaidpAdapterRedirectDpcRoutine.c)
 *     RaidCompleteMiniportRequestCallback @ 0x1C002FFA0 (RaidCompleteMiniportRequestCallback.c)
 *     RaWmiPassToMiniPort @ 0x1C004EBFC (RaWmiPassToMiniPort.c)
 * Callees:
 *     RaidAdapterPoFxIdleComponent @ 0x1C0021CDC (RaidAdapterPoFxIdleComponent.c)
 */

__int64 __fastcall RaidAdapterPoFxIdleComponentFromMiniport(__int64 a1, __int64 a2)
{
  bool v3; // al

  v3 = RaidAdapterPoFxIdleComponent(a1, a2, 0LL);
  _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 5088) + 88LL));
  return !v3 ? 0xC100000C : 0;
}
