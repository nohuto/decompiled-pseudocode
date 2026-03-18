/*
 * XREFs of NtUserfnINOUTLPRECT @ 0x1C00F18A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINOUTLPRECT(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4, __int64 a5, char a6)
{
  _OWORD *v7; // rax
  __int64 result; // rax
  __int128 v9; // [rsp+48h] [rbp-20h] BYREF

  v7 = a4;
  if ( (unsigned __int64)a4 >= W32UserProbeAddress )
    v7 = (_OWORD *)W32UserProbeAddress;
  *v7 = *v7;
  v9 = *a4;
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int128 *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             a2,
             a3,
             &v9,
             a5);
  *a4 = v9;
  return result;
}
