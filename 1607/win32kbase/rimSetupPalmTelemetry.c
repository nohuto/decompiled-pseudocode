/*
 * XREFs of rimSetupPalmTelemetry @ 0x1C0005530
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0008C38 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolZInit @ 0x1C0037AC0 (Win32AllocPoolZInit.c)
 *     ?_ResetTelemetryData@PalmTelemetry@@AEAAXXZ @ 0x1C008E070 (-_ResetTelemetryData@PalmTelemetry@@AEAAXXZ.c)
 */

void __fastcall rimSetupPalmTelemetry(__int64 a1)
{
  PalmTelemetry *v2; // rax
  int v3; // edx
  PalmTelemetry *v4; // rbx

  if ( !*(_QWORD *)(a1 + 960) )
  {
    v2 = (PalmTelemetry *)Win32AllocPoolZInit(0x3010uLL);
    v4 = v2;
    if ( v2 )
    {
      PalmTelemetry::_ResetTelemetryData(v2);
      *((_DWORD *)v4 + 4) = 0;
      *(_DWORD *)v4 = 0;
      *((_DWORD *)v4 + 1) = 0;
      *(_QWORD *)(a1 + 960) = v4;
    }
    else
    {
      LOBYTE(v3) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v3,
        3,
        11,
        (__int64)&WPP_5b4e58945ecf306c06c1bbe0f8341904_Traceguids);
    }
  }
}
