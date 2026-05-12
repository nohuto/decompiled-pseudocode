/*
 * XREFs of RaidUnitSendSrbIoControlSynchronously @ 0x1C00171B0
 * Callers:
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C0017004 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaUnitSetTemperatureThresholdIoctl @ 0x1C0035E10 (RaUnitSetTemperatureThresholdIoctl.c)
 *     RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x1C00363A0 (RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x1C00364E0 (RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1C00366A4 (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C0002320 (RaidAllocateSrb.c)
 *     RaSendIrpSynchronous @ 0x1C00098AC (RaSendIrpSynchronous.c)
 *     StorBuildSynchronousScsiRequest @ 0x1C001738C (StorBuildSynchronousScsiRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AA20 (_guard_dispatch_icall_nop.c)
 *     StorFreeSynchronousScsiRequest @ 0x1C0038F1C (StorFreeSynchronousScsiRequest.c)
 *     PortSrbTranslateSrbToNtStatus @ 0x1C00436B8 (PortSrbTranslateSrbToNtStatus.c)
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
  _DWORD v22[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v23; // [rsp+28h] [rbp-20h]

  v22[0] = 0;
  v8 = *(_QWORD *)(a1 + 24);
  v22[1] = 0;
  v23 = 0LL;
  v12 = 0LL;
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 2u, *(_BYTE *)(v8 + 402), 0);
  if ( Srb )
  {
    v16 = a7 | 0x102;
    if ( Srb[2] == 40 )
      *((_WORD *)Srb + 19) = 32;
    else
      Srb[9] = 32;
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
    v18 = (IRP *)((__int64 (__fastcall *)(_QWORD, _BYTE *, __int64, _DWORD *))StorBuildSynchronousScsiRequest)(
                   *(_QWORD *)(a1 + 8),
                   Srb,
                   v14,
                   v22);
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
      StorFreeSynchronousScsiRequest(v19);
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
