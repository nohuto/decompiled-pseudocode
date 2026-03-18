/*
 * XREFs of MiOutSwapKernelStackPage @ 0x140004EB0
 * Callers:
 *     MiOutPageSingleKernelStack @ 0x1400052A8 (MiOutPageSingleKernelStack.c)
 * Callees:
 *     MiOutSwapWorkingSetCallback @ 0x14001F030 (MiOutSwapWorkingSetCallback.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall MiOutSwapKernelStackPage(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int128 v5; // xmm0
  __int64 result; // rax
  _OWORD v7[9]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = *(_QWORD *)(a1 + 56);
  if ( !v2 )
    return 3221225643LL;
  if ( *(_QWORD *)(v2 + 8) <= *(_QWORD *)(v2 + 16) || !*(_DWORD *)(a1 + 72) )
    return 3221225993LL;
  memset(v7, 0, sizeof(v7));
  v5 = *(_OWORD *)(a1 + 64);
  *(_QWORD *)&v7[0] = v2;
  *(_QWORD *)&v7[1] = &dword_1402FFA80;
  BYTE8(v7[1]) = 17;
  v7[2] = v5;
  ((void (__fastcall *)(_OWORD *, __int64, __int64, _QWORD))MiOutSwapWorkingSetCallback)(v7, a2, a2, 0LL);
  result = 0LL;
  *(_OWORD *)(a1 + 64) = v7[2];
  return result;
}
