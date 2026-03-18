/*
 * XREFs of CreateInputContext @ 0x1C010AC80
 * Callers:
 *     xxxCreateDefaultImeWindow @ 0x1C009D254 (xxxCreateDefaultImeWindow.c)
 *     NtUserCreateInputContext @ 0x1C0211460 (NtUserCreateInputContext.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall CreateInputContext(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rbx

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v6 = ThreadWin32Thread;
  if ( (*(_DWORD *)(ThreadWin32Thread + 440) & 0x2000000) != 0 )
    return 0LL;
  v7 = gpsi;
  if ( (*gpsi & 4) == 0 || a1 && !*(_QWORD *)(ThreadWin32Thread + 704) )
    return 0LL;
  v8 = *(_QWORD *)(ThreadWin32Thread + 408);
  if ( !v8 )
    return 0LL;
  LOBYTE(v7) = 17;
  v9 = HMAllocObject(ThreadWin32Thread, v8, v7);
  v10 = v9;
  if ( !v9 )
    return 0LL;
  if ( a1 )
  {
    *(_QWORD *)(v9 + 40) = *(_QWORD *)(*(_QWORD *)(v6 + 704) + 40LL);
    *(_QWORD *)(*(_QWORD *)(v6 + 704) + 40LL) = v9;
  }
  else
  {
    HMAssignmentLock(v6 + 704, v9);
    *(_QWORD *)(v10 + 40) = 0LL;
  }
  *(_QWORD *)(v10 + 48) = a1;
  return v10;
}
