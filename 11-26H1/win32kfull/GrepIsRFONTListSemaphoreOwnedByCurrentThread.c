/*
 * XREFs of GrepIsRFONTListSemaphoreOwnedByCurrentThread @ 0x1403282F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GrepIsLockOwnedExclusiveByCurrentThread@@YA_NQEAUHSEMAPHORE__@@@Z @ 0x1400D5794 (-GrepIsLockOwnedExclusiveByCurrentThread@@YA_NQEAUHSEMAPHORE__@@@Z.c)
 */

_BOOL8 __fastcall GrepIsRFONTListSemaphoreOwnedByCurrentThread(int a1, __int64 a2)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState(a1, a2);
  return GrepIsLockOwnedExclusiveByCurrentThread(*(struct _ERESOURCE **)(*(_QWORD *)(SessionState + 96) + 20328LL));
}
