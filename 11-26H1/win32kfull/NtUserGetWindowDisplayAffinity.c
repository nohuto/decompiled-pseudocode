/*
 * XREFs of NtUserGetWindowDisplayAffinity @ 0x140262000
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     GetDisplayAffinity @ 0x1401FF1C0 (GetDisplayAffinity.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserGetWindowDisplayAffinity(__int64 a1, __int64 a2)
{
  int v4; // esi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r9
  unsigned int v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  v9 = 0;
  EnterLeaveCritShared::EnterLeaveCritShared(&v10, 1LL);
  v5 = ValidateHwnd(a1);
  if ( v5 )
  {
    if ( IsTopLevelWindow(v5) )
    {
      GetDisplayAffinity(v7, &v9);
      v4 = 1;
      RtlWriteULongToUser(a2, v9);
    }
    else
    {
      UserSetLastError(87);
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
