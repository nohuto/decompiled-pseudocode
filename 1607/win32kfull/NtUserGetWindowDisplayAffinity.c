/*
 * XREFs of NtUserGetWindowDisplayAffinity @ 0x1C0215680
 * Callers:
 *     <none>
 * Callees:
 *     _IsTopLevelWindow @ 0x1C00725F0 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     GetDisplayAffinity @ 0x1C0231440 (GetDisplayAffinity.c)
 */

__int64 __fastcall NtUserGetWindowDisplayAffinity(__int64 a1, _DWORD *a2)
{
  int v4; // edi
  __int64 v5; // rax
  _DWORD *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r9
  int v10; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v10 = 0;
  EnterSharedCrit(0LL, 1LL);
  v5 = ValidateHwnd(a1);
  if ( v5 )
  {
    if ( (unsigned int)IsTopLevelWindow(v5) )
    {
      GetDisplayAffinity(v8, &v10);
      v4 = 1;
      v6 = a2;
      if ( (unsigned __int64)a2 >= W32UserProbeAddress )
        v6 = (_DWORD *)W32UserProbeAddress;
      *v6 = *v6;
      *a2 = v10;
    }
    else
    {
      UserSetLastError(87LL);
    }
  }
  UserSessionSwitchLeaveCrit(v7, v6);
  return v4;
}
