/*
 * XREFs of xxxImmActivateLayout @ 0x1C01140F4
 * Callers:
 *     xxxInternalActivateKeyboardLayout @ 0x1C0098598 (xxxInternalActivateKeyboardLayout.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01E36E0 (xxxImmActivateAndUnloadThreadsLayout.c)
 *     xxxImmActivateThreadsLayout @ 0x1C01E3AC0 (xxxImmActivateThreadsLayout.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
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

  v2 = a1 + 392;
  v3 = a2;
  if ( *(_QWORD *)(a1 + 392) != a2 )
  {
    if ( *(_QWORD *)(a1 + 696) )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v6 = *(_QWORD *)(a1 + 696);
      v9[0] = *(_QWORD *)(ThreadWin32Thread + 368);
      *(_QWORD *)(ThreadWin32Thread + 368) = v9;
      v9[1] = v6;
      ++*(_DWORD *)(v6 + 8);
      xxxSendMessage(*(struct tagWND **)(a1 + 696), 0x287u, 0x19uLL, *(_QWORD *)(v3 + 40));
      ThreadUnlock1(v8, v7);
      a2 = v3;
    }
    HMAssignmentLock(v2, a2);
  }
}
