/*
 * XREFs of NtUserGetKeyNameText @ 0x1401FF2B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 */

__int64 __fastcall NtUserGetKeyNameText(unsigned int a1, volatile void *a2, unsigned int a3)
{
  unsigned int KeyNameText; // ebx
  __int64 v7; // rcx
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v9, 1LL);
  ProbeForWrite(a2, 2LL * a3, 2u);
  KeyNameText = _GetKeyNameText(a1, a2, a3);
  UserSessionSwitchLeaveCrit(v7);
  return KeyNameText;
}
