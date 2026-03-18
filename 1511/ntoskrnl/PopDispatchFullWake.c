/*
 * XREFs of PopDispatchFullWake @ 0x1404F5684
 * Callers:
 *     <none>
 * Callees:
 *     KeAreApcsDisabled @ 0x140099410 (KeAreApcsDisabled.c)
 *     PopEventCalloutDispatch @ 0x14011B894 (PopEventCalloutDispatch.c)
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
 *     PopNotifyConsoleUserPresent @ 0x1404C5578 (PopNotifyConsoleUserPresent.c)
 *     PopInitSIdle @ 0x14050A84C (PopInitSIdle.c)
 */

BOOLEAN __fastcall PopDispatchFullWake(__int64 a1, char a2)
{
  BOOLEAN result; // al

  if ( byte_1402DE081 != 3 )
  {
    PopNotifyConsoleUserPresent(0, a2, 9);
    if ( (PopFullWake & 3) == 2 )
    {
      _InterlockedOr(&PopFullWake, 1u);
      PopEventCalloutDispatch(0, 0LL);
      PopAcquirePolicyLock();
      PopInitSIdle();
      PopReleasePolicyLock();
    }
  }
  result = KeAreApcsDisabled();
  if ( result )
    __fastfail(0x20u);
  return result;
}
