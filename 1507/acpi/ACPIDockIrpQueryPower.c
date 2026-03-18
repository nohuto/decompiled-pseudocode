/*
 * XREFs of ACPIDockIrpQueryPower @ 0x1C00341C0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     AMLIIsNamedChildPresent @ 0x1C000D680 (AMLIIsNamedChildPresent.c)
 *     ACPIDispatchPowerIrpSuccess @ 0x1C00396C0 (ACPIDispatchPowerIrpSuccess.c)
 */

__int64 __fastcall ACPIDockIrpQueryPower(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  __int64 v5; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v7; // edx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  v5 = *(_QWORD *)(DeviceExtension + 176);
  if ( !v5 )
    goto LABEL_14;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->Parameters.Create.Options || CurrentStackLocation->Parameters.Create.EaLength != 7 )
    goto LABEL_14;
  switch ( (CurrentStackLocation->Parameters.Read.Length >> 8) & 0xF )
  {
    case 2u:
      v7 = 826951007;
      break;
    case 3u:
      v7 = 843728223;
      break;
    case 4u:
      v7 = 860505439;
      break;
    case 5u:
      v7 = 877282655;
      break;
    default:
LABEL_14:
      ACPIDispatchPowerIrpSuccess(a1, a2);
      return 259LL;
  }
  if ( AMLIIsNamedChildPresent(*(_QWORD *)(v5 + 704), v7) )
    goto LABEL_14;
  a2->IoStatus.Status = -1073741823;
  IofCompleteRequest(a2, 0);
  return 259LL;
}
