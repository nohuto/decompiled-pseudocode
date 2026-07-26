/*
 * XREFs of ndisVerifierNdisFIndicateReceiveNetBufferLists @ 0x1C005FC00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisVerifierNdisFIndicateReceiveNetBufferLists(__int64 a1, __int64 a2, __int64 a3)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64))ndisVerifierNdisDispatch->NdisFIndicateReceiveNetBufferLists)(
           a1,
           a2,
           a3);
}
