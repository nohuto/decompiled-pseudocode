/*
 * XREFs of ACPIRootIrpQueryPower @ 0x1C00407D0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     AMLIGetParent @ 0x1C000B88C (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     AMLIIsNamedChildPresent @ 0x1C000D680 (AMLIIsNamedChildPresent.c)
 *     ACPIDispatchForwardPowerIrp @ 0x1C0039600 (ACPIDispatchForwardPowerIrp.c)
 */

__int64 __fastcall ACPIRootIrpQueryPower(ULONG_PTR a1, IRP *a2)
{
  int Status; // ebx
  char v5; // di
  __int64 DeviceExtension; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int LowPart; // eax
  int v9; // ebx
  volatile signed __int32 *v10; // rbp

  Status = a2->IoStatus.Status;
  v5 = 1;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->Parameters.Create.Options )
    goto LABEL_18;
  if ( CurrentStackLocation->Parameters.Create.EaLength == 7 )
    goto LABEL_3;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  switch ( LowPart )
  {
    case 1u:
      v9 = 1597002591;
      goto LABEL_14;
    case 2u:
      v9 = 1597068127;
      goto LABEL_14;
    case 3u:
      v9 = 1597133663;
      goto LABEL_14;
    case 4u:
      v9 = 1597199199;
LABEL_14:
      v10 = (volatile signed __int32 *)AMLIGetParent(*(_QWORD *)(DeviceExtension + 704));
      if ( AMLIIsNamedChildPresent((__int64)v10, v9) )
      {
        Status = 0;
      }
      else
      {
        v5 = 0;
        Status = -1073741808;
      }
      AMLIDereferenceHandleEx(v10);
      goto LABEL_18;
  }
  if ( LowPart - 5 > 1 )
  {
LABEL_3:
    v5 = 0;
    Status = -1073741808;
    goto LABEL_18;
  }
  Status = 0;
LABEL_18:
  a2->IoStatus.Status = Status;
  if ( v5 )
    ACPIDispatchForwardPowerIrp(a1, a2);
  else
    IofCompleteRequest(a2, 0);
  return 259LL;
}
