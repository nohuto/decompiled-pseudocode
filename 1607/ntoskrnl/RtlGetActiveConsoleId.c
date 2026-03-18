/*
 * XREFs of RtlGetActiveConsoleId @ 0x140008ADC
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x140008CFC (PopGetConsoleDisplayRequestCount.c)
 *     IopParseDevice @ 0x1404408F0 (IopParseDevice.c)
 *     PoBlockConsoleSwitch @ 0x1404EF230 (PoBlockConsoleSwitch.c)
 *     PopNotifyConsoleUserPresent @ 0x1404F04D8 (PopNotifyConsoleUserPresent.c)
 *     PfpProcessScenarioPhase @ 0x1405453E8 (PfpProcessScenarioPhase.c)
 *     TtmpDisplayBurstPowerSettingCallback @ 0x1405811F4 (TtmpDisplayBurstPowerSettingCallback.c)
 *     PiCMQueryRemove @ 0x140648028 (PiCMQueryRemove.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1400766B0 (PsGetServerSiloGlobals.c)
 */

__int64 RtlGetActiveConsoleId()
{
  __int64 v0; // rdx

  if ( *(_DWORD *)(PsGetServerSiloGlobals(-1LL) + 1008) )
    return HIDWORD(*(_QWORD *)(PsGetServerSiloGlobals(v0) + 1008));
  else
    return MEMORY[0xFFFFF780000002D8];
}
