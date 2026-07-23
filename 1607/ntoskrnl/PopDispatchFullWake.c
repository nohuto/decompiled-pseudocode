/*
 * XREFs of PopDispatchFullWake @ 0x140534D40
 * Callers:
 *     <none>
 * Callees:
 *     KeAreApcsDisabled @ 0x140009710 (KeAreApcsDisabled.c)
 *     PopEventCalloutDispatch @ 0x1401321D4 (PopEventCalloutDispatch.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PopNotifyConsoleUserPresent @ 0x1404D25CC (PopNotifyConsoleUserPresent.c)
 *     PopInitSIdle @ 0x140545034 (PopInitSIdle.c)
 */

BOOLEAN __fastcall PopDispatchFullWake(__int64 a1, char a2)
{
  BOOLEAN result; // al

  if ( byte_1403033A1 != 3 )
  {
    PopNotifyConsoleUserPresent(0, a2, 9u);
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
