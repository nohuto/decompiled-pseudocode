/*
 * XREFs of RaUnitStartResetIo @ 0x1C00315DC
 * Callers:
 *     StorPortUnitFlushActivePendingRequestQueue @ 0x1C002CB00 (StorPortUnitFlushActivePendingRequestQueue.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0034010 (RaidUnitSubmitResetRequest.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0002E70 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C0003980 (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C0003998 (RaUnitAcquireRemoveLock.c)
 *     RaUnitCheckRemoveState @ 0x1C00039C8 (RaUnitCheckRemoveState.c)
 *     RaidUnitClaimIrp @ 0x1C0003EF0 (RaidUnitClaimIrp.c)
 *     RaidPauseUnitQueue @ 0x1C0007450 (RaidPauseUnitQueue.c)
 *     RaidUnitReleaseIrp @ 0x1C000EBBC (RaidUnitReleaseIrp.c)
 *     RaidAdapterExecuteXrb @ 0x1C000EF88 (RaidAdapterExecuteXrb.c)
 *     _TlgWrite @ 0x1C000F63C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C000F6DC (_TlgKeywordOn.c)
 *     RaidPauseAdapterQueue @ 0x1C0011978 (RaidPauseAdapterQueue.c)
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C0024998 (RaidResumeAndRestartAdapterQueues.c)
 *     WPP_SF_qqD @ 0x1C00258C8 (WPP_SF_qqD.c)
 *     RaidNtStatusToSrbStatus @ 0x1C00301D4 (RaidNtStatusToSrbStatus.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C00321AC (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitEndDeviceBusy @ 0x1C00329D0 (RaidUnitEndDeviceBusy.c)
 */

int __fastcall RaUnitStartResetIo(__int64 a1, IRP *a2, __int64 a3)
{
  __int64 v3; // rbx
  int v6; // r13d
  __int64 SecurityQos; // r14
  _IO_SECURITY_CONTEXT *SecurityContext; // r15
  int v9; // esi
  int result; // eax
  int v11; // r12d
  _IO_SECURITY_CONTEXT *v12; // rcx
  unsigned int FullCreateOptions; // eax
  __int64 v14; // rax
  unsigned int v15; // eax
  unsigned int v16; // eax
  const struct _TlgProvider_t *v17; // rcx
  const GUID *v18; // r8
  const GUID *v19; // r9
  __int64 v20; // rsi
  int v21; // eax
  __int64 v22; // rax
  unsigned __int8 v23; // cl
  unsigned int v24; // eax
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+28h] [rbp-81h]
  char v26; // [rsp+30h] [rbp-79h] BYREF
  char v27; // [rsp+31h] [rbp-78h] BYREF
  char v28; // [rsp+32h] [rbp-77h] BYREF
  int v29; // [rsp+34h] [rbp-75h] BYREF
  __int64 v30; // [rsp+38h] [rbp-71h]
  EVENT_DATA_DESCRIPTOR v31; // [rsp+40h] [rbp-69h] BYREF
  __int64 v32; // [rsp+60h] [rbp-49h]
  int v33; // [rsp+68h] [rbp-41h]
  int v34; // [rsp+6Ch] [rbp-3Dh]
  __int64 v35; // [rsp+70h] [rbp-39h]
  int v36; // [rsp+78h] [rbp-31h]
  int v37; // [rsp+7Ch] [rbp-2Dh]
  int *v38; // [rsp+80h] [rbp-29h]
  int v39; // [rsp+88h] [rbp-21h]
  int v40; // [rsp+8Ch] [rbp-1Dh]
  char *v41; // [rsp+90h] [rbp-19h]
  int v42; // [rsp+98h] [rbp-11h]
  int v43; // [rsp+9Ch] [rbp-Dh]
  char *v44; // [rsp+A0h] [rbp-9h]
  int v45; // [rsp+A8h] [rbp-1h]
  int v46; // [rsp+ACh] [rbp+3h]
  char *v47; // [rsp+B0h] [rbp+7h]
  int v48; // [rsp+B8h] [rbp+Fh]
  int v49; // [rsp+BCh] [rbp+13h]

  v3 = *(_QWORD *)(a1 + 64);
  v29 = 0;
  v6 = 0;
  SecurityQos = 0LL;
  v30 = *(_QWORD *)(v3 + 24);
  SecurityContext = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  v9 = RaUnitCheckRemoveState(v3, (__int64)a2);
  if ( v9 < 0 || (v9 = RaUnitAcquireRemoveLock(v3), v9 < 0) )
  {
LABEL_42:
    a2->IoStatus.Information = 0LL;
    BYTE3(SecurityContext->SecurityQos) = RaidNtStatusToSrbStatus(v9);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      LODWORD(pData) = a2->IoStatus.Status;
      WPP_SF_qqD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x1Au,
        (__int64)&WPP_0a9d81cc67956adf3a94d0464afc2bb3_Traceguids,
        *(_QWORD *)(v3 + 8),
        a2,
        pData);
    }
    RaidUnitEndDeviceBusy(v3, a2);
    return RaidCompleteRequestEx(a2, 0, v9);
  }
  v9 = RaidUnitClaimIrp(v3, (__int64)a2, 0LL, a3);
  if ( v9 >= 0 )
  {
    v11 = 1;
    v12 = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
    if ( BYTE2(v12->SecurityQos) == 40 )
      SecurityQos = (__int64)v12[4].SecurityQos;
    else
      SecurityQos = (__int64)v12[2].SecurityQos;
    LOBYTE(FullCreateOptions) = BYTE2(SecurityContext->SecurityQos);
    if ( (_BYTE)FullCreateOptions == 40 )
      FullCreateOptions = SecurityContext->FullCreateOptions;
    else
      FullCreateOptions = (unsigned __int8)FullCreateOptions;
    if ( FullCreateOptions != 16 )
    {
      v14 = *(_QWORD *)(SecurityQos + 160);
      LOBYTE(v12) = *(_BYTE *)(v14 + 2);
      if ( (_BYTE)v12 == 40 )
        v15 = *(_DWORD *)(v14 + 20);
      else
        v15 = (unsigned __int8)v12;
      _InterlockedAdd((volatile signed __int32 *)(v3 + 980), 1u);
      if ( v15 >= 0x12 )
      {
        if ( v15 <= 0x13 )
        {
          RaidPauseAdapterQueue(*(_QWORD *)(v3 + 24));
        }
        else if ( v15 == 32 )
        {
          RaidPauseUnitQueue(v3);
        }
      }
      v6 = 1;
    }
    LOBYTE(v16) = BYTE2(SecurityContext->SecurityQos);
    if ( (_BYTE)v16 == 40 )
      v16 = SecurityContext->FullCreateOptions;
    else
      v16 = (unsigned __int8)v16;
    if ( v16 == 16 && (unsigned int)dword_1C0044050 > 5 )
    {
      v20 = v30;
      if ( TlgKeywordOn((TraceLoggingHProvider)v12, 0x400000000000uLL) )
      {
        v21 = *(_DWORD *)(v30 + 56);
        v34 = 0;
        v37 = 0;
        v40 = 0;
        v43 = 0;
        v46 = 0;
        v49 = 0;
        v29 = v21;
        v28 = *(_BYTE *)(v3 + 88);
        v27 = *(_BYTE *)(v3 + 89);
        v26 = *(_BYTE *)(v3 + 90);
        v32 = v30 + 5412;
        v35 = v3 + 1672;
        v38 = &v29;
        v41 = &v28;
        v44 = &v27;
        v47 = &v26;
        v33 = 16;
        v36 = 16;
        v39 = 4;
        v42 = (int)v19;
        v45 = (int)v19;
        v48 = (int)v19;
        TlgWrite(v17, &unk_1C003CF18, v18, v19, 8u, &v31);
      }
    }
    else
    {
      v20 = v30;
    }
    *(_QWORD *)(SecurityQos + 648) = RaidUnitCompleteResetRequest;
    result = RaidAdapterExecuteXrb(v20, SecurityQos);
    v9 = result;
  }
  else
  {
    result = RaUnitReleaseRemoveLock(v3);
    v11 = v29;
  }
  if ( v9 < 0 )
  {
    if ( v6 )
    {
      v22 = *(_QWORD *)(SecurityQos + 160);
      v23 = *(_BYTE *)(v22 + 2);
      v24 = v23 == 40 ? *(_DWORD *)(v22 + 20) : v23;
      _InterlockedDecrement((volatile signed __int32 *)(v3 + 980));
      if ( v24 >= 0x12 )
      {
        if ( v24 <= 0x13 )
        {
          RaidResumeAndRestartAdapterQueues(*(_QWORD *)(v3 + 24));
        }
        else if ( v24 == 32 )
        {
          RaidResumeAndRestartUnitQueue(v3);
        }
      }
    }
    if ( v11 )
      RaidUnitReleaseIrp((__int64)a2);
    goto LABEL_42;
  }
  return result;
}
