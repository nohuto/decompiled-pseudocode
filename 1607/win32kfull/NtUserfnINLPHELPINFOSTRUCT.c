/*
 * XREFs of NtUserfnINLPHELPINFOSTRUCT @ 0x1C021CBF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINLPHELPINFOSTRUCT(__int64 a1, __int64 a2, __int64 a3, __m128i *a4, __int64 a5, char a6)
{
  __int64 v6; // rbx
  __m128i v8[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v9; // [rsp+60h] [rbp-18h]

  if ( (unsigned __int64)a4 >= W32UserProbeAddress )
    a4 = (__m128i *)W32UserProbeAddress;
  v8[0] = *a4;
  v8[1] = a4[1];
  v9 = a4[2].m128i_i64[0];
  if ( _mm_cvtsi128_si32(v8[0]) == 40 )
    return ((__int64 (__fastcall *)(__int64, __int64, __int64, __m128i *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             a2,
             a3,
             v8,
             a5);
  v6 = 0LL;
  UserSetLastError(87LL);
  return v6;
}
