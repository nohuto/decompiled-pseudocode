/*
 * XREFs of NtUserfnINLPUAHDRAWMENUITEM @ 0x1C0129070
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINLPUAHDRAWMENUITEM(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4, __int64 a5, char a6)
{
  _OWORD v7[9]; // [rsp+40h] [rbp-A8h] BYREF

  if ( (unsigned __int64)a4 >= W32UserProbeAddress )
    a4 = (_OWORD *)W32UserProbeAddress;
  v7[0] = *a4;
  v7[1] = a4[1];
  v7[2] = a4[2];
  v7[3] = a4[3];
  v7[4] = a4[4];
  v7[5] = a4[5];
  v7[6] = a4[6];
  v7[7] = a4[7];
  v7[8] = a4[8];
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _OWORD *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           a3,
           v7,
           a5);
}
