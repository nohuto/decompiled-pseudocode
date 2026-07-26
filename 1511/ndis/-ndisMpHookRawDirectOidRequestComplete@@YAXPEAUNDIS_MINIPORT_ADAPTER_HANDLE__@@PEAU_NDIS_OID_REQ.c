/*
 * XREFs of ?ndisMpHookRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C006EE00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ndisMpHookRawDirectOidRequestComplete(
        struct NDIS_MINIPORT_ADAPTER_HANDLE__ *a1,
        struct _NDIS_OID_REQUEST *a2,
        int a3)
{
  ndisMRawDirectOidRequestComplete(a1, a2, a3);
}
