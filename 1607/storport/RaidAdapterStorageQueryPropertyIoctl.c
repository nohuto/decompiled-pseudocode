/*
 * XREFs of RaidAdapterStorageQueryPropertyIoctl @ 0x1C005736C
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C00020D8 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidGetStorageAdapterPhysicalTopologyProperty @ 0x1C0029D7C (RaidGetStorageAdapterPhysicalTopologyProperty.c)
 *     RaidGetStorageAdapterProtocolSpecificProperty @ 0x1C0029EC4 (RaidGetStorageAdapterProtocolSpecificProperty.c)
 *     RaidGetStorageAdapterRpmbProperty @ 0x1C002A070 (RaidGetStorageAdapterRpmbProperty.c)
 *     RaidGetStorageAdapterTemperatureProperty @ 0x1C002A0C4 (RaidGetStorageAdapterTemperatureProperty.c)
 *     RaidGetStorageAdapterProperty @ 0x1C00574F0 (RaidGetStorageAdapterProperty.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C0058960 (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaidGetStorageMiniportProperty @ 0x1C005C194 (RaidGetStorageMiniportProperty.c)
 */

__int64 __fastcall RaidAdapterStorageQueryPropertyIoctl(_DWORD *a1, IRP *a2)
{
  int StorageAdapterRpmbProperty; // edx
  _IRP *MasterIrp; // r10
  unsigned __int64 v5; // r8
  __int64 v6; // r9
  int v7; // r9d
  int v8; // r8d
  int StorageAdapterPhysicalTopologyProperty; // eax
  unsigned int v10; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  int v16; // r8d
  unsigned __int64 v17; // r11
  size_t Length; // [rsp+38h] [rbp+18h] BYREF

  StorageAdapterRpmbProperty = -1073741811;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  if ( Length < 8
    || (v5 = *(int *)&MasterIrp->Type, (unsigned int)v5 > 0x39)
    || (v6 = 0x22A000000010022LL, !_bittest64(&v6, v5)) )
  {
    a2->IoStatus.Information = 0LL;
    v10 = -1073741808;
    return RaidCompleteRequestEx(a2, 0, v10);
  }
  v7 = *(_DWORD *)(&MasterIrp->Size + 1);
  if ( v7 )
  {
    if ( v7 == 1 )
    {
      StorageAdapterRpmbProperty = 0;
    }
    else
    {
      a2->IoStatus.Information = 0LL;
      StorageAdapterRpmbProperty = -1073741808;
    }
    goto LABEL_8;
  }
  v8 = v5 - 1;
  if ( v8 )
  {
    v12 = v8 - 4;
    if ( v12 )
    {
      v13 = v12 - 11;
      if ( !v13 )
      {
        StorageAdapterRpmbProperty = RaidGetStorageAdapterRpmbProperty(a1, (__int64)a2);
        a2->IoStatus.Information = v17;
        goto LABEL_8;
      }
      v14 = v13 - 33;
      if ( v14 )
      {
        v15 = v14 - 2;
        if ( v15 )
        {
          v16 = v15 - 2;
          if ( v16 )
          {
            if ( v16 == 4 )
            {
              StorageAdapterRpmbProperty = RaidGetStorageAdapterSerialNumberProperty(a1, MasterIrp, &Length);
              a2->IoStatus.Information = Length;
            }
            goto LABEL_8;
          }
          StorageAdapterPhysicalTopologyProperty = RaidGetStorageAdapterPhysicalTopologyProperty(
                                                     (__int64)a1,
                                                     a2,
                                                     &Length);
        }
        else
        {
          StorageAdapterPhysicalTopologyProperty = RaidGetStorageAdapterTemperatureProperty((__int64)a1, a2, &Length);
        }
      }
      else
      {
        StorageAdapterPhysicalTopologyProperty = RaidGetStorageAdapterProtocolSpecificProperty((__int64)a1, a2, &Length);
      }
    }
    else
    {
      StorageAdapterPhysicalTopologyProperty = RaidGetStorageMiniportProperty(a1, MasterIrp, &Length);
    }
  }
  else
  {
    StorageAdapterPhysicalTopologyProperty = RaidGetStorageAdapterProperty(a1, MasterIrp, &Length);
  }
  StorageAdapterRpmbProperty = StorageAdapterPhysicalTopologyProperty;
  a2->IoStatus.Information = Length;
LABEL_8:
  v10 = StorageAdapterRpmbProperty;
  return RaidCompleteRequestEx(a2, 0, v10);
}
