/*
 * XREFs of ndisHandleProtocolReconfigNotification @ 0x1C00EBF10
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C00936F0 (ndisHandleUModePnPOp.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C000B444 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisDereferenceProtocol @ 0x1C001C678 (ndisDereferenceProtocol.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_Z @ 0x1C003EFB4 (WPP_SF_Z.c)
 *     WPP_SF_Zq @ 0x1C004A150 (WPP_SF_Zq.c)
 *     ndisMapOpenByName @ 0x1C004AA14 (ndisMapOpenByName.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z @ 0x1C00A29C8 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2A24 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2A70 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A4E98 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00A5660 (ndisDeliverNetPnPEventSynchronously.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00A581C (ndisInitializeNetPnPEvent.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00DD07C (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ndisReferenceProtocolByName @ 0x1C00ED714 (ndisReferenceProtocolByName.c)
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
  __int64 v11; // rdx
  __int64 v12; // r13
  int v13; // eax
  KIRQL v14; // al
  struct _NDIS_MINIPORT_BLOCK *v15; // rdx
  char v17; // [rsp+30h] [rbp-D0h]
  __int64 v18; // [rsp+40h] [rbp-C0h]
  struct _KEVENT v21; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v22[20]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v23; // [rsp+110h] [rbp+10h] BYREF
  int v24; // [rsp+118h] [rbp+18h]
  __int64 v25; // [rsp+120h] [rbp+20h]
  int v26; // [rsp+128h] [rbp+28h]

  v5 = 0LL;
  v18 = 0LL;
  v6 = 0;
  v7 = 0;
  v17 = 0;
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_Z(0x1Fu, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids, a2);
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
        MEMORY[0x1AC] = 69339;
        v5 = ndisMapOpenByName(SourceString, 0LL);
        if ( v5 )
          break;
        MEMORY[0x1AC] = 0;
        if ( !--MEMORY[0x1A8] )
          MEMORY[0x1A0] = 0LL;
        KeReleaseMutex((PRKMUTEX)0x168, 0);
        ndisDereferenceProtocol(0LL, v11, 4u);
        if ( !v6 )
          v6 = 1;
        if ( (int)ndisReferenceProtocolByName((PCUNICODE_STRING)a2) < 0 )
        {
          v10 = -1073741772;
          goto LABEL_46;
        }
      }
      v12 = *(_QWORD *)(v5 + 16);
      v18 = v12;
      v7 = 1;
      v17 = 1;
      if ( MEMORY[0x38] < 6u && !MEMORY[0x80] )
      {
        MEMORY[0x1AC] = 0;
        if ( !--MEMORY[0x1A8] )
          MEMORY[0x1A0] = 0LL;
        KeReleaseMutex((PRKMUTEX)0x168, 0);
        v10 = -1073741823;
LABEL_45:
        ndisMDereferenceOpenUnlocked(v5, 4u);
LABEL_46:
        if ( v17 )
          ndisDereferenceMiniport(v18, 0x32u);
        goto LABEL_48;
      }
    }
    else
    {
      if ( MEMORY[0x38] < 6u && !MEMORY[0x80] )
      {
        v10 = -1073741823;
        goto LABEL_44;
      }
      KeWaitForSingleObject((PVOID)0x168, Executive, 0, 0, 0LL);
      ++MEMORY[0x1A8];
      v12 = 0LL;
      MEMORY[0x1A0] = KeGetCurrentThread();
      MEMORY[0x1AC] = 69411;
    }
    ndisInitializeNetPnPEvent(&v23, &v21);
    if ( a5 == 3 )
    {
      v24 = 4;
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
        goto LABEL_44;
      }
      v24 = 5;
    }
    v25 = a3;
    v26 = a4;
    v13 = ndisDeliverNetPnPEventSynchronously(0LL, v5, (__int64)&v23);
    MEMORY[0x1AC] = 0;
    v10 = v13;
    if ( !--MEMORY[0x1A8] )
      MEMORY[0x1A0] = 0LL;
    KeReleaseMutex((PRKMUTEX)0x168, 0);
    if ( v10 == 65539 )
    {
      if ( v5 && v12 && MEMORY[0x38] <= 6u && (MEMORY[0x38] != 6 || MEMORY[0x39] < 0x28u) )
      {
        Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(*(_QWORD *)(v5 + 16) + 5208LL));
        if ( Ndis::BindState::SetBinding(
               (Ndis::BindState *)(*(_QWORD *)(v5 + 952) + 8LL),
               BindingDisabled,
               Reason_RebindNeeded)
          && (unsigned __int8)byte_1C0083723 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_PROTOCOL_LINK **)(v5 + 952),
            (struct NDIS_PNPTRACE_LOCALS *)v22);
          WPP_SF_Zq(0x20u, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids, (__int64 *)v22[1], v22[0]);
        }
        Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(*(_QWORD *)(v5 + 16) + 5208LL), v15);
        Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(*(_QWORD *)(v5 + 16) + 5208LL), RunSynchronous);
      }
    }
    else if ( v5 )
    {
      v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 232));
      if ( (*(_DWORD *)(v5 + 224) & 0x80000) == 0 )
        *(_DWORD *)(v5 + 224) &= ~0x10u;
      KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 232), v14);
    }
LABEL_44:
    if ( !v7 )
      goto LABEL_46;
    goto LABEL_45;
  }
LABEL_48:
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_q(0x21u, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids, 0LL);
  return (unsigned int)v10;
}
