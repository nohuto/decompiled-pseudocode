/*
 * XREFs of ACPIEcStopDevice @ 0x1C004D010
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     ACPIEcStopRemoveDeviceCommon @ 0x1C004D058 (ACPIEcStopRemoveDeviceCommon.c)
 *     ACPIBusIrpStopDevice @ 0x1C009A600 (ACPIBusIrpStopDevice.c)
 */

__int64 __fastcall ACPIEcStopDevice(ULONG_PTR a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 result; // rax

  v4 = *(_QWORD *)(ACPIInternalGetDeviceExtension(a1) + 184);
  result = ACPIBusIrpStopDevice(a1, a2);
  if ( (int)result >= 0 )
    return ACPIEcStopRemoveDeviceCommon(v4);
  return result;
}
