/*
 * XREFs of ?vUnlock@?$SEMOBJ@$04@@QEAAXXZ @ 0x140198648
 * Callers:
 *     ?vDelayedReclaim@RFONTOBJ@@QEAAXXZ @ 0x1400C5A78 (-vDelayedReclaim@RFONTOBJ@@QEAAXXZ.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 */

void __fastcall SEMOBJ<5>::vUnlock(HSEMAPHORE *a1)
{
  HSEMAPHORE v1; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  _QWORD *v9; // rdx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  v1 = *a1;
  if ( *a1 )
  {
    EtwTraceGreLockReleaseSemaphore(L"RFONT_Cache", *a1);
    CurrentThread = KeGetCurrentThread();
    v4 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(v5),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v4 = *ThreadWin32Thread;
    }
    v7 = v4 + 8;
    v8 = -v4;
    v9 = (_QWORD *)(v7 & -(__int64)(v8 != 0));
    if ( v9 )
    {
      if ( (*(_BYTE *)((v7 & -(__int64)(v8 != 0)) + 0xD))-- == 1 )
        *v9 &= ~0x20uLL;
      if ( !*v9 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v1);
    *a1 = 0LL;
  }
}
