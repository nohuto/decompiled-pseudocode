/*
 * XREFs of RaidGetStorageAdapterProtocolSpecificProperty @ 0x1C0023F9C
 * Callers:
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C004C3F4 (RaidAdapterStorageQueryPropertyIoctl.c)
 * Callees:
 *     memmove @ 0x1C0012FC0 (memmove.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0022AA0 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaBuildQueryProtocolSpecificPropertyBufferForMiniport @ 0x1C002F800 (RaBuildQueryProtocolSpecificPropertyBufferForMiniport.c)
 */

__int64 __fastcall RaidGetStorageAdapterProtocolSpecificProperty(__int64 a1, IRP *a2, _QWORD *a3)
{
  _IRP *MasterIrp; // rsi
  unsigned int *v4; // rbp
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned __int64 Length; // r9
  int v10; // edi
  __int64 IrpCount; // rax
  unsigned int SystemBuffer_high; // r8d
  unsigned int v13; // ebx
  int v14; // eax
  unsigned int v16; // [rsp+78h] [rbp+10h] BYREF
  PVOID P; // [rsp+80h] [rbp+18h] BYREF

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v4 = 0LL;
  v16 = 0;
  *a3 = 0LL;
  P = 0LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( CurrentStackLocation->Parameters.Create.Options < 0x30 )
    return (unsigned int)-1073741585;
  if ( LODWORD(MasterIrp->MdlAddress)
    && HIDWORD(MasterIrp->MdlAddress)
    && ((IrpCount = (unsigned int)MasterIrp->AssociatedIrp.IrpCount, !(_DWORD)IrpCount)
     || (unsigned int)IrpCount >= 0x28 && HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer)) )
  {
    if ( (unsigned int)Length < 0x30 )
    {
      if ( (unsigned int)Length < 8 )
      {
        return (unsigned int)-1073741789;
      }
      else
      {
        *a3 = 8LL;
        v10 = 0;
        *(_DWORD *)&MasterIrp->Type = 48;
        *(_DWORD *)(&MasterIrp->Size + 1) = 48;
      }
      return (unsigned int)v10;
    }
    if ( Length < IrpCount + (unsigned __int64)HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer) + 8 )
      return (unsigned int)-1073741585;
    v10 = RaBuildQueryProtocolSpecificPropertyBufferForMiniport(*(_QWORD *)(a1 + 8), a2, &P, &v16);
    if ( v10 < 0 )
    {
      v4 = (unsigned int *)P;
    }
    else
    {
      v4 = (unsigned int *)P;
      v10 = RaidAdapterSendSrbIoControlSynchronously(a1, a2, (__int64)P, v16, 0LL, 0, 64);
      if ( v10 >= 0 )
      {
        *(_DWORD *)&MasterIrp->Type = 48;
        *(_DWORD *)(&MasterIrp->Size + 1) = 48;
        LODWORD(MasterIrp->ThreadListEntry.Flink) = v4[15];
        HIDWORD(MasterIrp->ThreadListEntry.Flink) = v4[16];
        LODWORD(MasterIrp->ThreadListEntry.Blink) = v4[17];
        HIDWORD(MasterIrp->ThreadListEntry.Blink) = v4[18];
        SystemBuffer_high = HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer);
        if ( SystemBuffer_high )
        {
          v13 = v4[14];
          if ( SystemBuffer_high < v13 )
            v13 = HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer);
          memmove(
            (char *)&MasterIrp->MdlAddress + (unsigned int)MasterIrp->AssociatedIrp.IrpCount,
            (char *)v4 + v4[13] + 36,
            v13);
          v14 = MasterIrp->AssociatedIrp.IrpCount + 8;
          HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer) = v13;
          *a3 = v13 + v14;
        }
        else
        {
          *a3 = 48LL;
        }
      }
    }
  }
  else
  {
    v10 = -1073741585;
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0x72536152u);
  return (unsigned int)v10;
}
