/*
 * XREFs of NtUserVkKeyScanEx @ 0x1C00DA230
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     InternalVkKeyScanEx @ 0x1C00DAA04 (InternalVkKeyScanEx.c)
 *     HKLtoPKL @ 0x1C00DAB90 (HKLtoPKL.c)
 */

__int64 __fastcall NtUserVkKeyScanEx(unsigned __int16 a1, __int64 a2, int a3)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int16 v11; // bx

  EnterSharedCrit(1LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a3 )
    v10 = HKLtoPKL(ThreadWin32Thread, a2, v9);
  else
    v10 = *(_QWORD *)(ThreadWin32Thread + 400);
  if ( v10 )
    v11 = InternalVkKeyScanEx(a1, *(_QWORD *)(*(_QWORD *)(v10 + 48) + 32LL));
  else
    v11 = -1;
  UserSessionSwitchLeaveCrit(v8, v7);
  return v11;
}
