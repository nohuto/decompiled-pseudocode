/*
 * XREFs of ndisSetPowerSuspend @ 0x1C00DC7FC
 * Callers:
 *     ndisSetDevicePower @ 0x1C0011174 (ndisSetDevicePower.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_dq @ 0x1C004BB84 (WPP_SF_dq.c)
 *     NdisUnexpectedSsError @ 0x1C006B3B0 (NdisUnexpectedSsError.c)
 *     ndisMInvokeOidRequest @ 0x1C009B154 (ndisMInvokeOidRequest.c)
 */

__int64 __fastcall ndisSetPowerSuspend(PIRP Irp, POWER_STATE *a2, struct _NDIS_MINIPORT_BLOCK *a3)
{
  unsigned int v5; // edi
  int v6; // esi
  unsigned __int16 v7; // cx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  POWER_STATE State; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v11[248]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v12[9]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v13; // [rsp+149h] [rbp+49h]
  __int16 v14; // [rsp+151h] [rbp+51h]
  char v15; // [rsp+153h] [rbp+53h]

  *(_QWORD *)&v12[1] = 0LL;
  v13 = 0LL;
  v14 = 0;
  v15 = 0;
  State.SystemState = a2[6].SystemState;
  *(_DWORD *)v12 = 1311360;
  *(_DWORD *)((char *)&v13 + 3) = 16;
  memset(v11, 0, sizeof(v11));
  *(_DWORD *)&v11[8] = 0;
  *(_QWORD *)&v11[104] = &ndisIntReqGeneric;
  *(_QWORD *)&v11[40] = v12;
  *(_DWORD *)v11 = 15466902;
  *(_DWORD *)&v11[88] |= 0x408u;
  *(_DWORD *)&v11[32] = -50265847;
  *(_DWORD *)&v11[4] = 1;
  *(_DWORD *)&v11[48] = 20;
  KeInitializeEvent((PRKEVENT)&v11[112], NotificationEvent, 0);
  v5 = 259;
  v6 = ndisMInvokeOidRequest((__int64)a3, (_NDIS_OID_REQUEST *)v11);
  if ( v6 == 259 )
  {
    KeWaitForSingleObject(&v11[112], Executive, 0, 0, 0LL);
    v6 = *(_DWORD *)&v11[80];
  }
  if ( v6 )
  {
    NdisUnexpectedSsError(a3, 0x365u);
    if ( (unsigned __int8)byte_1C00895D6 >= 2u )
    {
      v7 = 19;
LABEL_11:
      WPP_SF_dq(v7, &WPP_fb3ee79da3763fe19127143656620238_Traceguids, v6, a3);
    }
  }
  else
  {
    memset(v11, 0, sizeof(v11));
    *(_DWORD *)&v11[8] = 0;
    *(_QWORD *)&v11[104] = &ndisIntReqGeneric;
    *(_QWORD *)&v11[40] = &State;
    *(_DWORD *)v11 = 15466902;
    *(_DWORD *)&v11[88] |= 0x408u;
    *(_DWORD *)&v11[32] = -50265855;
    *(_DWORD *)&v11[4] = 1;
    *(_DWORD *)&v11[48] = 4;
    KeInitializeEvent((PRKEVENT)&v11[112], NotificationEvent, 0);
    v6 = ndisMInvokeOidRequest((__int64)a3, (_NDIS_OID_REQUEST *)v11);
    if ( v6 == 259 )
    {
      KeWaitForSingleObject(&v11[112], Executive, 0, 0, 0LL);
      v6 = *(_DWORD *)&v11[80];
    }
    if ( !v6 )
    {
      PoSetPowerState(a3->DeviceObject, DevicePowerState, State);
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
      *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetLock + 24) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetLock
                                                                                 + 24);
      CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
      CurrentStackLocation[-1].Control = 0;
      Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      IofCallDriver(a3->NextDeviceObject, Irp);
      return v5;
    }
    NdisUnexpectedSsError(a3, 0x387u);
    if ( (unsigned __int8)byte_1C00895D6 >= 2u )
    {
      v7 = 20;
      goto LABEL_11;
    }
  }
  v5 = -1073741823;
  Irp->IoStatus.Status = -1073741823;
  IofCompleteRequest(Irp, 0);
  return v5;
}
