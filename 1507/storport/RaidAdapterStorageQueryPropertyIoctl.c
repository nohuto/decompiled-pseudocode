/*
 * XREFs of RaidAdapterStorageQueryPropertyIoctl @ 0x1C004C3F4
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C00039F4 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidGetStorageAdapterPhysicalTopologyProperty @ 0x1C0023E54 (RaidGetStorageAdapterPhysicalTopologyProperty.c)
 *     RaidGetStorageAdapterProtocolSpecificProperty @ 0x1C0023F9C (RaidGetStorageAdapterProtocolSpecificProperty.c)
 *     RaidGetStorageAdapterTemperatureProperty @ 0x1C0024148 (RaidGetStorageAdapterTemperatureProperty.c)
 *     RaidGetStorageAdapterProperty @ 0x1C004C534 (RaidGetStorageAdapterProperty.c)
 *     RaidGetStorageMiniportProperty @ 0x1C005058C (RaidGetStorageMiniportProperty.c)
 */

__int64 __fastcall RaidAdapterStorageQueryPropertyIoctl(__int64 a1, IRP *a2)
{
  int StorageAdapterPhysicalTopologyProperty; // edx
  _IRP *MasterIrp; // r9
  unsigned __int64 v6; // r8
  __int64 v7; // rcx
  int v8; // ecx
  int v9; // r8d
  int StorageAdapterTemperatureProperty; // eax
  unsigned int v11; // r8d
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  size_t Length; // [rsp+38h] [rbp+10h] BYREF

  StorageAdapterPhysicalTopologyProperty = -1073741811;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  if ( Length < 8
    || (v6 = *(int *)&MasterIrp->Type, (unsigned int)v6 > 0x35)
    || (v7 = 0x2A000000000022LL, !_bittest64(&v7, v6)) )
  {
    a2->IoStatus.Information = 0LL;
    v11 = -1073741808;
    return RaidCompleteRequestEx(a2, 0, v11);
  }
  v8 = *(_DWORD *)(&MasterIrp->Size + 1);
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      StorageAdapterPhysicalTopologyProperty = 0;
    }
    else
    {
      a2->IoStatus.Information = 0LL;
      StorageAdapterPhysicalTopologyProperty = -1073741808;
    }
  }
  else
  {
    v9 = v6 - 1;
    if ( v9 )
    {
      v13 = v9 - 4;
      if ( v13 )
      {
        v14 = v13 - 44;
        if ( v14 )
        {
          v15 = v14 - 2;
          if ( v15 )
          {
            if ( v15 == 2 )
            {
              StorageAdapterPhysicalTopologyProperty = RaidGetStorageAdapterPhysicalTopologyProperty(a1, a2, &Length);
              a2->IoStatus.Information = Length;
            }
            goto LABEL_8;
          }
          StorageAdapterTemperatureProperty = RaidGetStorageAdapterTemperatureProperty(a1, a2, &Length);
        }
        else
        {
          StorageAdapterTemperatureProperty = RaidGetStorageAdapterProtocolSpecificProperty(a1, a2, &Length);
        }
      }
      else
      {
        StorageAdapterTemperatureProperty = RaidGetStorageMiniportProperty(a1, MasterIrp, &Length);
      }
    }
    else
    {
      StorageAdapterTemperatureProperty = RaidGetStorageAdapterProperty(a1, MasterIrp, &Length);
    }
    StorageAdapterPhysicalTopologyProperty = StorageAdapterTemperatureProperty;
    a2->IoStatus.Information = Length;
  }
LABEL_8:
  v11 = StorageAdapterPhysicalTopologyProperty;
  return RaidCompleteRequestEx(a2, 0, v11);
}
