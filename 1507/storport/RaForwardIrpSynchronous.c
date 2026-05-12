/*
 * XREFs of RaForwardIrpSynchronous @ 0x1C000958C
 * Callers:
 *     RaidAdapterDeviceUsageNotificationIrp @ 0x1C00094E8 (RaidAdapterDeviceUsageNotificationIrp.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0010300 (RaidAdapterStartDeviceIrp.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C004CFA8 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1C0053170 (RaidAdapterRemoveDeviceIrp.c)
 * Callees:
 *     RaSendIrpSynchronous @ 0x1C0005B88 (RaSendIrpSynchronous.c)
 */

__int64 __fastcall RaForwardIrpSynchronous(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 result; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.QueryDeviceRelations
                                                                                         + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  result = RaSendIrpSynchronous(a1, a2);
  if ( (int)result >= 0 )
    return (unsigned int)a2->IoStatus.Status;
  return result;
}
