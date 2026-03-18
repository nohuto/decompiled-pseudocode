/*
 * XREFs of NtUserfnOUTLPCOMBOBOXINFO @ 0x1C00E4620
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall NtUserfnOUTLPCOMBOBOXINFO(__int64 a1, unsigned int a2, __int64 a3, _OWORD *a4, __int64 a5, char a6)
{
  __int64 result; // rax
  _OWORD v11[4]; // [rsp+50h] [rbp-78h] BYREF

  memset(v11, 0, sizeof(v11));
  if ( (unsigned __int64)a4 >= W32UserProbeAddress )
    *W32UserProbeAddress = 0;
  *a4 = *a4;
  a4[1] = a4[1];
  a4[2] = a4[2];
  a4[3] = a4[3];
  v11[0] = *a4;
  v11[1] = a4[1];
  v11[2] = a4[2];
  v11[3] = a4[3];
  result = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _OWORD *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             a2,
             a3,
             v11,
             a5);
  *a4 = v11[0];
  a4[1] = v11[1];
  a4[2] = v11[2];
  a4[3] = v11[3];
  return result;
}
