/*
 * XREFs of ndisQueryPower @ 0x1C00DF930
 * Callers:
 *     ndisPowerDispatch @ 0x1C0024480 (ndisPowerDispatch.c)
 *     ndisPowerIrpWorker @ 0x1C00CE960 (ndisPowerIrpWorker.c)
 * Callees:
 *     ndisIsMiniportStarted @ 0x1C001BE98 (ndisIsMiniportStarted.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     Template_jqxqq @ 0x1C003AED0 (Template_jqxqq.c)
 *     Template_jqxqqq @ 0x1C004084C (Template_jqxqqq.c)
 *     WPP_SF_qdD @ 0x1C0040988 (WPP_SF_qdD.c)
 *     ndisReferencePackage @ 0x1C00950DC (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C009512C (ndisDereferencePackage.c)
 *     ndisQuerySetMiniportDeviceState @ 0x1C0097A4C (ndisQuerySetMiniportDeviceState.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C0099000 (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00A581C (ndisInitializeNetPnPEvent.c)
 *     ndisMPowerPolicy @ 0x1C00DFB64 (ndisMPowerPolicy.c)
 */

NTSTATUS __fastcall ndisQueryPower(PIRP Irp, _DWORD *a2, __int64 a3)
{
  __int64 v6; // rcx
  int v7; // r9d
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // rdx
  int SetMiniportDeviceState; // eax
  __int64 v14; // rcx
  char v15; // di
  _IO_STACK_LOCATION *v16; // rax
  _IO_STACK_LOCATION *v17; // rax
  int v18[4]; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v19; // [rsp+60h] [rbp-E8h] BYREF
  int v20; // [rsp+68h] [rbp-E0h]
  int *v21; // [rsp+70h] [rbp-D8h]
  int v22; // [rsp+78h] [rbp-D0h]

  v18[0] = 0;
  if ( (unsigned __int8)byte_1C0083715 >= 4u )
    WPP_SF_q(0x26u, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, a3);
  ndisReferencePackage((__int64)&ndisPkgs);
  v7 = a2[4];
  if ( v7 == 1 )
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetLock + 24) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetLock
                                                                               + 24);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    return IofCallDriver(*(PDEVICE_OBJECT *)(a3 + 3896), Irp);
  }
  if ( v7 )
  {
    if ( (unsigned __int8)byte_1C0083715 >= 4u )
      WPP_SF_qdD(0x27u, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, a3, v7, a2[6]);
    if ( (Microsoft_Windows_NDISEnableBits & 0x400000) != 0 )
      Template_jqxqq(
        v6,
        &InvalidSystemPowerState,
        (const GUID *)(a3 + 4064),
        a3 + 4064,
        *(_DWORD *)(a3 + 4112),
        *(_QWORD *)(a3 + 4080),
        a2[4],
        a2[6]);
    v10 = -1073741808;
  }
  else
  {
    v10 = ndisMPowerPolicy(a3, a2[6], (a2[2] >> 8) & 0xF, (unsigned int)v18, 1);
    if ( !ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)a3) || *(_DWORD *)(a3 + 1520) != 1 || v10 == -2147483633 )
    {
      Irp->IoStatus.Status = 0;
      IofCompleteRequest(Irp, 0);
      return 0;
    }
    if ( v10 < 0 )
    {
      if ( (unsigned __int8)byte_1C0083715 >= 4u )
        WPP_SF_qD(0x28u, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, a3, a2[6]);
      if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
        Template_jqxqqq(
          v11,
          &QueryPowerFailed,
          (const GUID *)(a3 + 4064),
          a3 + 4064,
          *(_DWORD *)(a3 + 4112),
          *(_QWORD *)(a3 + 4080),
          v10,
          62,
          a2[6]);
    }
    else
    {
      ndisInitializeNetPnPEvent(&v19, 0LL);
      v20 = 1;
      v21 = v18;
      v22 = 4;
      if ( (unsigned int)ndisDevicePnPEventNotifyFiltersAndAllTransports(
                           (struct _NDIS_MINIPORT_BLOCK *)a3,
                           v12,
                           (__int64)&v19)
        && (unsigned __int8)byte_1C0083715 >= 2u )
      {
        WPP_SF_q(0x29u, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, a3);
      }
      if ( (*(_DWORD *)(a3 + 124) & 0x20) != 0 )
      {
        SetMiniportDeviceState = ndisQuerySetMiniportDeviceState(a3, v18[0], -50265854, 0);
        v15 = SetMiniportDeviceState;
        if ( SetMiniportDeviceState )
        {
          if ( (unsigned __int8)byte_1C0083715 >= 4u )
            WPP_SF_q(0x2Au, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, a3);
          if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
            Template_jqxqqq(
              v14,
              &QueryPowerFailed,
              (const GUID *)(a3 + 4064),
              a3 + 4064,
              *(_DWORD *)(a3 + 4112),
              *(_QWORD *)(a3 + 4080),
              v15,
              112,
              0);
        }
      }
      Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      v16 = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v16[-1].MajorFunction = *(_OWORD *)&v16->MajorFunction;
      *(_OWORD *)&v16[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&v16->Parameters.QueryFile.FileInformationClass;
      *(_OWORD *)(&v16[-1].Parameters.SetLock + 24) = *(_OWORD *)(&v16->Parameters.SetLock + 24);
      v16[-1].FileObject = v16->FileObject;
      v16[-1].Control = 0;
      *(_DWORD *)(a3 + 3184) = v18[0];
      *(_QWORD *)(a3 + 776) = Irp;
      IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(a3 + 4176), Irp, &byte_1C00E5960, 1u, 0x20u);
      v17 = Irp->Tail.Overlay.CurrentStackLocation;
      v17[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisQueryPowerCompleteSystemState;
      v17[-1].Context = (void *)a3;
      v17[-1].Control = -32;
      IofCallDriver(*(PDEVICE_OBJECT *)(a3 + 3896), Irp);
      v10 = 259;
    }
  }
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( v10 < 0 )
  {
    Irp->IoStatus.Status = v10;
    IofCompleteRequest(Irp, 0);
  }
  if ( (unsigned __int8)byte_1C0083715 >= 4u )
    WPP_SF_qD(0x2Bu, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, a3, v10);
  return v10;
}
