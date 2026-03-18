/*
 * XREFs of Controller_WdfEvtDevicePrepareHardware @ 0x1C004E1C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0005BA0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C0008630 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     Controller_ReportFatalError @ 0x1C001F48C (Controller_ReportFatalError.c)
 *     Interrupter_PrepareHardware @ 0x1C004A600 (Interrupter_PrepareHardware.c)
 *     CommonBuffer_Create @ 0x1C004B870 (CommonBuffer_Create.c)
 *     Register_PrepareHardware @ 0x1C004CB40 (Register_PrepareHardware.c)
 *     RootHub_PrepareHardware @ 0x1C004CCE0 (RootHub_PrepareHardware.c)
 *     Command_PrepareHardware @ 0x1C004D944 (Command_PrepareHardware.c)
 *     DeviceSlot_PrepareHardware @ 0x1C004DB40 (DeviceSlot_PrepareHardware.c)
 */

__int64 __fastcall Controller_WdfEvtDevicePrepareHardware(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  unsigned __int16 v10; // r9
  __int64 v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+28h] [rbp-20h]

  v6 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C0043318)
                 + 8);
  WPP_RECORDER_SF_q(*(_QWORD *)(v6 + 64), 4u, 3u, 0x2Cu, (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids, a1);
  v7 = Register_PrepareHardware(*(_QWORD *)(v6 + 80), a3);
  v8 = v7;
  if ( v7 < 0 )
  {
    v10 = 45;
  }
  else if ( *(_QWORD *)(v6 + 88) || (v7 = CommonBuffer_Create(a1, v6, (__int64 **)(v6 + 88)), v8 = v7, v7 >= 0) )
  {
    v7 = Interrupter_PrepareHardware(*(_QWORD *)(v6 + 96), a2, a3);
    v8 = v7;
    if ( v7 < 0 )
    {
      v10 = 47;
    }
    else
    {
      v7 = DeviceSlot_PrepareHardware(*(_QWORD *)(v6 + 104));
      v8 = v7;
      if ( v7 < 0 )
      {
        v10 = 48;
      }
      else
      {
        v7 = Command_PrepareHardware(*(_QWORD *)(v6 + 112));
        v8 = v7;
        if ( v7 < 0 )
        {
          v10 = 49;
        }
        else
        {
          v7 = RootHub_PrepareHardware(*(_QWORD *)(v6 + 120));
          v8 = v7;
          if ( v7 >= 0 )
            return v8;
          v10 = 50;
        }
      }
    }
  }
  else
  {
    v10 = 46;
  }
  LODWORD(v11) = v7;
  WPP_RECORDER_SF_d(*(_QWORD *)(v6 + 64), 2u, 3u, v10, (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids, v11);
  DbgPrint("USBXHCI: Controller enumeration failure in WdfEvtDevicePrepareHardware\n");
  LODWORD(v12) = v8;
  WPP_RECORDER_SF_d(*(_QWORD *)(v6 + 64), 1u, 3u, 0x33u, (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids, v12);
  Controller_ReportFatalError(v6, 32, 4124, 0LL, 0LL, 0LL);
  if ( !KdRefreshDebuggerNotPresent() )
    __debugbreak();
  return v8;
}
