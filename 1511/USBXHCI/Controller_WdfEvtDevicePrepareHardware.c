/*
 * XREFs of Controller_WdfEvtDevicePrepareHardware @ 0x1C0048BE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0006B30 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C0008E10 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     Controller_ReportFatalError @ 0x1C001F02C (Controller_ReportFatalError.c)
 *     Interrupter_PrepareHardware @ 0x1C0048D00 (Interrupter_PrepareHardware.c)
 *     RootHub_PrepareHardware @ 0x1C0049A50 (RootHub_PrepareHardware.c)
 *     Register_PrepareHardware @ 0x1C0049F18 (Register_PrepareHardware.c)
 *     CommonBuffer_Create @ 0x1C004B100 (CommonBuffer_Create.c)
 *     Command_PrepareHardware @ 0x1C004B4E0 (Command_PrepareHardware.c)
 *     DeviceSlot_PrepareHardware @ 0x1C004B6E0 (DeviceSlot_PrepareHardware.c)
 */

__int64 __fastcall Controller_WdfEvtDevicePrepareHardware(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  unsigned __int16 v10; // r9
  __int64 v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+28h] [rbp-20h]

  v6 = *(__int64 **)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                       WdfDriverGlobals,
                       a1,
                       off_1C00412A0)
                   + 8);
  WPP_RECORDER_SF_q(v6[8], 4u, 3u, 0x2Cu, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids, a1);
  v7 = Register_PrepareHardware(v6[10], a3);
  v8 = v7;
  if ( v7 < 0 )
  {
    v10 = 45;
  }
  else if ( v6[11] || (v7 = CommonBuffer_Create(a1, v6), v8 = v7, v7 >= 0) )
  {
    v7 = Interrupter_PrepareHardware(v6[12], a2, a3);
    v8 = v7;
    if ( v7 < 0 )
    {
      v10 = 47;
    }
    else
    {
      v7 = DeviceSlot_PrepareHardware(v6[13]);
      v8 = v7;
      if ( v7 < 0 )
      {
        v10 = 48;
      }
      else
      {
        v7 = Command_PrepareHardware(v6[14]);
        v8 = v7;
        if ( v7 < 0 )
        {
          v10 = 49;
        }
        else
        {
          v7 = RootHub_PrepareHardware(v6[15]);
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
  WPP_RECORDER_SF_d(v6[8], 2u, 3u, v10, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids, v11);
  DbgPrint("USBXHCI: Controller enumeration failure in WdfEvtDevicePrepareHardware\n");
  LODWORD(v12) = v8;
  WPP_RECORDER_SF_d(v6[8], 1u, 3u, 0x33u, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids, v12);
  Controller_ReportFatalError((__int64)v6, 32, 4124, 0LL, 0LL, 0LL);
  if ( !KdRefreshDebuggerNotPresent() )
    __debugbreak();
  return v8;
}
