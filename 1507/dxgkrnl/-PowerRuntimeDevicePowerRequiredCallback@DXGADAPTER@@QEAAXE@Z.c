/*
 * XREFs of ?PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z @ 0x1C001A110
 * Callers:
 *     ?DxgkPowerRuntimeDevicePowerNotRequiredCallback@@YAXPEAX@Z @ 0x1C00192F0 (-DxgkPowerRuntimeDevicePowerNotRequiredCallback@@YAXPEAX@Z.c)
 *     ?DxgkPowerRuntimeDevicePowerRequiredCallback@@YAXPEAX@Z @ 0x1C0019350 (-DxgkPowerRuntimeDevicePowerRequiredCallback@@YAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::PowerRuntimeDevicePowerRequiredCallback(DXGADAPTER *this, char a2)
{
  __int64 v2; // rcx
  bool v3; // zf
  __int64 v4; // rdx

  if ( *((_BYTE *)this + 165) )
  {
    if ( a2 )
      PoFxReportDevicePoweredOn(*((_QWORD *)this + 252));
  }
  else
  {
    v2 = *((_QWORD *)this + 22);
    v3 = a2 == 0;
    v4 = 4LL;
    if ( !v3 )
      v4 = 1LL;
    DpiRequestDevicePowerState(v2, v4);
  }
}
