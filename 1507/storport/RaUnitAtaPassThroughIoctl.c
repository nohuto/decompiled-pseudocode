/*
 * XREFs of RaUnitAtaPassThroughIoctl @ 0x1C0001000
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C00036E0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     PortPassThroughFreeIrp @ 0x1C00012D8 (PortPassThroughFreeIrp.c)
 *     RaUnitAtaPassThroughMarshalResults @ 0x1C0001310 (RaUnitAtaPassThroughMarshalResults.c)
 *     RaUnitSetAtaPassThroughCdb @ 0x1C0001474 (RaUnitSetAtaPassThroughCdb.c)
 *     RaUnitAtaPassThroughValidateInput @ 0x1C0001530 (RaUnitAtaPassThroughValidateInput.c)
 *     RaidAllocateSrb @ 0x1C0003B2C (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C0003BAC (RaidAllocatePool.c)
 *     RaSendIrpSynchronous @ 0x1C0005B88 (RaSendIrpSynchronous.c)
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     memset @ 0x1C0013300 (memset.c)
 *     Template_pq @ 0x1C0024F2C (Template_pq.c)
 *     PortPassThroughBuildIrp @ 0x1C004C000 (PortPassThroughBuildIrp.c)
 */

__int64 __fastcall RaUnitAtaPassThroughIoctl(__int64 a1, IRP *a2, char a3)
{
  _IRP *v3; // r13
  _DWORD *v5; // r14
  char *v6; // r12
  int Status; // edi
  _IRP *MasterIrp; // rdi
  _IRP *v10; // rbx
  __int64 v11; // r9
  __int64 MdlAddress_low; // r8
  __int64 v13; // rax
  unsigned int v14; // ecx
  char RequestorMode; // al
  __int64 v16; // r8
  IRP *v17; // r13
  _DWORD *Srb; // rbx
  void *Pool; // rax
  int v20; // ecx
  char *v21; // rdx
  __int64 v22; // r8
  _IRP *v24; // rcx
  __int128 v25; // xmm0
  __int64 v26; // xmm1_8
  int v27; // ecx
  __int64 v28; // rcx
  __int64 v29; // rax
  _IRP *v30; // rcx
  __int64 v31; // rcx
  _IRP *v33; // [rsp+38h] [rbp-31h]
  _BYTE P[12]; // [rsp+40h] [rbp-29h] BYREF
  int v35; // [rsp+4Ch] [rbp-1Dh]
  __int128 v36; // [rsp+50h] [rbp-19h] BYREF
  __int64 v37; // [rsp+60h] [rbp-9h]
  __int64 v38; // [rsp+68h] [rbp-1h]
  _IRP *v39; // [rsp+70h] [rbp+7h]
  _LIST_ENTRY *Flink; // [rsp+78h] [rbp+Fh]

  *(_QWORD *)P = 0LL;
  v3 = 0LL;
  v5 = 0LL;
  v33 = 0LL;
  v6 = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 528LL) + 184LL) & 2) != 0 )
  {
    Status = RaUnitAtaPassThroughValidateInput(a1, a2);
    if ( Status >= 0 )
    {
      MasterIrp = a2->AssociatedIrp.MasterIrp;
      v10 = MasterIrp;
      if ( IoIs32bitProcess(a2) )
      {
        v24 = a2->AssociatedIrp.MasterIrp;
        MasterIrp = (_IRP *)&v36;
        v25 = *(_OWORD *)&v24->Type;
        Flink = v24->ThreadListEntry.Flink;
        v26 = *(_QWORD *)&v24->Flags;
        v39 = v24->AssociatedIrp.MasterIrp;
        v38 = *(&v24->Flags + 1);
        v36 = v25;
        v37 = v26;
      }
      MdlAddress_low = LODWORD(MasterIrp->MdlAddress);
      if ( !(_DWORD)MdlAddress_low )
        goto LABEL_13;
      v3 = MasterIrp->AssociatedIrp.MasterIrp;
      if ( !a3 )
        v3 = (_IRP *)((char *)v3 + (_QWORD)v10);
      v13 = *(_QWORD *)(a1 + 24);
      v33 = v3;
      v14 = *(_DWORD *)(v13 + 332);
      if ( *(_BYTE *)(v13 + 4450) )
      {
        v11 = *(unsigned int *)(v13 + 704);
        if ( v14 >= (unsigned int)v11 )
          v14 = *(_DWORD *)(v13 + 704);
      }
      if ( (unsigned int)MdlAddress_low > *(_DWORD *)(v13 + 328)
        || (unsigned int)(((unsigned __int64)((unsigned __int16)v3 & 0xFFF) + MdlAddress_low + 4095) >> 12) > v14 )
      {
        Status = -1073741811;
      }
      else
      {
LABEL_13:
        if ( a3 )
          RequestorMode = a2->RequestorMode;
        else
          RequestorMode = 0;
        LOBYTE(v11) = MasterIrp->Size & 2;
        v17 = (IRP *)PortPassThroughBuildIrp(*(_QWORD *)(a1 + 8), v3, MdlAddress_low, v11, RequestorMode);
        if ( v17 )
        {
          LOBYTE(v16) = *(_BYTE *)(*(_QWORD *)(a1 + 24) + 402LL);
          Srb = (_DWORD *)RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0LL, v16, 1LL);
          if ( Srb
            && (Pool = (void *)RaidAllocatePool(512LL, 79LL, 1314087250LL, *(_QWORD *)(a1 + 8)),
                (*(_QWORD *)P = Pool) != 0LL) )
          {
            memset(Pool, 0, 0x4FuLL);
            if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 402LL) == 1 )
            {
              Srb[5] = 0;
              v5 = Srb;
              *((_BYTE *)Srb + 3) = 0;
              if ( (MasterIrp->Size & 2) != 0 )
                Srb[6] |= 0x40u;
              if ( (MasterIrp->Size & 4) != 0 )
                Srb[6] |= 0x80u;
              v27 = Srb[6] | 0x100;
              Srb[6] = v27;
              if ( (*(_BYTE *)(a1 + 145) & 0x10) == 0 )
                Srb[6] = v27 | 0x80000;
              v28 = (unsigned int)Srb[13];
              Srb[15] = MasterIrp->MdlAddress;
              *((_QWORD *)Srb + 8) = v33;
              *((_QWORD *)Srb + 10) = v17;
              Srb[10] = HIDWORD(MasterIrp->MdlAddress);
              *((_BYTE *)Srb + v28 + 8) = *((_BYTE *)&MasterIrp->Size + 2);
              *((_BYTE *)Srb + v28 + 9) = *((_BYTE *)&MasterIrp->Size + 3);
              *((_BYTE *)Srb + v28 + 10) = *((_BYTE *)&MasterIrp->Size + 4);
              v29 = *(_QWORD *)P;
              v6 = (char *)Srb + (unsigned int)Srb[30];
              *(_DWORD *)v6 = 64;
              v21 = v6 + 24;
              *((_DWORD *)v6 + 1) = 32;
              *(_WORD *)(v6 + 9) = 4175;
              *((_QWORD *)v6 + 2) = v29;
            }
            else
            {
              *Srb = 88;
              *((_BYTE *)Srb + 5) = *((_BYTE *)&MasterIrp->Size + 2);
              *((_BYTE *)Srb + 6) = *((_BYTE *)&MasterIrp->Size + 3);
              *((_BYTE *)Srb + 7) = *((_BYTE *)&MasterIrp->Size + 4);
              *((_BYTE *)Srb + 10) = 16;
              if ( (MasterIrp->Size & 2) != 0 )
                Srb[3] |= 0x40u;
              if ( (MasterIrp->Size & 4) != 0 )
                Srb[3] |= 0x80u;
              v20 = Srb[3] | 0x100;
              Srb[3] = v20;
              if ( (*(_BYTE *)(a1 + 145) & 0x10) == 0 )
                Srb[3] = v20 | 0x80000;
              v21 = (char *)(Srb + 18);
              Srb[4] = MasterIrp->MdlAddress;
              *((_QWORD *)Srb + 3) = v33;
              *((_QWORD *)Srb + 4) = *(_QWORD *)P;
              *((_BYTE *)Srb + 11) = 79;
              *((_QWORD *)Srb + 6) = v17;
              Srb[5] = HIDWORD(MasterIrp->MdlAddress);
            }
            RaUnitSetAtaPassThroughCdb(MasterIrp, v21);
            v17->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)Srb;
            RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v17);
            LOBYTE(v22) = a3;
            RaUnitAtaPassThroughMarshalResults(Srb, MasterIrp, v22, &a2->IoStatus);
            if ( IoIs32bitProcess(a2) )
            {
              v30 = a2->AssociatedIrp.MasterIrp;
              *(_OWORD *)&v30->Type = *(_OWORD *)&MasterIrp->Type;
              *(_QWORD *)&v30->Flags = *(_QWORD *)&MasterIrp->Flags;
              v30->ThreadListEntry.Flink = MasterIrp->ThreadListEntry.Blink;
              v30->AssociatedIrp.MasterIrp = (_IRP *)MasterIrp->ThreadListEntry.Flink;
            }
            Status = a2->IoStatus.Status;
          }
          else
          {
            Status = -1073741801;
          }
          PortPassThroughFreeIrp(v17);
          if ( Srb )
          {
            if ( *(_QWORD *)P )
              ExFreePoolWithTag(*(PVOID *)P, 0x4E536152u);
            if ( *((_BYTE *)Srb + 2) == 40 )
            {
              if ( !v5 )
                v5 = Srb;
              if ( v6 )
                *((_QWORD *)v6 + 2) = 0LL;
              *((_QWORD *)v5 + 10) = 0LL;
              *((_QWORD *)v5 + 13) = 0LL;
            }
            else
            {
              *((_QWORD *)Srb + 4) = 0LL;
              *((_QWORD *)Srb + 6) = 0LL;
              *((_QWORD *)Srb + 7) = 0LL;
            }
            ExFreePoolWithTag(Srb, 0x72536152u);
          }
        }
        else
        {
          Status = -1073741801;
        }
      }
    }
  }
  else
  {
    Status = -1073741808;
  }
  if ( StorEtwLoggingEnabled )
  {
    memset(P, 0, sizeof(P));
    v35 = 0;
    IoGetActivityIdIrp(a2, P);
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x80000) != 0 )
      Template_pq(v31, &EventNonReadWriteRequestComplete, P, a2, Status);
  }
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  return (unsigned int)Status;
}
