/*
 * XREFs of IoControl_WdfEvtIoDeviceControl @ 0x1C00264D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0005480 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006B30 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 */

PDEVICE_OBJECT __fastcall IoControl_WdfEvtIoDeviceControl(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rdx
  PDEVICE_OBJECT result; // rax
  char v13; // al
  __int64 v14; // r8
  __int64 v15; // [rsp+28h] [rbp-30h]
  __int64 v16; // [rsp+28h] [rbp-30h]

  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00411B0);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  if ( (unsigned __int8)((__int64 (__fastcall *)(void *, __int64, __int64, __int64, __int64, int))UcxClassFunctions)(
                          WPP_MAIN_CB.Dpc.DpcData,
                          v10,
                          a2,
                          a3,
                          a4,
                          a5) )
  {
    result = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v15) = a5;
      return (PDEVICE_OBJECT)WPP_RECORDER_SF_d(
                               *(_QWORD *)(*(_QWORD *)(v9 + 8) + 64LL),
                               5u,
                               4u,
                               0xCu,
                               (__int64)&WPP_0efaeb4b1b70bdb0a6b2fd369195f324_Traceguids,
                               v15);
    }
  }
  else
  {
    WPP_RECORDER_SF_qD(
      *(_QWORD *)(*(_QWORD *)(v9 + 8) + 64LL),
      v11,
      4u,
      0xDu,
      (__int64)&WPP_0efaeb4b1b70bdb0a6b2fd369195f324_Traceguids,
      a2,
      a5);
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2240))(WdfDriverGlobals, a2);
    if ( v13 == 1 )
    {
      LODWORD(v16) = a5;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v9 + 8) + 64LL),
        2u,
        4u,
        0xFu,
        (__int64)&WPP_0efaeb4b1b70bdb0a6b2fd369195f324_Traceguids,
        v16);
      v14 = 3221225488LL;
    }
    else
    {
      LODWORD(v16) = v13;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v9 + 8) + 64LL),
        3u,
        4u,
        0xEu,
        (__int64)&WPP_0efaeb4b1b70bdb0a6b2fd369195f324_Traceguids,
        v16);
      v14 = 3221225485LL;
    }
    return (PDEVICE_OBJECT)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2104))(
                             WdfDriverGlobals,
                             a2,
                             v14);
  }
  return result;
}
