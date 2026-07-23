/*
 * XREFs of RtlGetActiveConsoleId @ 0x140008650
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x140008870 (PopGetConsoleDisplayRequestCount.c)
 *     IopParseDevice @ 0x14043F7C0 (IopParseDevice.c)
 *     PoBlockConsoleSwitch @ 0x1404D1324 (PoBlockConsoleSwitch.c)
 *     PopNotifyConsoleUserPresent @ 0x1404D25CC (PopNotifyConsoleUserPresent.c)
 *     PfpProcessScenarioPhase @ 0x140545928 (PfpProcessScenarioPhase.c)
 *     TtmpDisplayBurstPowerSettingCallback @ 0x1405816A0 (TtmpDisplayBurstPowerSettingCallback.c)
 *     PiCMQueryRemove @ 0x14064810C (PiCMQueryRemove.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140076730 (PsGetServerSiloGlobals.c)
 */

ULONG RtlGetActiveConsoleId(void)
{
  __int64 v0; // rdx
  __int64 v1; // rax

  if ( *(_DWORD *)(PsGetServerSiloGlobals(-1LL) + 1008) )
    return HIDWORD(*(_QWORD *)(PsGetServerSiloGlobals(v0) + 1008));
  else
    LODWORD(v1) = MEMORY[0xFFFFF780000002D8];
  return v1;
}
