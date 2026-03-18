/*
 * XREFs of NtUserIsTouchWindow @ 0x1402B78F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserIsTouchWindow(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 UserSessionState; // rax
  int Prop; // eax
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v10, 1LL);
  v6 = ValidateHwnd(a1);
  if ( v6 )
  {
    UserSessionState = W32GetUserSessionState(v5, v4);
    Prop = GetProp(v6, *(unsigned __int16 *)(UserSessionState + 41386), 1u);
    LODWORD(v6) = (Prop & 0x10000) != 0;
    if ( (Prop & 0x10000) != 0 )
    {
      if ( a2 )
        RtlWriteULongToUser(a2, Prop & 0xFFFEFFFF);
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return (int)v6;
}
