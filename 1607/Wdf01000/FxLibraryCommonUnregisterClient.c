/*
 * XREFs of FxLibraryCommonUnregisterClient @ 0x1C0037D58
 * Callers:
 *     LibraryUnregisterClient @ 0x1C0037D50 (LibraryUnregisterClient.c)
 * Callees:
 *     FxDestroy @ 0x1C0037890 (FxDestroy.c)
 *     FxFreeDriverGlobals @ 0x1C0037DE0 (FxFreeDriverGlobals.c)
 *     ?FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0037E78 (-FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     UnlockVerifierSection @ 0x1C007C388 (UnlockVerifierSection.c)
 */

__int64 __fastcall FxLibraryCommonUnregisterClient(_WDF_BIND_INFO *Info, _WDF_DRIVER_GLOBALS *WdfDriverGlobals)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  void *v7; // rdx
  int v8; // r8d
  char *v9; // r9

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
      FxDestroy((_FX_DRIVER_GLOBALS *)&WdfDriverGlobals[-8].DriverName[16], v7, v8, v9);
    }
    FxIFRStop((_FX_DRIVER_GLOBALS *)&WdfDriverGlobals[-8].DriverName[16]);
    if ( (unsigned __int16)*(_DWORD *)&WdfDriverGlobals[-1].DriverName[20] )
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
