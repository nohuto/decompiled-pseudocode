/*
 * XREFs of RaidGetStorageAdapterPhysicalTopologyProperty @ 0x1C0029D7C
 * Callers:
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C005736C (RaidAdapterStorageQueryPropertyIoctl.c)
 * Callees:
 *     memmove @ 0x1C001AA40 (memmove.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C00289EC (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaBuildQueryPhysicalTopologyBufferForMiniport @ 0x1C0033B18 (RaBuildQueryPhysicalTopologyBufferForMiniport.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C003D238 (StorpLogPhysicalTopologyInfo.c)
 */

__int64 __fastcall RaidGetStorageAdapterPhysicalTopologyProperty(__int64 a1, IRP *a2, size_t *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IRP *MasterIrp; // rsi
  size_t Length; // rbp
  int v9; // edi
  int v10; // eax
  char *v11; // r15
  unsigned int v13; // [rsp+78h] [rbp+10h] BYREF
  PVOID P; // [rsp+80h] [rbp+18h] BYREF

  P = 0LL;
  v13 = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *a3 = 0LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( CurrentStackLocation->Parameters.Create.Options >= 8 )
  {
    if ( (unsigned int)Length >= 0x38 )
    {
      v10 = RaBuildQueryPhysicalTopologyBufferForMiniport(*(_QWORD *)(a1 + 8), a2, &P, &v13);
      v11 = (char *)P;
      v9 = v10;
      if ( v10 >= 0 )
      {
        v9 = RaidAdapterSendSrbIoControlSynchronously(a1, a2, (__int64)P, v13, 0LL, 0, 64);
        if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
        {
          memmove(MasterIrp, v11 + 28, Length);
          *(_DWORD *)&MasterIrp->Type = 56;
          *a3 = Length;
          if ( v9 >= 0 && !*(_BYTE *)(a1 + 5436) && *(_DWORD *)(&MasterIrp->Size + 1) <= (unsigned int)Length )
          {
            *(_BYTE *)(a1 + 5436) = 1;
            StorpLogPhysicalTopologyInfo(a1, MasterIrp, (unsigned int)Length);
          }
        }
      }
      if ( v11 )
        ExFreePoolWithTag(v11, 0x72536152u);
    }
    else if ( (unsigned int)Length < 8 )
    {
      return (unsigned int)-1073741789;
    }
    else
    {
      *a3 = 8LL;
      v9 = 0;
      *(_DWORD *)&MasterIrp->Type = 56;
      *(_DWORD *)(&MasterIrp->Size + 1) = 56;
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return (unsigned int)v9;
}
