/*
 * XREFs of ndisVerifierNdisFReturnNetBufferLists @ 0x1C005FC70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisVerifierNdisFReturnNetBufferLists(__int64 a1, __int64 a2, __int64 a3)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, void (__stdcall *)(NDIS_HANDLE, PNET_BUFFER_LIST, ULONG)))ndisVerifierNdisDispatch->NdisFReturnNetBufferLists)(
           a1,
           a2,
           a3,
           *(_QWORD *)(a1 + 904),
           NdisFReturnNetBufferLists);
}
