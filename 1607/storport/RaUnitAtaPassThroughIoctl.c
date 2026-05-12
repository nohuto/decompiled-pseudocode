/*
 * XREFs of RaUnitAtaPassThroughIoctl @ 0x1C0001000
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0001D30 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaUnitAtaPassThroughMarshalResults @ 0x1C0001440 (RaUnitAtaPassThroughMarshalResults.c)
 *     RaUnitSetAtaPassThroughCdb @ 0x1C00015A8 (RaUnitSetAtaPassThroughCdb.c)
 *     RaUnitAtaPassThroughValidateInput @ 0x1C0001664 (RaUnitAtaPassThroughValidateInput.c)
 *     RaidAllocateSrb @ 0x1C0002320 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C000245C (RaidAllocatePool.c)
 *     RaSendIrpSynchronous @ 0x1C00098AC (RaSendIrpSynchronous.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     memset @ 0x1C001AD80 (memset.c)
 *     Template_pq @ 0x1C002A68C (Template_pq.c)
 *     PortPassThroughBuildIrpEx @ 0x1C004397C (PortPassThroughBuildIrpEx.c)
 *     PortPassThroughFreeIrpEx @ 0x1C0044134 (PortPassThroughFreeIrpEx.c)
 */

__int64 __fastcall RaUnitAtaPassThroughIoctl(__int64 a1, IRP *a2, char a3)
{
  _IRP *v3; // r13
  _DWORD *v5; // r14
  char *v6; // r12
  int Status; // edi
  _IRP *MasterIrp; // rdi
  _IRP *v10; // rbx
  unsigned int v11; // r9d
  _IRP *v12; // rcx
  __int128 v13; // xmm0
  __int64 v14; // xmm1_8
  __int64 MdlAddress_low; // r8
  __int64 v16; // rax
  unsigned int v17; // ecx
  KPROCESSOR_MODE AccessMode; // al
  __int64 v19; // r8
  IRP *v20; // r13
  _DWORD *Srb; // rbx
  void *Pool; // rax
  int v23; // ecx
  __int64 v24; // rcx
  __int64 v25; // rax
  char *v26; // rdx
  int v27; // ecx
  __int64 v28; // r8
  _IRP *v29; // rcx
  __int64 v30; // rcx
  _IRP *v33; // [rsp+58h] [rbp-31h]
  _BYTE P[12]; // [rsp+60h] [rbp-29h] BYREF
  int v35; // [rsp+6Ch] [rbp-1Dh]
  __int128 v36; // [rsp+70h] [rbp-19h] BYREF
  __int64 v37; // [rsp+80h] [rbp-9h]
  __int64 v38; // [rsp+88h] [rbp-1h]
  _IRP *v39; // [rsp+90h] [rbp+7h]
  _LIST_ENTRY *Flink; // [rsp+98h] [rbp+Fh]

  *(_QWORD *)P = 0LL;
  LODWORD(v3) = 0;
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
        v12 = a2->AssociatedIrp.MasterIrp;
        MasterIrp = (_IRP *)&v36;
        v13 = *(_OWORD *)&v12->Type;
        Flink = v12->ThreadListEntry.Flink;
        v14 = *(_QWORD *)&v12->Flags;
        v39 = v12->AssociatedIrp.MasterIrp;
        v38 = *(&v12->Flags + 1);
        v36 = v13;
        v37 = v14;
      }
      MdlAddress_low = LODWORD(MasterIrp->MdlAddress);
      if ( !(_DWORD)MdlAddress_low )
        goto LABEL_15;
      v3 = MasterIrp->AssociatedIrp.MasterIrp;
      if ( !a3 )
        v3 = (_IRP *)((char *)v3 + (_QWORD)v10);
      v16 = *(_QWORD *)(a1 + 24);
      v33 = v3;
      v17 = *(_DWORD *)(v16 + 332);
      if ( *(_BYTE *)(v16 + 4450) )
      {
        v11 = *(_DWORD *)(v16 + 704);
        if ( v17 >= v11 )
          v17 = *(_DWORD *)(v16 + 704);
      }
      if ( (unsigned int)MdlAddress_low > *(_DWORD *)(v16 + 328)
        || (unsigned int)(((unsigned __int64)((unsigned __int16)v3 & 0xFFF) + MdlAddress_low + 4095) >> 12) > v17 )
      {
        Status = -1073741811;
      }
      else
      {
LABEL_15:
        if ( a3 )
          AccessMode = a2->RequestorMode;
        else
          AccessMode = 0;
        LOBYTE(v11) = MasterIrp->Size & 2;
        v20 = (IRP *)PortPassThroughBuildIrpEx(
                       *(_QWORD *)(a1 + 8),
                       (int)v3,
                       MdlAddress_low,
                       v11,
                       AccessMode,
                       a2,
                       0,
                       0LL,
                       0,
                       0LL);
        if ( v20 )
        {
          LOBYTE(v19) = *(_BYTE *)(*(_QWORD *)(a1 + 24) + 402LL);
          Srb = (_DWORD *)RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0LL, v19, 1LL);
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
              v23 = Srb[6] | 0x100;
              Srb[6] = v23;
              if ( (*(_BYTE *)(a1 + 153) & 0x10) == 0 )
                Srb[6] = v23 | 0x80000;
              v24 = (unsigned int)Srb[13];
              Srb[15] = MasterIrp->MdlAddress;
              *((_QWORD *)Srb + 8) = v33;
              *((_QWORD *)Srb + 10) = v20;
              Srb[10] = HIDWORD(MasterIrp->MdlAddress);
              *((_BYTE *)Srb + v24 + 8) = *((_BYTE *)&MasterIrp->Size + 2);
              *((_BYTE *)Srb + v24 + 9) = *((_BYTE *)&MasterIrp->Size + 3);
              *((_BYTE *)Srb + v24 + 10) = *((_BYTE *)&MasterIrp->Size + 4);
              v25 = *(_QWORD *)P;
              v6 = (char *)Srb + (unsigned int)Srb[30];
              *(_DWORD *)v6 = 64;
              v26 = v6 + 24;
              *((_DWORD *)v6 + 1) = 32;
              *(_WORD *)(v6 + 9) = 4175;
              *((_QWORD *)v6 + 2) = v25;
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
              v27 = Srb[3] | 0x100;
              Srb[3] = v27;
              if ( (*(_BYTE *)(a1 + 153) & 0x10) == 0 )
                Srb[3] = v27 | 0x80000;
              v26 = (char *)(Srb + 18);
              Srb[4] = MasterIrp->MdlAddress;
              *((_QWORD *)Srb + 3) = v33;
              *((_QWORD *)Srb + 4) = *(_QWORD *)P;
              *((_BYTE *)Srb + 11) = 79;
              *((_QWORD *)Srb + 6) = v20;
              Srb[5] = HIDWORD(MasterIrp->MdlAddress);
            }
            RaUnitSetAtaPassThroughCdb(MasterIrp, v26);
            v20->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)Srb;
            RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v20);
            LOBYTE(v28) = a3;
            RaUnitAtaPassThroughMarshalResults(Srb, MasterIrp, v28, &a2->IoStatus);
            if ( IoIs32bitProcess(a2) )
            {
              v29 = a2->AssociatedIrp.MasterIrp;
              *(_OWORD *)&v29->Type = *(_OWORD *)&MasterIrp->Type;
              *(_QWORD *)&v29->Flags = *(_QWORD *)&MasterIrp->Flags;
              v29->ThreadListEntry.Flink = MasterIrp->ThreadListEntry.Blink;
              v29->AssociatedIrp.MasterIrp = (_IRP *)MasterIrp->ThreadListEntry.Flink;
            }
            Status = a2->IoStatus.Status;
          }
          else
          {
            Status = -1073741801;
          }
          PortPassThroughFreeIrpEx(v20);
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
    if ( (Microsoft_Windows_StorPortEnableBits & 0x80000) != 0 )
      Template_pq(v30, &EventNonReadWriteRequestComplete, P, a2, Status);
  }
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  return (unsigned int)Status;
}
