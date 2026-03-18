/*
 * XREFs of _GetProcessDefaultLayout @ 0x1C0111580
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 */

__int64 __fastcall GetProcessDefaultLayout(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 v6; // rcx
  _DWORD *v7; // rdx

  v5 = 0;
  if ( PsGetCurrentProcess(a1, a2, a3, a4) == gpepCSRSS )
  {
    UserSetLastError(12);
  }
  else
  {
    v7 = a1;
    if ( (unsigned __int64)a1 >= W32UserProbeAddress )
      v7 = (_DWORD *)W32UserProbeAddress;
    *v7 = *v7;
    *a1 = *(_DWORD *)(PsGetCurrentProcessWin32Process(v6) + 780);
    return 1;
  }
  return v5;
}
