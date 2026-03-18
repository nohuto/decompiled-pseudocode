/*
 * XREFs of ACPIBusIrpQueryId @ 0x1C0065160
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInternalSetFlags @ 0x1C00044E0 (ACPIInternalSetFlags.c)
 *     ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule @ 0x1C0065280 (ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1C00652E4 (ACPIBusIrpQueryHardwareId.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C0071048 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C007140C (ACPIBusIrpQueryDeviceId.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1C0071E90 (ACPIBusIrpQueryInstanceId.c)
 */

__int64 __fastcall ACPIBusIrpQueryId(ULONG_PTR a1, IRP *a2)
{
  int Status; // esi
  PVOID v3; // rdi
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 DeviceExtension; // rax
  unsigned int Length; // ebx
  __int64 v8; // r15
  int v9; // eax
  int v10; // eax
  int v12; // eax
  int v13; // [rsp+58h] [rbp+38h] BYREF
  PVOID P; // [rsp+60h] [rbp+40h] BYREF
  __int64 v15; // [rsp+68h] [rbp+48h] BYREF

  Status = a2->IoStatus.Status;
  v3 = 0LL;
  v15 = 0LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  P = 0LL;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  Length = CurrentStackLocation->Parameters.Read.Length;
  v8 = DeviceExtension;
  switch ( Length )
  {
    case 0u:
      v12 = ACPIBusIrpQueryDeviceId(&P, &v15, DeviceExtension);
      v3 = P;
      Status = v12;
      goto LABEL_17;
    case 1u:
      v10 = ACPIBusIrpQueryHardwareId(&P, &v15, DeviceExtension);
      break;
    case 2u:
      v10 = ACPIBusIrpQueryCompatibleId(&P, &v15, DeviceExtension);
      break;
    case 3u:
      v9 = ACPIBusIrpQueryInstanceId(&P, &v15, DeviceExtension);
      v3 = P;
      Status = v9;
      goto LABEL_13;
    default:
LABEL_17:
      if ( Length - 1 > 1 )
        goto LABEL_13;
      goto LABEL_8;
  }
  v3 = P;
  Status = v10;
LABEL_8:
  if ( Status < 0 )
    goto LABEL_19;
  if ( v3 && (int)ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule(Length, v3, &v13) >= 0 && v13 == 2 )
    ACPIInternalSetFlags((void *)(v8 + 904), 0x800000uLL);
LABEL_13:
  if ( Status >= 0 )
  {
    a2->IoStatus.Information = (unsigned __int64)v3;
    goto LABEL_15;
  }
LABEL_19:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x53706341u);
LABEL_15:
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  return (unsigned int)Status;
}
