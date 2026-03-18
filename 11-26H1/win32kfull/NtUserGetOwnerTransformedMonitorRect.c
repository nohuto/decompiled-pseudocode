/*
 * XREFs of NtUserGetOwnerTransformedMonitorRect @ 0x1402B41E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140021034 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??$Write@UtagRECT@@@?$UserModePointer@UtagRECT@@@@QEAAXAEBUtagRECT@@@Z @ 0x1402574C8 (--$Write@UtagRECT@@@-$UserModePointer@UtagRECT@@@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?_GetOwnerTransformedMonitorRect@@YAXPEAUtagWND@@PEAUtagMONITOR@@HPEAUtagRECT@@@Z @ 0x1402E1378 (-_GetOwnerTransformedMonitorRect@@YAXPEAUtagWND@@PEAUtagMONITOR@@HPEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 NtUserGetOwnerTransformedMonitorRect(__int64 a1, __int64 a2, int a3, ...)
{
  void *v3; // rbx
  struct tagWND *v7; // rsi
  int v8; // edi
  struct tagMONITOR *v9; // rax
  __int64 v10; // rcx
  _QWORD v12[2]; // [rsp+30h] [rbp-58h] BYREF
  struct tagRECT v13; // [rsp+40h] [rbp-48h] BYREF
  void *v14; // [rsp+A8h] [rbp+20h] BYREF
  va_list va; // [rsp+A8h] [rbp+20h]
  va_list va1; // [rsp+B0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v14 = va_arg(va1, void *);
  v3 = v14;
  v13 = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(v12, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v12);
  v7 = (struct tagWND *)ValidateHwnd(a1);
  v8 = 0;
  if ( v7 )
  {
    v9 = (struct tagMONITOR *)ValidateHmonitor(a2);
    if ( v9 && v3 )
    {
      _GetOwnerTransformedMonitorRect(v7, v9, a3, &v13);
      UserModePointer<tagRECT>::Write<tagRECT>((void **)va, &v13);
      v8 = 1;
    }
    else
    {
      UserSetLastError(87);
    }
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v12);
  UserSessionSwitchLeaveCrit(v10);
  return v8;
}
