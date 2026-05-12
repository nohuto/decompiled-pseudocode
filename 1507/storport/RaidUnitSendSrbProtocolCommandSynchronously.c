/*
 * XREFs of RaidUnitSendSrbProtocolCommandSynchronously @ 0x1C0033BB4
 * Callers:
 *     RaUnitProtocolCommandIoctl @ 0x1C003120C (RaUnitProtocolCommandIoctl.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C0003B2C (RaidAllocateSrb.c)
 *     RaSendIrpSynchronous @ 0x1C0005B88 (RaSendIrpSynchronous.c)
 *     StorBuildSynchronousScsiRequest @ 0x1C00303A4 (StorBuildSynchronousScsiRequest.c)
 *     StorEtwProtocolCommandCompletion @ 0x1C0035D40 (StorEtwProtocolCommandCompletion.c)
 */

__int64 __fastcall RaidUnitSendSrbProtocolCommandSynchronously(__int64 a1, IRP *a2, char a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  __int64 v4; // r13
  _BYTE *v5; // r14
  _IRP *MasterIrp; // r15
  unsigned int Length; // r12d
  _BYTE *Srb; // rbx
  __int64 v12; // r8
  int v13; // edi
  int v14; // eax
  __int64 v15; // rdi
  int Blink; // eax
  int v17; // eax
  IRP *v18; // rax
  IRP *v19; // r12
  unsigned __int64 v20; // rax
  struct _MDL *MdlAddress; // rcx
  _IO_STATUS_BLOCK v23; // [rsp+20h] [rbp-38h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = *(_QWORD *)(a1 + 24);
  v5 = 0LL;
  v23.Pointer = 0LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v23.Information = 0LL;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( CurrentStackLocation->Parameters.Create.Options > Length )
    Length = CurrentStackLocation->Parameters.Create.Options;
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 9u, *(_BYTE *)(v4 + 402), 0);
  if ( !Srb )
    goto LABEL_4;
  v14 = 0;
  MasterIrp->Flags = 255;
  if ( LODWORD(MasterIrp->ThreadListEntry.Flink) )
    v14 = 128;
  if ( HIDWORD(MasterIrp->ThreadListEntry.Flink) )
    v14 |= 0x40u;
  if ( !a3 )
    v14 |= 0x102u;
  if ( *(_BYTE *)(v4 + 402) == 1 )
  {
    v15 = *((unsigned int *)Srb + 13);
    *((_DWORD *)Srb + 8) = -1;
    v5 = Srb;
    *((_DWORD *)Srb + 5) = 9;
    *((_DWORD *)Srb + 6) = v14;
    *((_QWORD *)Srb + 8) = MasterIrp;
    *((_DWORD *)Srb + 15) = Length;
    *((_WORD *)Srb + 18) = IoGetIoPriorityHint(a2);
    *((_QWORD *)Srb + 10) = a2;
    Blink = (int)MasterIrp->ThreadListEntry.Blink;
    if ( !Blink )
      Blink = *(_DWORD *)(a1 + 976);
    *((_DWORD *)Srb + 10) = Blink;
    Srb[v15 + 8] = *(_BYTE *)(a1 + 88);
    Srb[v15 + 9] = *(_BYTE *)(a1 + 89);
    Srb[v15 + 10] = *(_BYTE *)(a1 + 90);
  }
  else
  {
    Srb[2] = 9;
    *(_WORD *)Srb = 88;
    *((_DWORD *)Srb + 3) = v14;
    Srb[8] = -1;
    *((_QWORD *)Srb + 3) = MasterIrp;
    *((_DWORD *)Srb + 4) = Length;
    *((_QWORD *)Srb + 6) = a2;
    v17 = (int)MasterIrp->ThreadListEntry.Blink;
    if ( !v17 )
      v17 = *(_DWORD *)(a1 + 976);
    *((_DWORD *)Srb + 5) = v17;
    Srb[5] = *(_BYTE *)(a1 + 88);
    Srb[6] = *(_BYTE *)(a1 + 89);
    Srb[7] = *(_BYTE *)(a1 + 90);
  }
  v18 = StorBuildSynchronousScsiRequest(*(_QWORD *)(a1 + 8), (unsigned __int64)Srb, v12, &v23);
  v19 = v18;
  if ( v18 )
  {
    if ( *(_BYTE *)(v4 + 402) == 1 )
    {
      v5 = Srb;
      *((_QWORD *)Srb + 10) = a2;
    }
    else
    {
      *((_QWORD *)Srb + 6) = a2;
    }
    v13 = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v18);
    if ( v13 >= 0 )
    {
      if ( MasterIrp->Flags == 255 )
        v13 = -1073741637;
      if ( v13 >= 0 )
      {
        if ( *(_BYTE *)(v4 + 402) == 1 )
          v20 = *((unsigned int *)v5 + 15);
        else
          v20 = *((unsigned int *)Srb + 4);
        a2->IoStatus.Information = v20;
      }
    }
    MdlAddress = a2->MdlAddress;
    if ( MdlAddress )
      MmUnlockPages(MdlAddress);
    IoFreeIrp(v19);
  }
  else
  {
LABEL_4:
    v13 = -1073741801;
  }
  if ( StorEtwLoggingEnabled )
  {
    LOBYTE(v12) = a3;
    StorEtwProtocolCommandCompletion(*(_QWORD *)(a1 + 8), a2, v12);
  }
  if ( Srb )
  {
    if ( *(_BYTE *)(v4 + 402) == 1 )
    {
      if ( !v5 )
        v5 = Srb;
      *((_QWORD *)v5 + 10) = 0LL;
      *((_QWORD *)v5 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  return (unsigned int)v13;
}
