/*
 * XREFs of DriverEntry @ 0x1C001F124
 * Callers:
 *     FxDriverEntryWorker @ 0x1C0001248 (FxDriverEntryWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0005F40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00062C0 (memset.c)
 *     EvtDriverUnload @ 0x1C000F4B0 (EvtDriverUnload.c)
 *     ProcLibGlobalInit @ 0x1C001F2F0 (ProcLibGlobalInit.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS v4; // ebx
  _QWORD v6[5]; // [rsp+40h] [rbp-28h] BYREF

  memset(v6, 0, 0x20uLL);
  v6[1] = EvtDriverDeviceAdd;
  LODWORD(v6[0]) = 32;
  v6[2] = EvtDriverUnload;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DRIVER_OBJECT *, PUNICODE_STRING, _QWORD, _QWORD *, _QWORD))(WdfFunctions_01015 + 928))(
         WdfDriverGlobals,
         DriverObject,
         RegistryPath,
         0LL,
         v6,
         0LL);
  if ( v4 >= 0 )
  {
    dword_1C0009394 = KeQueryActiveProcessorAffinity(&unk_1C00093F8);
    KeInitializeAffinityEx(&unk_1C0009628);
    v4 = ProcLibGlobalInit((PDEVICE_OBJECT)DriverObject);
    if ( v4 >= 0 )
      return 0;
  }
  EvtDriverUnload();
  return v4;
}
