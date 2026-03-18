/*
 * XREFs of ACPIEcRemoveDevice @ 0x1C0039C00
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C0035D00 (ACPIBusIrpRemoveDevice.c)
 *     ACPIEcStopRemoveDeviceCommon @ 0x1C0039EC8 (ACPIEcStopRemoveDeviceCommon.c)
 */

__int64 __fastcall ACPIEcRemoveDevice(ULONG_PTR a1, IRP *a2)
{
  _QWORD *DeviceExtension; // r14
  __int64 v5; // rsi
  __int64 result; // rax
  unsigned int v7; // eax
  unsigned int v8; // ebx

  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(a1);
  v5 = DeviceExtension[22];
  result = ACPIBusIrpRemoveDevice(a1, a2);
  if ( (int)result >= 0 )
  {
    v7 = ACPIEcStopRemoveDeviceCommon(v5);
    *(_QWORD *)v5 = 0LL;
    v8 = v7;
    if ( (*DeviceExtension & 0x80000000080LL) != 0 )
    {
      AMLIDereferenceHandleEx(*(volatile signed __int32 **)(v5 + 56));
      *(_QWORD *)(v5 + 56) = 0LL;
    }
    return v8;
  }
  return result;
}
