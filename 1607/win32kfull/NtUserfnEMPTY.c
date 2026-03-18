/*
 * XREFs of NtUserfnEMPTY @ 0x1C0112C10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnEMPTY(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  return ((__int64 (__fastcall *)(__int64))mpFnidPfn[(a6 + 6) & 0x1F])(a1);
}
