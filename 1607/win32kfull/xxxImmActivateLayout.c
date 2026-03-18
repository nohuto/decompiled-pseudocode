/*
 * XREFs of xxxImmActivateLayout @ 0x1C01354E4
 * Callers:
 *     xxxInternalActivateKeyboardLayout @ 0x1C00E7090 (xxxInternalActivateKeyboardLayout.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01D9FA0 (xxxImmActivateAndUnloadThreadsLayout.c)
 *     xxxImmActivateThreadsLayout @ 0x1C01DA380 (xxxImmActivateThreadsLayout.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 */

void __fastcall xxxImmActivateLayout(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a1 + 392;
  v5 = a2;
  if ( *(_QWORD *)(a1 + 392) != a2 )
  {
    if ( *(_QWORD *)(a1 + 696) )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
      v8 = *(_QWORD *)(a1 + 696);
      v11[0] = *(_QWORD *)(ThreadWin32Thread + 368);
      *(_QWORD *)(ThreadWin32Thread + 368) = v11;
      v11[1] = v8;
      ++*(_DWORD *)(v8 + 8);
      xxxSendMessage(*(struct tagWND **)(a1 + 696), 0x287u, 0x19uLL, *(_QWORD *)(v5 + 40));
      ThreadUnlock1(v10, v9);
      a2 = v5;
    }
    HMAssignmentLock(v4, a2);
  }
}
