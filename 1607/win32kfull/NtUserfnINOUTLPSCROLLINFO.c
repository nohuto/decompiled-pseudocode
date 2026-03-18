/*
 * XREFs of NtUserfnINOUTLPSCROLLINFO @ 0x1C011F9E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINOUTLPSCROLLINFO(__int64 a1, __int64 a2, __int64 a3, __int128 *a4, __int64 a5, char a6)
{
  int v7; // eax
  __int64 result; // rax
  __int128 v9; // [rsp+48h] [rbp-30h] BYREF
  __int64 v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+60h] [rbp-18h]

  v9 = 0uLL;
  v10 = 0LL;
  v11 = 0;
  if ( (unsigned __int64)a4 >= W32UserProbeAddress )
    *W32UserProbeAddress = 0;
  *a4 = *a4;
  *((_QWORD *)a4 + 2) = *((_QWORD *)a4 + 2);
  v7 = *((_DWORD *)a4 + 6);
  *((_DWORD *)a4 + 6) = v7;
  v9 = *a4;
  v10 = *((_QWORD *)a4 + 2);
  v11 = v7;
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int128 *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             a2,
             a3,
             &v9,
             a5);
  *a4 = v9;
  *((_QWORD *)a4 + 2) = v10;
  *((_DWORD *)a4 + 6) = v11;
  return result;
}
