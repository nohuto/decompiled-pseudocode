/*
 * XREFs of NtUserfnINLPHELPINFOSTRUCT @ 0x1402C14D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnINLPHELPINFOSTRUCT(__int64 a1, unsigned int a2, __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 UserSessionState; // rax
  __m128i v14; // [rsp+40h] [rbp-38h] BYREF
  __int128 v15; // [rsp+50h] [rbp-28h]
  __int64 v16; // [rsp+60h] [rbp-18h]

  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  PtiCurrent(a1);
  if ( a4 >= MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  v14 = *(__m128i *)a4;
  v15 = *(_OWORD *)(a4 + 16);
  v16 = *(_QWORD *)(a4 + 32);
  if ( _mm_cvtsi128_si32(v14) == 40 )
  {
    UserSessionState = W32GetUserSessionState(MmUserProbeAddress, v10);
    return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __m128i *, __int64))(UserSessionState
                                                                                   + 8LL * ((a6 + 6) & 0x1F)
                                                                                   + 70904))(
             a1,
             a2,
             a3,
             &v14,
             a5);
  }
  else
  {
    v11 = 0LL;
    UserSetLastError(87);
  }
  return v11;
}
