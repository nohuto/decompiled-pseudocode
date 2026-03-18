/*
 * XREFs of NtUserGetOwnerTransformedMonitorRect @ 0x1C0150A50
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _GetOwnerTransformedMonitorRect @ 0x1C0150B28 (_GetOwnerTransformedMonitorRect.c)
 */

__int64 __fastcall NtUserGetOwnerTransformedMonitorRect(__int64 a1, __int64 a2, unsigned int a3, _OWORD *a4)
{
  __int64 v8; // rsi
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _BYTE v14[16]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v15; // [rsp+40h] [rbp-18h] BYREF

  v15 = 0uLL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v14);
  v8 = ValidateHwnd(a1);
  v9 = 0;
  if ( v8 )
  {
    v10 = ValidateHmonitor(a2);
    if ( v10 && a4 )
    {
      GetOwnerTransformedMonitorRect(v8, v10, a3, &v15);
      if ( (unsigned __int64)a4 >= W32UserProbeAddress )
        a4 = (_OWORD *)W32UserProbeAddress;
      *a4 = v15;
      v9 = 1;
    }
    else
    {
      UserSetLastError(87LL);
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v14);
  UserSessionSwitchLeaveCrit(v12, v11);
  return v9;
}
