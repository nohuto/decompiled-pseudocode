/*
 * XREFs of FreeProfileUserName @ 0x1C007A8C0
 * Callers:
 *     InitUserScreen @ 0x1C006A65C (InitUserScreen.c)
 *     NtUserSetSysColors @ 0x1C007A510 (NtUserSetSysColors.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock_0 @ 0x1C0001D88 (PopAndFreeAlwaysW32ThreadLock_0.c)
 */

__int64 __fastcall FreeProfileUserName(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return PopAndFreeAlwaysW32ThreadLock_0();
  return result;
}
