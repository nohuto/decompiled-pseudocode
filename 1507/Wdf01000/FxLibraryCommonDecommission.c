/*
 * XREFs of FxLibraryCommonDecommission @ 0x1C006AD8C
 * Callers:
 *     LibraryDecommission @ 0x1C005D690 (LibraryDecommission.c)
 * Callees:
 *     McGenEventUnregister @ 0x1C006B088 (McGenEventUnregister.c)
 *     FxLibraryGlobalsDecommission @ 0x1C00799D4 (FxLibraryGlobalsDecommission.c)
 */

__int64 __fastcall FxLibraryCommonDecommission()
{
  unsigned __int64 *v0; // rcx

  if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryDecommission: enter\n");
  }
  if ( FxLibraryGlobals.InternalTracingInitialized )
  {
    IoWMIRegistrationControl(&WPP_GLOBAL_WDF_Control, 0x80000002);
    FxLibraryGlobals.InternalTracingInitialized = 0;
  }
  EtwUnregister(Tlgg_TelemetryProviderProv.RegHandle);
  Tlgg_TelemetryProviderProv.RegHandle = 0LL;
  Tlgg_TelemetryProviderProv.LevelPlus1 = 0;
  McGenEventUnregister(v0);
  FxLibraryGlobalsDecommission();
  if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryDecommission: exit\n");
  }
  return 0LL;
}
