/*
 * XREFs of DriverEntry_0 @ 0x1C0010890
 * Callers:
 *     FxDriverEntry @ 0x1C0010860 (FxDriverEntry.c)
 * Callees:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0010830 (-FxStubDriverUnloadCommon@@YAXXZ.c)
 *     ?FxStubInitTypes@@YAJXZ @ 0x1C0010A00 (-FxStubInitTypes@@YAJXZ.c)
 *     ?FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z @ 0x1C0010A70 (-FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z.c)
 *     WdfVersionBind_0 @ 0x1C0010B90 (WdfVersionBind_0.c)
 *     DriverEntry @ 0x1C004C4D0 (DriverEntry.c)
 */

NTSTATUS __stdcall DriverEntry_0(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS result; // eax
  int inited; // ebx
  void (__fastcall *DriverUnload)(_DRIVER_OBJECT *); // rax

  if ( !DriverObject )
    return DriverEntry(0LL, RegistryPath);
  qword_1C0042510 = (__int64)DriverObject;
  DestinationString.Buffer = (unsigned __int16 *)&unk_1C0042520;
  *(_DWORD *)&DestinationString.Length = 34078720;
  RtlCopyUnicodeString(&DestinationString, RegistryPath);
  result = WdfVersionBind_0(DriverObject, &DestinationString, &unk_1C0041000, &WdfDriverGlobals);
  if ( result >= 0 )
  {
    WdfDriverMiniportUnloadOverride = *(_QWORD *)(WdfFunctions_01015 + 1608);
    inited = FxStubBindClasses((struct _WDF_BIND_INFO *)&unk_1C0041000);
    if ( inited < 0
      || (inited = FxStubInitTypes(), inited < 0)
      || (inited = DriverEntry(DriverObject, RegistryPath), inited < 0) )
    {
      FxStubDriverUnloadCommon();
      return inited;
    }
    else
    {
      if ( WdfDriverGlobals->DisplaceDriverUnload )
      {
        DriverUnload = (void (__fastcall *)(_DRIVER_OBJECT *))qword_1C00424F8;
        if ( DriverObject->DriverUnload )
          DriverUnload = DriverObject->DriverUnload;
        qword_1C00424F8 = (__int64)DriverUnload;
        DriverObject->DriverUnload = (void (__fastcall *)(_DRIVER_OBJECT *))FxStubDriverUnload;
      }
      else if ( (WdfDriverGlobals->DriverFlags & 2) != 0 )
      {
        WdfDriverMiniportUnloadOverride = (__int64)FxStubDriverMiniportUnload;
      }
      return 0;
    }
  }
  return result;
}
