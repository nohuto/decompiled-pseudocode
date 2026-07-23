/*
 * XREFs of MiOutSwapKernelStackPage @ 0x1400B5674
 * Callers:
 *     MiOutPageSingleKernelStack @ 0x1400757B4 (MiOutPageSingleKernelStack.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MiOutSwapWorkingSetCallback @ 0x1400B7C60 (MiOutSwapWorkingSetCallback.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall MiOutSwapKernelStackPage(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char *AnyMultiplexedVm; // rax
  __int128 v6; // xmm0
  __int64 result; // rax
  _OWORD v8[9]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = *(_QWORD *)(a1 + 56);
  if ( !v2 )
    return 3221225643LL;
  if ( *(_QWORD *)(v2 + 8) <= *(_QWORD *)(v2 + 16) || !*(_DWORD *)(a1 + 72) )
    return 3221225993LL;
  memset(v8, 0, sizeof(v8));
  *(_QWORD *)&v8[0] = v2;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v6 = *(_OWORD *)(a1 + 64);
  *(_QWORD *)&v8[1] = AnyMultiplexedVm;
  BYTE8(v8[1]) = 17;
  v8[2] = v6;
  MiOutSwapWorkingSetCallback(v8, a2, a2, 0LL);
  result = 0LL;
  *(_OWORD *)(a1 + 64) = v8[2];
  return result;
}
