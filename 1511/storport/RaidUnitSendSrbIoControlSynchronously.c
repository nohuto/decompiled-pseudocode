/*
 * XREFs of RaidUnitSendSrbIoControlSynchronously @ 0x1C003541C
 * Callers:
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C0032244 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaUnitSetTemperatureThresholdIoctl @ 0x1C0032D60 (RaUnitSetTemperatureThresholdIoctl.c)
 *     RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x1C0033210 (RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x1C0033350 (RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1C0033514 (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C00049EC (RaidAllocateSrb.c)
 *     RaSendIrpSynchronous @ 0x1C0006B58 (RaSendIrpSynchronous.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015B60 (_guard_dispatch_icall_nop.c)
 *     StorBuildSynchronousScsiRequest @ 0x1C00314C8 (StorBuildSynchronousScsiRequest.c)
 *     PortSrbTranslateSrbToNtStatus @ 0x1C003D8A4 (PortSrbTranslateSrbToNtStatus.c)
 */

__int64 __fastcall RaidUnitSendSrbIoControlSynchronously(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 (__fastcall *a5)(_QWORD),
        __int64 a6,
        int a7)
{
  __int64 v8; // r14
  _BYTE *v12; // rbp
  _BYTE *Srb; // rbx
  __int64 v14; // r8
  int Status; // edi
  int v16; // eax
  __int64 v17; // rcx
  IRP *v18; // rax
  IRP *v19; // rsi
  __int64 v20; // rcx
  struct _MDL *MdlAddress; // rcx
  _IO_STATUS_BLOCK v23; // [rsp+20h] [rbp-28h] BYREF

  v23.Pointer = 0LL;
  v8 = *(_QWORD *)(a1 + 24);
  v23.Information = 0LL;
  v12 = 0LL;
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 2u, *(_BYTE *)(v8 + 402), 0);
  if ( Srb )
  {
    v16 = a7 | 0x102;
    if ( *(_BYTE *)(v8 + 402) == 1 )
    {
      *((_DWORD *)Srb + 8) = -1;
      v12 = Srb;
      v17 = *((unsigned int *)Srb + 13);
      *((_DWORD *)Srb + 5) = 2;
      *((_DWORD *)Srb + 6) = v16;
      *((_QWORD *)Srb + 8) = a3;
      *((_DWORD *)Srb + 15) = a4;
      *((_QWORD *)Srb + 10) = a2;
      *((_DWORD *)Srb + 10) = *(_DWORD *)(a1 + 1000);
      Srb[v17 + 8] = *(_BYTE *)(a1 + 88);
      Srb[v17 + 9] = *(_BYTE *)(a1 + 89);
      Srb[v17 + 10] = *(_BYTE *)(a1 + 90);
    }
    else
    {
      Srb[2] = 2;
      *(_WORD *)Srb = 88;
      *((_DWORD *)Srb + 3) = v16;
      Srb[8] = -1;
      *((_QWORD *)Srb + 3) = a3;
      *((_DWORD *)Srb + 4) = a4;
      *((_QWORD *)Srb + 6) = a2;
      *((_DWORD *)Srb + 5) = *(_DWORD *)(a1 + 1000);
      Srb[5] = *(_BYTE *)(a1 + 88);
      Srb[6] = *(_BYTE *)(a1 + 89);
      Srb[7] = *(_BYTE *)(a1 + 90);
    }
    v18 = StorBuildSynchronousScsiRequest(*(_QWORD *)(a1 + 8), (unsigned __int64)Srb, v14, &v23);
    v19 = v18;
    if ( v18 )
    {
      if ( *(_BYTE *)(v8 + 402) == 1 )
      {
        v12 = Srb;
        *((_QWORD *)Srb + 10) = v18;
      }
      else
      {
        *((_QWORD *)Srb + 6) = v18;
      }
      Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v18);
      if ( Status >= 0 )
      {
        Status = v19->IoStatus.Status;
        if ( Status >= 0 )
        {
          if ( a5 )
            Status = a5(*(unsigned int *)(a3 + 20));
          if ( Status >= 0 )
          {
            LOBYTE(v20) = Srb[3];
            Status = PortSrbTranslateSrbToNtStatus(v20);
          }
        }
      }
      MdlAddress = v19->MdlAddress;
      if ( MdlAddress )
        MmUnlockPages(MdlAddress);
      IoFreeIrp(v19);
    }
    else
    {
      Status = -1073741801;
    }
    if ( *(_BYTE *)(v8 + 402) == 1 )
    {
      if ( !v12 )
        v12 = Srb;
      *((_QWORD *)v12 + 10) = 0LL;
      *((_QWORD *)v12 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)Status;
}
