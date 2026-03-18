/*
 * XREFs of ?PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z @ 0x1C001CB44
 * Callers:
 *     ?DxgkPowerRuntimeDevicePowerNotRequiredCallback@@YAXPEAX@Z @ 0x1C0011190 (-DxgkPowerRuntimeDevicePowerNotRequiredCallback@@YAXPEAX@Z.c)
 *     ?DxgkPowerRuntimeDevicePowerRequiredCallback@@YAXPEAX@Z @ 0x1C0020CF0 (-DxgkPowerRuntimeDevicePowerRequiredCallback@@YAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::PowerRuntimeDevicePowerRequiredCallback(DXGADAPTER *this, char a2)
{
  __int64 v2; // rcx
  bool v3; // zf
  int v4; // edx

  if ( *((_BYTE *)this + 181) )
  {
    if ( a2 )
      PoFxReportDevicePoweredOn(*((_QWORD *)this + 272));
  }
  else
  {
    v2 = *((_QWORD *)this + 24);
    v3 = a2 == 0;
    v4 = 4;
    if ( !v3 )
      v4 = 1;
    DpiRequestDevicePowerState(v2, v4, 2);
  }
}
