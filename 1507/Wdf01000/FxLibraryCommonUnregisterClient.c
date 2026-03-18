/*
 * XREFs of FxLibraryCommonUnregisterClient @ 0x1C002F7E8
 * Callers:
 *     LibraryUnregisterClient @ 0x1C002F7E0 (LibraryUnregisterClient.c)
 * Callees:
 *     FxDestroy @ 0x1C00257A8 (FxDestroy.c)
 *     FxFreeDriverGlobals @ 0x1C002F870 (FxFreeDriverGlobals.c)
 *     ?FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F908 (-FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     UnlockVerifierSection @ 0x1C0079E74 (UnlockVerifierSection.c)
 */

__int64 __fastcall FxLibraryCommonUnregisterClient(_WDF_BIND_INFO *Info, _WDF_DRIVER_GLOBALS *WdfDriverGlobals)
{
  unsigned int v4; // edi
  __int64 v5; // rcx

  if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryUnregisterClient: enter\n");
  }
  if ( Info && WdfDriverGlobals )
  {
    v4 = 0;
    v5 = *(_QWORD *)&WdfDriverGlobals[-7].DisplaceDriverUnload;
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 48LL))(v5);
      FxDestroy((_FX_DRIVER_GLOBALS *)&WdfDriverGlobals[-8].DriverName[16]);
    }
    FxIFRStop((_FX_DRIVER_GLOBALS *)&WdfDriverGlobals[-8].DriverName[16]);
    if ( (unsigned __int16)*(_DWORD *)&WdfDriverGlobals[-1].DriverName[16] )
      UnlockVerifierSection((_FX_DRIVER_GLOBALS *)&WdfDriverGlobals[-8].DriverName[16]);
    FxFreeDriverGlobals(WdfDriverGlobals);
  }
  else
  {
    v4 = -1073741823;
  }
  if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryUnregisterClient: exit: status %X\n", v4);
  }
  return v4;
}
