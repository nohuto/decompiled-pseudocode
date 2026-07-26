/*
 * XREFs of ndisSetPowerResumeCompleteWorkItem @ 0x1C006C980
 * Callers:
 *     <none>
 * Callees:
 *     ndisSignalD0RequestComplete @ 0x1C00110B0 (ndisSignalD0RequestComplete.c)
 *     ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0011648 (-NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     Template_jqxqq @ 0x1C003EE50 (Template_jqxqq.c)
 *     WPP_SF_qZ @ 0x1C0048BBC (WPP_SF_qZ.c)
 *     WPP_SF_dq @ 0x1C004BB84 (WPP_SF_dq.c)
 *     NdisUnexpectedSsError @ 0x1C006B3B0 (NdisUnexpectedSsError.c)
 *     ndisSelectiveSuspendResumeOperations @ 0x1C006C3CC (ndisSelectiveSuspendResumeOperations.c)
 *     ndisMInvokeOidRequest @ 0x1C009B154 (ndisMInvokeOidRequest.c)
 */

LONG __fastcall ndisSetPowerResumeCompleteWorkItem(__int64 a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rbx
  _IRP *v2; // r15
  int v3; // edi
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // r14
  __int64 v5; // rcx
  int v6; // esi
  KIRQL v7; // al
  POWER_STATE State; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v10[16]; // [rsp+50h] [rbp-B0h] BYREF

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)(a1 + 32);
  v2 = *(_IRP **)(a1 + 40);
  v3 = 0;
  SelectiveSuspend = v1->SelectiveSuspend;
  memset(v10, 0, 0xF8uLL);
  NDIS_COUNT_POWER_TRANSITION(v1, 1);
  if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
    Template_jqxqq(
      v5,
      &DevicePowerStateChange,
      &v1->InterfaceGuid,
      (unsigned __int64)&v1->InterfaceGuid,
      v1->IfIndex,
      v1->NetLuid.Value,
      1,
      1);
  State.SystemState = PowerSystemWorking;
  memset(v10, 0, 0xF8uLL);
  LODWORD(v10[0]) = 15466902;
  *((_QWORD *)&v10[6] + 1) = &ndisIntReqGeneric;
  *((_QWORD *)&v10[2] + 1) = &State;
  LODWORD(v10[2]) = -50265855;
  DWORD2(v10[5]) |= 0x408u;
  *(_QWORD *)((char *)v10 + 4) = 1LL;
  LODWORD(v10[3]) = 4;
  KeInitializeEvent((PRKEVENT)&v10[7], NotificationEvent, 0);
  v6 = ndisMInvokeOidRequest(v1, v10);
  if ( v6 == 259 )
  {
    KeWaitForSingleObject(&v10[7], Executive, 0, 0, 0LL);
    v6 = v10[5];
  }
  if ( v6 )
  {
    v3 = -1073741823;
    NdisUnexpectedSsError(v1, 0x641u);
    if ( (unsigned __int8)byte_1C00895D6 >= 2u )
      WPP_SF_dq(0x1Eu, &WPP_fb3ee79da3763fe19127143656620238_Traceguids, v6, v1);
  }
  else
  {
    ndisSelectiveSuspendResumeOperations((__int64)v1, 1);
    if ( (unsigned __int8)byte_1C00895D0 >= 4u )
      WPP_SF_qZ(0x1Fu, &WPP_fb3ee79da3763fe19127143656620238_Traceguids, (__int64)v1, &v1->pAdapterInstanceName->Length);
  }
  v2->IoStatus.Status = v3;
  v7 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
  SelectiveSuspend->Flags.Value &= ~0x20u;
  KeReleaseSpinLock(&SelectiveSuspend->Lock, v7);
  PoSetPowerState(v1->DeviceObject, DevicePowerState, State);
  IofCompleteRequest(v2, 0);
  return ndisSignalD0RequestComplete(v1, v3);
}
