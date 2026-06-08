/*
 * XREFs of AcquireAcpiInterfaces @ 0x1C0014924
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0012314 (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AcquireAcpiInterfaces(__int64 a1)
{
  __int64 v2; // rax
  int v3; // edi
  void (__fastcall *v5)(_QWORD); // rax
  __int16 v6; // [rsp+20h] [rbp-28h]
  __int16 v7; // [rsp+28h] [rbp-20h]

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v7 = 1;
  v6 = 88;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, __int64, __int16, __int16, _QWORD))(WdfFunctions_01015 + 1048))(
         WdfDriverGlobals,
         v2,
         &GUID_ACPI_INTERFACE_STANDARD,
         a1 + 80,
         v6,
         v7,
         0LL);
  if ( v3 >= 0 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, void (__fastcall *)(PDEVICE_OBJECT *, int), __int64))(a1 + 152))(
           *(_QWORD *)(a1 + 8),
           AcpiNotifyCallback,
           a1);
    if ( v3 < 0 )
    {
      v5 = *(void (__fastcall **)(_QWORD))(a1 + 104);
      if ( v5 )
        v5(*(_QWORD *)(a1 + 88));
      *(_QWORD *)(a1 + 152) = 0LL;
      *(_QWORD *)(a1 + 104) = 0LL;
    }
  }
  return (unsigned int)v3;
}
