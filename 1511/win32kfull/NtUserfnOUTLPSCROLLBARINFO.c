/*
 * XREFs of NtUserfnOUTLPSCROLLBARINFO @ 0x1C0148EA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall NtUserfnOUTLPSCROLLBARINFO(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        char a6)
{
  int v10; // eax
  __int64 v12; // [rsp+30h] [rbp-88h]
  _OWORD v13[4]; // [rsp+48h] [rbp-70h] BYREF

  memset(v13, 0, 0x3CuLL);
  if ( a4 >= W32UserProbeAddress )
    *W32UserProbeAddress = 0;
  *(_OWORD *)a4 = *(_OWORD *)a4;
  *(_OWORD *)(a4 + 16) = *(_OWORD *)(a4 + 16);
  *(_OWORD *)(a4 + 32) = *(_OWORD *)(a4 + 32);
  *(_QWORD *)(a4 + 48) = *(_QWORD *)(a4 + 48);
  v10 = *(_DWORD *)(a4 + 56);
  *(_DWORD *)(a4 + 56) = v10;
  v13[0] = *(_OWORD *)a4;
  v13[1] = *(_OWORD *)(a4 + 16);
  v13[2] = *(_OWORD *)(a4 + 32);
  *(_QWORD *)&v13[3] = *(_QWORD *)(a4 + 48);
  DWORD2(v13[3]) = v10;
  v12 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _OWORD *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
          a1,
          a2,
          a3,
          v13,
          a5);
  *(_OWORD *)a4 = v13[0];
  *(_OWORD *)(a4 + 16) = v13[1];
  *(_OWORD *)(a4 + 32) = v13[2];
  *(_QWORD *)(a4 + 48) = *(_QWORD *)&v13[3];
  *(_DWORD *)(a4 + 56) = DWORD2(v13[3]);
  return v12;
}
