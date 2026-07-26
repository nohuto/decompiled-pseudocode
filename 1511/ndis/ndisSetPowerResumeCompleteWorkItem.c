/*
 * XREFs of ndisSetPowerResumeCompleteWorkItem @ 0x1C0067F60
 * Callers:
 *     <none>
 * Callees:
 *     ndisSignalD0RequestComplete @ 0x1C00121C0 (ndisSignalD0RequestComplete.c)
 *     ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C001273C (-NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     Template_jqxqq @ 0x1C003AED0 (Template_jqxqq.c)
 *     WPP_SF_dq @ 0x1C0047594 (WPP_SF_dq.c)
 *     WPP_SF_qZ @ 0x1C004B56C (WPP_SF_qZ.c)
 *     NdisUnexpectedSsError @ 0x1C00663C0 (NdisUnexpectedSsError.c)
 *     ndisSelectiveSuspendResumeOperations @ 0x1C00678CC (ndisSelectiveSuspendResumeOperations.c)
 *     ndisMInvokeOidRequest @ 0x1C009631C (ndisMInvokeOidRequest.c)
 */

LONG __fastcall ndisSetPowerResumeCompleteWorkItem(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // edi
  _IRP *v3; // r15
  __int64 v4; // r14
  __int64 v5; // rcx
  int v6; // esi
  KIRQL v7; // al
  POWER_STATE State; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v10[16]; // [rsp+50h] [rbp-B0h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  v2 = 0;
  v3 = *(_IRP **)(a1 + 40);
  v4 = *(_QWORD *)(v1 + 4512);
  memset(v10, 0, 248);
  NDIS_COUNT_POWER_TRANSITION((struct _NDIS_MINIPORT_BLOCK *)v1, 1);
  if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
    Template_jqxqq(
      v5,
      &DevicePowerStateChange,
      (const GUID *)(v1 + 4064),
      v1 + 4064,
      *(_DWORD *)(v1 + 4112),
      *(_QWORD *)(v1 + 4080),
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
    v2 = -1073741823;
    NdisUnexpectedSsError((struct _NDIS_MINIPORT_BLOCK *)v1, 0x628u);
    if ( (unsigned __int8)byte_1C0083716 >= 2u )
      WPP_SF_dq(0x1Eu, &WPP_77f927e78de9b0c34f4631dbdb483858_Traceguids, v6, v1);
  }
  else
  {
    ndisSelectiveSuspendResumeOperations(v1, 1);
    if ( (unsigned __int8)byte_1C0083710 >= 4u )
      WPP_SF_qZ(0x1Fu, &WPP_77f927e78de9b0c34f4631dbdb483858_Traceguids, v1, *(__int64 **)(v1 + 3912));
  }
  v3->IoStatus.Status = v2;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v4);
  *(_DWORD *)(v4 + 480) &= ~0x20u;
  KeReleaseSpinLock((PKSPIN_LOCK)v4, v7);
  PoSetPowerState(*(PDEVICE_OBJECT *)(v1 + 3880), DevicePowerState, State);
  IofCompleteRequest(v3, 0);
  return ndisSignalD0RequestComplete((struct _NDIS_MINIPORT_BLOCK *)v1, v2);
}
