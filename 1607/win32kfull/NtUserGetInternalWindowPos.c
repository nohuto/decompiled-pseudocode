/*
 * XREFs of NtUserGetInternalWindowPos @ 0x1C0213BB0
 * Callers:
 *     <none>
 * Callees:
 *     _GetWindowPlacement @ 0x1C00AF118 (_GetWindowPlacement.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall NtUserGetInternalWindowPos(__int64 a1, _OWORD *a2, _QWORD *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r9
  unsigned int v9; // ebx
  _OWORD *v10; // rax
  _QWORD *v11; // rdx
  _DWORD v13[12]; // [rsp+38h] [rbp-50h] BYREF

  memset(v13, 0, 0x2CuLL);
  EnterSharedCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  if ( v8 )
  {
    if ( a2 )
    {
      v10 = a2;
      if ( (unsigned __int64)a2 >= W32UserProbeAddress )
        v10 = (_OWORD *)W32UserProbeAddress;
      *v10 = *v10;
    }
    if ( a3 )
    {
      v11 = a3;
      if ( (unsigned __int64)a3 >= W32UserProbeAddress )
        v11 = (_QWORD *)W32UserProbeAddress;
      *v11 = *v11;
    }
    v13[0] = 44;
    GetWindowPlacement(v8, (__int64)v13, 0);
    v9 = v13[2];
    if ( a2 )
      *a2 = *(_OWORD *)&v13[7];
    if ( a3 )
      *a3 = *(_QWORD *)&v13[3];
  }
  else
  {
    v9 = 0;
  }
  UserSessionSwitchLeaveCrit(v7, v6);
  return v9;
}
