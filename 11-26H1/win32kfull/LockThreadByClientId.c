/*
 * XREFs of LockThreadByClientId @ 0x1401C702C
 * Callers:
 *     ?GetConsoleHostProcess@@YAJKPEAPEAX@Z @ 0x1401C6EF0 (-GetConsoleHostProcess@@YAJKPEAPEAX@Z.c)
 *     xxxConsoleControl @ 0x140278BE4 (xxxConsoleControl.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 */

__int64 __fastcall LockThreadByClientId(void *a1, PETHREAD *a2)
{
  NTSTATUS v3; // esi
  int ThreadSessionId; // ebx
  __int64 v5; // rcx

  v3 = PsLookupThreadByThreadId(a1, a2);
  if ( v3 < 0 )
    return (unsigned int)v3;
  ThreadSessionId = PsGetThreadSessionId(*a2);
  if ( ThreadSessionId == (unsigned int)W32GetCurrentWin32kSessionId(v5) )
    return (unsigned int)v3;
  ObfDereferenceObject(*a2);
  return 3221225473LL;
}
