/*
 * XREFs of NtUserfnOUTLPTITLEBARINFOEX @ 0x1C0120930
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall NtUserfnOUTLPTITLEBARINFOEX(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        char a6)
{
  __int64 v10; // rdi
  _OWORD v12[9]; // [rsp+50h] [rbp-D8h] BYREF

  memset(v12, 0, 0x8CuLL);
  v10 = 0LL;
  if ( a4 >= W32UserProbeAddress )
    *W32UserProbeAddress = 0;
  *(_OWORD *)a4 = *(_OWORD *)a4;
  *(_OWORD *)(a4 + 16) = *(_OWORD *)(a4 + 16);
  *(_OWORD *)(a4 + 32) = *(_OWORD *)(a4 + 32);
  *(_OWORD *)(a4 + 48) = *(_OWORD *)(a4 + 48);
  *(_OWORD *)(a4 + 64) = *(_OWORD *)(a4 + 64);
  *(_OWORD *)(a4 + 80) = *(_OWORD *)(a4 + 80);
  *(_OWORD *)(a4 + 96) = *(_OWORD *)(a4 + 96);
  *(_OWORD *)(a4 + 112) = *(_OWORD *)(a4 + 112);
  *(_QWORD *)(a4 + 128) = *(_QWORD *)(a4 + 128);
  *(_DWORD *)(a4 + 136) = *(_DWORD *)(a4 + 136);
  v12[0] = *(_OWORD *)a4;
  v12[1] = *(_OWORD *)(a4 + 16);
  v12[2] = *(_OWORD *)(a4 + 32);
  v12[3] = *(_OWORD *)(a4 + 48);
  v12[4] = *(_OWORD *)(a4 + 64);
  v12[5] = *(_OWORD *)(a4 + 80);
  v12[6] = *(_OWORD *)(a4 + 96);
  v12[7] = *(_OWORD *)(a4 + 112);
  *(_QWORD *)&v12[8] = *(_QWORD *)(a4 + 128);
  DWORD2(v12[8]) = *(_DWORD *)(a4 + 136);
  if ( LODWORD(v12[0]) == 140 )
  {
    v10 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _OWORD *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
            a1,
            a2,
            a3,
            v12,
            a5);
    *(_OWORD *)a4 = v12[0];
    *(_OWORD *)(a4 + 16) = v12[1];
    *(_OWORD *)(a4 + 32) = v12[2];
    *(_OWORD *)(a4 + 48) = v12[3];
    *(_OWORD *)(a4 + 64) = v12[4];
    *(_OWORD *)(a4 + 80) = v12[5];
    *(_OWORD *)(a4 + 96) = v12[6];
    *(_OWORD *)(a4 + 112) = v12[7];
    *(_QWORD *)(a4 + 128) = *(_QWORD *)&v12[8];
    *(_DWORD *)(a4 + 136) = DWORD2(v12[8]);
  }
  else
  {
    UserSetLastError(87LL);
  }
  return v10;
}
