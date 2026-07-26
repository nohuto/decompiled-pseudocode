/*
 * XREFs of ndisVerifierNdisMIndicateStatusEx @ 0x1C0064000
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisVerifierNdisMIndicateStatusEx(__int64 a1, __int64 a2)
{
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, void (__stdcall *)(NDIS_HANDLE, PNDIS_STATUS_INDICATION)))ndisVerifierNdisDispatch->NdisMIndicateStatusEx)(
           a1,
           a2,
           *(_QWORD *)(a1 + 5024),
           NdisMIndicateStatusEx);
}
