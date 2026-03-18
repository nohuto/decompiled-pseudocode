/*
 * XREFs of FxLibraryCommonRegisterClient @ 0x1C002753C
 * Callers:
 *     LibraryRegisterClient @ 0x1C00274B0 (LibraryRegisterClient.c)
 * Callees:
 *     GetNameFromPath @ 0x1C0005C84 (GetNameFromPath.c)
 *     GetEnhancedVerifierOptions @ 0x1C00276AC (GetEnhancedVerifierOptions.c)
 *     ?IsClientInfoValid@@YAEPEAU_CLIENT_INFO@@@Z @ 0x1C0027860 (-IsClientInfoValid@@YAEPEAU_CLIENT_INFO@@@Z.c)
 *     FxAllocateDriverGlobals @ 0x1C0027888 (FxAllocateDriverGlobals.c)
 *     memmove @ 0x1C0033080 (memmove.c)
 *     ?ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KK@Z @ 0x1C006AC0C (-ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KK@Z.c)
 *     McGenEventRegister @ 0x1C006B058 (McGenEventRegister.c)
 *     LockVerifierSection @ 0x1C0079DE4 (LockVerifierSection.c)
 */

__int64 __fastcall FxLibraryCommonRegisterClient(
        _WDF_BIND_INFO *Info,
        _WDF_DRIVER_GLOBALS **WdfDriverGlobals,
        _CLIENT_INFO *ClientInfo)
{
  int DeviceExtension; // eax
  unsigned int v7; // ebp
  unsigned int FuncCount; // eax
  _WDF_DRIVER_GLOBALS *DriverGlobals; // rax
  _FX_DRIVER_GLOBALS *v10; // rbp
  unsigned int *v11; // rbx
  __int64 v12; // rax
  void (__fastcall *p_Functions)(); // rcx
  _WDFFUNCTIONS *v15; // rdx
  unsigned int v16; // r8d
  void (__fastcall *v17)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *); // rdx
  const _GUID *v18; // rcx
  void *v19; // r8
  unsigned __int64 *v20; // r9
  const char *v21; // r9
  _UNICODE_STRING serviceName; // [rsp+30h] [rbp-38h] BYREF

  *(_QWORD *)&serviceName.MaximumLength = 0LL;
  serviceName.Length = 0;
  *(_DWORD *)((char *)&serviceName.Buffer + 2) = 0;
  HIWORD(serviceName.Buffer) = 0;
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
        v21 = "PWDF_BIND_INFO->FuncTable";
        if ( Info->FuncTable )
          v21 = "unknown";
      }
      else
      {
        v21 = "PWDF_DRIVER_GLOBALS *";
      }
    }
    else
    {
      v21 = "PWDF_BIND_INFO";
    }
    DbgPrintEx(0x65u, 0, "LibraryRegisterClient: NULL parameter -- %s\n", v21);
    goto $Done_31;
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
    goto $Done_31;
  }
  if ( FuncCount <= 0x1B6 )
  {
    if ( FuncCount != 383
      && (FuncCount <= 0x181 || FuncCount > 0x183 && FuncCount != 396 && FuncCount != 432 && FuncCount != 438) )
    {
      if ( !LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
        return v7;
      DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
      DbgPrintEx(
        0x65u,
        0,
        "LibraryRegisterClient: Function table count 0x%x doesn't match any previously released framework version table size\n",
        Info->FuncCount);
      goto $Done_31;
    }
    goto LABEL_9;
  }
  if ( FuncCount == 444 )
  {
LABEL_9:
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
          McGenEventRegister(v18, v17, v19, v20);
        v12 = Info->FuncCount;
        if ( (unsigned int)v12 > 0x1B6 )
        {
          p_Functions = (void (__fastcall *)())&VfWdfVersion.Functions;
          goto LABEL_14;
        }
        v15 = &VfWdfVersion.Functions;
      }
      else
      {
        v12 = Info->FuncCount;
        if ( (unsigned int)v12 > 0x1B6 )
        {
          p_Functions = (void (__fastcall *)())&WdfVersion.Functions;
LABEL_14:
          *Info->FuncTable = p_Functions;
LABEL_15:
          v7 = 0;
          if ( !LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
            return v7;
          DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
          DbgPrintEx(0x65u, 0, "LibraryRegisterClient: WdfFunctions %p\n", Info->FuncTable);
          goto $Done_31;
        }
        v15 = &WdfVersion.Functions;
      }
      memmove(Info->FuncTable, v15, 8 * v12);
      goto LABEL_15;
    }
$Done_31:
    if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
    {
      DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
      DbgPrintEx(0x65u, 0, "LibraryRegisterClient: exit: status %X\n", v7);
    }
    return v7;
  }
  *(_QWORD *)&serviceName.Length = 0LL;
  serviceName.Buffer = 0LL;
  if ( IsClientInfoValid(ClientInfo) )
    GetNameFromPath(ClientInfo->RegistryPath, &serviceName);
  else
    RtlInitUnicodeString(&serviceName, L"Unknown");
  ReportDdiFunctionCountMismatch(&serviceName, Info->FuncCount, v16);
  if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
  {
    if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
      DbgBreakPoint();
    goto $Done_31;
  }
  return v7;
}
