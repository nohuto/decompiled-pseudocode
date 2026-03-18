/*
 * XREFs of NtUserCallMsgFilter @ 0x140020480
 * Callers:
 *     <none>
 * Callees:
 *     xxxCallMsgFilter @ 0x14002004C (xxxCallMsgFilter.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 */

__int64 __fastcall NtUserCallMsgFilter(__int128 *a1, int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v7; // rcx
  __int128 v8; // [rsp+40h] [rbp-38h] BYREF
  __int128 v9; // [rsp+50h] [rbp-28h]
  __int128 v10; // [rsp+60h] [rbp-18h]
  __int64 v12; // [rsp+90h] [rbp+18h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(&v12, 1LL);
  ProbeForWrite(a1, 0x30uLL, 1u);
  v8 = *a1;
  v9 = a1[1];
  v10 = a1[2];
  if ( (DWORD2(v8) & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL);
    UserSessionSwitchLeaveCrit(v7);
    return 0LL;
  }
  else
  {
    v4 = (int)xxxCallMsgFilter((__int64)&v8, a2);
    *a1 = v8;
    a1[1] = v9;
    a1[2] = v10;
    UserSessionSwitchLeaveCrit(v5);
    return v4;
  }
}
