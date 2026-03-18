/*
 * XREFs of NtUserGetAtomName @ 0x1401E06F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     RtlReadULong64FromUser @ 0x1403E21C8 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 */

__int64 __fastcall NtUserGetAtomName(unsigned __int16 a1, __int64 a2)
{
  unsigned int AtomName; // ebx
  __int64 v5; // rcx
  int ULongFromUser; // [rsp+30h] [rbp-28h]
  volatile void *ULong64FromUser; // [rsp+38h] [rbp-20h]
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v9, 1LL);
  ULongFromUser = RtlReadULongFromUser(a2);
  ULong64FromUser = (volatile void *)RtlReadULong64FromUser(a2 + 8);
  ProbeForWrite(ULong64FromUser, HIWORD(ULongFromUser), 2u);
  AtomName = UserGetAtomName(a1, ULong64FromUser, HIWORD(ULongFromUser) >> 1);
  UserSessionSwitchLeaveCrit(v5);
  return AtomName;
}
