/*
 * XREFs of ACPIThermalEvent @ 0x1C00408E0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 */

void __fastcall ACPIThermalEvent(ULONG_PTR a1, int a2)
{
  __int64 DeviceExtension; // rax
  int v4; // edx
  int v5; // ebx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = 0;
  v5 = a2 - 128;
  if ( v5 )
  {
    if ( v5 == 1 )
      v4 = 536871046;
  }
  else
  {
    v4 = 536870978;
  }
  ACPIThermalLoopEx(DeviceExtension, v4, 0);
}
