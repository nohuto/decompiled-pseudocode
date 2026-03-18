/*
 * XREFs of UserIsCurrentThreadDesktopComposed @ 0x1401B5F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UserIsCurrentThreadDesktopComposed(__int64 a1)
{
  __int64 *CurrentThreadWin32Thread; // rcx
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx

  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  result = 0LL;
  if ( CurrentThreadWin32Thread )
    v3 = *CurrentThreadWin32Thread;
  else
    v3 = 0LL;
  v4 = *(_QWORD *)(v3 + 488);
  if ( v4 )
    return *(_DWORD *)(**(_QWORD **)(v4 + 8) + 64LL) & 1;
  return result;
}
