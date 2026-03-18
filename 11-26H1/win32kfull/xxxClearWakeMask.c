/*
 * XREFs of xxxClearWakeMask @ 0x140022640
 * Callers:
 *     NtUserClearWakeMask @ 0x1402B02B0 (NtUserClearWakeMask.c)
 * Callees:
 *     ?xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z @ 0x140023380 (-xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z.c)
 */

__int64 __fastcall xxxClearWakeMask(__int64 a1)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v2; // rbx
  __int64 result; // rax

  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    v2 = *CurrentThreadWin32Thread;
  else
    v2 = 0LL;
  _InterlockedExchange(
    (volatile __int32 *)(*(_QWORD *)(v2 + 480) + 20LL),
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  if ( !*(_DWORD *)(v2 + 1304) )
    xxxUpdateInputHangInfo(0LL, 1LL);
  result = 1LL;
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(v2 + 480) + 16LL), 0);
  *(_QWORD *)(v2 + 1360) &= ~0x400uLL;
  return result;
}
