/*
 * XREFs of ?PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z @ 0x1C0018970
 * Callers:
 *     ?DxgkPowerRuntimeDevicePowerNotRequiredCallback@@YAXPEAX@Z @ 0x1C0010BC0 (-DxgkPowerRuntimeDevicePowerNotRequiredCallback@@YAXPEAX@Z.c)
 *     ?DxgkPowerRuntimeDevicePowerRequiredCallback@@YAXPEAX@Z @ 0x1C001AB70 (-DxgkPowerRuntimeDevicePowerRequiredCallback@@YAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::PowerRuntimeDevicePowerRequiredCallback(DXGADAPTER *this, char a2)
{
  __int64 v2; // rcx
  bool v3; // zf
  int v4; // edx

  if ( *((_BYTE *)this + 165) )
  {
    if ( a2 )
      PoFxReportDevicePoweredOn(*((_QWORD *)this + 254));
  }
  else
  {
    v2 = *((_QWORD *)this + 22);
    v3 = a2 == 0;
    v4 = 4;
    if ( !v3 )
      v4 = 1;
    DpiRequestDevicePowerState(v2, v4, 2);
  }
}
