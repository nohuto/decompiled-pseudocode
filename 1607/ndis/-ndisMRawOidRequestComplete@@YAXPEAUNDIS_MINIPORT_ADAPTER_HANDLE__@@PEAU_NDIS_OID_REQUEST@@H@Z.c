/*
 * XREFs of ?ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C0043ECC
 * Callers:
 *     ?ndisMpHookDefaultOidRequestComplete@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00739F0 (-ndisMpHookDefaultOidRequestComplete@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_M.c)
 *     ?ndisMpHookRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C0073CD0 (-ndisMpHookRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@.c)
 * Callees:
 *     ndisOidFreeInternalCloneRequest @ 0x1C000C7DC (ndisOidFreeInternalCloneRequest.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C0025D70 (ndisMOidRequestCompleteInternal.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 *     ndisClearBusy @ 0x1C006B5C8 (ndisClearBusy.c)
 */

void __fastcall ndisMRawOidRequestComplete(KSPIN_LOCK *a1, struct _NDIS_OID_REQUEST *a2, __int64 a3)
{
  int v3; // r14d
  UCHAR *NdisReserved; // rdi
  struct _NDIS_OID_REQUEST *v7; // rbp
  struct _NDIS_OID_REQUEST *v8; // [rsp+50h] [rbp+8h] BYREF

  v3 = a3;
  v8 = a2;
  NdisReserved = a2->NdisReserved;
  v7 = a2;
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qqd(36LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a1, a2, a3);
  if ( (*((_DWORD *)NdisReserved + 4) & 0x8000000) != 0 )
  {
    LOBYTE(a3) = 1;
    ndisOidFreeInternalCloneRequest(a1, (__int64)a2, a3, (KSPIN_LOCK *)&v8);
    v7 = v8;
    NdisReserved = v8->NdisReserved;
  }
  if ( (*((_DWORD *)NdisReserved + 4) & 0x400) != 0 )
  {
    *((_DWORD *)NdisReserved + 2) = v3;
    KeSetEvent((PRKEVENT)(NdisReserved + 40), 0, 0);
  }
  else
  {
    if ( a1[564] )
      ndisClearBusy(a1, 1LL, 33LL);
    ndisMOidRequestCompleteInternal((__int64)a1, (__int64)v7, v3, 0LL);
  }
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qq(0x25u, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a1, a2);
}
