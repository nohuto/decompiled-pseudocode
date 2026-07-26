/*
 * XREFs of ?ndisMRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C0043DFC
 * Callers:
 *     ?ndisMpHookDefaultDirectOidRequestComplete@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00739E0 (-ndisMpHookDefaultDirectOidRequestComplete@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAU.c)
 *     ?ndisMpHookRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C0073CB0 (-ndisMpHookRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQ.c)
 * Callees:
 *     ndisMOidRequestCompleteInternal @ 0x1C0025D70 (ndisMOidRequestCompleteInternal.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 *     ndisClearBusy @ 0x1C006B5C8 (ndisClearBusy.c)
 */

void __fastcall ndisMRawDirectOidRequestComplete(
        struct NDIS_MINIPORT_ADAPTER_HANDLE__ *a1,
        struct _NDIS_OID_REQUEST *a2,
        int a3)
{
  KIRQL v6; // al

  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qqd(38LL, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a1, a2, a3);
  if ( *((_QWORD *)a1 + 564) )
    ndisClearBusy(a1, 1LL, 50LL);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
  --*((_DWORD *)a1 + 1078);
  *((_QWORD *)a1 + 65) = 0LL;
  *((_DWORD *)a1 + 464) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v6);
  ndisMOidRequestCompleteInternal((__int64)a1, (__int64)a2, a3, 0LL);
  if ( (unsigned __int8)byte_1C00895D2 >= 4u )
    WPP_SF_qq(0x27u, &WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, a1, a2);
}
