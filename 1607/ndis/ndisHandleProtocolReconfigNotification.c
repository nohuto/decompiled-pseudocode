/*
 * XREFs of ndisHandleProtocolReconfigNotification @ 0x1C00F2BA8
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C00AD7C4 (ndisHandleUModePnPOp.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     ndisDereferenceProtocol @ 0x1C00160E0 (ndisDereferenceProtocol.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00184DC (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_Z @ 0x1C0042BCC (WPP_SF_Z.c)
 *     WPP_SF_Zq @ 0x1C004EAC4 (WPP_SF_Zq.c)
 *     ndisMapOpenByName @ 0x1C004F430 (ndisMapOpenByName.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A46C8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A4714 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A6BC8 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00A84A4 (ndisDeliverNetPnPEventSynchronously.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00A866C (ndisInitializeNetPnPEvent.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E30C0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00E30F8 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ndisReferenceProtocolByName @ 0x1C00F43A4 (ndisReferenceProtocolByName.c)
 */

__int64 __fastcall ndisHandleProtocolReconfigNotification(
        const UNICODE_STRING *a1,
        UNICODE_STRING *a2,
        __int64 a3,
        int a4,
        int a5)
{
  __int64 v5; // rdi
  char v6; // r12
  int v9; // esi
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // eax
  bool v13; // r12
  KIRQL v14; // al
  struct _KEVENT *v15; // rcx
  struct _NDIS_MINIPORT_BLOCK *v16; // rdx
  char v18; // [rsp+30h] [rbp-D0h]
  char v19; // [rsp+31h] [rbp-CFh]
  KIRQL v20; // [rsp+32h] [rbp-CEh]
  __int64 v22; // [rsp+48h] [rbp-B8h]
  struct _KEVENT v25; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v26[20]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v27; // [rsp+120h] [rbp+20h] BYREF
  int v28; // [rsp+128h] [rbp+28h]
  __int64 v29; // [rsp+130h] [rbp+30h]
  int v30; // [rsp+138h] [rbp+38h]

  v5 = 0LL;
  v22 = 0LL;
  v6 = 0;
  v18 = 0;
  v19 = 0;
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_Z(0x1Fu, &WPP_79db669c0b7b3867b570cbb53c4c883f_Traceguids, &a2->Length);
  v9 = ndisReferenceProtocolByName(a2);
  if ( v9 < 0 )
    goto LABEL_47;
  if ( !a1->Length )
  {
    if ( MEMORY[0x38] < 6u && !MEMORY[0x80] )
    {
      v9 = -1073741823;
      goto LABEL_42;
    }
    KeWaitForSingleObject((PVOID)0x168, Executive, 0, 0, 0LL);
    ++MEMORY[0x1A8];
    MEMORY[0x1A0] = KeGetCurrentThread();
    MEMORY[0x1AC] = 69433;
LABEL_20:
    ndisInitializeNetPnPEvent(&v27, &v25);
    if ( a5 == 3 )
    {
      v28 = 4;
    }
    else
    {
      if ( a5 != 9 )
      {
        v9 = -1073741808;
        MEMORY[0x1AC] = 0;
        if ( !--MEMORY[0x1A8] )
          MEMORY[0x1A0] = 0LL;
        KeReleaseMutex((PRKMUTEX)0x168, 0);
        goto LABEL_42;
      }
      v28 = 5;
    }
    v29 = a3;
    v30 = a4;
    v12 = ndisDeliverNetPnPEventSynchronously(0LL, v5, (__int64)&v27);
    MEMORY[0x1AC] = 0;
    v9 = v12;
    if ( !--MEMORY[0x1A8] )
      MEMORY[0x1A0] = 0LL;
    KeReleaseMutex((PRKMUTEX)0x168, 0);
    v13 = v9 == 65539;
    if ( v5 )
    {
      v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 232));
      v20 = v14;
      if ( (*(_DWORD *)(v5 + 224) & 0x80000) == 0 )
      {
        *(_DWORD *)(v5 + 224) &= ~0x10u;
        v15 = *(struct _KEVENT **)(v5 + 1008);
        if ( v15 )
        {
          KeSetEvent(v15, 0, 0);
          *(_QWORD *)(v5 + 1008) = 0LL;
          v13 = 0;
          v14 = v20;
        }
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 232), v14);
      if ( v22 && v13 && MEMORY[0x38] <= 6u && (MEMORY[0x38] != 6 || MEMORY[0x39] < 0x28u) )
      {
        Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(*(_QWORD *)(v5 + 16) + 5208LL));
        if ( Ndis::BindState::SetBinding(
               (Ndis::BindState *)(*(_QWORD *)(v5 + 952) + 8LL),
               BindingDisabled,
               Reason_RebindNeeded)
          && (unsigned __int8)byte_1C00895E3 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_PROTOCOL_LINK **)(v5 + 952),
            (struct NDIS_PNPTRACE_LOCALS *)v26);
          WPP_SF_Zq(0x20u, &WPP_79db669c0b7b3867b570cbb53c4c883f_Traceguids, (unsigned __int16 *)v26[1], v26[0]);
        }
        Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(*(_QWORD *)(v5 + 16) + 5208LL), v16);
        Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(*(_QWORD *)(v5 + 16) + 5208LL), RunSynchronous, 0);
      }
    }
LABEL_42:
    if ( !v18 )
      goto LABEL_44;
    goto LABEL_43;
  }
  while ( 1 )
  {
    KeWaitForSingleObject((PVOID)0x168, Executive, 0, 0, 0LL);
    ++MEMORY[0x1A8];
    MEMORY[0x1A0] = KeGetCurrentThread();
    MEMORY[0x1AC] = 69361;
    v10 = ndisMapOpenByName(a1, 0LL);
    v5 = v10;
    if ( v10 )
      break;
    MEMORY[0x1AC] = 0;
    if ( !--MEMORY[0x1A8] )
      MEMORY[0x1A0] = 0LL;
    KeReleaseMutex((PRKMUTEX)0x168, 0);
    ndisDereferenceProtocol(0LL, v11, 4u);
    if ( !v6 )
      v6 = 1;
    if ( (int)ndisReferenceProtocolByName(a2) < 0 )
    {
      v9 = -1073741772;
      goto LABEL_45;
    }
  }
  v18 = 1;
  v19 = 1;
  v22 = *(_QWORD *)(v10 + 16);
  if ( MEMORY[0x38] >= 6u || MEMORY[0x80] )
    goto LABEL_20;
  MEMORY[0x1AC] = 0;
  if ( !--MEMORY[0x1A8] )
    MEMORY[0x1A0] = 0LL;
  KeReleaseMutex((PRKMUTEX)0x168, 0);
  v9 = -1073741823;
LABEL_43:
  ndisMDereferenceOpenUnlocked(v5, 4u);
LABEL_44:
  LOBYTE(v5) = 0;
LABEL_45:
  if ( v19 != (_BYTE)v5 )
    ndisDereferenceMiniport(v22);
LABEL_47:
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_q(0x21u, &WPP_79db669c0b7b3867b570cbb53c4c883f_Traceguids, 0LL);
  return (unsigned int)v9;
}
