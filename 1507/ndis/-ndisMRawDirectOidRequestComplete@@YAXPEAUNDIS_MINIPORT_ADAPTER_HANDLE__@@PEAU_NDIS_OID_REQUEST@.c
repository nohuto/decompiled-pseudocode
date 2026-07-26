/*
 * XREFs of ?ndisMRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C003EAB0
 * Callers:
 *     ?ndisMpHookDefaultDirectOidRequestComplete@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C006F6B0 (-ndisMpHookDefaultDirectOidRequestComplete@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAU.c)
 *     ?ndisMpHookRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C006F980 (-ndisMpHookRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQ.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C0040E6C (ndisMOidRequestCompleteInternal.c)
 *     WPP_SF_qqd @ 0x1C004BBA8 (WPP_SF_qqd.c)
 *     ndisClearBusy @ 0x1C0067508 (ndisClearBusy.c)
 */

void __fastcall ndisMRawDirectOidRequestComplete(
        struct NDIS_MINIPORT_ADAPTER_HANDLE__ *a1,
        struct _NDIS_OID_REQUEST *a2,
        unsigned int a3)
{
  KIRQL v6; // al

  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qqd(38LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, a1, a2, a3);
  if ( *((_QWORD *)a1 + 564) )
    ndisClearBusy(a1, 1LL, 50LL);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
  --*((_DWORD *)a1 + 1078);
  *((_QWORD *)a1 + 65) = 0LL;
  *((_DWORD *)a1 + 464) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v6);
  ndisMOidRequestCompleteInternal(a1, a2, a3, 0LL);
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qq(0x27u, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, a1, a2);
}
