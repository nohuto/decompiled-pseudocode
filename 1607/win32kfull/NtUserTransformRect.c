/*
 * XREFs of NtUserTransformRect @ 0x1C00FA290
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserTransformRect(_OWORD *a1, unsigned int a2, unsigned int a3)
{
  int v6; // ebx
  unsigned int v7; // esi
  unsigned int v8; // eax
  __int64 v9; // r8
  _OWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD v14[4]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v15; // [rsp+50h] [rbp-38h] BYREF

  v6 = 1;
  EnterCrit(0LL, 1LL);
  v14[0] = 0LL;
  if ( (a2 & 0x7FFFFFEC) == 0
    && (a2 & 0xF0) == 0x10
    && (a2 & 0xF) <= 2
    && (a3 & 0x7FFFFFEC) == 0
    && (a3 & 0xF0) == 0x10
    && (a3 & 0xF) <= 2
    && (v7 = MonitorFlagsFromDpiAwarenessContext(a2), v8 = MonitorFlagsFromDpiAwarenessContext(a3), v9 = v8, v7)
    && v8 )
  {
    v10 = a1;
    if ( (unsigned __int64)a1 >= W32UserProbeAddress )
      v10 = (_OWORD *)W32UserProbeAddress;
    *v10 = *v10;
    v15 = *a1;
    LODWORD(v9) = v9 | 0x100;
    LogicalToPhysicalDPIRect(&v15, &v15, v9, v14);
    PhysicalToLogicalDPIRect(&v15, &v15, v7, v14);
    *a1 = v15;
  }
  else
  {
    v6 = 0;
    UserSetLastError(87LL);
  }
  UserSessionSwitchLeaveCrit(v12, v11);
  return v6;
}
