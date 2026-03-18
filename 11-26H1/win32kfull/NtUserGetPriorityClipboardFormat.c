/*
 * XREFs of NtUserGetPriorityClipboardFormat @ 0x1401AF1D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     _GetPriorityClipboardFormat @ 0x1401AF280 (_GetPriorityClipboardFormat.c)
 */

__int64 __fastcall NtUserGetPriorityClipboardFormat(volatile void *Address, int a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v7; // rcx
  unsigned int PriorityClipboardFormat; // [rsp+2Ch] [rbp-Ch]
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v2 = a2;
  EnterLeaveCritShared::EnterLeaveCritShared(&v10, 1LL);
  if ( v2 > 0x3FFFFFFFFFFFFFFFLL )
    ExRaiseAccessViolation();
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v5, v4);
  ProbeForRead(Address, 4 * v2, CurrentProcessWow64Process != 0 ? 1 : 4);
  PriorityClipboardFormat = GetPriorityClipboardFormat(Address, (unsigned int)v2);
  UserSessionSwitchLeaveCrit(v7);
  return PriorityClipboardFormat;
}
