/*
 * XREFs of ?ndisMpHookDefaultOidRequestComplete@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C006F6C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisMpHookDefaultOidRequestComplete(
        void *a1,
        struct NDIS_MINIPORT_HOOK_ADAPTER_HANDLE__ *a2,
        KSPIN_LOCK *a3,
        struct _NDIS_OID_REQUEST *a4,
        unsigned int a5)
{
  ndisMRawOidRequestComplete(a3, a4, a5);
}
