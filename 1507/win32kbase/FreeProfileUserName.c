/*
 * XREFs of FreeProfileUserName @ 0x1C0017880
 * Callers:
 *     NtUserSetSysColors @ 0x1C0017420 (NtUserSetSysColors.c)
 *     InitUserScreen @ 0x1C007D934 (InitUserScreen.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock_0 @ 0x1C0001D68 (PopAndFreeAlwaysW32ThreadLock_0.c)
 */

__int64 __fastcall FreeProfileUserName(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return PopAndFreeAlwaysW32ThreadLock_0();
  return result;
}
