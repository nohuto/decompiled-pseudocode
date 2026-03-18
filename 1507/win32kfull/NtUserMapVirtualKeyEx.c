/*
 * XREFs of NtUserMapVirtualKeyEx @ 0x1C00D70D0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     InternalMapVirtualKeyEx @ 0x1C00D715C (InternalMapVirtualKeyEx.c)
 *     HKLtoPKL @ 0x1C00DAB90 (HKLtoPKL.c)
 */

__int64 __fastcall NtUserMapVirtualKeyEx(unsigned int a1, unsigned int a2, __int64 a3, int a4)
{
  unsigned int v8; // edi
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax

  EnterSharedCrit(1LL);
  v8 = 0;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a4 )
    v13 = HKLtoPKL(ThreadWin32Thread, a3, v12);
  else
    v13 = *(_QWORD *)(ThreadWin32Thread + 400);
  if ( v13 )
    v8 = InternalMapVirtualKeyEx(a1, a2, *(_QWORD *)(*(_QWORD *)(v13 + 48) + 32LL));
  UserSessionSwitchLeaveCrit(v11, v10);
  return v8;
}
