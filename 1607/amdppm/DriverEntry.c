/*
 * XREFs of DriverEntry @ 0x1C001F170
 * Callers:
 *     DriverEntry_0 @ 0x1C00063B0 (DriverEntry_0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00067E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006B40 (memset.c)
 *     EvtDriverUnload @ 0x1C000F4B0 (EvtDriverUnload.c)
 *     ProcLibGlobalInit @ 0x1C001F33C (ProcLibGlobalInit.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS v4; // ebx
  _QWORD v6[5]; // [rsp+40h] [rbp-28h] BYREF

  memset(v6, 0, 0x20uLL);
  v6[1] = EvtDriverDeviceAdd;
  v6[2] = EvtDriverUnload;
  LODWORD(v6[0]) = 32;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DRIVER_OBJECT *, PUNICODE_STRING, _QWORD, _QWORD *, _QWORD))(WdfFunctions_01015 + 928))(
         WdfDriverGlobals,
         DriverObject,
         RegistryPath,
         0LL,
         v6,
         0LL);
  if ( v4 >= 0 )
  {
    dword_1C00093A4 = KeQueryActiveProcessorAffinity(&unk_1C0009408);
    KeInitializeAffinityEx(&unk_1C0009688);
    v4 = ProcLibGlobalInit((PDEVICE_OBJECT)DriverObject);
    if ( v4 >= 0 )
      return 0;
  }
  EvtDriverUnload();
  return v4;
}
