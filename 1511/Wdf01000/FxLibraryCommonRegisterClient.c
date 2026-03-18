/*
 * XREFs of FxLibraryCommonRegisterClient @ 0x1C002CB1C
 * Callers:
 *     LibraryRegisterClient @ 0x1C002CA90 (LibraryRegisterClient.c)
 * Callees:
 *     GetEnhancedVerifierOptions @ 0x1C002CC88 (GetEnhancedVerifierOptions.c)
 *     FxAllocateDriverGlobals @ 0x1C002CE64 (FxAllocateDriverGlobals.c)
 *     memmove @ 0x1C0036900 (memmove.c)
 *     McGenEventRegister @ 0x1C0062F28 (McGenEventRegister.c)
 *     LockVerifierSection @ 0x1C006DC1C (LockVerifierSection.c)
 */

__int64 __fastcall FxLibraryCommonRegisterClient(
        _WDF_BIND_INFO *Info,
        _WDF_DRIVER_GLOBALS **WdfDriverGlobals,
        _CLIENT_INFO *ClientInfo)
{
  int DeviceExtension; // eax
  unsigned int v7; // esi
  unsigned int FuncCount; // eax
  _WDF_DRIVER_GLOBALS *DriverGlobals; // rax
  _FX_DRIVER_GLOBALS *v10; // rsi
  unsigned int *v11; // rbx
  __int64 v12; // rax
  void (__fastcall *p_Functions)(); // rcx
  _WDFFUNCTIONS *v15; // rdx
  void (__fastcall *v16)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *); // rdx
  const _GUID *v17; // rcx
  void *v18; // r8
  unsigned __int64 *v19; // r9
  const char *v20; // r9

  DeviceExtension = (int)WPP_GLOBAL_WDF_Control.DeviceExtension;
  v7 = -1073741811;
  if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryRegisterClient: enter\n");
    DeviceExtension = (int)WPP_GLOBAL_WDF_Control.DeviceExtension;
  }
  if ( !Info || !WdfDriverGlobals || !Info->FuncTable )
  {
    if ( !DeviceExtension )
      return v7;
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    if ( Info )
    {
      if ( WdfDriverGlobals )
      {
        v20 = "PWDF_BIND_INFO->FuncTable";
        if ( Info->FuncTable )
          v20 = "unknown";
      }
      else
      {
        v20 = "PWDF_DRIVER_GLOBALS *";
      }
    }
    else
    {
      v20 = "PWDF_BIND_INFO";
    }
    DbgPrintEx(0x65u, 0, "LibraryRegisterClient: NULL parameter -- %s\n", v20);
    goto $Done_32;
  }
  *WdfDriverGlobals = 0LL;
  FuncCount = Info->FuncCount;
  if ( FuncCount > 0x1BC )
  {
    if ( !LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
      return v7;
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(
      0x65u,
      0,
      "LibraryRegisterClient: version mismatch detected in function table count: clienthas 0x%x,  library has 0x%x\n",
      Info->FuncCount,
      WdfVersion.FuncCount);
    goto $Done_32;
  }
  if ( FuncCount != 383
    && (FuncCount <= 0x181
     || FuncCount != 444 && FuncCount > 0x183 && FuncCount != 432 && FuncCount != 396 && FuncCount != 438) )
  {
    if ( !LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
      return v7;
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(
      0x65u,
      0,
      "LibraryRegisterClient: Function table count 0x%x doesn't match any previously released framework version table size\n",
      Info->FuncCount);
    goto $Done_32;
  }
  DriverGlobals = FxAllocateDriverGlobals();
  *WdfDriverGlobals = DriverGlobals;
  if ( DriverGlobals )
  {
    v10 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
    v11 = (unsigned int *)&DriverGlobals[-1].DriverName[16];
    GetEnhancedVerifierOptions(ClientInfo, v11);
    if ( (unsigned __int16)*v11 || (*v11 & 0xF00000) != 0 )
    {
      if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
      {
        DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
        DbgPrintEx(0x65u, 0, "LibraryRegisterClient: Enhanced Verification is ON \n");
      }
      LockVerifierSection(v10, ClientInfo->RegistryPath);
      if ( !WPP_GLOBAL_WDF_Control.Queue.ListEntry.Blink )
        McGenEventRegister(v17, v16, v18, v19);
      v12 = Info->FuncCount;
      if ( (unsigned int)v12 > 0x1B6 )
      {
        p_Functions = (void (__fastcall *)())&VfWdfVersion.Functions;
        goto LABEL_15;
      }
      v15 = &VfWdfVersion.Functions;
    }
    else
    {
      v12 = Info->FuncCount;
      if ( (unsigned int)v12 > 0x1B6 )
      {
        p_Functions = (void (__fastcall *)())&WdfVersion.Functions;
LABEL_15:
        *Info->FuncTable = p_Functions;
LABEL_16:
        v7 = 0;
        if ( !LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
          return v7;
        DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
        DbgPrintEx(0x65u, 0, "LibraryRegisterClient: WdfFunctions %p\n", Info->FuncTable);
        goto $Done_32;
      }
      v15 = &WdfVersion.Functions;
    }
    memmove(Info->FuncTable, v15, 8 * v12);
    goto LABEL_16;
  }
$Done_32:
  if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryRegisterClient: exit: status %X\n", v7);
  }
  return v7;
}
