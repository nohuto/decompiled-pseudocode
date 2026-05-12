/*
 * XREFs of RaUnitQueryIdIrp @ 0x1C0059078
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0001A28 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidUnitGetInstanceId @ 0x1C0010AB0 (RaidUnitGetInstanceId.c)
 *     RaidUnitGetDeviceId @ 0x1C0010BA0 (RaidUnitGetDeviceId.c)
 *     RaidUnitGetCompatibleIds @ 0x1C0011DE4 (RaidUnitGetCompatibleIds.c)
 *     RaidUnitGetHardwareIds @ 0x1C0013C64 (RaidUnitGetHardwareIds.c)
 */

__int64 __fastcall RaUnitQueryIdIrp(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  unsigned int Length; // r9d
  unsigned int v5; // r9d
  unsigned int v6; // r9d
  unsigned int InstanceId; // eax
  unsigned int Status; // r8d
  wchar_t *v10; // [rsp+38h] [rbp+10h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v10 = 0LL;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( Length )
  {
    v5 = Length - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 != 1 )
        {
          Status = a2->IoStatus.Status;
          v10 = 0LL;
          goto LABEL_7;
        }
        InstanceId = RaidUnitGetInstanceId(a1, &v10);
      }
      else
      {
        InstanceId = RaidUnitGetCompatibleIds(a1, &v10);
      }
    }
    else
    {
      InstanceId = RaidUnitGetHardwareIds(a1, &v10);
    }
  }
  else
  {
    InstanceId = RaidUnitGetDeviceId(a1, &v10);
  }
  Status = InstanceId;
LABEL_7:
  a2->IoStatus.Information = (unsigned __int64)v10;
  return RaidCompleteRequestEx(a2, 0, Status);
}
