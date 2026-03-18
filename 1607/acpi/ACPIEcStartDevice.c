/*
 * XREFs of ACPIEcStartDevice @ 0x1C004CC70
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitStartDevice @ 0x1C0009FCC (ACPIInitStartDevice.c)
 *     AMLIReferenceHandleEx @ 0x1C000E210 (AMLIReferenceHandleEx.c)
 *     ACPIEcCreateEcData @ 0x1C004CB18 (ACPIEcCreateEcData.c)
 *     AMLIIsEqualHandle @ 0x1C005977C (AMLIIsEqualHandle.c)
 */

__int64 __fastcall ACPIEcStartDevice(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rax
  __int64 v5; // rbp
  __int64 v6; // rbx
  ULONG_PTR *v7; // r8
  _QWORD *EcData; // rax
  __int64 result; // rax
  __int64 v10; // rcx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = *(_QWORD *)(a2 + 184);
  v6 = DeviceExtension;
  v7 = *(ULONG_PTR **)(DeviceExtension + 184);
  if ( !v7 )
  {
    if ( !gECDTContext
      || !(unsigned __int8)AMLIIsEqualHandle(*(_QWORD *)(DeviceExtension + 712), *(_QWORD *)(gECDTContext + 56)) )
    {
      EcData = ACPIEcCreateEcData();
      if ( !EcData )
        return 3221225626LL;
      v10 = *(_QWORD *)(v6 + 712);
      EcData[7] = v10;
      AMLIReferenceHandleEx(v10);
    }
    *(_QWORD *)(v6 + 184) = v7;
  }
  *v7 = a1;
  result = ACPIInitStartDevice(
             a1,
             v5,
             (void (__fastcall *)(_QWORD *, __int64, _QWORD))&ACPIEcStartDeviceCompletion,
             a2,
             a2);
  if ( (int)result >= 0 )
    return 259LL;
  return result;
}
