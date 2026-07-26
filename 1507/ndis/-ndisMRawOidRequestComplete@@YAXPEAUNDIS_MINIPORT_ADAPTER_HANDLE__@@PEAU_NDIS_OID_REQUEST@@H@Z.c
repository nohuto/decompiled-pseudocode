/*
 * XREFs of ?ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C003EB80
 * Callers:
 *     ?ndisMpHookDefaultOidRequestComplete@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C006F6C0 (-ndisMpHookDefaultOidRequestComplete@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_M.c)
 *     ?ndisMpHookRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C006F9A0 (-ndisMpHookRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@.c)
 * Callees:
 *     ndisOidFreeInternalCloneRequest @ 0x1C0007DAC (ndisOidFreeInternalCloneRequest.c)
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C0040E6C (ndisMOidRequestCompleteInternal.c)
 *     WPP_SF_qqd @ 0x1C004BBA8 (WPP_SF_qqd.c)
 *     ndisClearBusy @ 0x1C0067508 (ndisClearBusy.c)
 */

void __fastcall ndisMRawOidRequestComplete(KSPIN_LOCK *a1, struct _NDIS_OID_REQUEST *a2, unsigned int a3)
{
  UCHAR *NdisReserved; // rdi
  struct _NDIS_OID_REQUEST *v7; // rbp
  struct _NDIS_OID_REQUEST *v8; // [rsp+50h] [rbp+8h] BYREF

  v8 = a2;
  NdisReserved = a2->NdisReserved;
  v7 = a2;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qqd(36LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, a1, a2, a3);
  if ( (*((_DWORD *)NdisReserved + 4) & 0x8000000) != 0 )
  {
    ndisOidFreeInternalCloneRequest(a1, (__int64)a2, 1, (KSPIN_LOCK *)&v8);
    v7 = v8;
    NdisReserved = v8->NdisReserved;
  }
  if ( (*((_DWORD *)NdisReserved + 4) & 0x400) != 0 )
  {
    *((_DWORD *)NdisReserved + 2) = a3;
    KeSetEvent((PRKEVENT)(NdisReserved + 40), 0, 0);
  }
  else
  {
    if ( a1[564] )
      ndisClearBusy(a1, 1LL, 33LL);
    ndisMOidRequestCompleteInternal(a1, v7, a3, 0LL);
  }
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qq(0x25u, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, a1, a2);
}
