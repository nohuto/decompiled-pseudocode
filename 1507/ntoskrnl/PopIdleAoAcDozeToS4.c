/*
 * XREFs of PopIdleAoAcDozeToS4 @ 0x1406BCE08
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x1403EB86C (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 *     PopIdleCheckForUserInput @ 0x1404E420C (PopIdleCheckForUserInput.c)
 *     PopExecutePowerAction @ 0x1405654E8 (PopExecutePowerAction.c)
 *     PopTraceSystemIdleS0LowPowerDoze @ 0x1406BA730 (PopTraceSystemIdleS0LowPowerDoze.c)
 */

__int64 PopIdleAoAcDozeToS4()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  char v2; // bl
  __int64 v4; // [rsp+30h] [rbp-38h] BYREF
  int v5; // [rsp+38h] [rbp-30h]
  _QWORD v6[5]; // [rsp+40h] [rbp-28h] BYREF

  PopAcquirePolicyLock();
  v2 = PopIdleCheckForUserInput(v1, v0);
  PopTraceSystemIdleS0LowPowerDoze(v2);
  if ( !v2 )
  {
    v6[1] = 0LL;
    v6[2] = 0LL;
    v6[0] = 0x8000000006LL;
    v5 = 0;
    v4 = 0x8000000400000003uLL;
    PopExecutePowerAction((__int64)v6, 0, &v4, 5, 1u);
  }
  return PopReleasePolicyLock();
}
