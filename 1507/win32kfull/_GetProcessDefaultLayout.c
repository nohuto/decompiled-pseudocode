/*
 * XREFs of _GetProcessDefaultLayout @ 0x1C0123500
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

__int64 __fastcall GetProcessDefaultLayout(_DWORD *a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  _DWORD *v5; // rdx

  v3 = 0;
  if ( PsGetCurrentProcess(a1, a2) == gpepCSRSS )
  {
    UserSetLastError(12);
  }
  else
  {
    v5 = a1;
    if ( (unsigned __int64)a1 >= W32UserProbeAddress )
      v5 = (_DWORD *)W32UserProbeAddress;
    *v5 = *v5;
    *a1 = *(_DWORD *)(PsGetCurrentProcessWin32Process(v4) + 780);
    return 1;
  }
  return v3;
}
