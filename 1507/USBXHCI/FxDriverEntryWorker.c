/*
 * XREFs of FxDriverEntryWorker @ 0x1C0007828
 * Callers:
 *     FxDriverEntry @ 0x1C0007810 (FxDriverEntry.c)
 * Callees:
 *     ?FxStubInitTypes@@YAJXZ @ 0x1C000795C (-FxStubInitTypes@@YAJXZ.c)
 *     ?FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z @ 0x1C00079A0 (-FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z.c)
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0039C18 (-FxStubDriverUnloadCommon@@YAXXZ.c)
 *     DriverEntry @ 0x1C004B5C0 (DriverEntry.c)
 */

NTSTATUS __fastcall FxDriverEntryWorker(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS result; // eax
  NTSTATUS inited; // ebx
  void (__fastcall *DeferredRoutine)(_KDPC *, void *, void *, void *); // rax

  if ( !DriverObject )
    return DriverEntry(0LL, RegistryPath);
  WPP_MAIN_CB.Dpc.DeferredContext = DriverObject;
  WPP_MAIN_CB.Dpc.DpcData = &WPP_MAIN_CB.SectorSize;
  LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) = 34078720;
  RtlCopyUnicodeString((PUNICODE_STRING)&WPP_MAIN_CB.Dpc.SystemArgument2, RegistryPath);
  result = WdfVersionBind(
             DriverObject,
             &WPP_MAIN_CB.Dpc.SystemArgument2,
             &unk_1C00404D0,
             &WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink);
  if ( result >= 0 )
  {
    WPP_MAIN_CB.Dpc.SystemArgument1 = *(void **)(WdfFunctions_01015 + 1608);
    inited = FxStubBindClasses((struct _WDF_BIND_INFO *)WPP_MAIN_CB.Dpc.SystemArgument1);
    if ( inited < 0
      || (inited = FxStubInitTypes(), inited < 0)
      || (inited = DriverEntry(DriverObject, RegistryPath), inited < 0) )
    {
      FxStubDriverUnloadCommon();
      return inited;
    }
    else
    {
      if ( LOBYTE(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink[3].Flink) )
      {
        DeferredRoutine = WPP_MAIN_CB.Dpc.DeferredRoutine;
        if ( DriverObject->DriverUnload )
          DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))DriverObject->DriverUnload;
        WPP_MAIN_CB.Dpc.DeferredRoutine = DeferredRoutine;
        DriverObject->DriverUnload = (void (__fastcall *)(_DRIVER_OBJECT *))FxStubDriverUnload;
      }
      else if ( ((__int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink->Blink & 2) != 0 )
      {
        WPP_MAIN_CB.Dpc.SystemArgument1 = FxStubDriverMiniportUnload;
      }
      return 0;
    }
  }
  return result;
}
