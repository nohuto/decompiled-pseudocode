/*
 * XREFs of NtUserGetDesktopID @ 0x1401A1D70
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1401A20C0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     RtlCopyToUser @ 0x1403E20B8 (RtlCopyToUser.c)
 */

__int64 __fastcall NtUserGetDesktopID(int a1, void *a2)
{
  int v4; // ebx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // edi
  int v9; // edi
  __int64 Src; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  Src = 0LL;
  v5 = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(&v12, 1LL);
  if ( (unsigned int)IsCurrentProcessDwm() )
  {
    v8 = a1 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 == 2 )
          v5 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 62968);
      }
      else
      {
        v5 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 62832);
      }
    }
    else
    {
      v5 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 19176);
    }
    if ( v5 )
    {
      Src = ***(_QWORD ***)(v5 + 8);
      RtlCopyToUser(a2, &Src, 8uLL);
      v4 = 1;
    }
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v7);
  return v4;
}
