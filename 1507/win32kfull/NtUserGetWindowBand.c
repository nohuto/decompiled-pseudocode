/*
 * XREFs of NtUserGetWindowBand @ 0x1C00D4FF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetWindowBand(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // edi
  _DWORD *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8

  v4 = 0;
  EnterSharedCrit(1LL);
  v7 = ValidateHwnd(a1);
  if ( v7 )
  {
    if ( a2 )
    {
      v5 = a2;
      if ( (unsigned __int64)a2 >= W32UserProbeAddress )
        v5 = (_DWORD *)W32UserProbeAddress;
      *v5 = *v5;
      *a2 = *(_DWORD *)(v7 + 304);
      v4 = 1;
    }
    else
    {
      UserSetLastError(87);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v4;
}
