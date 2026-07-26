/*
 * XREFs of ndisHandleProtocolReconfigNotification @ 0x1C00EB930
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C0099308 (ndisHandleUModePnPOp.c)
 * Callees:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0003024 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     ndisDereferenceProtocol @ 0x1C0019724 (ndisDereferenceProtocol.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_Z @ 0x1C003DF0C (WPP_SF_Z.c)
 *     WPP_SF_Zq @ 0x1C00498B4 (WPP_SF_Zq.c)
 *     ndisMapOpenByName @ 0x1C004A174 (ndisMapOpenByName.c)
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00A1940 (ndisDeliverNetPnPEventSynchronously.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z @ 0x1C00A1F38 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2040 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A213C (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A32CC (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00A6A98 (ndisInitializeNetPnPEvent.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2F48 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ndisReferenceProtocolByName @ 0x1C00EB9E4 (ndisReferenceProtocolByName.c)
 */

__int64 __fastcall ndisHandleProtocolReconfigNotification(
        __int64 *SourceString,
        __int64 *a2,
        __int64 a3,
        int a4,
        int a5)
{
  __int64 v5; // rdi
  char v6; // r15
  char v7; // r12
  int v10; // esi
  __int64 v12; // rdx
  __int64 v13; // r13
  int v14; // eax
  KIRQL v15; // al
  char v16; // [rsp+30h] [rbp-D0h]
  __int64 v17; // [rsp+40h] [rbp-C0h]
  struct _KEVENT v20; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v21[20]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v22; // [rsp+110h] [rbp+10h] BYREF
  int v23; // [rsp+118h] [rbp+18h]
  __int64 v24; // [rsp+120h] [rbp+20h]
  int v25; // [rsp+128h] [rbp+28h]

  v5 = 0LL;
  v17 = 0LL;
  v6 = 0;
  v7 = 0;
  v16 = 0;
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_Z(0x1Fu, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids, a2);
  v10 = ndisReferenceProtocolByName((PCUNICODE_STRING)a2);
  if ( v10 >= 0 )
  {
    if ( *(_WORD *)SourceString )
    {
      while ( 1 )
      {
        KeWaitForSingleObject((PVOID)0x168, Executive, 0, 0, 0LL);
        ++MEMORY[0x1A8];
        MEMORY[0x1A0] = KeGetCurrentThread();
        MEMORY[0x1AC] = 69355;
        v5 = ndisMapOpenByName(SourceString, 0LL);
        if ( v5 )
          break;
        MEMORY[0x1AC] = 0;
        if ( !--MEMORY[0x1A8] )
          MEMORY[0x1A0] = 0LL;
        KeReleaseMutex((PRKMUTEX)0x168, 0);
        ndisDereferenceProtocol(0LL, v12, 4u);
        if ( !v6 )
          v6 = 1;
        if ( (int)ndisReferenceProtocolByName((PCUNICODE_STRING)a2) < 0 )
        {
          v10 = -1073741772;
          goto LABEL_49;
        }
      }
      v13 = *(_QWORD *)(v5 + 16);
      v17 = v13;
      v7 = 1;
      v16 = 1;
      if ( MEMORY[0x38] < 6u && !MEMORY[0x80] )
      {
        MEMORY[0x1AC] = 0;
        if ( !--MEMORY[0x1A8] )
          MEMORY[0x1A0] = 0LL;
        KeReleaseMutex((PRKMUTEX)0x168, 0);
        v10 = -1073741823;
LABEL_48:
        ndisMDereferenceOpenUnlocked(v5);
LABEL_49:
        if ( v16 )
          ndisDereferenceMiniport(v17, 0x32u);
        goto LABEL_4;
      }
    }
    else
    {
      if ( MEMORY[0x38] < 6u && !MEMORY[0x80] )
      {
        v10 = -1073741823;
        goto LABEL_47;
      }
      KeWaitForSingleObject((PVOID)0x168, Executive, 0, 0, 0LL);
      ++MEMORY[0x1A8];
      v13 = 0LL;
      MEMORY[0x1A0] = KeGetCurrentThread();
      MEMORY[0x1AC] = 69427;
    }
    ndisInitializeNetPnPEvent(&v22, &v20);
    if ( a5 == 3 )
    {
      v23 = 4;
    }
    else
    {
      if ( a5 != 9 )
      {
        MEMORY[0x1AC] = 0;
        v10 = -1073741808;
        if ( !--MEMORY[0x1A8] )
          MEMORY[0x1A0] = 0LL;
        KeReleaseMutex((PRKMUTEX)0x168, 0);
        goto LABEL_47;
      }
      v23 = 5;
    }
    v24 = a3;
    v25 = a4;
    v14 = ndisDeliverNetPnPEventSynchronously(0LL, v5, (__int64)&v22);
    MEMORY[0x1AC] = 0;
    v10 = v14;
    if ( !--MEMORY[0x1A8] )
      MEMORY[0x1A0] = 0LL;
    KeReleaseMutex((PRKMUTEX)0x168, 0);
    if ( v10 == 65539 )
    {
      if ( v5 && v13 && MEMORY[0x38] <= 6u && (MEMORY[0x38] != 6 || MEMORY[0x39] < 0x28u) )
      {
        Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(*(_QWORD *)(v5 + 16) + 5208LL));
        if ( Ndis::BindState::SetBinding(
               (Ndis::BindState *)(*(_QWORD *)(v5 + 952) + 8LL),
               BindingDisabled,
               Reason_RebindNeeded)
          && (unsigned __int8)byte_1C0085323 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_PROTOCOL_LINK **)(v5 + 952),
            (struct NDIS_PNPTRACE_LOCALS *)v21);
          WPP_SF_Zq(0x20u, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids, (__int64 *)v21[1], v21[0]);
        }
        Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(*(_QWORD *)(v5 + 16) + 5208LL));
        Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(*(_QWORD *)(v5 + 16) + 5208LL), RunSynchronous);
      }
    }
    else if ( v5 )
    {
      v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 232));
      if ( (*(_DWORD *)(v5 + 224) & 0x80000) == 0 )
        *(_DWORD *)(v5 + 224) &= ~0x10u;
      KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 232), v15);
    }
LABEL_47:
    if ( !v7 )
      goto LABEL_49;
    goto LABEL_48;
  }
LABEL_4:
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_q(0x21u, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids, 0LL);
  return (unsigned int)v10;
}
