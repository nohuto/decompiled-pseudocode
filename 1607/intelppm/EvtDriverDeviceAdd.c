/*
 * XREFs of EvtDriverDeviceAdd @ 0x1C00178F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002DC0 (memset.c)
 *     ProcLibDeviceCreate @ 0x1C0017B7C (ProcLibDeviceCreate.c)
 */

__int64 __fastcall EvtDriverDeviceAdd(__int64 a1, __int64 a2)
{
  __int64 v3; // r9
  __int64 result; // rax
  __int64 v5; // r9
  void *v6; // rbx
  _QWORD v7[7]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v8[6]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v9[7]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v10[20]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v11; // [rsp+198h] [rbp+98h] BYREF
  char v12; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v13; // [rsp+1A8h] [rbp+A8h] BYREF

  v11 = a2;
  memset(v10, 0, 0x90uLL);
  v10[5] = EvtDevicePrepareHardware;
  LODWORD(v10[0]) = 144;
  v10[6] = EvtDeviceReleaseHardware;
  v10[14] = EvtDeviceQueryStop;
  v10[1] = EvtDeviceD0Entry;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 440))(WdfDriverGlobals, a2, v10);
  v12 = 2;
  LOBYTE(v3) = 22;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64), __int64, char *, int))(WdfFunctions_01015 + 584))(
             WdfDriverGlobals,
             v11,
             EvtDeviceSetPower,
             v3,
             &v12,
             1);
  if ( (int)result >= 0 )
  {
    v12 = 20;
    LOBYTE(v5) = 27;
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(), __int64, char *, int))(WdfFunctions_01015 + 584))(
               WdfDriverGlobals,
               v11,
               EvtDeviceWdmIrpPreprocessPnp,
               v5,
               &v12,
               1);
    if ( (int)result >= 0 )
    {
      memset(v9, 0, sizeof(v9));
      v9[6] = off_1C000C048;
      LODWORD(v9[0]) = 56;
      v9[3] = 0x100000001LL;
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _QWORD *, __int64 *))(WdfFunctions_01015 + 600))(
                 WdfDriverGlobals,
                 &v11,
                 v9,
                 &v13);
      if ( (int)result >= 0 )
      {
        v6 = (void *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                       WdfDriverGlobals,
                       v13,
                       off_1C000C048);
        result = ProcLibDeviceCreate(v6);
        if ( (int)result >= 0 )
        {
          memset(v7, 0, sizeof(v7));
          v7[1] = v6;
          v7[2] = AcpiCStateIdleCancel;
          LODWORD(v7[0]) = 65592;
          v7[3] = AcpiCStateIdleCancel;
          v7[6] = ProcLibThermalNotification;
          memset(v8, 0, sizeof(v8));
          v8[4] = 0LL;
          v8[1] = v7;
          v8[2] = &GUID_THERMAL_COOLING_INTERFACE;
          LODWORD(v8[0]) = 48;
          result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 1824))(
                     WdfDriverGlobals,
                     v13,
                     v8);
          if ( (int)result >= 0 )
            return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, _QWORD))(WdfFunctions_01015 + 616))(
                     WdfDriverGlobals,
                     v13,
                     &GUID_DEVINTERFACE_THERMAL_COOLING,
                     0LL);
        }
      }
    }
  }
  return result;
}
