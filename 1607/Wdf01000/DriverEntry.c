/*
 * XREFs of DriverEntry @ 0x1C00364D0
 * Callers:
 *     GsDriverEntry @ 0x1C00CE000 (GsDriverEntry.c)
 * Callees:
 *     ?WdfWriteKmdfVersionToRegistry@@YAXPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@@Z @ 0x1C0036650 (-WdfWriteKmdfVersionToRegistry@@YAXPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@@Z.c)
 *     ?FxLibraryCreateDevice@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C003685C (-FxLibraryCreateDevice@@YAJPEAU_UNICODE_STRING@@@Z.c)
 *     __security_check_cookie @ 0x1C003A860 (__security_check_cookie.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     ?FxLibraryCleanup@@YAXXZ @ 0x1C00644E0 (-FxLibraryCleanup@@YAXXZ.c)
 */

__int64 __fastcall DriverEntry(_DRIVER_OBJECT *DriverObject, _UNICODE_STRING *RegistryPath)
{
  int v4; // ebx
  _UNICODE_STRING name; // [rsp+20h] [rbp-E0h] BYREF
  _UNICODE_STRING string; // [rsp+30h] [rbp-D0h] BYREF
  _OSVERSIONINFOW VersionInformation; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t buffer[20]; // [rsp+160h] [rbp+60h] BYREF

  wcscpy(buffer, L"\\Device\\KMDFXXXX");
  VersionInformation.dwOSVersionInfoSize = 276;
  if ( RtlGetVersion(&VersionInformation) >= 0
    && (VersionInformation.dwMajorVersion > 6
     || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion >= 2) )
  {
    ExDefaultNonPagedPoolType = NonPagedPoolNx;
    ExDefaultMdlProtection = 0x40000000;
  }
  RtlInitUnicodeString(&string, L"DbgPrintOn");
  WdfLdrDiagnosticsValueByNameAsULONG(&string, &WPP_GLOBAL_WDF_Control.DeviceExtension);
  if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "DriverEntry\n");
  }
  DriverObject->DriverUnload = DriverUnload;
  FxLibraryGlobals.DriverObject = DriverObject;
  DriverObject->MajorFunction[0] = FxLibraryDispatch;
  DriverObject->MajorFunction[18] = FxLibraryDispatch;
  DriverObject->MajorFunction[2] = FxLibraryDispatch;
  *(_DWORD *)(&name.MaximumLength + 1) = 0;
  name.Buffer = buffer;
  *(_DWORD *)&name.Length = 2228224;
  memset(buffer, 0, 0x22uLL);
  v4 = FxLibraryCreateDevice(&name);
  if ( v4 < 0 )
  {
    if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
    {
      DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
      DbgPrintEx(0x65u, 0, "ERROR: FxLibraryCreateDevice failed with Status 0x%x\n", v4);
    }
  }
  else
  {
    v4 = WdfRegisterLibrary(&WdfLibraryInfo, RegistryPath, &name);
    if ( v4 >= 0 )
    {
      WdfWriteKmdfVersionToRegistry(DriverObject, RegistryPath);
      return 0LL;
    }
    if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
    {
      DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
      DbgPrintEx(0x65u, 0, "ERROR: WdfRegisterLibrary failed with Status 0x%x\n", v4);
    }
    FxLibraryCleanup();
  }
  return (unsigned int)v4;
}
