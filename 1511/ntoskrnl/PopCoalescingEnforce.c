/*
 * XREFs of PopCoalescingEnforce @ 0x1404F715C
 * Callers:
 *     PopEnforceResiliencyScenarios @ 0x140119F5C (PopEnforceResiliencyScenarios.c)
 * Callees:
 *     <none>
 */

char __fastcall PopCoalescingEnforce(__int64 a1)
{
  char result; // al

  result = PopCurrentCoalescingSpindownTimeout != 0;
  if ( (_DWORD)a1 )
  {
    if ( !PopCurrentCoalescingSpindownTimeout )
    {
      PopEnforcedCoalescingSpindownTimeout = a1;
      LOBYTE(a1) = 1;
      PopCoalescingEnforced = 1;
      return PopCoalescingActivate(a1);
    }
  }
  else if ( PopCurrentCoalescingSpindownTimeout && PopCoalescingEnforced )
  {
    PopEnforcedCoalescingSpindownTimeout = 0;
    a1 = 0LL;
    PopCoalescingEnforced = 0;
    return PopCoalescingActivate(a1);
  }
  return result;
}
