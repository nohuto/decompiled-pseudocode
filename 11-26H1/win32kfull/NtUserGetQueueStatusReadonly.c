/*
 * XREFs of NtUserGetQueueStatusReadonly @ 0x14019B9C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserGetQueueStatusReadonly(__int64 a1)
{
  unsigned __int16 v1; // bx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v3; // r8

  v1 = a1;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  v3 = 0LL;
  if ( CurrentThreadWin32Thread )
    v3 = *CurrentThreadWin32Thread;
  return (v1 | (v1 << 16)) & ((unsigned __int16)*(_DWORD *)(*(_QWORD *)(v3 + 480) + 4LL) | ((unsigned __int16)*(_DWORD *)(*(_QWORD *)(v3 + 480) + 8LL) << 16));
}
