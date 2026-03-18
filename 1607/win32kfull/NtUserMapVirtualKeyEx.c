/*
 * XREFs of NtUserMapVirtualKeyEx @ 0x1C00E8290
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     InternalMapVirtualKeyEx @ 0x1C00E8328 (InternalMapVirtualKeyEx.c)
 *     HKLtoPKL @ 0x1C00E8460 (HKLtoPKL.c)
 */

__int64 __fastcall NtUserMapVirtualKeyEx(unsigned int a1, unsigned int a2, __int64 a3, int a4)
{
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax

  EnterSharedCrit(0LL, 1LL);
  v8 = 0;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v10, v11);
  if ( a4 )
    v15 = HKLtoPKL(ThreadWin32Thread, a3);
  else
    v15 = *(_QWORD *)(ThreadWin32Thread + 392);
  if ( v15 )
    v8 = InternalMapVirtualKeyEx(a1, a2, *(_QWORD *)(*(_QWORD *)(v15 + 48) + 32LL));
  UserSessionSwitchLeaveCrit(v14, v13);
  return v8;
}
