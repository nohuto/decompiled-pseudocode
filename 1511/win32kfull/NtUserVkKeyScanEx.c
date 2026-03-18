/*
 * XREFs of NtUserVkKeyScanEx @ 0x1C00991B0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     InternalVkKeyScanEx @ 0x1C0099234 (InternalVkKeyScanEx.c)
 *     HKLtoPKL @ 0x1C0099B34 (HKLtoPKL.c)
 */

__int64 __fastcall NtUserVkKeyScanEx(unsigned __int16 a1, __int64 a2, int a3)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int16 v10; // bx

  EnterSharedCrit(0LL, 1LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a3 )
    v9 = HKLtoPKL(ThreadWin32Thread, a2);
  else
    v9 = *(_QWORD *)(ThreadWin32Thread + 392);
  if ( v9 )
    v10 = InternalVkKeyScanEx(a1, *(_QWORD *)(*(_QWORD *)(v9 + 48) + 32LL));
  else
    v10 = -1;
  UserSessionSwitchLeaveCrit(v8, v7);
  return v10;
}
