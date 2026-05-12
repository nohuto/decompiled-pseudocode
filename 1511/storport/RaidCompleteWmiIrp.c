/*
 * XREFs of RaidCompleteWmiIrp @ 0x1C00118E8
 * Callers:
 *     RaWmiDispatchIrp @ 0x1C0052F8C (RaWmiDispatchIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0002A80 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaidCompleteWmiIrp(__int64 a1, IRP *a2)
{
  __int64 v2; // r10
  unsigned int v3; // r8d
  _IO_STACK_LOCATION *CurrentStackLocation; // rax

  v2 = *(_QWORD *)(a1 + 64);
  v3 = -1073741811;
  if ( !*(_DWORD *)v2 )
  {
    CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.QueryDeviceRelations
                                                                                           + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 24), a2);
  }
  if ( *(_DWORD *)v2 == 1 )
    return (unsigned int)RaidCompleteRequestEx(a2, 0, a2->IoStatus.Status);
  return v3;
}
