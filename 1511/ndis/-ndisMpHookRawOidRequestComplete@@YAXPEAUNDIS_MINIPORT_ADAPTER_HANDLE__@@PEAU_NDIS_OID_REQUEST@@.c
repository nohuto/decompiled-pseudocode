/*
 * XREFs of ?ndisMpHookRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C006EE20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ndisMpHookRawOidRequestComplete(KSPIN_LOCK *a1, struct _NDIS_OID_REQUEST *a2, __int64 a3)
{
  ndisMRawOidRequestComplete(a1, a2, a3);
}
