/*
 * XREFs of NtUserGetOwnerTransformedMonitorRect @ 0x1C0121820
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _GetOwnerTransformedMonitorRect @ 0x1C01218F4 (_GetOwnerTransformedMonitorRect.c)
 */

__int64 __fastcall NtUserGetOwnerTransformedMonitorRect(__int64 a1, __int64 a2, unsigned int a3, _OWORD *a4)
{
  __int64 v8; // rsi
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _BYTE v14[16]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v15; // [rsp+40h] [rbp-18h] BYREF

  v15 = 0uLL;
  EnterCrit(1LL);
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
      UserSetLastError(87);
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v14);
  UserSessionSwitchLeaveCrit(v12, v11);
  return v9;
}
