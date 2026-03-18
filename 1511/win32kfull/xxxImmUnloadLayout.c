/*
 * XREFs of xxxImmUnloadLayout @ 0x1C01E3D88
 * Callers:
 *     xxxImmUnloadThreadsLayout @ 0x1C0098BF4 (xxxImmUnloadThreadsLayout.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01E36E0 (xxxImmActivateAndUnloadThreadsLayout.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0058D90 (xxxSendTransformableMessageTimeout.c)
 */

void __fastcall xxxImmUnloadLayout(__int64 a1, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v9[5]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v10; // [rsp+80h] [rbp+8h] BYREF

  v3 = a2;
  if ( *(_QWORD *)(a1 + 696) )
  {
    v4 = *(_QWORD *)(a1 + 392);
    if ( v4 )
    {
      if ( a2 != 1 || (*gpsi & 4) != 0 || (*(_WORD *)(v4 + 42) & 0xF000) == 0xE000 )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v6 = *(_QWORD *)(a1 + 696);
        v9[0] = *(_QWORD *)(ThreadWin32Thread + 368);
        *(_QWORD *)(ThreadWin32Thread + 368) = v9;
        v9[1] = v6;
        ++*(_DWORD *)(v6 + 8);
        xxxSendTransformableMessageTimeout(
          *(struct tagWND **)(a1 + 696),
          647LL,
          0x11uLL,
          v3,
          8,
          gdwHungAppTimeout,
          &v10,
          1,
          0);
        ThreadUnlock1(v8, v7);
      }
    }
  }
}
