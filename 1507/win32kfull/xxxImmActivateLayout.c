/*
 * XREFs of xxxImmActivateLayout @ 0x1C013C648
 * Callers:
 *     xxxInternalActivateKeyboardLayout @ 0x1C013A750 (xxxInternalActivateKeyboardLayout.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01E3250 (xxxImmActivateAndUnloadThreadsLayout.c)
 *     xxxImmActivateThreadsLayout @ 0x1C01E3630 (xxxImmActivateThreadsLayout.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 */

void __fastcall xxxImmActivateLayout(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = a1 + 400;
  v3 = a2;
  if ( *(_QWORD *)(a1 + 400) != a2 )
  {
    if ( *(_QWORD *)(a1 + 704) )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v6 = *(_QWORD *)(a1 + 704);
      v9[0] = *(_QWORD *)(ThreadWin32Thread + 376);
      *(_QWORD *)(ThreadWin32Thread + 376) = v9;
      v9[1] = v6;
      ++*(_DWORD *)(v6 + 8);
      xxxSendMessage(*(struct tagWND **)(a1 + 704), 0x287u, 0x19uLL, *(_QWORD *)(v3 + 40));
      ThreadUnlock1(v8, v7);
      a2 = v3;
    }
    HMAssignmentLock(v2, a2);
  }
}
