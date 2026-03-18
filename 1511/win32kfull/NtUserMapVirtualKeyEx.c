/*
 * XREFs of NtUserMapVirtualKeyEx @ 0x1C00DB750
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     HKLtoPKL @ 0x1C0099B34 (HKLtoPKL.c)
 *     InternalMapVirtualKeyEx @ 0x1C00DB7DC (InternalMapVirtualKeyEx.c)
 */

__int64 __fastcall NtUserMapVirtualKeyEx(unsigned int a1, unsigned int a2, __int64 a3, int a4)
{
  unsigned int v8; // edi
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax

  EnterSharedCrit(0LL, 1LL);
  v8 = 0;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a4 )
    v12 = HKLtoPKL(ThreadWin32Thread, a3);
  else
    v12 = *(_QWORD *)(ThreadWin32Thread + 392);
  if ( v12 )
    v8 = InternalMapVirtualKeyEx(a1, a2, *(_QWORD *)(*(_QWORD *)(v12 + 48) + 32LL));
  UserSessionSwitchLeaveCrit(v11, v10);
  return v8;
}
