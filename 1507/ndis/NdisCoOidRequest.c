/*
 * XREFs of NdisCoOidRequest @ 0x1C00F8260
 * Callers:
 *     NdisCoRequest @ 0x1C00F8720 (NdisCoRequest.c)
 * Callees:
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0018F9C (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qqq @ 0x1C00377D0 (WPP_SF_qqq.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     NdisMCoOidRequestComplete @ 0x1C004C7F0 (NdisMCoOidRequestComplete.c)
 *     NdisCoOidRequestComplete @ 0x1C00F8660 (NdisCoOidRequestComplete.c)
 *     ndisCoOidRequestToRequest @ 0x1C00F9A70 (ndisCoOidRequestToRequest.c)
 *     ndisDereferenceAf @ 0x1C00F9B78 (ndisDereferenceAf.c)
 *     ndisReferenceAf @ 0x1C00F9E4C (ndisReferenceAf.c)
 */

NDIS_STATUS __stdcall NdisCoOidRequest(
        NDIS_HANDLE NdisBindingHandle,
        NDIS_HANDLE NdisAfHandle,
        NDIS_HANDLE NdisVcHandle,
        NDIS_HANDLE NdisPartyHandle,
        PNDIS_OID_REQUEST OidRequest)
{
  PNDIS_OID_REQUEST v5; // rdi
  char v10; // r13
  NDIS_STATUS v11; // ebx
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // r12
  PNDIS_OID_REQUEST v15; // r15
  NDIS_STATUS Status; // eax
  __int64 v17; // rbp
  KIRQL v18; // al
  int v19; // ecx
  KIRQL v20; // dl
  __int64 v21; // rax
  __int64 v23; // [rsp+30h] [rbp-48h]
  __int64 v24; // [rsp+80h] [rbp+8h]
  __int64 v25; // [rsp+90h] [rbp+18h] BYREF
  NDIS_HANDLE NdisPartyHandlea; // [rsp+98h] [rbp+20h]

  NdisPartyHandlea = NdisPartyHandle;
  v5 = OidRequest;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qqq(0x40u, &WPP_d29b05a9accab437aa613ff999d87cb7_Traceguids, NdisBindingHandle, NdisAfHandle, OidRequest);
  *(_QWORD *)&v5->NdisReserved[32] = NdisBindingHandle;
  if ( v5->Header.Type != 0x96 || v5->Header.Size < 0xECu )
    goto LABEL_56;
  v10 = 1;
  if ( !v5->Header.Revision )
  {
    v11 = -1071448020;
    goto LABEL_57;
  }
  v12 = 0LL;
  if ( !NdisAfHandle )
  {
    *(_QWORD *)&v5->NdisReserved[32] = NdisBindingHandle;
    v17 = *((_QWORD *)NdisBindingHandle + 2);
    v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v17 + 96));
    *(_QWORD *)(v17 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v17 + 1856) = 1578736;
    v19 = *((_DWORD *)NdisBindingHandle + 56);
    LOBYTE(OidRequest) = v18;
    if ( (v19 & 0x8000) != 0 )
    {
      v11 = -1073676286;
    }
    else if ( (*(_DWORD *)(v17 + 120) & 0x300000) != 0 )
    {
      v11 = -1073676275;
    }
    else
    {
      v11 = 0;
      ndisMReferenceOpen((__int64)NdisBindingHandle, 6u);
    }
    v20 = (unsigned __int8)OidRequest;
    *(_QWORD *)(v17 + 520) = 0LL;
    *(_DWORD *)(v17 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v17 + 96), v20);
    if ( v11 )
      goto LABEL_57;
    *(_DWORD *)&v5->NdisReserved[16] |= 0x20u;
    *(_QWORD *)&v5->NdisReserved[32] = NdisBindingHandle;
    *(_QWORD *)&v5->NdisReserved[56] = 0LL;
    if ( NdisVcHandle )
    {
      if ( *((NDIS_HANDLE *)NdisVcHandle + 10) == NdisBindingHandle )
        v21 = *((_QWORD *)NdisVcHandle + 3);
      else
        v21 = *((_QWORD *)NdisVcHandle + 18);
      *(_QWORD *)&v5->NdisReserved[56] = v21;
    }
    if ( (*(_DWORD *)(*((_QWORD *)NdisBindingHandle + 2) + 124LL) & 0x100) != 0 )
    {
      v11 = v5->RequestType != NdisRequestSetInformation ? 0xC0000001 : 0;
    }
    else
    {
      if ( NdisVcHandle )
        v12 = *((_QWORD *)NdisVcHandle + 25);
      v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, PNDIS_OID_REQUEST))(*(_QWORD *)(v17 + 3816) + 552LL))(
              *(_QWORD *)(v17 + 2240),
              v12,
              v5);
      if ( v11 == 259 )
        goto LABEL_57;
    }
    NdisMCoOidRequestComplete(*((NDIS_HANDLE *)NdisBindingHandle + 2), NdisVcHandle, v5, v11);
    goto LABEL_55;
  }
  v13 = 0LL;
  OidRequest = 0LL;
  v25 = 0LL;
  if ( !(unsigned __int8)ndisReferenceAf(NdisAfHandle) )
  {
LABEL_56:
    v11 = -1073741823;
    goto LABEL_57;
  }
  *(_DWORD *)&v5->NdisReserved[16] |= 8u;
  v24 = 0LL;
  KeInitializeEvent((PRKEVENT)&v5->NdisReserved[40], NotificationEvent, 0);
  if ( *((NDIS_HANDLE *)NdisAfHandle + 46) == NdisBindingHandle )
  {
    if ( *((_DWORD *)NdisAfHandle + 98) < 6u )
    {
      v13 = *(_QWORD *)(*((_QWORD *)NdisAfHandle + 3) + 120LL);
      v25 = v13;
    }
    else
    {
      v10 = 0;
      OidRequest = *(PNDIS_OID_REQUEST *)(*((_QWORD *)NdisAfHandle + 4) + 120LL);
    }
    v23 = *((_QWORD *)NdisAfHandle + 6);
    *(_QWORD *)&v5->NdisReserved[64] = *((_QWORD *)NdisAfHandle + 47);
    if ( NdisVcHandle )
    {
      *(_QWORD *)&v5->NdisReserved[56] = *((_QWORD *)NdisVcHandle + 3);
      v24 = *((_QWORD *)NdisVcHandle + 18);
    }
    if ( NdisPartyHandle )
    {
      *(_QWORD *)&v5->NdisReserved[40] = *((_QWORD *)NdisPartyHandle + 2);
      v14 = *((_QWORD *)NdisPartyHandle + 1);
      goto LABEL_25;
    }
  }
  else
  {
    if ( *((_DWORD *)NdisAfHandle + 99) < 6u )
    {
      v13 = *((_QWORD *)NdisAfHandle + 10);
      v25 = v13;
    }
    else
    {
      v10 = 0;
      OidRequest = (PNDIS_OID_REQUEST)*((_QWORD *)NdisAfHandle + 29);
    }
    v23 = *((_QWORD *)NdisAfHandle + 47);
    *(_QWORD *)&v5->NdisReserved[64] = *((_QWORD *)NdisAfHandle + 6);
    if ( NdisVcHandle )
    {
      *(_QWORD *)&v5->NdisReserved[56] = *((_QWORD *)NdisVcHandle + 18);
      v24 = *((_QWORD *)NdisVcHandle + 3);
    }
    if ( NdisPartyHandle )
    {
      *(_QWORD *)&v5->NdisReserved[40] = *((_QWORD *)NdisPartyHandle + 1);
      v14 = *((_QWORD *)NdisPartyHandle + 2);
      goto LABEL_25;
    }
  }
  v14 = 0LL;
LABEL_25:
  if ( v10 )
  {
    if ( !v13 )
    {
LABEL_27:
      v11 = -1073741637;
      ndisDereferenceAf(NdisAfHandle);
      goto LABEL_57;
    }
    v15 = OidRequest;
  }
  else
  {
    v15 = OidRequest;
    if ( !OidRequest )
      goto LABEL_27;
  }
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qq(0x41u, &WPP_d29b05a9accab437aa613ff999d87cb7_Traceguids, v13, v5);
  if ( v10 )
    Status = ndisCoOidRequestToRequest((unsigned int)&v25, v23, v24, v14, (__int64)v5);
  else
    Status = ((__int64 (__fastcall *)(__int64, __int64, __int64, PNDIS_OID_REQUEST))v15)(v23, v24, v14, v5);
  v11 = Status;
  if ( Status != 259 )
  {
    NdisCoOidRequestComplete(NdisAfHandle, NdisVcHandle, NdisPartyHandlea, v5, Status);
LABEL_55:
    v11 = 259;
  }
LABEL_57:
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qD(0x42u, &WPP_d29b05a9accab437aa613ff999d87cb7_Traceguids, (__int64)v5, v11);
  return v11;
}
