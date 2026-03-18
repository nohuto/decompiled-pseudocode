/*
 * XREFs of FxLibraryCommonRegisterClient @ 0x1C0019C94
 * Callers:
 *     LibraryRegisterClient @ 0x1C0019C00 (LibraryRegisterClient.c)
 * Callees:
 *     GetNameFromPath @ 0x1C001396C (GetNameFromPath.c)
 *     GetEnhancedVerifierOptions @ 0x1C001A768 (GetEnhancedVerifierOptions.c)
 *     ?IsClientInfoValid@@YAEPEAU_CLIENT_INFO@@@Z @ 0x1C001AE24 (-IsClientInfoValid@@YAEPEAU_CLIENT_INFO@@@Z.c)
 *     FxAllocateDriverGlobals @ 0x1C001AE50 (FxAllocateDriverGlobals.c)
 *     memmove @ 0x1C0040140 (memmove.c)
 *     ?ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z @ 0x1C0074EF0 (-ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z.c)
 *     McGenEventRegister @ 0x1C007550C (McGenEventRegister.c)
 *     LockVerifierSection @ 0x1C008080C (LockVerifierSection.c)
 */

__int64 __fastcall FxLibraryCommonRegisterClient(
        _WDF_BIND_INFO *Info,
        _WDF_DRIVER_GLOBALS **WdfDriverGlobals,
        _CLIENT_INFO *ClientInfo)
{
  unsigned int v6; // ebp
  int DeviceExtension; // eax
  unsigned int FuncCount; // eax
  _WDF_DRIVER_GLOBALS *DriverGlobals; // rax
  _FX_DRIVER_GLOBALS *DriverName; // rbp
  unsigned int *v11; // rbx
  __int64 v12; // rax
  void (__fastcall *p_Functions)(); // rcx
  _WDFFUNCTIONS *v15; // rdx
  unsigned int v16; // r8d
  unsigned __int8 v17; // r9
  void (__fastcall *v18)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *); // rdx
  const _GUID *v19; // rcx
  void *v20; // r8
  unsigned __int64 *v21; // r9
  const char *v22; // r9
  _UNICODE_STRING serviceName; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)&serviceName.Length = 0LL;
  serviceName.Buffer = 0LL;
  v6 = -1073741811;
  DeviceExtension = (int)WPP_GLOBAL_WDF_Control.DeviceExtension;
  if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryRegisterClient: enter\n");
    DeviceExtension = (int)WPP_GLOBAL_WDF_Control.DeviceExtension;
  }
  if ( !Info || !WdfDriverGlobals || !Info->FuncTable )
  {
    if ( !DeviceExtension )
      return v6;
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    if ( Info )
    {
      if ( WdfDriverGlobals )
      {
        v22 = "PWDF_BIND_INFO->FuncTable";
        if ( Info->FuncTable )
          v22 = "unknown";
      }
      else
      {
        v22 = "PWDF_DRIVER_GLOBALS *";
      }
    }
    else
    {
      v22 = "PWDF_BIND_INFO";
    }
    DbgPrintEx(0x65u, 0, "LibraryRegisterClient: NULL parameter -- %s\n", v22);
    goto LABEL_52;
  }
  *WdfDriverGlobals = 0LL;
  FuncCount = Info->FuncCount;
  if ( FuncCount > WdfVersion.FuncCount )
  {
    if ( !LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
      return v6;
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(
      0x65u,
      0,
      "LibraryRegisterClient: version mismatch detected in function table count: clienthas 0x%x,  library has 0x%x\n",
      Info->FuncCount,
      WdfVersion.FuncCount);
    goto LABEL_52;
  }
  if ( FuncCount > 0x1BE )
  {
    if ( FuncCount != 448 )
    {
      *(_QWORD *)&serviceName.Length = 0LL;
      serviceName.Buffer = 0LL;
      if ( IsClientInfoValid(ClientInfo) )
        GetNameFromPath(ClientInfo->RegistryPath, &serviceName);
      else
        RtlInitUnicodeString(&serviceName, L"Unknown");
      ReportDdiFunctionCountMismatch(&serviceName, Info->FuncCount, v16, v17);
      goto LABEL_52;
    }
  }
  else if ( FuncCount != 383
         && (FuncCount <= 0x181
          || FuncCount != 444
          && FuncCount > 0x183
          && FuncCount != 432
          && FuncCount != 396
          && FuncCount != 438
          && FuncCount != 446) )
  {
    if ( !LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
      return v6;
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(
      0x65u,
      0,
      "LibraryRegisterClient: Function table count 0x%x doesn't match any previously released framework version table size\n",
      Info->FuncCount);
    goto LABEL_52;
  }
  DriverGlobals = FxAllocateDriverGlobals();
  *WdfDriverGlobals = DriverGlobals;
  if ( DriverGlobals )
  {
    DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
    v11 = (unsigned int *)&DriverGlobals[-1].DriverName[12];
    GetEnhancedVerifierOptions(ClientInfo, v11);
    if ( (unsigned __int16)*v11 || (*v11 & 0xF00000) != 0 )
    {
      if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
      {
        DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
        DbgPrintEx(0x65u, 0, "LibraryRegisterClient: Enhanced Verification is ON \n");
      }
      LockVerifierSection(DriverName, ClientInfo->RegistryPath);
      if ( !WPP_GLOBAL_WDF_Control.Queue.ListEntry.Flink )
        McGenEventRegister(v19, v18, v20, v21);
      v12 = Info->FuncCount;
      if ( (unsigned int)v12 > 0x1B6 )
      {
        p_Functions = (void (__fastcall *)())&VfWdfVersion.Functions;
        goto LABEL_16;
      }
      v15 = &VfWdfVersion.Functions;
    }
    else
    {
      v12 = Info->FuncCount;
      if ( (unsigned int)v12 > 0x1B6 )
      {
        p_Functions = (void (__fastcall *)())&WdfVersion.Functions;
LABEL_16:
        *Info->FuncTable = p_Functions;
LABEL_17:
        v6 = 0;
        if ( !LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
          return v6;
        DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
        DbgPrintEx(0x65u, 0, "LibraryRegisterClient: WdfFunctions %p\n", Info->FuncTable);
        goto LABEL_52;
      }
      v15 = &WdfVersion.Functions;
    }
    memmove(Info->FuncTable, v15, 8 * v12);
    goto LABEL_17;
  }
LABEL_52:
  if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryRegisterClient: exit: status %X\n", v6);
  }
  return v6;
}
