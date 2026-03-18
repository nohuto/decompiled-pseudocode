/*
 * XREFs of ?JournalTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E9BF0
 * Callers:
 *     <none>
 * Callees:
 *     WakeSomeone @ 0x1C0090208 (WakeSomeone.c)
 */

void __fastcall JournalTimer(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(a4 + 104);
  if ( v4 )
    WakeSomeone(*(_QWORD **)(v4 + 392), 0LL, *(_DWORD *)(*(_QWORD *)(v4 + 392) + 344LL), 0LL);
}
