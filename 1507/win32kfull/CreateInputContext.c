/*
 * XREFs of CreateInputContext @ 0x1C00E4BA0
 * Callers:
 *     xxxCreateDefaultImeWindow @ 0x1C0052518 (xxxCreateDefaultImeWindow.c)
 *     NtUserCreateInputContext @ 0x1C0218940 (NtUserCreateInputContext.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall CreateInputContext(__int64 a1)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v3; // rdi
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rbx

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v3 = ThreadWin32Thread;
  if ( (*(_DWORD *)(ThreadWin32Thread + 448) & 0x2000000) != 0 )
    return 0LL;
  v4 = gpsi;
  if ( (*gpsi & 4) == 0 || a1 && !*(_QWORD *)(ThreadWin32Thread + 712) )
    return 0LL;
  v5 = *(_QWORD *)(ThreadWin32Thread + 416);
  if ( !v5 )
    return 0LL;
  LOBYTE(v4) = 17;
  v6 = HMAllocObject(ThreadWin32Thread, v5, v4, 64LL);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  if ( a1 )
  {
    *(_QWORD *)(v6 + 40) = *(_QWORD *)(*(_QWORD *)(v3 + 712) + 40LL);
    *(_QWORD *)(*(_QWORD *)(v3 + 712) + 40LL) = v6;
  }
  else
  {
    HMAssignmentLock(v3 + 712, v6);
    *(_QWORD *)(v7 + 40) = 0LL;
  }
  *(_QWORD *)(v7 + 48) = a1;
  return v7;
}
