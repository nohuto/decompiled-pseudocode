/*
 * XREFs of RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C00242C4
 * Callers:
 *     RaidpAdapterDpcRoutine @ 0x1C0005ED0 (RaidpAdapterDpcRoutine.c)
 *     StorPortExtendedFunction @ 0x1C0006190 (StorPortExtendedFunction.c)
 *     RaidCheckPerProcessorCompletions @ 0x1C0007380 (RaidCheckPerProcessorCompletions.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0010744 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidPnPPassToMiniPort @ 0x1C0010A08 (RaidPnPPassToMiniPort.c)
 *     RaidpAdapterRedirectDpcRoutine @ 0x1C0015460 (RaidpAdapterRedirectDpcRoutine.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0024FE0 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0025428 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidCompleteMiniportRequestCallback @ 0x1C00310D4 (RaidCompleteMiniportRequestCallback.c)
 *     RaWmiPassToMiniPort @ 0x1C00529B0 (RaWmiPassToMiniPort.c)
 * Callees:
 *     RaidAdapterPoFxIdleComponent @ 0x1C00078B0 (RaidAdapterPoFxIdleComponent.c)
 */

__int64 __fastcall RaidAdapterPoFxIdleComponentFromMiniport(__int64 a1, __int64 a2)
{
  bool v3; // al

  v3 = RaidAdapterPoFxIdleComponent(a1, a2, 0LL);
  _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 5088) + 88LL));
  return !v3 ? 0xC100000C : 0;
}
