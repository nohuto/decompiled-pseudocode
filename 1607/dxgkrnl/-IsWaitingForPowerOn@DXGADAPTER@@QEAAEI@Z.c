/*
 * XREFs of ?IsWaitingForPowerOn@DXGADAPTER@@QEAAEI@Z @ 0x1C0145914
 * Callers:
 *     DxgkCheckMonitorPowerState @ 0x1C00CB110 (DxgkCheckMonitorPowerState.c)
 * Callees:
 *     ?DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z @ 0x1C01A0A48 (-DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z.c)
 */

unsigned __int8 __fastcall DXGADAPTER::IsWaitingForPowerOn(DXGADAPTER *this, unsigned int a2)
{
  int IsWaitingForPowerOn; // eax
  unsigned __int8 v3; // cl
  unsigned __int8 v5; // [rsp+40h] [rbp+18h] BYREF

  IsWaitingForPowerOn = DmmIsWaitingForPowerOn(this, a2, &v5);
  v3 = v5;
  if ( IsWaitingForPowerOn < 0 )
    return 0;
  return v3;
}
