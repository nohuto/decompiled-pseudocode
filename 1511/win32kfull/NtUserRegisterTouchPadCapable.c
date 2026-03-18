/*
 * XREFs of NtUserRegisterTouchPadCapable @ 0x1C021F270
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserRegisterTouchPadCapable(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v5);
  if ( a1 )
    *(_DWORD *)(gptiCurrent + 1072LL) |= 0x10000u;
  else
    *(_DWORD *)(gptiCurrent + 1072LL) &= ~0x10000u;
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v5);
  UserSessionSwitchLeaveCrit(v3, v2);
  return 1LL;
}
