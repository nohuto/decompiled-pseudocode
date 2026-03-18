/*
 * XREFs of _GetQueueStatus @ 0x1C005C0D0
 * Callers:
 *     NtUserGetThreadState @ 0x1C0101720 (NtUserGetThreadState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetQueueStatus(__int16 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rcx
  int v8; // edi
  int v9; // r8d

  v5 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), a2, a3, a4);
  if ( ThreadWin32Thread )
    v5 = *ThreadWin32Thread;
  v7 = *(_QWORD *)(v5 + 400);
  v8 = a1 & 0x5DFF;
  v9 = *(unsigned __int16 *)(v7 + 4);
  *(_WORD *)(v7 + 4) = v9 & ~(_WORD)v8;
  return v8 & v9 | ((unsigned __int16)(v8 & (*(_WORD *)(*(_QWORD *)(v5 + 400) + 6LL) | *(_WORD *)(*(_QWORD *)(v5 + 400)
                                                                                                + 8LL))) << 16);
}
