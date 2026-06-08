/*
 * XREFs of EvtDeviceWdmIrpPreprocessPnp @ 0x1C0016750
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EvtDeviceWdmIrpPreprocessPnp(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  NTSTATUS DeviceObjectPointer; // ebx
  __int64 v6; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp-20h] BYREF
  struct _UNICODE_STRING ObjectName; // [rsp+48h] [rbp-18h] BYREF
  __int64 v10; // [rsp+98h] [rbp+38h] BYREF
  __int64 v11; // [rsp+A0h] [rbp+40h] BYREF
  PFILE_OBJECT FileObject; // [rsp+A8h] [rbp+48h] BYREF

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C000B048);
  if ( !*(_QWORD *)(v4 + 24)
    && (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015
                                                                                                + 656))(
         WdfDriverGlobals,
         a1,
         11LL,
         512LL,
         0LL,
         &v10) >= 0 )
  {
    ObjectName.Buffer = (unsigned __int16 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 1552))(
                                              WdfDriverGlobals,
                                              v10,
                                              &v11);
    ObjectName.MaximumLength = v11;
    ObjectName.Length = v11 - 2;
    DeviceObjectPointer = IoGetDeviceObjectPointer(&ObjectName, 0x1F01FFu, &FileObject, &DeviceObject);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v10);
    if ( DeviceObjectPointer >= 0 )
      *(_QWORD *)(v4 + 24) = FileObject;
  }
  v6 = WdfFunctions_01015;
  ++*(_BYTE *)(a2 + 67);
  *(_QWORD *)(a2 + 184) += 72LL;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(v6 + 272))(WdfDriverGlobals, a1, a2);
}
