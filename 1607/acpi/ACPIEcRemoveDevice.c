/*
 * XREFs of ACPIEcRemoveDevice @ 0x1C004CBF0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C0046610 (ACPIBusIrpRemoveDevice.c)
 *     ACPIEcStopRemoveDeviceCommon @ 0x1C004D058 (ACPIEcStopRemoveDeviceCommon.c)
 */

__int64 __fastcall ACPIEcRemoveDevice(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rbp
  __int64 v5; // rsi
  __int64 result; // rax
  unsigned int v7; // eax
  __int64 v8; // rdx
  unsigned int v9; // ebx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = *(_QWORD *)(DeviceExtension + 184);
  result = ACPIBusIrpRemoveDevice(a1, a2);
  if ( (int)result >= 0 )
  {
    v7 = ACPIEcStopRemoveDeviceCommon(v5);
    *(_QWORD *)v5 = 0LL;
    v9 = v7;
    if ( (*(_QWORD *)(DeviceExtension + 8) & 0x80000000080LL) != 0 )
    {
      AMLIDereferenceHandleEx(*(volatile signed __int32 **)(v5 + 56), v8);
      *(_QWORD *)(v5 + 56) = 0LL;
    }
    return v9;
  }
  return result;
}
