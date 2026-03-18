/*
 * XREFs of ACPIEcStartDevice @ 0x1C003A890
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitStartDevice @ 0x1C00083A0 (ACPIInitStartDevice.c)
 *     AMLIIsEqualHandle @ 0x1C00097AC (AMLIIsEqualHandle.c)
 *     AMLIReferenceHandleEx @ 0x1C0016AC0 (AMLIReferenceHandleEx.c)
 *     ACPIEcCreateEcData @ 0x1C003A738 (ACPIEcCreateEcData.c)
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
  v7 = *(ULONG_PTR **)(DeviceExtension + 176);
  if ( !v7 )
  {
    if ( !gECDTContext || !AMLIIsEqualHandle(*(_QWORD **)(DeviceExtension + 704), *(_QWORD **)(gECDTContext + 56)) )
    {
      EcData = ACPIEcCreateEcData();
      if ( !EcData )
        return 3221225626LL;
      v10 = *(_QWORD *)(v6 + 704);
      EcData[7] = v10;
      AMLIReferenceHandleEx(v10);
    }
    *(_QWORD *)(v6 + 176) = v7;
  }
  *v7 = a1;
  result = ACPIInitStartDevice(
             a1,
             v5,
             (void (__fastcall *)(__int64, __int64, _QWORD))ACPIEcStartDeviceCompletion,
             a2,
             a2);
  if ( (int)result >= 0 )
    return 259LL;
  return result;
}
