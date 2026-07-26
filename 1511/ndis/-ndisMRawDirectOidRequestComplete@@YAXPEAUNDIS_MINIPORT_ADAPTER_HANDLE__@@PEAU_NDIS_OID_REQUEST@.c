/*
 * XREFs of ?ndisMRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00402A8
 * Callers:
 *     ?ndisMpHookDefaultDirectOidRequestComplete@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C006EB30 (-ndisMpHookDefaultDirectOidRequestComplete@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAU.c)
 *     ?ndisMpHookRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C006EE00 (-ndisMpHookRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQ.c)
 * Callees:
 *     ndisMOidRequestCompleteInternal @ 0x1C0025A0C (ndisMOidRequestCompleteInternal.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 *     ndisClearBusy @ 0x1C00665D8 (ndisClearBusy.c)
 */

void __fastcall ndisMRawDirectOidRequestComplete(
        struct NDIS_MINIPORT_ADAPTER_HANDLE__ *a1,
        struct _NDIS_OID_REQUEST *a2,
        int a3)
{
  KIRQL v6; // al

  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qqd(38LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, a1, a2, a3);
  if ( *((_QWORD *)a1 + 564) )
    ndisClearBusy(a1, 1LL, 50LL);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
  --*((_DWORD *)a1 + 1078);
  *((_QWORD *)a1 + 65) = 0LL;
  *((_DWORD *)a1 + 464) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v6);
  ndisMOidRequestCompleteInternal((__int64)a1, (__int64)a2, a3, 0LL);
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qq(0x27u, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, a1, a2);
}
