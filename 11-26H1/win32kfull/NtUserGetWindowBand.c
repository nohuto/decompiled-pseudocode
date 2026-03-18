/*
 * XREFs of NtUserGetWindowBand @ 0x1402B52D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserGetWindowBand(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // edi
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v8, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  if ( v4 )
  {
    if ( a2 )
    {
      RtlWriteULongToUser(a2, *(unsigned int *)(*(_QWORD *)(v4 + 40) + 236LL));
      v6 = 1;
    }
    else
    {
      UserSetLastError(87);
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
