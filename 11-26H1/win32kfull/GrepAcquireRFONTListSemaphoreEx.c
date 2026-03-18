/*
 * XREFs of GrepAcquireRFONTListSemaphoreEx @ 0x1400F5340
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreAcquireSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400F651C (--$GreAcquireSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall GrepAcquireRFONTListSemaphoreEx(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState(a1, a2, a3);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"RFONTList", *(_QWORD *)(*(_QWORD *)(SessionState + 96) + 20328LL), 0LL);
  return GreAcquireSemaphoreCommon<18,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal);
}
