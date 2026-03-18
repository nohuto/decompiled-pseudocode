/*
 * XREFs of NtUserBlockInput @ 0x1C0210D60
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _BlockInput @ 0x1C01D2394 (_BlockInput.c)
 */

__int64 __fastcall NtUserBlockInput(unsigned int a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  char v6; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v6);
  v2 = BlockInput(a1);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v6);
  UserSessionSwitchLeaveCrit(v4, v3);
  return v2;
}
