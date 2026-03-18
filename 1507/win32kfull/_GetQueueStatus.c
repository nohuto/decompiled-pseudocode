/*
 * XREFs of _GetQueueStatus @ 0x1C00C6070
 * Callers:
 *     NtUserGetThreadState @ 0x1C00E29E0 (NtUserGetThreadState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetQueueStatus(__int16 a1)
{
  __int64 v2; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v4; // rcx
  int v5; // edi
  int v6; // r8d

  v2 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v2 = *ThreadWin32Thread;
  v4 = *(_QWORD *)(v2 + 408);
  v5 = a1 & 0x5DFF;
  v6 = *(unsigned __int16 *)(v4 + 4);
  *(_WORD *)(v4 + 4) = v6 & ~(_WORD)v5;
  return v5 & v6 | ((unsigned __int16)(v5 & (*(_WORD *)(*(_QWORD *)(v2 + 408) + 6LL) | *(_WORD *)(*(_QWORD *)(v2 + 408)
                                                                                                + 8LL))) << 16);
}
