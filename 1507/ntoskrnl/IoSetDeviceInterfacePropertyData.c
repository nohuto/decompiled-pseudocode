/*
 * XREFs of IoSetDeviceInterfacePropertyData @ 0x1405B36A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IoSetDeviceInterfacePropertyData(int a1, int a2, int a3, __int64 a4, int a5, int a6, __int64 a7)
{
  int v7; // eax

  v7 = 0;
  if ( a7 )
    v7 = a5;
  else
    a6 = 0;
  return PnpSetDeviceInterfacePropertyData(a1, a2, a3, a6, v7, a6, a7);
}
