/*
 * XREFs of NtUserfnINOUTMENUGETOBJECT @ 0x1C0222CA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINOUTMENUGETOBJECT(__int64 a1, __int64 a2, __int64 a3, __int128 *a4, __int64 a5, char a6)
{
  __int128 *v7; // rax
  __int64 result; // rax
  __int128 v9; // [rsp+48h] [rbp-30h] BYREF
  __int128 v10; // [rsp+58h] [rbp-20h]

  v7 = a4;
  if ( (unsigned __int64)a4 >= W32UserProbeAddress )
    v7 = (__int128 *)W32UserProbeAddress;
  v9 = *v7;
  v10 = v7[1];
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int128 *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             a2,
             a3,
             &v9,
             a5);
  *a4 = v9;
  a4[1] = v10;
  return result;
}
