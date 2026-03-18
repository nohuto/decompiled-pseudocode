/*
 * XREFs of FreeProfileUserName @ 0x1C005CEF0
 * Callers:
 *     InitUserScreen @ 0x1C0057224 (InitUserScreen.c)
 *     NtUserSetSysColors @ 0x1C005CBB0 (NtUserSetSysColors.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock_0 @ 0x1C0001F00 (PopAndFreeAlwaysW32ThreadLock_0.c)
 */

__int64 __fastcall FreeProfileUserName(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return PopAndFreeAlwaysW32ThreadLock_0();
  return result;
}
