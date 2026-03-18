/*
 * XREFs of NtUserfnEMPTY @ 0x1C0049AA0
 * Callers:
 *     NtUserfnPARENTNOTIFY @ 0x1C0049A80 (NtUserfnPARENTNOTIFY.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnEMPTY(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  return ((__int64 (__fastcall *)(__int64))mpFnidPfn[(a6 + 6) & 0x1F])(a1);
}
