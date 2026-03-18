/*
 * XREFs of EditionIsGetKeyStateBlocked @ 0x1401CFAD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EditionIsGetKeyStateBlocked(__int64 a1)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v5; // rdi

  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  v4 = 0;
  if ( CurrentThreadWin32Thread )
    v5 = *CurrentThreadWin32Thread;
  else
    v5 = 0LL;
  LOBYTE(v4) = *(_QWORD *)(v5 + 488) != *(_QWORD *)(W32GetUserSessionState(v3, v2) + 19176);
  return v4;
}
