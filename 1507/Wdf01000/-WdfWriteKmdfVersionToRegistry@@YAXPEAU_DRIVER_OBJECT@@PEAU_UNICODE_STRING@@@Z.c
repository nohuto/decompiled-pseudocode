/*
 * XREFs of ?WdfWriteKmdfVersionToRegistry@@YAXPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@@Z @ 0x1C002C080
 * Callers:
 *     DriverEntry @ 0x1C002BF00 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void __fastcall WdfWriteKmdfVersionToRegistry(_DRIVER_OBJECT *DriverObject, _UNICODE_STRING *RegistryPath)
{
  _UNICODE_STRING valueName; // [rsp+40h] [rbp-19h] BYREF
  _UNICODE_STRING parametersPath; // [rsp+50h] [rbp-9h] BYREF
  _OBJECT_ATTRIBUTES objectAttributes; // [rsp+60h] [rbp+7h] BYREF
  _DRV_EXTENSION *driverExtension; // [rsp+C8h] [rbp+6Fh] BYREF
  void *parametersKey; // [rsp+D0h] [rbp+77h] BYREF
  void *driverKey; // [rsp+D8h] [rbp+7Fh] BYREF

  driverKey = 0LL;
  parametersKey = 0LL;
  driverExtension = 0LL;
  RtlInitUnicodeString(&parametersPath, L"Parameters");
  objectAttributes.Length = 48;
  objectAttributes.RootDirectory = 0LL;
  objectAttributes.Attributes = 576;
  objectAttributes.ObjectName = RegistryPath;
  *(_OWORD *)&objectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&driverKey, 4u, &objectAttributes) < 0 )
  {
    if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
    {
      DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
      DbgPrintEx(0x65u, 0, "WdfWriteKmdfVersionToRegistry: Failed to open HKLM\\%S\n", RegistryPath->Buffer);
    }
  }
  else
  {
    objectAttributes.RootDirectory = driverKey;
    objectAttributes.ObjectName = &parametersPath;
    objectAttributes.Length = 48;
    objectAttributes.Attributes = 576;
    *(_OWORD *)&objectAttributes.SecurityDescriptor = 0LL;
    if ( ZwCreateKey(&parametersKey, 2u, &objectAttributes, 0, 0LL, 1u, 0LL) < 0 )
    {
      if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
      {
        DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
        DbgPrintEx(
          0x65u,
          0,
          "WdfWriteKmdfVersionToRegistry: Failed to open HKLM\\%S\\%S\n",
          RegistryPath->Buffer,
          parametersPath.Buffer);
      }
    }
    else
    {
      RtlInitUnicodeString(&valueName, L"MajorVersion");
      if ( ZwSetValueKey(parametersKey, &valueName, 0, 4u, &WdfLibraryInfo.Version, 4u) < 0 )
      {
        if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
        {
          DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
          DbgPrintEx(0x65u, 0, "WdfWriteKmdfVersionToRegistry: Failed to set Major Version\n");
        }
      }
      else
      {
        RtlInitUnicodeString(&valueName, L"MinorVersion");
        if ( ZwSetValueKey(parametersKey, &valueName, 0, 4u, &WdfLibraryInfo.Version.Minor, 4u) < 0 )
        {
          if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
          {
            DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
            DbgPrintEx(0x65u, 0, "WdfWriteKmdfVersionToRegistry: Failed to set Minor Version\n");
          }
        }
        else
        {
          RtlInitUnicodeString(&valueName, L"BuildNumber");
          if ( ZwSetValueKey(parametersKey, &valueName, 0, 4u, &WdfLibraryInfo.Version.Build, 4u) < 0 )
          {
            if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
            {
              DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
              DbgPrintEx(0x65u, 0, "WdfWriteKmdfVersionToRegistry: Failed to set Build Number\n");
            }
          }
          else if ( IoAllocateDriverObjectExtension(DriverObject, DriverEntry, 0x10u, (PVOID *)&driverExtension) >= 0 )
          {
            if ( driverExtension )
            {
              driverExtension->ParametersRegistryPath.Buffer = (unsigned __int16 *)ExAllocatePoolWithTag(
                                                                                     PagedPool,
                                                                                     RegistryPath->MaximumLength,
                                                                                     0x72447846u);
              if ( driverExtension->ParametersRegistryPath.Buffer )
              {
                driverExtension->ParametersRegistryPath.MaximumLength = RegistryPath->MaximumLength;
                RtlCopyUnicodeString(&driverExtension->ParametersRegistryPath, RegistryPath);
              }
            }
          }
        }
      }
    }
  }
  if ( driverKey )
    ZwClose(driverKey);
  if ( parametersKey )
    ZwClose(parametersKey);
}
