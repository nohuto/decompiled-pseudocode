/*
 * XREFs of NtUserHardErrorControl @ 0x140244C50
 * Callers:
 *     <none>
 * Callees:
 *     xxxHardErrorControl @ 0x140244D3C (xxxHardErrorControl.c)
 */

__int64 __fastcall NtUserHardErrorControl(unsigned int a1, __int64 a2, __int128 *a3)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int128 *v8; // rcx
  unsigned int v9; // ebx
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF

  v11 = 0LL;
  EnterCrit(0LL, 0LL);
  v5 = *(_QWORD *)(W32GetUserGdiSessionState(v4) + 40);
  if ( PsGetCurrentProcess(v6) == v5 )
  {
    if ( a3 )
    {
      ProbeForWrite(a3, 0x10uLL, 4u);
      v11 = *a3;
    }
    v9 = xxxHardErrorControl(a1, v7, (unsigned __int64)&v11 & -(__int64)(a3 != 0LL));
    v8 = a3;
    if ( a3 )
    {
      v8 = a3;
      *a3 = v11;
    }
  }
  else
  {
    v9 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v8);
  return v9;
}
