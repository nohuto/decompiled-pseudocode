/*
 * XREFs of EditionIsGetAsyncKeyStateBlocked @ 0x14019ABA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EditionIsGetAsyncKeyStateBlocked(__int64 a1)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi

  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  v4 = 0;
  if ( CurrentThreadWin32Thread )
    v5 = *CurrentThreadWin32Thread;
  else
    v5 = 0LL;
  v7 = *(_QWORD *)(W32GetUserSessionState(v3, v2) + 19176);
  if ( *(_QWORD *)(v5 + 488) != v7 )
    return 1LL;
  if ( *(_QWORD *)(W32GetUserSessionState(v7, v6) + 18944) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
    v12 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v11 = -*(_QWORD *)CurrentProcessWin32Process;
      v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v12 = v10 & CurrentProcessWin32Process;
    }
    if ( v12 == *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v11, v10) + 18944) + 456LL) )
      return 0LL;
  }
  LOBYTE(v4) = RtlAreAnyAccessesGranted(*(_DWORD *)(v5 + 928), 0x18u) == 0;
  return v4;
}
